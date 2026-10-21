# AJB Online: lists AJB games hosted by anyone running this tool, and joins them over Steam (no IPs, no port forwarding).
# Hosting: host a game in the game as usual; while it is hosting, it is listed for everyone automatically.
# Joining: pick a game and press Join (or Cross on the pad) while the host is still choosing start locations.
import os, sys, time, socket, glob, re, ctypes, threading, queue, random
import tkinter as tk
import psutil
import steamnet as sn
U = ctypes.windll.user32
JOINPORT = 7790
LOGS = os.path.join(os.environ.get("LOCALAPPDATA", ""), "AJB", "Saved", "Logs")

def hosting():
    # The game holds UDP 1170 only while it hosts (looked up, never bound, so Windows Firewall stays quiet).
    return any(c.laddr and c.laddr.port == sn.GAMEPORT for c in psutil.net_connections("udp4"))

def bots():
    try:
        f = max(glob.glob(os.path.join(LOGS, "AJB*.log")), key=os.path.getmtime)
        m = re.findall(rb"\?listen\?[^\r\n]*?NPC=(\d+)", open(f, "rb").read())
        return int(m[-1]) if m else 0
    except (ValueError, OSError): return 0

def console(cmd):
    # Types a command into the game's console (the copy in front, or the first one found).
    h = U.GetForegroundWindow(); b = ctypes.create_unicode_buffer(32); U.GetClassNameW(h, b, 32)
    if b.value != "UnrealWindow":
        h = U.FindWindowW("UnrealWindow", None)
        if not h: return False
        U.ShowWindow(h, 9); U.SetForegroundWindow(h); time.sleep(0.5)
    class KI(ctypes.Structure):
        _fields_ = [("vk", ctypes.c_ushort), ("scan", ctypes.c_ushort), ("flags", ctypes.c_ulong), ("time", ctypes.c_ulong), ("extra", ctypes.c_size_t)]
    class INP(ctypes.Structure):
        _fields_ = [("type", ctypes.c_ulong), ("ki", KI), ("pad", ctypes.c_ubyte * 8)]
    def sc(code):  # scan-code key press; the game ignores virtual-key events
        for f in (8, 10):
            i = INP(1, KI(0, code, f, 0, 0)); U.SendInput(1, ctypes.byref(i), ctypes.sizeof(INP)); time.sleep(0.01)
    sc(0x29); time.sleep(0.4)  # the ` console key
    for ch in cmd:  # each character as its scan code on the player's keyboard layout, with Shift when needed
        v = U.VkKeyScanW(ord(ch)); code = U.MapVirtualKeyW(v & 0xFF, 0); shift = v & 0x100
        if shift: i = INP(1, KI(0, 0x2A, 8, 0, 0)); U.SendInput(1, ctypes.byref(i), ctypes.sizeof(INP))
        sc(code)
        if shift: i = INP(1, KI(0, 0x2A, 10, 0, 0)); U.SendInput(1, ctypes.byref(i), ctypes.sizeof(INP))
    time.sleep(0.1); sc(0x1C); return True

AJBDIR = os.path.join(os.environ.get("LOCALAPPDATA", ""), "AJB")
QMREQ, PHASE = os.path.join(AJBDIR, "quickmatch.json"), os.path.join(AJBDIR, "phase.txt")
QMHOST = "AJBExecInternal Host?Area=4?PlayMode=Solo?NPCNum=29?NPCDifficulty=3?QuickMatch=1"
QMSEARCH, MAXPLAYERS = 20, 16
QMAREAS = (2, 8, 9, 10, 11)  # one Area per battle royale map (Areas 2-7 all load AJBStage01); Quick Match picks one at random

def phase():
    try: return open(PHASE).read().strip()
    except OSError: return "menu"

def quick_request():
    # The game writes this file when the player picks a character in Quick Match.
    try:
        import json; r = json.load(open(QMREQ)); os.remove(QMREQ); return r
    except (OSError, ValueError): return None

def open_slot(g):
    try: return g.get("phase") == "open" and g.get("pw") != "1" and int(g["players"]) < MAXPLAYERS
    except (KeyError, ValueError): return False

