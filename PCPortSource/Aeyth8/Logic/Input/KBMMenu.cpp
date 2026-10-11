#include "KBMMenu.h"
#include "MouseLook.h"
#include "KBMIcons.h"
#include "../../Global.hpp"
#include "../../Offsets.h"
#include "../../Tools/UnrealTypes.h"
#include "../../Tools/Pointers.h"

#include "../../../Dumper-7/SDK/Engine_classes.hpp"

#include "../../../ImGui/imgui.h"
#include "../../../ImGui/imgui_impl_dx11.h"
#include "../../../ImGui/imgui_impl_win32.h"
#include "../../../MinHook/MinHook.h"

#include <d3d11.h>
#include <mutex>
#include <vector>
#include <string>
#include <format>
#include <atomic>

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

using namespace A8CL;

namespace A8CL
{
	namespace OFF
	{
		OFFSET KBMEngineTick("UGameEngine::Tick [KBMMenu]", 0x13E1E30);

	}
}

namespace Decl
{
	typedef void(__fastcall* EngineTick)(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode);
	typedef void(__fastcall* MapReset)(void* Map);
	typedef void(__fastcall* SetInputModeGameOnly)(SDK::APlayerController* PlayerController);
	typedef void(__fastcall* SetInputModeGameAndUI)(SDK::APlayerController* PlayerController, void* InWidgetToFocus, unsigned char InMouseLockMode, bool bHideCursorDuringCapture);
	typedef HRESULT(__stdcall* Present)(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
	typedef HRESULT(__stdcall* ResizeBuffers)(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
}

template <typename T>
struct FRawArray
{
	T*		Data;
	int32_t Num;
	int32_t Max;
};

// -- Keys --

struct FKeyName
{
	UINT		VirtualKey;
	const char* UEName;		// EKeys name
	const char* DisplayName;
};

static constexpr FKeyName KeyNames[] =
{
	{'A', "A", "A"}, {'B', "B", "B"}, {'C', "C", "C"}, {'D', "D", "D"}, {'E', "E", "E"}, {'F', "F", "F"}, {'G', "G", "G"},
	{'H', "H", "H"}, {'I', "I", "I"}, {'J', "J", "J"}, {'K', "K", "K"}, {'L', "L", "L"}, {'M', "M", "M"}, {'N', "N", "N"},
	{'O', "O", "O"}, {'P', "P", "P"}, {'Q', "Q", "Q"}, {'R', "R", "R"}, {'S', "S", "S"}, {'T', "T", "T"}, {'U', "U", "U"},
	{'V', "V", "V"}, {'W', "W", "W"}, {'X', "X", "X"}, {'Y', "Y", "Y"}, {'Z', "Z", "Z"},
	{'0', "Zero", "0"}, {'1', "One", "1"}, {'2', "Two", "2"}, {'3', "Three", "3"}, {'4', "Four", "4"},
	{'5', "Five", "5"}, {'6', "Six", "6"}, {'7', "Seven", "7"}, {'8', "Eight", "8"}, {'9', "Nine", "9"},
	{VK_F2, "F2", "F2"}, {VK_F3, "F3", "F3"}, {VK_F4, "F4", "F4"}, {VK_F5, "F5", "F5"}, {VK_F6, "F6", "F6"},
	{VK_F7, "F7", "F7"}, {VK_F8, "F8", "F8"}, {VK_F9, "F9", "F9"}, {VK_F10, "F10", "F10"}, {VK_F12, "F12", "F12"},
	{VK_SPACE, "SpaceBar", "Leertaste"}, {VK_RETURN, "Enter", "Enter"}, {VK_TAB, "Tab", "Tab"}, {VK_BACK, "BackSpace", "Backspace"},
	{VK_CAPITAL, "CapsLock", "Caps Lock"}, {VK_LSHIFT, "LeftShift", "Shift links"}, {VK_RSHIFT, "RightShift", "Shift rechts"},
	{VK_LCONTROL, "LeftControl", "Strg links"}, {VK_RCONTROL, "RightControl", "Strg rechts"}, {VK_LMENU, "LeftAlt", "Alt links"}, {VK_RMENU, "RightAlt", "Alt rechts"},
	{VK_LEFT, "Left", "Pfeil links"}, {VK_RIGHT, "Right", "Pfeil rechts"}, {VK_UP, "Up", "Pfeil hoch"}, {VK_DOWN, "Down", "Pfeil runter"},
	{VK_INSERT, "Insert", "Einfg"}, {VK_DELETE, "Delete", "Entf"}, {VK_HOME, "Home", "Pos1"}, {VK_END, "End", "Ende"},
	{VK_PRIOR, "PageUp", "Bild hoch"}, {VK_NEXT, "PageDown", "Bild runter"},
	{VK_NUMPAD0, "NumPadZero", "Num 0"}, {VK_NUMPAD1, "NumPadOne", "Num 1"}, {VK_NUMPAD2, "NumPadTwo", "Num 2"}, {VK_NUMPAD3, "NumPadThree", "Num 3"},
	{VK_NUMPAD4, "NumPadFour", "Num 4"}, {VK_NUMPAD5, "NumPadFive", "Num 5"}, {VK_NUMPAD6, "NumPadSix", "Num 6"}, {VK_NUMPAD7, "NumPadSeven", "Num 7"},
	{VK_NUMPAD8, "NumPadEight", "Num 8"}, {VK_NUMPAD9, "NumPadNine", "Num 9"},
	{VK_MULTIPLY, "Multiply", "Num *"}, {VK_ADD, "Add", "Num +"}, {VK_SUBTRACT, "Subtract", "Num -"}, {VK_DECIMAL, "Decimal", "Num ,"}, {VK_DIVIDE, "Divide", "Num /"},
	{VK_OEM_1, "Semicolon", "\xC3\x9C"}, {VK_OEM_PLUS, "Equals", "+"}, {VK_OEM_COMMA, "Comma", ","}, {VK_OEM_MINUS, "Hyphen", "-"}, {VK_OEM_PERIOD, "Period", "."},
	{VK_OEM_2, "Slash", "#"}, {VK_OEM_3, "Tilde", "\xC3\x96"}, {VK_OEM_4, "LeftBracket", "\xC3\x9F"}, {VK_OEM_5, "Backslash", "^"}, {VK_OEM_6, "RightBracket", "\xC2\xB4"},
	{VK_OEM_7, "Apostrophe", "\xC3\x84"},
	{VK_LBUTTON, "LeftMouseButton", "Linke Maustaste"}, {VK_RBUTTON, "RightMouseButton", "Rechte Maustaste"}, {VK_MBUTTON, "MiddleMouseButton", "Mittlere Maustaste"},
	{VK_XBUTTON1, "ThumbMouseButton", "Maustaste 4"}, {VK_XBUTTON2, "ThumbMouseButton2", "Maustaste 5"},
	{0, "MouseScrollUp", "Mausrad hoch"}, {0, "MouseScrollDown", "Mausrad runter"},
};

static const FKeyName* FindKeyByUEName(const std::string& Name);

bool KBMMenu::IsKeyboardMouseKey(const std::string& UEName)
{
	return FindKeyByUEName(UEName) != nullptr;
}

static const FKeyName* FindKeyByUEName(const std::string& Name)
{
	for (const FKeyName& Key : KeyNames)
	{
		if (_stricmp(Key.UEName, Name.c_str()) == 0) return &Key;
	}
	return nullptr;
}

static const FKeyName* FindKeyByVirtualKey(UINT VirtualKey)
{
	if (VirtualKey == 0) return nullptr;

	for (const FKeyName& Key : KeyNames)
	{
		if (Key.VirtualKey == VirtualKey) return &Key;
	}
	return nullptr;
}

static const char* KeyDisplayName(const std::string& UEName)
{
	const FKeyName* Key = FindKeyByUEName(UEName);
	return Key ? Key->DisplayName : UEName.c_str();
}

// -- Mapping names --

struct FMappingLabel
{
	const char* Name;
	int			ScaleSign; // 0 = any (actions), 1/-1 = axis direction
	const char* Label;
};

static constexpr FMappingLabel MappingLabels[] =
{
	{"MoveForward", 1, "Vorw\xC3\xA4rts"},
	{"MoveForward", -1, "R\xC3\xBC" "ckw\xC3\xA4rts"},
	{"MoveRight", -1, "Links"},
	{"MoveRight", 1, "Rechts"},
	{"TurnRate", -1, "Kamera links"},
	{"TurnRate", 1, "Kamera rechts"},
	{"LookUpRate", -1, "Kamera hoch"},
	{"LookUpRate", 1, "Kamera runter"},
	{"Jump", 0, "Springen"},
	{"Crouch", 0, "Ducken"},
	{"Interact", 0, "Interagieren"},
	{"Emote", 0, "Emote"},
	{"Map", 0, "Karte"},
	{"L1", 0, "F\xC3\xA4higkeit L1"},
	{"L2", 0, "F\xC3\xA4higkeit L2"},
	{"L3", 0, "F\xC3\xA4higkeit L3"},
	{"R1", 0, "F\xC3\xA4higkeit R1"},
	{"R2", 0, "F\xC3\xA4higkeit R2"},
	{"R3", 0, "F\xC3\xA4higkeit R3"},
	{"Shoot", 0, "Schie\xC3\x9F" "en"},
	{"UI_Up", 0, "Men\xC3\xBC hoch"},
	{"UI_Down", 0, "Men\xC3\xBC runter"},
	{"UI_Left", 0, "Men\xC3\xBC links"},
	{"UI_Right", 0, "Men\xC3\xBC rechts"},
	{"UI_Decide", 0, "Men\xC3\xBC best\xC3\xA4tigen"},
	{"UI_Cancel", 0, "Men\xC3\xBC zur\xC3\xBC" "ck"},
};

static std::string MappingLabel(const std::string& Name, float Scale)
{
	const int Sign = Scale > 0.0f ? 1 : -1;

	for (const FMappingLabel& Label : MappingLabels)
	{
		if (_stricmp(Label.Name, Name.c_str()) == 0 && (Label.ScaleSign == 0 || Label.ScaleSign == Sign)) return Label.Label;
	}

	return Name;
}

// -- Shared state --

struct FBindingRow
{
	bool		bAxis;
	std::string Name;
	float		Scale;
	std::string Key;
};

struct FRemap
{
	bool		bAxis;
	std::string Name;
	std::string DefaultKey;
	std::string NewKey;
};

static std::mutex						SharedMutex{};		// Guards ImGui, Rows and Requests (game thread <-> render thread)
static std::vector<FBindingRow>			Rows{};
static std::vector<std::pair<FBindingRow, std::string>> Requests{};	// Row to change, new key
static bool								bResetRequested{false};

static std::vector<FRemap>				Remaps{};			// Game thread only
static bool								bRemapsLoaded{false};

static std::atomic<bool>				bOpen{false};
static std::atomic<bool>				bToggleRequested{false};
static std::atomic<int>					CaptureRow{-1};		// Row waiting for a key press
static std::atomic<const FKeyName*>		CapturedKey{nullptr};
static std::atomic<bool>				bCaptureCancelled{false};

static HWND								GameWindow{nullptr};
static WNDPROC							OriginalWndProc{nullptr};
static Decl::Present					OriginalPresent{nullptr};
static Decl::ResizeBuffers				OriginalResizeBuffers{nullptr};
static ID3D11Device*					Device{nullptr};
static ID3D11DeviceContext*				Context{nullptr};
static ID3D11RenderTargetView*			RenderTarget{nullptr};
static bool								bImGuiReady{false};
static ULONGLONG							HintUntil{0};		// GetTickCount64 until which the "F1" hint is shown

bool KBMMenu::IsOpen()
{
	return bOpen;
}

// -- Bindings (game thread) --

static void LoadRemaps()
{
	bRemapsLoaded = true;

	std::vector<wchar_t> Buffer(32768, 0);
	const DWORD Size = GetPrivateProfileSectionW(L"Bindings", Buffer.data(), (DWORD)Buffer.size(), MouseLook::SettingsPath().c_str());

	for (const wchar_t* Entry = Buffer.data(); Entry < Buffer.data() + Size && *Entry; Entry += wcslen(Entry) + 1)
	{
		const std::wstring Line(Entry);
		const size_t A = Line.find(L'|'), B = Line.find(L'|', A + 1), Eq = Line.find(L'=', B + 1);
		if (A == std::wstring::npos || B == std::wstring::npos || Eq == std::wstring::npos) continue;

		auto Narrow = [](const std::wstring& W) { return std::string(W.begin(), W.end()); };

		FRemap Remap{Line.substr(0, A) == L"Axis", Narrow(Line.substr(A + 1, B - A - 1)), Narrow(Line.substr(B + 1, Eq - B - 1)), Narrow(Line.substr(Eq + 1))};
		if (!Remap.Name.empty() && !Remap.DefaultKey.empty() && !Remap.NewKey.empty()) Remaps.push_back(Remap);
	}

	Global::LogA("KBMMenu", std::format("Loaded {} key rebinds.", Remaps.size()));
}

static void SaveRemaps()
{
	std::wstring Section{};

	for (const FRemap& Remap : Remaps)
	{
		const std::string Line = std::format("{}|{}|{}={}", Remap.bAxis ? "Axis" : "Action", Remap.Name, Remap.DefaultKey, Remap.NewKey);
		Section += std::wstring(Line.begin(), Line.end());
		Section.push_back(L'\0');
	}
	Section.push_back(L'\0');

	WritePrivateProfileSectionW(L"Bindings", Section.c_str(), MouseLook::SettingsPath().c_str());
}

static void SetKey(SDK::FKey& Key, const std::string& NewName)
{
	Key.KeyName = FName::NAME_FindOrAdd(NewName.c_str());

	// Drops the cached TSharedPtr<FKeyDetails>, it gets looked up again for the new name. (The old reference is intentionally leaked, key details are static.)
	memset(Key.Pad_8, 0, sizeof(Key.Pad_8));
}

static void RebuildKeyMaps(SDK::UPlayerInput* PlayerInput)
{
	const uintptr_t Base = reinterpret_cast<uintptr_t>(PlayerInput);

	Global::Call<Decl::MapReset>(Global::PB(OFF::ActionKeyMapReset))(reinterpret_cast<void*>(Base + OFF::PlayerInputActionKeyMap));
	Global::Call<Decl::MapReset>(Global::PB(OFF::AxisKeyMapReset))(reinterpret_cast<void*>(Base + OFF::PlayerInputAxisKeyMap));
	*reinterpret_cast<unsigned char*>(Base + OFF::PlayerInputKeyMapsBuilt) &= ~1;
}

template <typename Callback>
static void ForEachMapping(SDK::UPlayerInput* PlayerInput, Callback Func)
{
	const uintptr_t Base = reinterpret_cast<uintptr_t>(PlayerInput);

	auto& Actions = *reinterpret_cast<FRawArray<SDK::FInputActionKeyMapping>*>(Base + OFF::PlayerInputActionMappings);
	auto& Axes = *reinterpret_cast<FRawArray<SDK::FInputAxisKeyMapping>*>(Base + OFF::PlayerInputAxisMappings);

	for (int32_t i{0}; i < Actions.Num; ++i) Func(false, Actions.Data[i].ActionName, 0.0f, Actions.Data[i].Key);
	for (int32_t i{0}; i < Axes.Num; ++i) Func(true, Axes.Data[i].AxisName, Axes.Data[i].Scale, Axes.Data[i].Key);
}

static void ApplyRemaps(SDK::UPlayerInput* PlayerInput)
{
	ForEachMapping(PlayerInput, [](bool bAxis, SDK::FName& Name, float, SDK::FKey& Key)
	{
		const std::string StrName = Name.ToString(), StrKey = Key.KeyName.ToString();

		for (const FRemap& Remap : Remaps)
		{
			if (Remap.bAxis == bAxis && _stricmp(Remap.Name.c_str(), StrName.c_str()) == 0 && _stricmp(Remap.DefaultKey.c_str(), StrKey.c_str()) == 0)
			{
				SetKey(Key, Remap.NewKey);
				break;
			}
		}
	});
}

static void RefreshRows(SDK::UPlayerInput* PlayerInput)
{
	std::vector<FBindingRow> NewRows{};

	ForEachMapping(PlayerInput, [&NewRows](bool bAxis, SDK::FName& Name, float Scale, SDK::FKey& Key)
	{
		const std::string StrKey = Key.KeyName.ToString();
		if (!FindKeyByUEName(StrKey)) return; // Only keyboard & mouse keys

		NewRows.push_back({bAxis, Name.ToString(), Scale, StrKey});
	});

	std::lock_guard Lock(SharedMutex);
	Rows = std::move(NewRows);
}

static void ChangeBinding(SDK::UPlayerInput* PlayerInput, const FBindingRow& Row, const std::string& NewKey)
{
	bool bChanged{false};

	ForEachMapping(PlayerInput, [&](bool bAxis, SDK::FName& Name, float Scale, SDK::FKey& Key)
	{
		if (bChanged || bAxis != Row.bAxis || (bAxis && Scale != Row.Scale)) return;
		if (_stricmp(Name.ToString().c_str(), Row.Name.c_str()) != 0 || _stricmp(Key.KeyName.ToString().c_str(), Row.Key.c_str()) != 0) return;

		SetKey(Key, NewKey);
		bChanged = true;
	});

	if (!bChanged) return;

	// Keeps the remap keyed on the default key so it can be applied to freshly created mappings.
	auto Existing = std::find_if(Remaps.begin(), Remaps.end(), [&Row](const FRemap& Remap)
	{
		return Remap.bAxis == Row.bAxis && _stricmp(Remap.Name.c_str(), Row.Name.c_str()) == 0 && _stricmp(Remap.NewKey.c_str(), Row.Key.c_str()) == 0;
	});

	if (Existing != Remaps.end())
	{
		Existing->NewKey = NewKey;
		if (_stricmp(Existing->DefaultKey.c_str(), NewKey.c_str()) == 0) Remaps.erase(Existing);
	}
	else Remaps.push_back({Row.bAxis, Row.Name, Row.Key, NewKey});

	SaveRemaps();
	Global::LogA("KBMMenu", std::format("Rebound [{}] {} -> {}", Row.Name, Row.Key, NewKey));
}

static void ResetBindings(SDK::UPlayerInput* PlayerInput)
{
	ForEachMapping(PlayerInput, [](bool bAxis, SDK::FName& Name, float, SDK::FKey& Key)
	{
		const std::string StrName = Name.ToString(), StrKey = Key.KeyName.ToString();

		for (const FRemap& Remap : Remaps)
		{
			if (Remap.bAxis == bAxis && _stricmp(Remap.Name.c_str(), StrName.c_str()) == 0 && _stricmp(Remap.NewKey.c_str(), StrKey.c_str()) == 0)
			{
				SetKey(Key, Remap.DefaultKey);
				break;
			}
		}
	});

	Remaps.clear();
	SaveRemaps();
}

// -- D3D11 / Window (render thread & game thread) --

static void SetOpen(bool bNewOpen);

static LRESULT CALLBACK WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	const bool bKeyDown = Msg == WM_KEYDOWN || Msg == WM_SYSKEYDOWN;

	if (bKeyDown || Msg == WM_LBUTTONDOWN || Msg == WM_RBUTTONDOWN || Msg == WM_MBUTTONDOWN || Msg == WM_XBUTTONDOWN || Msg == WM_MOUSEWHEEL || Msg == WM_INPUT)
	{
		KBMIcons::NotifyKeyboardMouseInput();
	}

	if (bKeyDown && wParam == VK_F1 && !(lParam & (1 << 30)))
	{
		bToggleRequested = true;
		return 0;
	}

	if (!bOpen) return CallWindowProcW(OriginalWndProc, hWnd, Msg, wParam, lParam);

	// Waiting for a new key
	if (CaptureRow >= 0)
	{
		UINT VirtualKey{0};
		const FKeyName* Wheel{nullptr};

		if (bKeyDown)
		{
			VirtualKey = (UINT)wParam;
			const UINT ScanCode = (lParam >> 16) & 0xFF;
			const bool bExtended = (lParam >> 24) & 1;

			if (VirtualKey == VK_SHIFT) VirtualKey = MapVirtualKeyW(ScanCode, MAPVK_VSC_TO_VK_EX);
			else if (VirtualKey == VK_CONTROL) VirtualKey = bExtended ? VK_RCONTROL : VK_LCONTROL;
			else if (VirtualKey == VK_MENU) VirtualKey = bExtended ? VK_RMENU : VK_LMENU;

			if (VirtualKey == VK_ESCAPE)
			{
				bCaptureCancelled = true;
				return 0;
			}
		}
		else if (Msg == WM_LBUTTONDOWN) VirtualKey = VK_LBUTTON;
		else if (Msg == WM_RBUTTONDOWN) VirtualKey = VK_RBUTTON;
		else if (Msg == WM_MBUTTONDOWN) VirtualKey = VK_MBUTTON;
		else if (Msg == WM_XBUTTONDOWN) VirtualKey = GET_XBUTTON_WPARAM(wParam) == XBUTTON1 ? VK_XBUTTON1 : VK_XBUTTON2;
		else if (Msg == WM_MOUSEWHEEL) Wheel = FindKeyByUEName(GET_WHEEL_DELTA_WPARAM(wParam) > 0 ? "MouseScrollUp" : "MouseScrollDown");

		if (const FKeyName* Key = Wheel ? Wheel : FindKeyByVirtualKey(VirtualKey))
		{
			CapturedKey = Key;
			return 0;
		}
	}

	{
		std::lock_guard Lock(SharedMutex);
		if (bImGuiReady) ImGui_ImplWin32_WndProcHandler(hWnd, Msg, wParam, lParam);
	}

	// The game keeps receiving key/button releases so nothing gets stuck, everything else is eaten by the menu.
	switch (Msg)
	{
	case WM_INPUT:
		return DefWindowProcW(hWnd, Msg, wParam, lParam);

	case WM_KEYDOWN: case WM_SYSKEYDOWN: case WM_CHAR: case WM_SYSCHAR:
	case WM_MOUSEMOVE: case WM_MOUSEWHEEL: case WM_MOUSEHWHEEL:
	case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK: case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK:
	case WM_MBUTTONDOWN: case WM_MBUTTONDBLCLK: case WM_XBUTTONDOWN: case WM_XBUTTONDBLCLK:
		return 0;
	}

	return CallWindowProcW(OriginalWndProc, hWnd, Msg, wParam, lParam);
}

static void CreateRenderTarget(IDXGISwapChain* SwapChain)
{
	ID3D11Texture2D* BackBuffer{nullptr};
	if (SUCCEEDED(SwapChain->GetBuffer(0, IID_PPV_ARGS(&BackBuffer))) && BackBuffer)
	{
		Device->CreateRenderTargetView(BackBuffer, nullptr, &RenderTarget);
		BackBuffer->Release();
	}
}

static bool InitImGui(IDXGISwapChain* SwapChain)
{
	if (FAILED(SwapChain->GetDevice(IID_PPV_ARGS(&Device))) || !Device) return false;
	Device->GetImmediateContext(&Context);

	DXGI_SWAP_CHAIN_DESC Desc{};
	SwapChain->GetDesc(&Desc);
	GameWindow = Desc.OutputWindow;

	IMGUI_CHECKVERSION();
	ImGui::CreateContext();

	ImGuiIO& IO = ImGui::GetIO();
	IO.IniFilename = nullptr;
	IO.LogFilename = nullptr;
	IO.MouseDrawCursor = true;

	// Segoe UI has every glyph the German labels need, the built-in font is the fallback.
	if (!IO.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\segoeui.ttf", 20.0f, nullptr, IO.Fonts->GetGlyphRangesDefault())) IO.Fonts->AddFontDefault();

	ImGui::StyleColorsDark();
	ImGuiStyle& Style = ImGui::GetStyle();
	Style.WindowRounding = 8.0f;
	Style.FrameRounding = 4.0f;
	Style.WindowPadding = ImVec2(14, 12);
	Style.Colors[ImGuiCol_WindowBg] = ImVec4(0.08f, 0.06f, 0.11f, 0.94f);
	Style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.42f, 0.18f, 0.55f, 1.0f);
	Style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.85f, 0.65f, 0.15f, 1.0f);
	Style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(1.0f, 0.78f, 0.2f, 1.0f);
	Style.Colors[ImGuiCol_CheckMark] = ImVec4(1.0f, 0.78f, 0.2f, 1.0f);
	Style.Colors[ImGuiCol_Button] = ImVec4(0.35f, 0.16f, 0.46f, 1.0f);
	Style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.48f, 0.23f, 0.62f, 1.0f);
	Style.Colors[ImGuiCol_Header] = ImVec4(0.35f, 0.16f, 0.46f, 1.0f);

	ImGui_ImplWin32_Init(GameWindow);
	ImGui_ImplDX11_Init(Device, Context);

	OriginalWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtrW(GameWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));

	HintUntil = GetTickCount64() + 30000;

	Global::LogA("KBMMenu", "ImGui overlay initialized, press F1 in game to open the keyboard & mouse settings.");
	return true;
}

