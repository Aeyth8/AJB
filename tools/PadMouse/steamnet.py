# SteamNet: finds and joins AJB games through Steam (lobbies for the list, Steam relay for the traffic).
# The game itself only speaks plain UDP, so each player's copy talks to a local port and this module
# carries the packets over Steam to the host, whose copy listens on 127.0.0.1:1170.
import os, sys, time, ctypes, socket, select
from ctypes import c_void_p, c_uint64, c_int, c_uint32, c_bool, c_char_p, byref
os.environ["SteamAppId"] = os.environ["SteamGameId"] = "480"  # Steam's shared test app (Spacewar)
D = os.path.dirname(os.path.abspath(sys.executable if getattr(sys, "frozen", False) else __file__))
S = ctypes.CDLL(os.path.join(D, "steam_api64.dll"))
TAG, GAMEPORT = "ajbport", 1170

def fn(name, res, *args):
    f = getattr(S, name); f.restype = res; f.argtypes = list(args); return f
InitFlat = fn("SteamAPI_InitFlat", c_int, c_char_p)
RunFrame = fn("SteamAPI_ManualDispatch_RunFrame", None, c_int)
GetPipe = fn("SteamAPI_GetHSteamPipe", c_int)
MDInit = fn("SteamAPI_ManualDispatch_Init", None)
NextCB = fn("SteamAPI_ManualDispatch_GetNextCallback", c_bool, c_int, c_void_p)
FreeCB = fn("SteamAPI_ManualDispatch_FreeLastCallback", None, c_int)
CallResult = fn("SteamAPI_ManualDispatch_GetAPICallResult", c_bool, c_int, c_uint64, c_void_p, c_int, c_int, c_void_p)
MM = fn("SteamAPI_SteamMatchmaking_v009", c_void_p)
FR = fn("SteamAPI_SteamFriends_v017", c_void_p)
US = fn("SteamAPI_SteamUser_v023", c_void_p)
NM = fn("SteamAPI_SteamNetworkingMessages_SteamAPI_v002", c_void_p)
NU = fn("SteamAPI_SteamNetworkingUtils_SteamAPI_v004", c_void_p)
CreateLobby = fn("SteamAPI_ISteamMatchmaking_CreateLobby", c_uint64, c_void_p, c_int, c_int)
LeaveLobby = fn("SteamAPI_ISteamMatchmaking_LeaveLobby", None, c_void_p, c_uint64)
SetLobbyData = fn("SteamAPI_ISteamMatchmaking_SetLobbyData", c_bool, c_void_p, c_uint64, c_char_p, c_char_p)
GetLobbyData = fn("SteamAPI_ISteamMatchmaking_GetLobbyData", c_char_p, c_void_p, c_uint64, c_char_p)
AddFilter = fn("SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter", None, c_void_p, c_char_p, c_char_p, c_int)
AddDistance = fn("SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter", None, c_void_p, c_int)
RequestList = fn("SteamAPI_ISteamMatchmaking_RequestLobbyList", c_uint64, c_void_p)
LobbyByIndex = fn("SteamAPI_ISteamMatchmaking_GetLobbyByIndex", c_uint64, c_void_p, c_int)
PersonaName = fn("SteamAPI_ISteamFriends_GetPersonaName", c_char_p, c_void_p)
HasFriend = fn("SteamAPI_ISteamFriends_HasFriend", c_bool, c_void_p, c_uint64, c_int)
MySteamID =fn("SteamAPI_ISteamUser_GetSteamID", c_uint64, c_void_p)
InitRelay = fn("SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess", None, c_void_p)
IdSet = fn("SteamAPI_SteamNetworkingIdentity_SetSteamID64", None, c_void_p, c_uint64)
IdGet = fn("SteamAPI_SteamNetworkingIdentity_GetSteamID64", c_uint64, c_void_p)
SendTo = fn("SteamAPI_ISteamNetworkingMessages_SendMessageToUser", c_int, c_void_p, c_void_p, c_void_p, c_uint32, c_int, c_int)
Receive = fn("SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel", c_int, c_void_p, c_int, c_void_p, c_int)
Accept = fn("SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser", c_bool, c_void_p, c_void_p)
CloseSession = fn("SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser", c_bool, c_void_p, c_void_p)
Release = fn("SteamAPI_SteamNetworkingMessage_t_Release", None, c_void_p)

class CBMsg(ctypes.Structure):
    _fields_ = [("user", c_int), ("id", c_int), ("param", c_void_p), ("size", c_int)]
class Completed(ctypes.Structure):
    _pack_ = 8; _fields_ = [("call", c_uint64), ("cb", c_int), ("size", c_uint32)]
SEND = 1 | 32   # no Nagle delay, reopen a broken session by itself; unreliable like the game's own UDP

def ident(sid):
    b = ctypes.create_string_buffer(136); IdSet(b, sid); return b

