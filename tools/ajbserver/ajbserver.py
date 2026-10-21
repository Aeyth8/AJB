"""AJB local arcade-server emulator. Python stdlib only. MIT.
Listens on 127.0.0.1:47811, path /api/<group>/<name>. Wire format: see README.md.
Profile: %LOCALAPPDATA%\\AJB\\profile.json (atomic write + .bak)."""
import json, os, random, sys, threading, time, datetime, base64, hashlib
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import mpk

HOST, PORT = '127.0.0.1', 47811
APP_VER = '0.5.5'
HERE = os.path.dirname(os.path.abspath(__file__))
PROFILE_DIR = os.path.join(os.environ.get('LOCALAPPDATA', HERE), 'AJB')
PROFILE = os.environ.get('AJB_PROFILE') or os.path.join(PROFILE_DIR, 'profile.json')
POOLS = json.load(open(os.path.join(HERE, 'pools.json')))
# DT_CharacterInfo row order; CharacterID = index + 1 (assumed, see README "Unknown")
CHARS = 'ABC ABD ANS BCT C28 CSR DIO DOH DVL FGO GRN HHS JLN JR6 JSK JSP JTR KIR KKI KOI KWK MST NRC OKY PLN RHN RST WET'.split()
LOCK = threading.Lock()
try:
    with open(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'titles.json'), encoding='utf8') as _f: TITLES = {t['id']: t for t in json.load(_f)}
except Exception: TITLES = {}
START_TITLE = 1

# ---------- reward types / gacha ----------
T_TICKET, T_CSKIN, T_SSKIN, T_EPOSE, T_EVOICE, T_ICON, T_TITLE, T_COIN, T_CARD = range(9)
LUCKY, PREMIUM = 1, 2
COST = {LUCKY: 1, PREMIUM: 3}           # tickets per draw
# rarity: (weight lucky, weight premium); R=1 .. SSR=3
RATES = {1: (70, 40), 2: (25, 45), 3: (5, 15)}
FAR = '2099-12-31 23:59:59'
NEAR = '2020-01-01 00:00:00'


def rarity_of(itemtype, num):
    if itemtype == T_CSKIN: return 3 if num >= 8 else 2 if num >= 4 else 1
    if itemtype == T_SSKIN: return 3
    if itemtype in (T_EPOSE, T_EVOICE): return 2 if num >= 6 else 1
    if itemtype == T_TITLE: return 2
    return 1


def build_pool():
    pool = []
    for i, c in enumerate(CHARS):
        cid = i + 1
        for n in POOLS['skins'].get(c, []):
            if n > 1: pool.append((T_CSKIN, cid, n))
        for n in POOLS['emotes'].get(c, []):
            pool.append((T_EPOSE, cid, n))
    for n in POOLS['stand_skin_icons']:
        if n <= len(CHARS): pool.append((T_SSKIN, n, 2))
    for tid, t in TITLES.items():
        if t['unlock']['kind'] == 'draw': pool.append((T_TITLE, 0, tid))
    for n in POOLS['player_icons']:
        pool.append((T_ICON, 0, n))
    return pool


POOL = build_pool()


def draw(kind, owned, rng):
    w = {r: RATES[r][0 if kind == LUCKY else 1] for r in RATES}
    r = rng.choices(list(w), weights=list(w.values()))[0]
    cand = [p for p in POOL if rarity_of(p[0], p[2]) == r] or POOL
    fresh = [p for p in cand if key(p) not in owned]
    if not fresh:                    # duplicate protection: refund as tickets
        return (T_TICKET, 0, 1), r
    return rng.choice(fresh), r


def key(p): return '%d:%d:%d' % p


def reward_entry(p, rarity, num=1):
    t, cid, n = p
    code = CHARS[cid - 1] if 0 < cid <= len(CHARS) else ''
    name = {T_TICKET: 'Ticket', T_CSKIN: '%s skin %d' % (code, n), T_SSKIN: '%s stand skin' % code,
            T_EPOSE: '%s emote %d' % (code, n), T_ICON: 'Icon %d' % n, T_TITLE: 'Title: ' + TITLES.get(n, {}).get('en', str(n))}.get(t, 'Item')
    return [t, cid, n, name, rarity, t, '', num]