class Net(threading.Thread):
    # All Steam calls happen on this one thread; the window talks to it through a queue.
    def __init__(self):
        super().__init__(daemon=True); self.cmd, self.games, self.status = queue.Queue(), [], "Starting Steam..."
    def run(self):
        try: st = sn.Steam()
        except Exception as e: self.status = str(e); return
        self.me = st.me; ht = sn.HostTunnel(st); jt = None; lob = 0; nlist = nhost = 0; qm = None
        self.status = f"Signed in to Steam as {st.name}."
        while True:
            st.pump(); ht.step()
            if jt: jt.step()
            now = time.time()
            if now > nhost:
                nhost = now + 2; on = hosting()
                info = {"host": st.me, "name": st.name, "bots": bots(), "players": 1 + ht.players(), "phase": phase()}
                r = quick_request()
                if r:  # Quick Match: search briefly, then join the fullest open game or host one ourselves
                    qm = {"char": int(r.get("char", 0)), "until": now + QMSEARCH}; nlist = 0
                    self.status = "Quick Match: searching for players..."
                if on and not lob:
                    lob = st.open_lobby(info)
                    self.status = "Hosting: your game is listed for everyone." if lob else "Could not list your game on Steam."
                elif on: st.update_lobby(lob, info)
                elif lob: st.close_lobby(lob); ht.close(); lob = 0; self.status = "Stopped hosting."
            if now > nlist:
                nlist = now + 3; self.games = [g for g in st.find() if g["host"] != st.me or os.environ.get("AJBNET_SELF")]
                if qm:
                    # Friends' games first, then the fullest.
                    best = sorted((g for g in self.games if open_slot(g)), key=lambda g: (not st.friend(g["host"]), -int(g["players"])))
                    then = None
                    if best:
                        g = best[0]; then = f"open 127.0.0.1:{JOINPORT}"
                        if jt: jt.close()
                        jt = sn.JoinTunnel(st, g["host"], JOINPORT); self.status = f"Quick Match: joining {g['name']}..."
                    elif now > qm["until"]:
                        then = QMHOST.replace("Area=4", f"Area={random.choice(QMAREAS)}"); self.status = "Quick Match: no open games, hosting one. Players can join now."
                    if then:
                        ch = qm["char"]; qm = None
                        threading.Thread(target=lambda: (console(f"AJBExecInternal Char {ch}"), time.sleep(1), console(then)),
                                         daemon=True).start()
            try: c = self.cmd.get_nowait()
            except queue.Empty: c = None
            if c and c[0] == "join":
                if jt: jt.close()
                jt = sn.JoinTunnel(st, c[1]["host"], JOINPORT)
                self.status = f"Joining {c[1]['name']}..."
                threading.Thread(target=console, args=(f"open 127.0.0.1:{JOINPORT}",), daemon=True).start()
            elif c and c[0] == "quick":
                qm = {"char": 0, "until": now + QMSEARCH}; nlist = 0; self.status = "Quick Match: searching for players..."
            elif c and c[0] == "leave" and jt:
                jt.close(); jt = None; self.status = "Left the game."
            time.sleep(0.001)

def main():
    net = Net(); net.start()
    w = tk.Tk(); w.title("AJB Online"); w.geometry("460x360"); w.attributes("-topmost", True)
    tk.Label(w, text="Games on Steam", font=("Segoe UI", 13, "bold")).pack(pady=(10, 2))
    tk.Label(w, text="Join while the host is still choosing start locations.", font=("Segoe UI", 9)).pack()
    lb = tk.Listbox(w, font=("Segoe UI", 11), height=9, activestyle="dotbox"); lb.pack(fill="both", expand=True, padx=10, pady=6)
    row = tk.Frame(w); row.pack(pady=4)
    status = tk.Label(w, text="", font=("Segoe UI", 9), wraplength=440); status.pack(pady=(0, 8))
    def join(*_):
        s = lb.curselection()
        if s and s[0] < len(net.games): net.cmd.put(("join", net.games[s[0]]))
    tk.Button(row, text="Quick Match", width=12, command=lambda: net.cmd.put(("quick",))).pack(side="left", padx=6)
    tk.Button(row, text="Join", width=12, command=join).pack(side="left", padx=6)
    tk.Button(row, text="Leave", width=12, command=lambda: net.cmd.put(("leave",))).pack(side="left", padx=6)
    lb.bind("<Double-Button-1>", join); lb.bind("<Return>", join)
    shown = []
    def tick():
        rows = [f"{g['name']}   -   {g['players']} player(s), {g['bots']} bots" for g in net.games]
        if rows != shown:
            sel = lb.curselection(); lb.delete(0, "end")
            for r in rows or ["(no games yet - host one in the game and it shows up here)"]: lb.insert("end", r)
            if sel and sel[0] < len(rows): lb.selection_set(sel[0])
            shown[:] = rows
        status.config(text=net.status)
        if not U.FindWindowW("UnrealWindow", None) and time.time() - t0 > 120: w.destroy(); return
        w.after(500, tick)
    t0 = time.time(); tick(); w.mainloop(); os._exit(0)

if __name__ == "__main__": main()
