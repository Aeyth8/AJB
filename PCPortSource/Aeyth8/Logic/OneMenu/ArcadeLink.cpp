#include "../../Global.hpp"
#include "ArcadeLink.h"
#include <windows.h>
#include <winhttp.h>
#include <tlhelp32.h>
#include <atomic>
#include <mutex>
#include <thread>
#include <format>
#include <fstream>
#pragma comment(lib, "winhttp.lib")
using namespace A8CL; using namespace Global;

namespace
{
	std::atomic<bool> bAlive{false}, bPolled{false}, bStarted{false};
	std::mutex M;
	std::string Prof, Msg;

	// One request with a 5 s budget; empty string on failure.
	std::string Http(const wchar_t* Verb, const wchar_t* Path, const std::string& Body = {})
	{
		std::string Out;
		HINTERNET S = WinHttpOpen(L"AJBPort", WINHTTP_ACCESS_TYPE_NO_PROXY, nullptr, nullptr, 0);
		if (!S) return Out;
		WinHttpSetTimeouts(S, 5000, 5000, 5000, 5000);
		HINTERNET C = WinHttpConnect(S, L"127.0.0.1", 47811, 0);
		HINTERNET R = C ? WinHttpOpenRequest(C, Verb, Path, nullptr, nullptr, nullptr, 0) : nullptr;
		const wchar_t* Type = wcsncmp(Path, L"/api/", 5) == 0 ? L"Content-Type: application/x-msgpack\r\n" : L"Content-Type: application/json\r\n";
		if (R && WinHttpSendRequest(R, Type, (DWORD)-1, (LPVOID)Body.data(), (DWORD)Body.size(), (DWORD)Body.size(), 0) && WinHttpReceiveResponse(R, nullptr))
		{
			DWORD N{0}; char B[4096];
			while (WinHttpReadData(R, B, sizeof B, &N) && N) Out.append(B, N);
			if (Out.empty()) Out = "{}";
		}
		if (R) WinHttpCloseHandle(R);
		if (C) WinHttpCloseHandle(C);
		WinHttpCloseHandle(S);
		return Out;
	}

	int Num(const std::string& J, const char* K)
	{
		const size_t P = J.find(std::string("\"") + K + "\":");
		return P == std::string::npos ? -1 : atoi(J.c_str() + P + strlen(K) + 3);
	}
	std::string Str(const std::string& J, const char* K)
	{
		size_t P = J.find(std::string("\"") + K + "\": \"");
		if (P == std::string::npos) return "";
		P += strlen(K) + 5; return J.substr(P, J.find('"', P) - P);
	}

	void Keep(const std::string& J)
	{
		if (J.find("\"profile\"") == std::string::npos) return;
		std::lock_guard G(M); Prof = J.substr(J.find("\"profile\""));
	}

	std::string Utf8(const std::wstring& W)
	{
		std::string S; for (wchar_t c : W) { if (c == L'"' || c == L'\\') S += '\\'; if (c < 0x80) S += (char)c; else S += std::format("\\u{:04x}", (unsigned)c); }
		return S;
	}

	void LaunchServer()
	{
		wchar_t Exe[MAX_PATH]{}; GetModuleFileNameW(nullptr, Exe, MAX_PATH);
		std::wstring Root = Exe;
		for (int i{0}; i < 4; ++i) Root = Root.substr(0, Root.find_last_of(L'\\'));	// ...\AJB\Binaries\Win64\exe -> game root
		const std::wstring Script = Root + L"\\ajbserver\\ajbserver.py";
		if (GetFileAttributesW(Script.c_str()) == INVALID_FILE_ATTRIBUTES) { LogA("ArcadeLink", "ajbserver.py not found next to the game"); return; }
		wchar_t Py[MAX_PATH]{};
		if (!SearchPathW(nullptr, L"pythonw.exe", nullptr, MAX_PATH, Py, nullptr) && !SearchPathW(nullptr, L"python.exe", nullptr, MAX_PATH, Py, nullptr)) { LogA("ArcadeLink", "python not found on PATH"); return; }
		std::wstring Cmd = std::wstring(L"\"") + Py + L"\" \"" + Script + L"\"";
		STARTUPINFOW SI{sizeof SI}; PROCESS_INFORMATION PI{};
		if (CreateProcessW(nullptr, Cmd.data(), nullptr, nullptr, FALSE, CREATE_NO_WINDOW | DETACHED_PROCESS, nullptr, (Root + L"\\ajbserver").c_str(), &SI, &PI))
		{
			LogA("ArcadeLink", std::format("started ajbserver pid {}", PI.dwProcessId));
			CloseHandle(PI.hThread); CloseHandle(PI.hProcess);
		}
		else LogA("ArcadeLink", std::format("ajbserver launch failed ({})", GetLastError()));
	}