static void DrawMenu()
{
	ImGui::SetNextWindowSize(ImVec2(560, 640), ImGuiCond_FirstUseEver);
	ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_FirstUseEver, ImVec2(0.5f, 0.5f));

	bool bWindowOpen{true};
	if (!ImGui::Begin("Maus & Tastatur  (F1)", &bWindowOpen, ImGuiWindowFlags_NoCollapse))
	{
		ImGui::End();
		return;
	}
	if (!bWindowOpen) bToggleRequested = true;

	MouseLook::FSettings& Settings = MouseLook::Settings;

	ImGui::SeparatorText("Maus");

	ImGui::SliderFloat("Sensitivit\xC3\xA4t", &Settings.MouseSensitivity, 0.05f, 5.0f, "%.2f", ImGuiSliderFlags_Logarithmic);
	if (ImGui::IsItemDeactivatedAfterEdit()) MouseLook::SaveSettings();

	if (ImGui::Checkbox("Y-Achse invertieren", &Settings.bInvertMouseY)) MouseLook::SaveSettings();

	ImGui::SeparatorText("Controller & Pfeiltasten");

	ImGui::SliderFloat("Kamera-Geschwindigkeit", &Settings.LookSpeed, 0.1f, 3.0f, "%.2f");
	if (ImGui::IsItemDeactivatedAfterEdit()) MouseLook::SaveSettings();

	ImGui::SeparatorText("Tastenbelegung");

	const int Capturing = CaptureRow;
	if (Capturing >= 0) ImGui::TextColored(ImVec4(1.0f, 0.78f, 0.2f, 1.0f), "Neue Taste dr\xC3\xBC" "cken ... (Esc = abbrechen)");
	else ImGui::TextDisabled("Auf eine Taste klicken, um sie neu zu belegen.");

	if (ImGui::BeginTable("Bindings", 2, ImGuiTableFlags_RowBg | ImGuiTableFlags_BordersInnerH | ImGuiTableFlags_ScrollY, ImVec2(0, ImGui::GetContentRegionAvail().y - 44)))
	{
		ImGui::TableSetupColumn("Aktion", ImGuiTableColumnFlags_WidthStretch);
		ImGui::TableSetupColumn("Taste", ImGuiTableColumnFlags_WidthFixed, 200.0f);
		ImGui::TableSetupScrollFreeze(0, 1);
		ImGui::TableHeadersRow();

		for (int i{0}; i < (int)Rows.size(); ++i)
		{
			const FBindingRow& Row = Rows[i];

			ImGui::TableNextRow();
			ImGui::TableSetColumnIndex(0);
			ImGui::AlignTextToFramePadding();
			ImGui::TextUnformatted(MappingLabel(Row.Name, Row.Scale).c_str());

			ImGui::TableSetColumnIndex(1);
			ImGui::PushID(i);
			const char* Label = Capturing == i ? "..." : KeyDisplayName(Row.Key);
			if (ImGui::Button(Label, ImVec2(-FLT_MIN, 0)) && Capturing < 0)
			{
				CapturedKey = nullptr;
				bCaptureCancelled = false;
				CaptureRow = i;
			}
			ImGui::PopID();
		}

		ImGui::EndTable();
	}

	if (ImGui::Button("Alles zur\xC3\xBC" "cksetzen")) bResetRequested = true;
	ImGui::SameLine();
	ImGui::TextDisabled("Gespeichert in AJBInput.ini");

	ImGui::End();
}