# ---------- profile ----------
def new_profile(card=''):
    return {'card_id': card, 'user_id': hashlib.sha1(card.encode()).hexdigest()[:16] if card else 'local',
            'name': 'PLAYER', 'level': 1, 'exp': 0, 'pp': 0, 'tickets': 3, 'title': TITLES.get(START_TITLE, {}).get('en', ''), 'title_id': START_TITLE, 'icon': 1,
            'controller': 1, 'unlocks': [], 'gacha_history': [], 'custom': {}, 'stats': {'matches': 0, 'wins': 0, 'kills': 0, 'top3': 0, 'fb': 0, 'cw': {}},
            'registered': False, 'last_result': None}


def load():
    for p in (PROFILE, PROFILE + '.bak'):
        try:
            with open(p, encoding='utf-8') as f: return json.load(f)
        except Exception: pass
    return new_profile()


def save(pr):
    os.makedirs(os.path.dirname(PROFILE), exist_ok=True)
    tmp = PROFILE + '.tmp'
    with open(tmp, 'w', encoding='utf-8') as f: json.dump(pr, f, indent=1)
    if os.path.exists(PROFILE): os.replace(PROFILE, PROFILE + '.bak')
    os.replace(tmp, PROFILE)


# ---------- rank curve: level n -> n+1 needs 100 + 20n exp, cap 99 ----------
MAX_LV = 99
def need(n): return 100 + 20 * n
def next_list(lv): return [need(n) for n in range(lv, min(lv + 5, MAX_LV))]


def add_exp(pr, e):
    pr['exp'] += e
    while pr['level'] < MAX_LV and pr['exp'] >= need(pr['level']):
        pr['exp'] -= need(pr['level']); pr['level'] += 1
    if pr['level'] >= MAX_LV: pr['exp'] = 0


