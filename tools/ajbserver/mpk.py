"""Minimal msgpack codec (spec 2.0 subset used by msgpack-c v2). Stdlib only. MIT."""
import struct

class Ext:
    def __init__(s, code, data): s.code, s.data = code, data
    def __eq__(s, o): return isinstance(o, Ext) and (s.code, s.data) == (o.code, o.data)

def pack(o, out=None):
    b = out if out is not None else bytearray()
    if o is None: b.append(0xc0)
    elif o is True: b.append(0xc3)
    elif o is False: b.append(0xc2)
    elif isinstance(o, int):
        if 0 <= o < 0x80: b.append(o)
        elif -32 <= o < 0: b.append(o & 0xff)
        elif o >= 0:
            for lim, c, f in ((0xff, 0xcc, 'B'), (0xffff, 0xcd, 'H'), (0xffffffff, 0xce, 'I'), (2**64-1, 0xcf, 'Q')):
                if o <= lim: b.append(c); b += struct.pack('>' + f, o); break
            else: raise OverflowError(o)
        else:
            for lim, c, f in ((-0x80, 0xd0, 'b'), (-0x8000, 0xd1, 'h'), (-0x80000000, 0xd2, 'i'), (-2**63, 0xd3, 'q')):
                if o >= lim: b.append(c); b += struct.pack('>' + f, o); break
            else: raise OverflowError(o)
    elif isinstance(o, float): b.append(0xcb); b += struct.pack('>d', o)
    elif isinstance(o, str):
        d = o.encode('utf-8'); n = len(d)
        if n < 32: b.append(0xa0 | n)
        elif n < 0x100: b += bytes((0xd9, n))
        elif n < 0x10000: b.append(0xda); b += struct.pack('>H', n)
        else: b.append(0xdb); b += struct.pack('>I', n)
        b += d
    elif isinstance(o, (bytes, bytearray)):
        n = len(o)
        if n < 0x100: b += bytes((0xc4, n))
        elif n < 0x10000: b.append(0xc5); b += struct.pack('>H', n)
        else: b.append(0xc6); b += struct.pack('>I', n)
        b += o
    elif isinstance(o, (list, tuple)):
        n = len(o)
        if n < 16: b.append(0x90 | n)
        elif n < 0x10000: b.append(0xdc); b += struct.pack('>H', n)
        else: b.append(0xdd); b += struct.pack('>I', n)
        for x in o: pack(x, b)
    elif isinstance(o, dict):
        n = len(o)
        if n < 16: b.append(0x80 | n)
        elif n < 0x10000: b.append(0xde); b += struct.pack('>H', n)
        else: b.append(0xdf); b += struct.pack('>I', n)
        for k, v in o.items(): pack(k, b); pack(v, b)
    elif isinstance(o, Ext):
        n = len(o.data)
        fx = {1: 0xd4, 2: 0xd5, 4: 0xd6, 8: 0xd7, 16: 0xd8}
        if n in fx: b.append(fx[n])
        elif n < 0x100: b += bytes((0xc7, n))
        elif n < 0x10000: b.append(0xc8); b += struct.pack('>H', n)
        else: b.append(0xc9); b += struct.pack('>I', n)
        b += struct.pack('>b', o.code) + o.data
    else: raise TypeError(type(o))
    return b

def pack_stream(objs):
    b = bytearray()
    for o in objs: pack(o, b)
    return bytes(b)

class _R:
    def __init__(s, d): s.d, s.p = d, 0
    def take(s, n):
        if s.p + n > len(s.d): raise ValueError('truncated msgpack')
        v = s.d[s.p:s.p+n]; s.p += n; return v
    def u(s, f): return struct.unpack('>' + f, s.take(struct.calcsize(f)))[0]

def _obj(r):
    c = r.take(1)[0]
    if c < 0x80: return c
    if c >= 0xe0: return c - 0x100
    if 0x80 <= c <= 0x8f: return {_obj(r): _obj(r) for _ in range(c & 15)}
    if 0x90 <= c <= 0x9f: return [_obj(r) for _ in range(c & 15)]
    if 0xa0 <= c <= 0xbf: return r.take(c & 31).decode('utf-8', 'replace')
    T = {0xc0: lambda: None, 0xc2: lambda: False, 0xc3: lambda: True,
         0xc4: lambda: bytes(r.take(r.u('B'))), 0xc5: lambda: bytes(r.take(r.u('H'))), 0xc6: lambda: bytes(r.take(r.u('I'))),
         0xca: lambda: r.u('f'), 0xcb: lambda: r.u('d'),
         0xcc: lambda: r.u('B'), 0xcd: lambda: r.u('H'), 0xce: lambda: r.u('I'), 0xcf: lambda: r.u('Q'),
         0xd0: lambda: r.u('b'), 0xd1: lambda: r.u('h'), 0xd2: lambda: r.u('i'), 0xd3: lambda: r.u('q'),
         0xd9: lambda: r.take(r.u('B')).decode('utf-8', 'replace'), 0xda: lambda: r.take(r.u('H')).decode('utf-8', 'replace'),
         0xdb: lambda: r.take(r.u('I')).decode('utf-8', 'replace'),
         0xdc: lambda: [_obj(r) for _ in range(r.u('H'))], 0xdd: lambda: [_obj(r) for _ in range(r.u('I'))],
         0xde: lambda: {_obj(r): _obj(r) for _ in range(r.u('H'))}, 0xdf: lambda: {_obj(r): _obj(r) for _ in range(r.u('I'))}}
    if c in T: return T[c]()
    ext = {0xd4: 1, 0xd5: 2, 0xd6: 4, 0xd7: 8, 0xd8: 16}
    if c in ext: n = ext[c]
    elif c == 0xc7: n = r.u('B')
    elif c == 0xc8: n = r.u('H')
    elif c == 0xc9: n = r.u('I')
    else: raise ValueError('bad msgpack byte 0x%02x' % c)
    code = r.u('b'); return Ext(code, bytes(r.take(n)))

def unpack_stream(data):
    r = _R(bytes(data)); out = []
    while r.p < len(r.d): out.append(_obj(r))
    return out

def unpack(data):
    v = unpack_stream(data)
    if len(v) != 1: raise ValueError('expected 1 object, got %d' % len(v))
    return v[0]