static void DrawHint()
{
	const ImVec2 Display = ImGui::GetIO().DisplaySize;
	ImGui::SetNextWindowPos(ImVec2(24.0f, Display.y - 24.0f), ImGuiCond_Always, ImVec2(0.0f, 1.0f));
	ImGui::SetNextWindowBgAlpha(0.75f);
	ImGui::Begin("##KBMHint", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoNav);
	ImGui::TextColored(ImVec4(1.0f, 0.78f, 0.2f, 1.0f), "F1");
	ImGui::SameLine();
	ImGui::TextUnformatted("Maus & Tastatur Einstellungen");
	ImGui::End();
}

static HRESULT __stdcall PresentHook(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags)
{
	static bool bTriedInit{false};
	if (!bTriedInit)
	{
		bTriedInit = true;
		std::lock_guard Lock(SharedMutex);
		bImGuiReady = InitImGui(SwapChain);
	}

	const bool bShowHint = !bOpen && GetTickCount64() < HintUntil;

	if (bImGuiReady && (bOpen || bShowHint))
	{
		std::lock_guard Lock(SharedMutex);

		// A key was pressed for the selected row, hand it over to the game thread.
		if (const int Row = CaptureRow; Row >= 0)
		{
			if (const FKeyName* Key = CapturedKey.exchange(nullptr))
			{
				if (Row < (int)Rows.size()) Requests.push_back({Rows[Row], Key->UEName});
				CaptureRow = -1;
			}
			else if (bCaptureCancelled.exchange(false)) CaptureRow = -1;
		}

		if (!RenderTarget) CreateRenderTarget(SwapChain);

		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		ImGui::GetIO().MouseDrawCursor = bOpen;
		if (bOpen) DrawMenu();
		else DrawHint();
		ImGui::Render();

		Context->OMSetRenderTargets(1, &RenderTarget, nullptr);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}

	return OriginalPresent(SwapChain, SyncInterval, Flags);
}

