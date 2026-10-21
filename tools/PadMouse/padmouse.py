# PadMouse: controller drives the mouse in the AJB menus (the mod's menus are mouse-only).
# Works with PS5 DualSense and PS4 pads (SDL game-controller mapping).
# Left stick / D-pad = move cursor, Cross/A = click, Circle/B = Esc.
# Options/Start = the game's Esc menu. The pointer works whenever the game shows its mouse cursor (any menu);
# otherwise the pad drives the fighter.
# Matches: the pad is mirrored onto a virtual Xbox 360 pad the game reads (no Steam needed).
# L1 / R1 = one bot fewer / more (typed into the Host menu's NPC Count box). Triangle/Y = start the match with that many bots.
# Only acts while the game window is in front; exits when the game closes.
import os, time, ctypes
from ctypes import wintypes
os.environ["SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS"] = "1"
os.environ["SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE"] = "0"
import sdl2

class Pad:
    def __init__(self, i): self.c = sdl2.SDL_GameControllerOpen(i); self.name = (sdl2.SDL_GameControllerName(self.c) or b"").decode(errors="ignore")
    def get_button(self, b): return sdl2.SDL_GameControllerGetButton(self.c, b)
    def get_axis(self, a): return sdl2.SDL_GameControllerGetAxis(self.c, a)
    def alive(self): return sdl2.SDL_GameControllerGetAttached(self.c)
import vgamepad as vg
ctypes.windll.shcore.SetProcessDpiAwareness(2)
U = ctypes.windll.user32
GAME = "UnrealWindow"  # window class of every copy of the game (titles differ between copies)

def is_game(h):
    b = ctypes.create_unicode_buffer(32); U.GetClassNameW(h, b, 32); return b.value == GAME
# Host shortcut settings. BOTS: number of bots. AREA: 7 Trattoria, 2 Train Station, 3 Angelo Rock, 4 Rural,
# 5 Owson, 6 Kameyu, 8 Cairo, 9 Farm, 10 Colosseum, 11 Venezia. MODE: 1 Solo battle royale, 2 Pair (teams of 2).
# LEVEL: bot difficulty 0 easy .. 2 hard.
BOTS, AREA, MODE, LEVEL = 0, 7, 1, 1
class KI(ctypes.Structure):
    _fields_ = [("vk", ctypes.c_ushort), ("scan", ctypes.c_ushort), ("flags", ctypes.c_ulong), ("time", ctypes.c_ulong), ("extra", ctypes.c_size_t)]
class INP(ctypes.Structure):
    _fields_ = [("type", ctypes.c_ulong), ("ki", KI), ("pad", ctypes.c_ubyte * 8)]

def typetext(t):
    # Each character as its scan code on the player's keyboard layout (the game ignores Unicode key events).
    for ch in t:
        v = U.VkKeyScanW(ord(ch)); code = U.MapVirtualKeyW(v & 0xFF, 0); shift = v & 0x100
        if shift: i = INP(1, KI(0, 0x2A, 8, 0, 0)); U.SendInput(1, ctypes.byref(i), ctypes.sizeof(INP))
        sc(code)
        if shift: i = INP(1, KI(0, 0x2A, 10, 0, 0)); U.SendInput(1, ctypes.byref(i), ctypes.sizeof(INP))

def sc(code, ext=0):
    # Scan-code key press: the game's text box ignores virtual-key events.
    for f in (8 | ext, 8 | 2 | ext):
        i = INP(1, KI(0, code, f, 0, 0)); U.SendInput(1, ctypes.byref(i), ctypes.sizeof(INP)); time.sleep(0.004)

def setbox():
    # Click the Host menu's NPC Count text box, clear it, type the count, confirm.
    h = U.GetForegroundWindow(); r = wintypes.RECT(); U.GetClientRect(h, ctypes.byref(r))
    pt = wintypes.POINT(int(r.right * 0.388), int(r.bottom * 0.43)); U.ClientToScreen(h, ctypes.byref(pt))
    old = wintypes.POINT(); U.GetCursorPos(ctypes.byref(old))
    U.SetCursorPos(pt.x, pt.y); time.sleep(0.015); U.mouse_event(1, 1, 0, 0, 0); time.sleep(0.015)
    mbtn(2, 4); time.sleep(0.04)
    for _ in range(4): sc(0x0E)
    for _ in range(4): sc(0x53, 1)
    for ch in str(BOTS): sc(0x0B if ch == "0" else 0x01 + int(ch))
    sc(0x1C)
    U.SetCursorPos(old.x, old.y)