class Steam:
    def __init__(self):
        err = ctypes.create_string_buffer(1024)
        if InitFlat(err) != 0: raise RuntimeError("Steam is not running or not logged in. " + err.value.decode(errors="ignore"))
        MDInit(); self.pipe = GetPipe()
        self.mm, self.fr, self.nm = MM(), FR(), NM(); InitRelay(NU())
        self.me = MySteamID(US()); self.name = PersonaName(self.fr).decode(errors="ignore")
        self.pending, self.results, self.requests, self.ids = {}, {}, [], {}
    def pump(self):
        RunFrame(self.pipe); m = CBMsg()
        while NextCB(self.pipe, byref(m)):
            if m.id == 703:  # an async call finished
                c = ctypes.cast(m.param, ctypes.POINTER(Completed)).contents
                if c.call in self.pending:
                    buf = ctypes.create_string_buffer(c.size); bad = c_bool()
                    if CallResult(self.pipe, c.call, buf, c.size, c.cb, byref(bad)) and not bad.value:
                        self.results[self.pending.pop(c.call)] = buf.raw
            elif m.id == 1251:  # a player is joining our game over Steam
                self.requests.append(IdGet(m.param))
            FreeCB(self.pipe)
    def wait(self, call, key, t=10):
        self.pending[call] = key; end = time.time() + t
        while key not in self.results and time.time() < end: self.pump(); time.sleep(0.02)
        return self.results.pop(key, None)
    def open_lobby(self, info):
        r = self.wait(CreateLobby(self.mm, 2, 16), "lobby")  # public, 16 players
        if not r or int.from_bytes(r[0:4], "little") != 1: return 0
        lob = int.from_bytes(r[8:16], "little")
        SetLobbyData(self.mm, lob, TAG.encode(), b"1")
        self.update_lobby(lob, info); return lob
    def update_lobby(self, lob, info):
        for k, v in info.items(): SetLobbyData(self.mm, lob, k.encode(), str(v).encode())
    def close_lobby(self, lob): LeaveLobby(self.mm, lob)
    def find(self):
        AddFilter(self.mm, TAG.encode(), b"1", 0); AddDistance(self.mm, 3)  # worldwide
        r = self.wait(RequestList(self.mm), "list"); out = []
        for i in range(int.from_bytes(r[0:4], "little") if r else 0):
            lob = LobbyByIndex(self.mm, i)
            g = lambda k: (GetLobbyData(self.mm, lob, k.encode()) or b"").decode(errors="ignore")
            host = int(g("host") or 0)
            if host: out.append({"lobby": lob, "host": host, "name": g("name"), "bots": g("bots"), "players": g("players")})
        return out
    # Channel 0 carries joiner->host packets, channel 1 host->joiner.
    def send(self, sid, data, ch):
        ib = self.ids.get(sid) or self.ids.setdefault(sid, ident(sid))
        SendTo(self.nm, ib, data, len(data), SEND, ch)
    def recv(self, ch):
        arr = (c_void_p * 64)(); n = Receive(self.nm, ch, arr, 64); out = []
        for i in range(n):
            p = arr[i]
            data = ctypes.string_at(c_void_p.from_address(p).value, c_int.from_address(p + 8).value)
            out.append((IdGet(p + 16), data)); Release(p)
        return out
    def accept(self, sid): Accept(self.nm, ident(sid))
    def friend(self, sid): return bool(HasFriend(self.fr, sid, 4))  # 4 = regular Steam friend
    def hangup(self, sid): CloseSession(self.nm, ident(sid))

class HostTunnel:
    # Each remote player gets their own local UDP socket, so the game sees them as separate clients.
    def __init__(self, st): self.st, self.socks, self.seen = st, {}, {}
    def step(self):
        for sid in self.st.requests: self.st.accept(sid)
        self.st.requests.clear()
        for sid, data in self.st.recv(0):
            # The first 2 bytes name the joiner's game socket; a new one (map change reconnect) gets a fresh local socket,
            # so the host never mistakes the reconnect for the connection it just closed.
            key, data = (sid, data[:2]), data[2:]
            s = self.socks.get(key)
            if s is None:
                s = self.socks[key] = socket.socket(socket.AF_INET, socket.SOCK_DGRAM); s.bind(("127.0.0.1", 0)); s.setblocking(False)
            s.sendto(data, ("127.0.0.1", GAMEPORT)); self.seen[key] = time.time()
        if self.socks:
            back = {s: k for k, s in self.socks.items()}
            for s in select.select(list(back), [], [], 0)[0]:
                try:
                    while True: self.st.send(back[s][0], back[s][1] + s.recv(65535), 1)
                except (BlockingIOError, ConnectionResetError): pass
        for k in [k for k, t in self.seen.items() if time.time() - t > 60]:
            self.socks.pop(k).close(); self.seen.pop(k)
            if not any(o[0] == k[0] for o in self.socks): self.st.hangup(k[0])
    def players(self): return len({k[0] for k in self.socks})
    def close(self):
        for k, s in self.socks.items(): s.close(); self.st.hangup(k[0])
        self.socks.clear(); self.seen.clear()

class JoinTunnel:
    # The game connects to 127.0.0.1:<port>; everything it sends goes to the host over Steam.
    def __init__(self, st, host, port=0):
        self.st, self.host, self.game = st, host, None
        self.s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM); self.s.bind(("127.0.0.1", port)); self.s.setblocking(False)
        self.port = self.s.getsockname()[1]
    def step(self):
        try:
            while True:
                data, self.game = self.s.recvfrom(65535); self.st.send(self.host, self.game[1].to_bytes(2, "little") + data, 0)
        except (BlockingIOError, ConnectionResetError): pass
        for sid, data in self.st.recv(1):
            # Drop packets meant for an earlier game socket (from before a map change), they would break the new handshake.
            if sid == self.host and self.game and data[:2] == self.game[1].to_bytes(2, "little"): self.s.sendto(data[2:], self.game)
    def close(self): self.s.close(); self.st.hangup(self.host)

if __name__ == "__main__":
    st = Steam(); print("me", st.me, st.name)
    lob = st.open_lobby({"host": st.me, "name": st.name, "bots": 5, "players": 1}); print("lobby", lob)
    time.sleep(2); print("found", st.find()); st.close_lobby(lob); os._exit(0)
