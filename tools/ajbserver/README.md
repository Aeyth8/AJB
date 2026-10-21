# ajbserver
Local arcade-server emulator for the JoJo Last Survivor PC port. Python 3 stdlib only, MIT.
Run: `python ajbserver.py` (127.0.0.1:47811, `/api/<group>/<name>`). Test: `python test_client.py` (temp profile, no game).
Profile: `%LOCALAPPDATA%\AJB\profile.json` (atomic write, `.bak` kept). Override with `AJB_PROFILE`.
Extra JSON endpoints for the DLL: `GET /ajb/profile`, `POST /ajb/spend_pp {"amount":n}`.

## Wire
Request: optional hash prefix, msgpack map header, msgpack args array (server skips to the first map byte).
Response: stream `[{"session","result","appVer"}, body]`; body[0] = status (0 OK).

## Economy (fun-first, no purchase path)
- PP only from game_result: 50 + 10/kill + placement (1st 100, -5 per place, 21st+ 0) + 25 first blood + PvEScore/100, cap 500.
- Tickets: +1 per match, +1 more for top 3. Start with 3.
- Exp per match: 50 + 5/kill + 5 per place under 21. Level n to n+1 needs 100 + 20n; cap 99 (lv 10 in ~12 matches).

## Gacha (pools from jpext DataTables: 537 skins, 290 emotes, 443 icons, 25 stand skins)
| Rarity | Lucky Draw (1 ticket) | Premium Draw (3 tickets) |
|---|---|---|
| R  (skins 2-3, emotes 1-5, icons) | 70% | 40% |
| SR (skins 4-7, emotes 6-10) | 25% | 45% |
| SSR (skins 8+, stand skins) | 5% | 15% |
No duplicates: an owned item is never drawn; once every item is owned, a draw refunds 1 ticket.
CharacterID = DT_CharacterInfo row index + 1 (ABC=1 .. WET=28), assumed.