def pp_for(kills, rank, first_blood, pve):
    rb = max(0, 100 - (max(rank, 1) - 1) * 5) if rank > 0 else 0   # 1st 100 .. 20th+ 0 (5/place)
    return min(500, 50 + 10 * kills + rb + 25 * first_blood + pve // 100)


def now(): return datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')


EMPTY_EMOTE = 10001


def custom_wire(pr):
    # pr['custom'] = {str(cid): {'skin':n,'stand':n,'emotes':[[eid,vid]x4]}}
    out = []
    cu = pr.get('custom')
    if not isinstance(cu, dict): return out
    for cid in sorted(cu, key=int):
        c = cu[cid]
        em = (c.get('emotes') or [])[:4]
        em += [[EMPTY_EMOTE, EMPTY_EMOTE]] * (4 - len(em))
        out.append([int(cid), c.get('skin', 1), c.get('stand', 1), 0,
                    [[e[0], '', e[1], ''] for e in em]])
    return out


def profile_tuple(pr):
    return [pr['user_id'], pr['name'], pr['level'], pr['exp'], pr['tickets'], pr['title'], pr['icon'],
            NEAR, max(1, min(5, pr['controller'])), 0, 0, 0, 1, custom_wire(pr), 1, 0]


# ---------- endpoints: return body array ----------
def a(i, args, d=None):
    try: return args[i]
    except Exception: return d


def h_check(pr, args):
    card = a(0, args, '') or pr['card_id']
    if isinstance(card, bytes): card = card.decode('latin1')
    if card and card != pr['card_id'] and not pr['registered']:
        pr.update(new_profile(card)); pr['dirty'] = 1
    if not pr['registered']: return [1, card or '', profile_tuple(pr), '', 0]
    return [0, pr['card_id'], profile_tuple(pr), '', 0]


def h_login(pr, args):
    if not pr['registered']: pr['registered'] = True; pr['dirty'] = 1
    return [0, profile_tuple(pr), pr['user_id'], 0, 0, 0]


def h_create(pr, args):
    pr['registered'] = True; pr['dirty'] = 1
    return [0, profile_tuple(pr), pr['user_id'], 0, 0, 0]


def h_delete(pr, args):
    card = pr['card_id']; pr.clear(); pr.update(new_profile(card)); pr['dirty'] = 1
    return [0]


def award_titles(pr, chara=''):
    s = pr['stats']; have = set(pr['unlocks']); new = []
    cur = {'wins': s.get('wins', 0), 'kills': s.get('kills', 0), 'firstblood': s.get('fb', 0), 'matches': s.get('matches', 0),
           'level': pr['level'], 'top3': s.get('top3', 0)}
    for tid, t in TITLES.items():
        u = t['unlock']; k = u['kind']
        if k in ('start', 'draw') or key((T_TITLE, 0, tid)) in have: continue
        v = s.get('cw', {}).get(u['chara'], 0) if k == 'char_wins' else cur.get(k, 0)
        if v >= u['n']: pr['unlocks'].append(key((T_TITLE, 0, tid))); new.append(tid)
    return new


def h_game_result(pr, args, chara=''):
    mode, kills, rank, fb, pve = a(0, args, 1), a(4, args, 0) or 0, a(6, args, 0) or 0, a(9, args, 0) or 0, a(20, args, 0) or 0
    before_lv, before_exp = pr['level'], pr['exp']
    exp = 50 + 5 * kills + (max(0, 21 - rank) * 5 if rank > 0 else 0)
    add_exp(pr, exp)
    pp = pp_for(kills, rank, fb, pve)
    tix = 1 + (1 if 0 < rank <= 3 else 0)
    pr['pp'] += pp; pr['tickets'] += tix
    s = pr['stats']; s['matches'] += 1; s['kills'] += kills; s['wins'] += 1 if rank == 1 else 0
    s['top3'] = s.get('top3', 0) + (1 if 0 < rank <= 3 else 0); s['fb'] = s.get('fb', 0) + (1 if fb else 0)
    chara = chara or pr.get('cur_char', '')
    if rank == 1 and chara: s.setdefault('cw', {})[chara] = s.get('cw', {}).get(chara, 0) + 1
    new_titles = award_titles(pr)
    pr['last_result'] = {'at': now(), 'mode': mode, 'rank': rank, 'kills': kills, 'damage': a(5, args, 0),
                         'survival_min': a(2, args, 0), 'pve': pve, 'pp': pp, 'exp': exp, 'tickets': tix, 'new_titles': new_titles}
    pr['dirty'] = 1
    lb = os.path.join(os.path.dirname(PROFILE), 'leaderboard_pending.json')   # read by dll_patch Steam hook
    try:
        with open(lb, 'w') as f: json.dump({'kills_total': s['kills'], 'wins': s['wins'], 'level': pr['level'], 'last': pr['last_result']}, f)
    except Exception: pass
    return [0, before_exp, pr['exp'], next_list(pr['level']), [exp, 0, 0, 0, 0, 0, 0, 0, []],
            pr['tickets'], [1, tix - 1, 0], [], NEAR, FAR, [], ['', 0, 0, 0, 0], ['', 0, 0, 0], [], '', '', '', 0, 0, [], 3, 3]


def h_get_reward(pr, args):
    kind = a(0, args, LUCKY) if a(0, args) in (LUCKY, PREMIUM) else LUCKY
    if pr['tickets'] < COST[kind]: return [0, 1, pr['tickets'], []]
    pr['tickets'] -= COST[kind]
    owned = set(pr['unlocks'])
    p, r = draw(kind, owned, random.Random())
    if p[0] == T_TICKET: pr['tickets'] += 1
    else: pr['unlocks'].append(key(p))
    pr['gacha_history'].append({'at': now(), 'type': kind, 'item': key(p), 'rarity': r})
    pr['gacha_history'] = pr['gacha_history'][-500:]
    pr['dirty'] = 1
    return [0, 0, pr['tickets'], [reward_entry(p, r)]]


def h_gacha_details(pr, args):
    out = []
    for kind in (LUCKY, PREMIUM):
        tot = sum(v[kind - 1] for v in RATES.values())
        pick = [['SSR', 'SSR', '%.1f%%' % (100 * RATES[3][kind - 1] / tot), T_CSKIN, 0]]
        out.append([NEAR, FAR, ['%s %.1f%%' % (n, 100 * RATES[r][kind - 1] / tot) for r, n in ((1, 'R'), (2, 'SR'), (3, 'SSR'))], pick])
    return [0, out]


def h_unlock(pr, args): return [0, 0, 0]
def h_alive(pr, args): return [0, 0, '00:00', '23:59']
def h_charparam(pr, args): return [0, 0, 0, '', '']
def h_national(pr, args): return [0, [[1, NEAR, FAR], [2, NEAR, FAR]]]
def h_shop(pr, args): return [0, 1]
def h_tss(pr, args): return [0, '']
def h_tus_read(pr, args): return [0, pr.get('tus', '')]
def h_tus_write(pr, args):
    v = a(0, args, '')
    pr['tus'] = v.decode('latin1') if isinstance(v, bytes) else (v if isinstance(v, str) else ''); pr['dirty'] = 1
    return [0]
def h_info(pr, args): return [0, []]
def h_announce(pr, args): return [0, []]
def h_lottery(pr, args): return [0, 0]
def ok(pr, args): return [0]


def h_set_reward(pr, args):
    t, cid, no, pos = [a(i, args, 0) or 0 for i in range(4)]
    if t == 6 and no not in TITLES: return [1]
    if t in (1, 2) and no == 1: owned = True
    elif t in (1, 2, 3, 4, 5, 6): owned = key((t, cid, no)) in pr['unlocks'] or (t == 5 and no == 1) or (t == 6 and no == START_TITLE) or (t in (3, 4) and no == EMPTY_EMOTE)
    else: owned = False
    if not owned: return [1]
    if not isinstance(pr.get('custom'), dict): pr['custom'] = {}
    if t == 5: pr['icon'] = no
    elif t == 6: pr['title'] = TITLES[no]['en']; pr['title_id'] = no
    else:
        c = pr['custom'].setdefault(str(cid), {'skin': 1, 'stand': 1, 'emotes': []})
        while len(c['emotes']) < 4: c['emotes'].append([EMPTY_EMOTE, EMPTY_EMOTE])
        if t == 1: c['skin'] = no
        elif t == 2: c['stand'] = no
        elif t in (3, 4) and 0 <= pos < 4: c['emotes'][pos][0 if t == 3 else 1] = no
    if t in (1, 2): pr['cur_char'] = CHARS[cid - 1] if 0 < cid <= len(CHARS) else pr.get('cur_char', '')
    pr['dirty'] = 1
    return [0]


ROUTES = {
    'user/check': h_check, 'user/create': h_create, 'user/login': h_login, 'user/logout': ok,
    'user/unlock': h_unlock, 'user/delete': h_delete, 'user/extend_bp_lock': ok,
    'sys/get_env': ok, 'sys/version_info': ok, 'sys/serveralive': h_alive, 'sys/shop_info': h_shop,
    'sys/character_parameter': h_charparam, 'sys/national_match_info': h_national, 'sys/machine_error': ok,
    'sys/head_clerk': ok, 'catalog/get_region': ok, 'catalog/get_area': ok, 'catalog/get_lobby': ok,
    'results/game_result': h_game_result, 'results/get_reward': h_get_reward, 'results/set_reward': h_set_reward,
    'results/gacha_details': h_gacha_details, 'results/get_reward_lottery': h_lottery,
    'results/upload_movie': ok, 'results/upload_screen_shot': ok,
    'info/get_info': h_info, 'info/get_announcement': h_announce,
    'tus/read': h_tus_read, 'tus/write': h_tus_write, 'tss/read': h_tss,
}


def decode_request(raw):
    """Lenient: skip any hash prefix up to the first map byte, then [header map, args array]."""
    for i, b in enumerate(raw[:256]):
        if 0x80 <= b <= 0x8f or b in (0xde, 0xdf):
            try:
                objs = mpk.unpack_stream(raw[i:])
                hdr = objs[0] if objs else {}
                args = objs[1] if len(objs) > 1 and isinstance(objs[1], list) else []
                return hdr, args
            except Exception: continue
    return {}, []


def handle(path, raw):
    ep = path.split('/api/', 1)[-1].strip('/')
    hdr, args = decode_request(raw)
    fn = ROUTES.get(ep)
    with LOCK:
        pr = load()
        body = fn(pr, args) if fn else [0]
        if pr.pop('dirty', None): save(pr)
    sess = hdr.get('session', '') if isinstance(hdr, dict) else ''
    return mpk.pack_stream([{'session': sess or 'local', 'result': 0, 'appVer': APP_VER}, body]), ep, fn is not None


class H(BaseHTTPRequestHandler):
    protocol_version = 'HTTP/1.1'

    def _send(self, code, data, ctype):
        self.send_response(code); self.send_header('Content-Type', ctype)
        self.send_header('Content-Length', str(len(data))); self.end_headers(); self.wfile.write(data)

    def _raw(self):
        n = int(self.headers.get('Content-Length') or 0)
        return self.rfile.read(n) if n else b''

    def do_GET(self):
        if self.path.startswith('/ajb/profile'):
            with LOCK: pr = load()
            return self._send(200, json.dumps(pr).encode(), 'application/json')
        self.do_POST()

    def do_POST(self):
        raw = self._raw()
        if self.path.startswith(('/ajb/login', '/ajb/result', '/ajb/draw')):   # JSON bridge for the port DLL
            try: q = json.loads(raw or b'{}')
            except Exception: q = {}
            out = {}
            with LOCK:
                pr = load()
                if self.path.startswith('/ajb/login'):
                    card = str(q.get('card', ''))
                    if card and pr.get('card_id') in ('', 'local'): pr['card_id'] = card; pr['dirty'] = 1   # adopt the Steam ID, keep progress
                    h_check(pr, [card]); h_login(pr, [])
                    if q.get('name'): pr['name'] = str(q['name'])[:32]; pr['dirty'] = 1
                elif self.path.startswith('/ajb/result'):
                    body = h_game_result(pr, [1, 0, 0, 0, int(q.get('kills', 0)), 0, int(q.get('rank', 0)), 0, 0, int(q.get('fb', 0))], str(q.get('chara', '')))
                    out['result'] = pr['last_result']
                else:
                    body = h_get_reward(pr, [int(q.get('kind', LUCKY))])
                    out['ok'] = body[1] == 0
                    if body[3]: e = body[3][0]; out['item'] = e[3]; out['rarity'] = {1: 'R', 2: 'SR', 3: 'SSR'}[e[4]]
                if pr.pop('dirty', None): save(pr)
            out['profile'] = {k: pr[k] for k in ('name', 'level', 'exp', 'pp', 'tickets', 'stats', 'title', 'title_id')}
            out['profile']['owned'] = len(pr['unlocks'])
            return self._send(200, json.dumps(out).encode(), 'application/json')
        if self.path.startswith('/ajb/spend_pp'):          # body: {"amount": n}; local cabinet PP sync
            try: amt = int(json.loads(raw or b'{}').get('amount', 0))
            except Exception: amt = 0
            with LOCK:
                pr = load(); okk = 0 <= amt <= pr['pp']
                if okk: pr['pp'] -= amt; save(pr)
            return self._send(200 if okk else 409, json.dumps({'ok': okk, 'pp': pr['pp']}).encode(), 'application/json')
        data, ep, known = handle(self.path, raw)
        if os.environ.get('AJB_LOG'): print(ep, 'ok' if known else 'UNKNOWN', flush=True)
        self._send(200, data, 'application/x-msgpack')

    def log_message(self, *a): pass


def main():
    srv = ThreadingHTTPServer((HOST, PORT), H)
    print('ajbserver on http://%s:%d/api/  profile=%s' % (HOST, PORT, PROFILE), flush=True)
    srv.serve_forever()


if __name__ == '__main__':
    main()