static HRESULT __stdcall ResizeBuffersHook(IDXGISwapChain* SwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	{
		std::lock_guard Lock(SharedMutex);
		if (RenderTarget)
		{
			RenderTarget->Release();
			RenderTarget = nullptr;
		}
	}

	return OriginalResizeBuffers(SwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

// Gets IDXGISwapChain::Present/ResizeBuffers from a throwaway swapchain, the game's own one shares the same vtable.
static bool HookSwapChain()
{
	HMODULE D3D11 = GetModuleHandleW(L"d3d11.dll");
	if (!D3D11) return false;

	auto CreateDeviceAndSwapChain = reinterpret_cast<PFN_D3D11_CREATE_DEVICE_AND_SWAP_CHAIN>(GetProcAddress(D3D11, "D3D11CreateDeviceAndSwapChain"));
	if (!CreateDeviceAndSwapChain) return false;

	WNDCLASSEXW WindowClass{sizeof(WNDCLASSEXW), CS_CLASSDC, DefWindowProcW, 0, 0, GetModuleHandleW(nullptr), nullptr, nullptr, nullptr, nullptr, L"AJBKBMDummy", nullptr};
	RegisterClassExW(&WindowClass);
	HWND DummyWindow = CreateWindowW(WindowClass.lpszClassName, L"", WS_OVERLAPPEDWINDOW, 0, 0, 64, 64, nullptr, nullptr, WindowClass.hInstance, nullptr);

	DXGI_SWAP_CHAIN_DESC Desc{};
	Desc.BufferCount = 1;
	Desc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	Desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	Desc.OutputWindow = DummyWindow;
	Desc.SampleDesc.Count = 1;
	Desc.Windowed = TRUE;
	Desc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	IDXGISwapChain* SwapChain{nullptr};
	ID3D11Device* DummyDevice{nullptr};
	ID3D11DeviceContext* DummyContext{nullptr};

	bool bHooked{false};
	if (SUCCEEDED(CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0, nullptr, 0, D3D11_SDK_VERSION, &Desc, &SwapChain, &DummyDevice, nullptr, &DummyContext)))
	{
		void** VTable = *reinterpret_cast<void***>(SwapChain);

		bHooked = MH_CreateHook(VTable[8], PresentHook, reinterpret_cast<void**>(&OriginalPresent)) == MH_OK && MH_EnableHook(VTable[8]) == MH_OK
			&& MH_CreateHook(VTable[13], ResizeBuffersHook, reinterpret_cast<void**>(&OriginalResizeBuffers)) == MH_OK && MH_EnableHook(VTable[13]) == MH_OK;

		SwapChain->Release();
		DummyContext->Release();
		DummyDevice->Release();
	}

	DestroyWindow(DummyWindow);
	UnregisterClassW(WindowClass.lpszClassName, WindowClass.hInstance);

	Global::LogA("KBMMenu", bHooked ? "Hooked IDXGISwapChain::Present." : "Failed to hook IDXGISwapChain::Present, the overlay is unavailable.");
	return bHooked;
}

// -- Game thread --

static SDK::APlayerController* LocalPlayerController()
{
	SDK::UWorld* World = Pointers::UWorld();
	if (!World || !World->OwningGameInstance || World->OwningGameInstance->LocalPlayers.Num() < 1) return nullptr;

	return Pointers::Player();
}

static void SetOpen(bool bNewOpen)
{
	SDK::APlayerController* PC = LocalPlayerController();

	static bool bCursorWasShown{false};

	if (bNewOpen)
	{
		if (PC)
		{
			bCursorWasShown = PC->bShowMouseCursor;
			PC->bShowMouseCursor = true;
			OFF::SetInputMode_GameAndUIEx.Call<Decl::SetInputModeGameAndUI>()(PC, nullptr, 0 /* DoNotLock */, false);
		}
		ClipCursor(nullptr);
	}
	else
	{
		CaptureRow = -1;

		if (PC && !bCursorWasShown)
		{
			PC->bShowMouseCursor = false;
			OFF::SetInputGameOnly.Call<Decl::SetInputModeGameOnly>()(PC);
		}
	}

	bOpen = bNewOpen;

	size_t RowCount{0};
	{
		std::lock_guard Lock(SharedMutex);
		RowCount = Rows.size();
	}
	Global::LogA("KBMMenu", std::format("Menu {} ({} key bindings listed).", bNewOpen ? "opened" : "closed", RowCount));
}

void KBMMenu::GameThreadTick()
{
	static bool bTriedHook{false};
	if (!bTriedHook && GEngine.GetPointer() && GEngine->GameViewport)
	{
		bTriedHook = true;
		HookSwapChain();
	}

	if (!bRemapsLoaded) LoadRemaps();

	KBMIcons::GameThreadTick();

	if (bToggleRequested.exchange(false)) SetOpen(!bOpen);

	SDK::APlayerController* PC = LocalPlayerController();
	if (!PC || !PC->PlayerInput) return;

	SDK::UPlayerInput* PlayerInput = PC->PlayerInput;
	const uintptr_t Base = reinterpret_cast<uintptr_t>(PlayerInput);

	// Re-applies the rebinds whenever a new PlayerInput appears or mappings get added (map changes, SetupInputComponent, ...)
	static uintptr_t LastSignature{0};
	const uintptr_t Signature = Base ^ (static_cast<uintptr_t>(reinterpret_cast<FRawArray<char>*>(Base + OFF::PlayerInputActionMappings)->Num) << 48) ^ (static_cast<uintptr_t>(reinterpret_cast<FRawArray<char>*>(Base + OFF::PlayerInputAxisMappings)->Num) << 32);

	bool bRebuild{false};

	if (Signature != LastSignature)
	{
		LastSignature = Signature;
		if (!Remaps.empty()) ApplyRemaps(PlayerInput);
		bRebuild = true;
	}

	std::vector<std::pair<FBindingRow, std::string>> Pending{};
	bool bReset{false};
	{
		std::lock_guard Lock(SharedMutex);
		Pending.swap(Requests);
		bReset = bResetRequested;
		bResetRequested = false;
	}

	for (const auto& [Row, NewKey] : Pending)
	{
		ChangeBinding(PlayerInput, Row, NewKey);
		bRebuild = true;
	}

	if (bReset)
	{
		ResetBindings(PlayerInput);
		bRebuild = true;
	}

	if (bRebuild)
	{
		RebuildKeyMaps(PlayerInput);
		RefreshRows(PlayerInput);
		KBMIcons::RefreshAll();
	}
}

void __fastcall KBMMenu::EngineTick(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode)
{
	GameThreadTick();
	OFF::KBMEngineTick.VerifyFC<Decl::EngineTick>()(This, DeltaSeconds, bIdleMode);
}