def host():
    sc(0x29); time.sleep(0.3)
    typetext(f"AJBExecInternal Host?Area={AREA}?PlayMode={MODE}?NPCNum={BOTS}?NPCDifficulty={LEVEL}")
    time.sleep(0.1); sc(0x1C)
sdl2.SDL_Init(sdl2.SDL_INIT_GAMECONTROLLER)
pads, on, prev, dz = [], True, set(), 0.22
seen, gone = False, 0

def mbtn(down, up):
    U.mouse_event(down, 0, 0, 0, 0); time.sleep(0.03); U.mouse_event(up, 0, 0, 0, 0)

def key(vk):
    U.keybd_event(vk, 0, 0, 0); time.sleep(0.03); U.keybd_event(vk, 0, 2, 0)

# The game only reads Xbox (XInput) pads, so each PS pad is mirrored onto a virtual Xbox 360 pad (ViGEmBus).
XB = vg.XUSB_BUTTON
MAP = {sdl2.SDL_CONTROLLER_BUTTON_A: XB.XUSB_GAMEPAD_A, sdl2.SDL_CONTROLLER_BUTTON_B: XB.XUSB_GAMEPAD_B,
       sdl2.SDL_CONTROLLER_BUTTON_X: XB.XUSB_GAMEPAD_X, sdl2.SDL_CONTROLLER_BUTTON_Y: XB.XUSB_GAMEPAD_Y,
       sdl2.SDL_CONTROLLER_BUTTON_LEFTSHOULDER: XB.XUSB_GAMEPAD_LEFT_SHOULDER, sdl2.SDL_CONTROLLER_BUTTON_RIGHTSHOULDER: XB.XUSB_GAMEPAD_RIGHT_SHOULDER,
       sdl2.SDL_CONTROLLER_BUTTON_LEFTSTICK: XB.XUSB_GAMEPAD_LEFT_THUMB, sdl2.SDL_CONTROLLER_BUTTON_RIGHTSTICK: XB.XUSB_GAMEPAD_RIGHT_THUMB,
       sdl2.SDL_CONTROLLER_BUTTON_DPAD_UP: XB.XUSB_GAMEPAD_DPAD_UP, sdl2.SDL_CONTROLLER_BUTTON_DPAD_DOWN: XB.XUSB_GAMEPAD_DPAD_DOWN,
       sdl2.SDL_CONTROLLER_BUTTON_DPAD_LEFT: XB.XUSB_GAMEPAD_DPAD_LEFT, sdl2.SDL_CONTROLLER_BUTTON_DPAD_RIGHT: XB.XUSB_GAMEPAD_DPAD_RIGHT}
virt = {}