	using GetIf = void* (*)();
	GetIf SteamIf(const char* const* Names, int N)
	{
		HMODULE H = GetModuleHandleW(L"steam_api64.dll");
		for (int i{0}; H && i < N; ++i) if (auto F = (GetIf)GetProcAddress(H, Names[i])) return F;
		return nullptr;
	}
}

bool ArcadeLink::Alive() { return bAlive; }
bool ArcadeLink::Polled() { return bPolled; }

void ArcadeLink::Start()
{
	if (bStarted.exchange(true)) return;
	std::thread([]
	{
		if (Http(L"GET", L"/ajb/profile").empty()) { LaunchServer(); Sleep(1500); }
		for (bool Was{true};; Sleep(5000))
		{
			const std::string J = Http(L"GET", L"/ajb/profile");
			bAlive = !J.empty(); bPolled = true;
			if (bAlive) { std::lock_guard G(M); Prof = "\"profile\": " + J; }
			if (Was != bAlive) LogA("ArcadeLink", bAlive ? "ajbserver answering" : "ajbserver not answering (5 s)");
			Was = bAlive;
		}
	}).detach();
}

void ArcadeLink::Login(const std::wstring& Name)
{
	std::thread([Name]
	{
		const std::string J = Http(L"POST", L"/ajb/login", "{\"card\": \"" + SteamId() + "\", \"name\": \"" + Utf8(Name) + "\"}");
		Keep(J); LogA("ArcadeLink", J.empty() ? "login failed" : "login ok " + Status());
	}).detach();
}

void ArcadeLink::Result(int Kills, int Rank) { ResultEx(Kills, Rank, 0, false); }

void ArcadeLink::ResultEx(int Kills, int Rank, int Chara, bool FirstBlood)
{
	std::thread([Kills, Rank, Chara, FirstBlood]
	{
		const std::string J = Http(L"POST", L"/ajb/result", std::format("{{\"kills\": {}, \"rank\": {}, \"chara\": \"{}\", \"fb\": {}}}", Kills, Rank, Chara > 0 ? std::to_string(Chara) : "", FirstBlood ? 1 : 0));
		Keep(J);
		const size_t R = J.find("\"result\"");
		const std::string Line = J.empty() ? "Match result not saved: arcade server not answering." :
			std::format("Last match: place {}, {} kills  +{} PP  +{} tickets", Rank, Kills, R == std::string::npos ? 0 : Num(J.substr(R), "pp"), R == std::string::npos ? 0 : Num(J.substr(R), "tickets"));
		{ std::lock_guard G(M); Msg = Line; }
		LogA("ArcadeLink", "result " + Line);
	}).detach();
}

void ArcadeLink::Draw(int Kind)
{
	std::thread([Kind]
	{
		const std::string J = Http(L"POST", L"/ajb/draw", std::format("{{\"kind\": {}}}", Kind == 3 ? 2 : 1));
		Keep(J);
		std::string Line;
		if (J.empty()) Line = "Draw failed: arcade server not answering.";
		else if (J.find("\"ok\": true") == std::string::npos) Line = "Not enough tickets: play a match to earn more.";
		else Line = "Drew " + Str(J, "rarity") + ": " + Str(J, "item");
		{ std::lock_guard G(M); Msg = Line; }
		LogA("ArcadeLink", "draw " + Line);
	}).detach();
}

std::string ArcadeLink::Status()
{
	std::lock_guard G(M);
	if (Prof.empty() || !bAlive) return "";
	return std::format("Lv {}   PP {}   Tickets {}", Num(Prof, "level"), Num(Prof, "pp"), Num(Prof, "tickets"));
}

std::string ArcadeLink::TakeMessage() { std::lock_guard G(M); std::string S; S.swap(Msg); return S; }

bool ArcadeLink::SteamRunning()
{
	HMODULE H = GetModuleHandleW(L"steam_api64.dll");
	auto F = H ? (bool (*)())GetProcAddress(H, "SteamAPI_IsSteamRunning") : nullptr;
	if (F) return F();
	HANDLE S = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32W E{sizeof E}; bool Found{false};
	for (BOOL Ok = Process32FirstW(S, &E); Ok && !Found; Ok = Process32NextW(S, &E)) Found = _wcsicmp(E.szExeFile, L"steam.exe") == 0;
	CloseHandle(S);
	return Found;
}

