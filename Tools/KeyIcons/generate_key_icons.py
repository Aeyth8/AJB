"""
Generates the keyboard & mouse button prompt icons used by the PC port (KBMIcons in the DLL).

Every icon is named after the Unreal Engine 4 EKeys name, plus _StickL (movement) and _StickR (camera).
Output goes to KeyIcons/ next to this script, which gets copied next to AJB-Win64-Shipping.exe.

    python generate_key_icons.py
"""

import os
from PIL import Image, ImageDraw, ImageFont

SIZE = 128
SCALE = 4  # Supersampling for smooth edges
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "KeyIcons")

FILL = (24, 22, 30, 235)
BORDER = (236, 236, 240, 255)
TEXT = (255, 255, 255, 255)
ACCENT = (255, 200, 52, 255)

FONT_BOLD = "C:/Windows/Fonts/segoeuib.ttf"
FONT_SYMBOL = "C:/Windows/Fonts/seguisym.ttf"

KEYS = {
    **{c: c for c in "ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
    "Zero": "0", "One": "1", "Two": "2", "Three": "3", "Four": "4",
    "Five": "5", "Six": "6", "Seven": "7", "Eight": "8", "Nine": "9",
    **{f"F{i}": f"F{i}" for i in range(1, 13)},
    "SpaceBar": "SPACE", "Enter": "ENTER", "Tab": "TAB", "BackSpace": "BACK", "CapsLock": "CAPS",
    "LeftShift": "SHIFT", "RightShift": "SHIFT", "LeftControl": "STRG", "RightControl": "STRG",
    "LeftAlt": "ALT", "RightAlt": "ALT GR",
    "Insert": "EINFG", "Delete": "ENTF", "Home": "POS1", "End": "ENDE", "PageUp": "BILD\u2191", "PageDown": "BILD\u2193",
    **{f"NumPad{n}": f"N{d}" for n, d in [("Zero", 0), ("One", 1), ("Two", 2), ("Three", 3), ("Four", 4),
                                           ("Five", 5), ("Six", 6), ("Seven", 7), ("Eight", 8), ("Nine", 9)]},
    "Multiply": "N*", "Add": "N+", "Subtract": "N-", "Decimal": "N,", "Divide": "N/",
    "Semicolon": "\u00dc", "Equals": "+", "Comma": ",", "Hyphen": "-", "Period": ".", "Slash": "#",
    "Tilde": "\u00d6", "LeftBracket": "\u00df", "Backslash": "^", "RightBracket": "\u00b4", "Apostrophe": "\u00c4",
}

ARROWS = {"Left": "\u2190", "Right": "\u2192", "Up": "\u2191", "Down": "\u2193"}


def canvas():
    img = Image.new("RGBA", (SIZE * SCALE, SIZE * SCALE), (0, 0, 0, 0))
    return img, ImageDraw.Draw(img)


def save(img, name):
    img.resize((SIZE, SIZE), Image.LANCZOS).save(os.path.join(OUT, name + ".png"))


def keycap(draw, box=None):
    s = SCALE
    box = box or (6 * s, 6 * s, (SIZE - 6) * s, (SIZE - 6) * s)
    draw.rounded_rectangle(box, radius=18 * s, fill=FILL, outline=BORDER, width=6 * s)


def centered_text(draw, text, font_path, box, max_size):
    x0, y0, x1, y1 = box
    size = max_size
    while size > 8:
        font = ImageFont.truetype(font_path, size * SCALE)
        l, t, r, b = draw.textbbox((0, 0), text, font=font)
        if r - l <= (x1 - x0) and b - t <= (y1 - y0):
            break
        size -= 2
    l, t, r, b = draw.textbbox((0, 0), text, font=font)
    draw.text((x0 + (x1 - x0 - (r - l)) / 2 - l, y0 + (y1 - y0 - (b - t)) / 2 - t), text, font=font, fill=TEXT)


def text_key(name, label):
    img, draw = canvas()
    keycap(draw)
    pad = 20 * SCALE
    centered_text(draw, label, FONT_BOLD, (pad, pad, SIZE * SCALE - pad, SIZE * SCALE - pad), 64 if len(label) <= 2 else 40)
    save(img, name)


def arrow_key(name, label):
    img, draw = canvas()
    keycap(draw)
    pad = 22 * SCALE
    centered_text(draw, label, FONT_SYMBOL, (pad, pad, SIZE * SCALE - pad, SIZE * SCALE - pad), 72)
    save(img, name)


def mouse(name, highlight=None, wheel_arrow=None, side_label=None):
    img, draw = canvas()
    s = SCALE
    body = (32 * s, 12 * s, 96 * s, 116 * s)
    draw.rounded_rectangle(body, radius=32 * s, fill=FILL, outline=BORDER, width=6 * s)
    split_y = 52 * s
    if highlight == "left":
        draw.rounded_rectangle((38 * s, 20 * s, 56 * s, split_y - 4 * s), radius=12 * s, fill=ACCENT)
    elif highlight == "right":
        draw.rounded_rectangle((72 * s, 20 * s, 90 * s, split_y - 4 * s), radius=12 * s, fill=ACCENT)
    draw.line((32 * s, split_y, 96 * s, split_y), fill=BORDER, width=5 * s)
    draw.line((64 * s, 12 * s, 64 * s, split_y), fill=BORDER, width=5 * s)
    wheel_fill = ACCENT if highlight == "middle" or wheel_arrow else BORDER
    draw.rounded_rectangle((58 * s, 24 * s, 70 * s, 44 * s), radius=6 * s, fill=wheel_fill)
    if wheel_arrow:
        centered_text(draw, wheel_arrow, FONT_SYMBOL, (40 * s, 58 * s, 88 * s, 106 * s), 44)
    if side_label:
        centered_text(draw, side_label, FONT_BOLD, (40 * s, 60 * s, 88 * s, 104 * s), 36)
    if highlight is None and wheel_arrow is None and side_label is None:
        # Plain mouse with movement arrows = camera
        centered_text(draw, "\u2194", FONT_SYMBOL, (40 * s, 60 * s, 88 * s, 104 * s), 44)
    save(img, name)


def wasd():
    img, draw = canvas()
    s = SCALE
    def cap(x, y, label):
        box = (x * s, y * s, (x + 38) * s, (y + 38) * s)
        draw.rounded_rectangle(box, radius=8 * s, fill=FILL, outline=BORDER, width=4 * s)
        centered_text(draw, label, FONT_BOLD, (box[0] + 6 * s, box[1] + 6 * s, box[2] - 6 * s, box[3] - 6 * s), 28)
    cap(45, 22, "W")
    cap(4, 66, "A")
    cap(45, 66, "S")
    cap(86, 66, "D")
    save(img, "_StickL")


def main():
    os.makedirs(OUT, exist_ok=True)
    for name, label in KEYS.items():
        text_key(name, label)
    for name, label in ARROWS.items():
        arrow_key(name, label)
    mouse("LeftMouseButton", highlight="left")
    mouse("RightMouseButton", highlight="right")
    mouse("MiddleMouseButton", highlight="middle")
    mouse("ThumbMouseButton", side_label="M4")
    mouse("ThumbMouseButton2", side_label="M5")
    mouse("MouseScrollUp", wheel_arrow="\u2191")
    mouse("MouseScrollDown", wheel_arrow="\u2193")
    mouse("_StickR")
    wasd()
    print(f"{len(os.listdir(OUT))} icons written to {OUT}")


if __name__ == "__main__":
    main()