def mirror(p, i, inmenu):
    v = virt.get(i) or virt.setdefault(i, vg.VX360Gamepad())
    v.reset()
    if not inmenu:
        for b, x in MAP.items():
            if p.get_button(b): v.press_button(x)
        cl = lambda a: max(-32768, min(32767, a))
        v.left_joystick(cl(p.get_axis(sdl2.SDL_CONTROLLER_AXIS_LEFTX)), cl(-p.get_axis(sdl2.SDL_CONTROLLER_AXIS_LEFTY) - 1))
        v.right_joystick(cl(p.get_axis(sdl2.SDL_CONTROLLER_AXIS_RIGHTX)), cl(-p.get_axis(sdl2.SDL_CONTROLLER_AXIS_RIGHTY) - 1))
        v.left_trigger(p.get_axis(sdl2.SDL_CONTROLLER_AXIS_TRIGGERLEFT) * 255 // 32767)
        v.right_trigger(p.get_axis(sdl2.SDL_CONTROLLER_AXIS_TRIGGERRIGHT) * 255 // 32767)
    v.update()

class CI(ctypes.Structure):
    _fields_ = [("cb", ctypes.c_uint), ("flags", ctypes.c_uint), ("h", ctypes.c_void_p), ("x", ctypes.c_long), ("y", ctypes.c_long)]

def cursor_shown():
    # The game shows its mouse cursor only while a menu is open (front-end, Host, pause menu).
    c = CI(); c.cb = ctypes.sizeof(CI); U.GetCursorInfo(ctypes.byref(c)); return bool(c.flags & 1)

def axis(v):
    v /= 32767
    if abs(v) < dz: return 0.0
    f = (abs(v) - dz) / (1 - dz)
    return f * f * (1 if v > 0 else -1)

while True:
    h = U.FindWindowW(GAME, None); front = is_game(U.GetForegroundWindow())
    # Pointer while the game shows a cursor (menus); otherwise the pad drives the fighter.
    on = front and cursor_shown()
    e = sdl2.SDL_Event()
    while sdl2.SDL_PollEvent(ctypes.byref(e)):
        if e.type in (sdl2.SDL_CONTROLLERDEVICEADDED, sdl2.SDL_CONTROLLERDEVICEREMOVED): pads = []
    if not pads:
        pads = [c for c in (Pad(i) for i in range(sdl2.SDL_NumJoysticks()) if sdl2.SDL_IsGameController(i)) if 'Xbox 360' not in c.name]
    if h: seen, gone = True, 0
    else:
        gone += 1
        if gone > (2500 if seen else 15000): break
    held, lx, ly = set(), 0.0, 0.0
    for n, p in enumerate(pads):
        try:
            mirror(p, n, on)
            for b in (sdl2.SDL_CONTROLLER_BUTTON_A, sdl2.SDL_CONTROLLER_BUTTON_B, sdl2.SDL_CONTROLLER_BUTTON_BACK, sdl2.SDL_CONTROLLER_BUTTON_START,
                      sdl2.SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, sdl2.SDL_CONTROLLER_BUTTON_LEFTSHOULDER, sdl2.SDL_CONTROLLER_BUTTON_Y, sdl2.SDL_CONTROLLER_BUTTON_DPAD_UP, sdl2.SDL_CONTROLLER_BUTTON_DPAD_DOWN,
                      sdl2.SDL_CONTROLLER_BUTTON_DPAD_LEFT, sdl2.SDL_CONTROLLER_BUTTON_DPAD_RIGHT):
                if p.get_button(b): held.add(b)
            ax, ay = axis(p.get_axis(sdl2.SDL_CONTROLLER_AXIS_LEFTX)), axis(p.get_axis(sdl2.SDL_CONTROLLER_AXIS_LEFTY))
            if abs(ax) + abs(ay) > abs(lx) + abs(ly): lx, ly = ax, ay
            if not p.alive(): pads = []
        except OSError: pads = []
    pressed = held - prev
    if sdl2.SDL_CONTROLLER_BUTTON_A in prev - held: U.mouse_event(4, 0, 0, 0, 0)
    if sdl2.SDL_CONTROLLER_BUTTON_START in pressed and front:
        key(0x1B)  # Options = the game's Esc menu, in menus, the test map and matches.
    elif on:
        dx, dy = lx * 11, ly * 11
        if sdl2.SDL_CONTROLLER_BUTTON_DPAD_LEFT in held: dx -= 3
        if sdl2.SDL_CONTROLLER_BUTTON_DPAD_RIGHT in held: dx += 3
        if sdl2.SDL_CONTROLLER_BUTTON_DPAD_UP in held: dy -= 3
        if sdl2.SDL_CONTROLLER_BUTTON_DPAD_DOWN in held: dy += 3
        if dx or dy: U.mouse_event(1, int(dx), int(dy), 0, 0)
        if sdl2.SDL_CONTROLLER_BUTTON_A in pressed:
            # The menus only take a click after hover moves, so nudge the pointer first.
            for m in (1, -1, 1, -1): U.mouse_event(1, m, 0, 0, 0); time.sleep(0.01)
            U.mouse_event(2, 0, 0, 0, 0)
        if sdl2.SDL_CONTROLLER_BUTTON_LEFTSHOULDER in pressed: BOTS = max(0, BOTS - 1); setbox()
        if sdl2.SDL_CONTROLLER_BUTTON_RIGHTSHOULDER in pressed: BOTS = min(29, BOTS + 1); setbox()
        if sdl2.SDL_CONTROLLER_BUTTON_Y in pressed: host()
        if sdl2.SDL_CONTROLLER_BUTTON_B in pressed: key(0x1B)
    prev = held
    time.sleep(0.012)