std::wstring ArcadeLink::SteamName()
{
	static const char* Fr[] = { "SteamAPI_SteamFriends_v017", "SteamAPI_SteamFriends_v016", "SteamAPI_SteamFriends_v015" };
	HMODULE H = GetModuleHandleW(L"steam_api64.dll");
	GetIf F = SteamIf(Fr, 3);
	auto Get = H ? (const char* (*)(void*))GetProcAddress(H, "SteamAPI_ISteamFriends_GetPersonaName") : nullptr;
	void* I = F ? F() : nullptr;
	const char* N = (I && Get) ? Get(I) : nullptr;
	wchar_t W[128]{};
	if (N && *N) { MultiByteToWideChar(CP_UTF8, 0, N, -1, W, 127); return W; }
	// The game does not load steam_api64: read the most recent Steam login's persona name from Steam's own files.
	std::string Id, Name; SteamUser(Id, Name);
	if (!Name.empty()) { MultiByteToWideChar(CP_UTF8, 0, Name.c_str(), -1, W, 127); return W; }
	DWORD Sz = sizeof W;
	if (RegGetValueW(HKEY_CURRENT_USER, L"Software\\Valve\\Steam", L"LastGameNameUsed", RRF_RT_REG_SZ, nullptr, W, &Sz) == ERROR_SUCCESS) return W;
	return L"";
}

std::string ArcadeLink::SteamId() { std::string Id, Name; SteamUser(Id, Name); return Id.empty() ? "local" : "steam:" + Id; }

void ArcadeLink::SteamUser(std::string& Id, std::string& Name)
{
	wchar_t P[MAX_PATH]{}; DWORD Sz = sizeof P;
	if (RegGetValueW(HKEY_CURRENT_USER, L"Software\\Valve\\Steam", L"SteamPath", RRF_RT_REG_SZ, nullptr, P, &Sz) != ERROR_SUCCESS) return;
	std::ifstream F(std::wstring(P) + L"/config/loginusers.vdf");
	std::string L, CurId, CurName; long long Best{-1};	// no "MostRecent" flag: the newest login timestamp wins
	auto Val = [](const std::string& S) { size_t A = S.find('"', S.find('"', S.find('"') + 1) + 1); return A == std::string::npos ? std::string() : S.substr(A + 1, S.rfind('"') - A - 1); };
	while (std::getline(F, L))
	{
		const size_t Q = L.find("\"7656");
		if (Q != std::string::npos && L.find('"', Q + 1) == L.rfind('"')) { CurId = L.substr(Q + 1, L.rfind('"') - Q - 1); CurName.clear(); }
		else if (L.find("\"PersonaName\"") != std::string::npos) CurName = Val(L);
		else if (L.find("\"MostRecent\"") != std::string::npos && Val(L) == "1") { Id = CurId; Name = CurName; return; }
		else if (L.find("\"timestamp\"") != std::string::npos && !CurId.empty()) { const long long T = atoll(Val(L).c_str()); if (T > Best) { Best = T; Id = CurId; Name = CurName; } }
	}
}

bool ArcadeLink::Owned(int Type, int Chara, int No)
{
	if ((Type == 1 || Type == 2) && No <= 1) return true;
	std::lock_guard G(M);
	const size_t U = Prof.find("\"unlocks\":");
	if (U == std::string::npos) return false;
	const size_t E = Prof.find(']', U);
	const size_t P = Prof.find(std::format("\"{}:{}:{}\"", Type, Chara, No), U);
	return P != std::string::npos && P < E;
}

int ArcadeLink::Custom(int Chara, const char* Key)
{
	std::lock_guard G(M);
	const size_t C = Prof.find("\"custom\":");
	if (C == std::string::npos) return -1;
	const size_t P = Prof.find(std::format("\"{}\": {{", Chara), C);
	if (P == std::string::npos) return -1;
	const std::string E = Prof.substr(P, Prof.find('}', P) - P);
	return Num(E, Key);
}

int ArcadeLink::ProfNum(const char* Key)
{
	std::lock_guard G(M);
	const size_t P = Prof.find(std::format("\"{}\":", Key));
	return P == std::string::npos ? -1 : atoi(Prof.c_str() + P + strlen(Key) + 3);
}

void ArcadeLink::Equip(int Type, int Chara, int No)
{
	std::thread([Type, Chara, No]
	{
		// msgpack request the server's results/set_reward reads: {} header, then [type, chara, no, 0]
		std::string B{"\x80\x94", 2};
		for (int V : {Type, Chara, No, 0})
			if (V >= 0 && V < 128) B += (char)V;
			else { B += '\xcd'; B += (char)((V >> 8) & 0xFF); B += (char)(V & 0xFF); }
		const std::string J = Http(L"POST", L"/api/results/set_reward", B);
		std::string Hex; for (unsigned char c : J) Hex += std::format("{:02x}", c);
		LogA("ArcadeLink", std::format("equip {}:{}:{} {} ({} bytes sent, reply {})", Type, Chara, No, J.empty() ? "failed" : "sent", B.size(), Hex));
		const std::string P = Http(L"GET", L"/ajb/profile");
		if (!P.empty()) { std::lock_guard G(M); Prof = "\"profile\": " + P; }
	}).detach();
}
