#include "KBMIcons.h"
#include "KBMMenu.h"
#include "../../Global.hpp"
#include "../../Offsets.h"
#include "../../Tools/Pointers.h"

#include "../../../Dumper-7/SDK/Engine_classes.hpp"
#include "../../../Dumper-7/SDK/UMG_classes.hpp"
#include "../../../Dumper-7/SDK/AJB_classes.hpp"
#include "../../../Dumper-7/SDK/BPF_GameIconUtil_classes.hpp"
#include "../../../MinHook/MinHook.h"

#include <Xinput.h>
#include <unordered_map>
#include <vector>
#include <format>

using namespace A8CL;

namespace Decl
{
	typedef void(__fastcall* Exec)(void* Context, void* Stack, void* Result);
	typedef DWORD(WINAPI* XInputGetState)(DWORD UserIndex, XINPUT_STATE* State);
}

constexpr int PadIconCount = static_cast<int>(SDK::EAJBPadIconType::EAJBPadIconType_MAX);

// UE 4.20 FUObjectItem::Flags, EInternalObjectFlags::RootSet
constexpr int32_t RootSetFlag = 1 << 30;

struct FTrackedImage
{
	SDK::UImage*		Image;
	int32_t				Index;		// GObjects index, used to make sure the widget still exists
	SDK::UTexture2D*	PadTexture;
	int					PadType;
};

static std::unordered_map<SDK::UObject*, int>				PadTextures{};		// Pad texture -> EAJBPadIconType
static std::unordered_map<std::string, SDK::UTexture2D*>	KeyTextures{};		// EKeys name -> loaded icon (nullptr = missing)
static std::vector<FTrackedImage>							Tracked{};

static Decl::Exec			OriginalSetBrushFromTexture{nullptr};
static Decl::Exec			OriginalSetBrush{nullptr};
static Decl::XInputGetState	GetPadState{nullptr};

static bool					bInitialized{false};
static bool					bPadTexturesBuilt{false};
static bool					bUseKeyboardIcons{true};
static bool					bKeyboardInputPending{false};
static bool					bSwapping{false};
static DWORD				LastPadPacket{0};

// -- Helpers --

static bool IsAlive(const FTrackedImage& Entry)
{
	return SDK::UObject::GObjects->GetByIndex(Entry.Index) == Entry.Image;
}

static void AddToRoot(SDK::UObject* Object)
{
	auto* Objects = SDK::UObject::GObjects.operator->();
	const int32_t Index = Object->Index;

	auto* Chunk = reinterpret_cast<unsigned char*>(Objects->GetDecrytedObjPtr()[Index / SDK::TUObjectArray::ElementsPerChunk]);
	auto* Item = Chunk + (Index % SDK::TUObjectArray::ElementsPerChunk) * sizeof(SDK::FUObjectItem);

	*reinterpret_cast<int32_t*>(Item + 8) |= RootSetFlag;
}

static const std::wstring& IconDirectory()
{
	static std::wstring Directory{};

	if (Directory.empty())
	{
		wchar_t Buffer[MAX_PATH]{0};
		GetModuleFileNameW(nullptr, Buffer, MAX_PATH);

		Directory = Buffer;
		Directory = Directory.substr(0, Directory.find_last_of(L"\\/") + 1) + L"KeyIcons";
	}

	return Directory;
}

static SDK::UTexture2D* KeyTexture(const std::string& KeyName)
{
	if (auto Found = KeyTextures.find(KeyName); Found != KeyTextures.end()) return Found->second;

	const std::wstring WideName(KeyName.begin(), KeyName.end());

	bool bValid{false};
	int32_t Width{0}, Height{0};
	SDK::UTexture2D* Texture = SDK::UAJBUtilityFunctionLibrary::LoadTexture2DFromDisk(SDK::FString(IconDirectory().c_str()), SDK::FString(WideName.c_str()), SDK::EAJBImageFormatType::Png, &bValid, &Width, &Height);

	if (!bValid || !Texture)
	{
		// Some builds expect the full path to the file instead of folder + name.
		const std::wstring FullPath = IconDirectory() + L"\\" + WideName + L".png";
		Texture = SDK::UAJBUtilityFunctionLibrary::LoadTexture2DFromDisk(SDK::FString(FullPath.c_str()), SDK::FString(WideName.c_str()), SDK::EAJBImageFormatType::Png, &bValid, &Width, &Height);
	}

	if (!bValid) Texture = nullptr;
	if (Texture) AddToRoot(Texture);

	Global::LogA("KBMIcons", std::format("{} icon [{}] ({}x{})", Texture ? "Loaded" : "Missing", KeyName, Width, Height));

	KeyTextures[KeyName] = Texture;
	return Texture;
}

// The keyboard/mouse key that is bound to whatever the given pad button does.
static std::string KeyForPadType(int PadType)
{
	using SDK::EAJBPadIconType;

	if (PadType == (int)EAJBPadIconType::StickL) return "_StickL";
	if (PadType == (int)EAJBPadIconType::StickR) return "_StickR";

	SDK::APlayerController* PC = Pointers::Player();
	SDK::UWorld* World = Pointers::UWorld();
	if (!PC || !PC->PlayerInput || !World) return {};

	struct FRawActions { SDK::FInputActionKeyMapping* Data; int32_t Num; int32_t Max; };
	auto& Actions = *reinterpret_cast<FRawActions*>(reinterpret_cast<uintptr_t>(PC->PlayerInput) + OFF::PlayerInputActionMappings);

	// Action names don't change at runtime, so the pad button of each action only has to be looked up once.
	static std::unordered_map<int32_t, int> PadOfAction{};

	for (int32_t i{0}; i < Actions.Num; ++i)
	{
		SDK::FInputActionKeyMapping& Mapping = Actions.Data[i];

		auto Found = PadOfAction.find(Mapping.ActionName.ComparisonIndex);
		if (Found == PadOfAction.end())
		{
			const int Pad = (int)SDK::UAJBUtilityFunctionLibrary::GetAJBInGamePadIconByKeyAction(World, Mapping.ActionName);
			Found = PadOfAction.emplace(Mapping.ActionName.ComparisonIndex, Pad).first;
			Global::LogA("KBMIcons", std::format("Action [{}] uses pad button {}", Mapping.ActionName.ToString(), Pad));
		}

		if (Found->second != PadType) continue;

		const std::string Key = Mapping.Key.KeyName.ToString();
		if (KBMMenu::IsKeyboardMouseKey(Key)) return Key;
	}

	return {};
}

static void SetImageTexture(SDK::UImage* Image, SDK::UTexture2D* Texture)
{
	bSwapping = true;
	Image->SetBrushFromTexture(Texture, false);
	bSwapping = false;
}

static void ApplyToImage(const FTrackedImage& Entry)
{
	SDK::UTexture2D* Wanted = Entry.PadTexture;

	if (bUseKeyboardIcons)
	{
		const std::string Key = KeyForPadType(Entry.PadType);
		if (SDK::UTexture2D* Icon = Key.empty() ? nullptr : KeyTexture(Key)) Wanted = Icon;
	}

	if (Entry.Image->Brush.ResourceObject != Wanted) SetImageTexture(Entry.Image, static_cast<SDK::UTexture2D*>(Wanted));
}

// -- Pad textures --

static void BuildPadTextures()
{
	SDK::UWorld* World = Pointers::UWorld();
	if (!World) return;

	// Plain icons first, the key assign variant can return the texture of another button (e.g. Touch for ButtonUp).
	for (int i{0}; i < PadIconCount; ++i)
	{
		SDK::UTexture2D* Texture{nullptr};
		SDK::UBPF_GameIconUtil_C::GetAJBPadIcon(static_cast<SDK::EAJBPadIconType>(i), World, &Texture);
		if (Texture && !PadTextures.contains(Texture)) PadTextures[Texture] = i;
	}

	for (int i{0}; i < PadIconCount; ++i)
	{
		SDK::UTexture2D* Texture{nullptr};
		SDK::UBPF_GameIconUtil_C::GetAJBPadIcon_KeyAssignConsidering(static_cast<SDK::EAJBPadIconType>(i), World, &Texture);
		if (Texture && !PadTextures.contains(Texture)) PadTextures[Texture] = i;
	}

	bPadTexturesBuilt = !PadTextures.empty();
	Global::LogA("KBMIcons", std::format("Found {} pad icon textures.", PadTextures.size()));

	for (const auto& [Texture, Type] : PadTextures) Global::LogA("KBMIcons", std::format("  [{}] {}", Type, Texture->GetName()));
}

// Runs after the game set a new brush on an image, swaps pad icons for key icons.
static void OnBrushChanged(SDK::UImage* Image)
{
	if (bSwapping || !bPadTexturesBuilt || !Image) return;

	SDK::UObject* Resource = Image->Brush.ResourceObject;

	auto Existing = std::find_if(Tracked.begin(), Tracked.end(), [Image](const FTrackedImage& Entry) { return Entry.Image == Image; });

	auto Pad = Resource ? PadTextures.find(Resource) : PadTextures.end();
	if (Pad == PadTextures.end())
	{
		// Not a pad icon (anymore), stop touching it.
		if (Existing != Tracked.end()) Tracked.erase(Existing);
		return;
	}

	FTrackedImage Entry{Image, Image->Index, static_cast<SDK::UTexture2D*>(Resource), Pad->second};

	if (Existing != Tracked.end()) *Existing = Entry;
	else Tracked.push_back(Entry);

	ApplyToImage(Entry);
}

static void __fastcall ExecSetBrushFromTexture(void* Context, void* Stack, void* Result)
{
	OriginalSetBrushFromTexture(Context, Stack, Result);
	OnBrushChanged(static_cast<SDK::UImage*>(Context));
}

static void __fastcall ExecSetBrush(void* Context, void* Stack, void* Result)
{
	OriginalSetBrush(Context, Stack, Result);
	OnBrushChanged(static_cast<SDK::UImage*>(Context));
}

static bool HookExec(const char* FunctionPath, void* Detour, Decl::Exec* Original)
{
	SDK::UFunction* Function = SDK::UObject::FindObject<SDK::UFunction>(FunctionPath);
	if (!Function || !Function->ExecFunction) return false;

	void* Target = reinterpret_cast<void*>(Function->ExecFunction);
	const bool bHooked = MH_CreateHook(Target, Detour, reinterpret_cast<void**>(Original)) == MH_OK && MH_EnableHook(Target) == MH_OK;

	Global::LogA("KBMIcons", std::format("{} {}", bHooked ? "Hooked" : "Failed to hook", FunctionPath));
	return bHooked;
}

// -- Public --

void KBMIcons::NotifyKeyboardMouseInput()
{
	bKeyboardInputPending = true;
}

void KBMIcons::RefreshAll()
{
	std::erase_if(Tracked, [](const FTrackedImage& Entry) { return !IsAlive(Entry); });
	for (const FTrackedImage& Entry : Tracked) ApplyToImage(Entry);
}

void KBMIcons::GameThreadTick()
{
	if (!bInitialized)
	{
		bInitialized = true;

		HookExec("Function UMG.Image.SetBrushFromTexture", ExecSetBrushFromTexture, &OriginalSetBrushFromTexture);
		HookExec("Function UMG.Image.SetBrush", ExecSetBrush, &OriginalSetBrush);

		if (HMODULE XInput = LoadLibraryW(L"xinput1_4.dll")) GetPadState = reinterpret_cast<Decl::XInputGetState>(GetProcAddress(XInput, "XInputGetState"));
	}

	if (!bPadTexturesBuilt)
	{
		// The icon blueprint library is only usable once a world and its game instance exist.
		static int Attempts{0};
		if (Pointers::Player() && Attempts++ < 5) BuildPadTextures();
		if (!bPadTexturesBuilt) return;
	}

	// Follow the last used device.
	bool bWantKeyboard = bUseKeyboardIcons;

	if (bKeyboardInputPending)
	{
		bKeyboardInputPending = false;
		bWantKeyboard = true;
	}

	if (GetPadState)
	{
		XINPUT_STATE State{};
		if (GetPadState(0, &State) == ERROR_SUCCESS && State.dwPacketNumber != LastPadPacket)
		{
			LastPadPacket = State.dwPacketNumber;

			const XINPUT_GAMEPAD& Pad = State.Gamepad;
			const bool bActive = Pad.wButtons != 0 || Pad.bLeftTrigger > 60 || Pad.bRightTrigger > 60
				|| abs(Pad.sThumbLX) > 12000 || abs(Pad.sThumbLY) > 12000 || abs(Pad.sThumbRX) > 12000 || abs(Pad.sThumbRY) > 12000;

			if (bActive) bWantKeyboard = false;
		}
	}

	if (bWantKeyboard != bUseKeyboardIcons)
	{
		bUseKeyboardIcons = bWantKeyboard;
		Global::LogA("KBMIcons", bUseKeyboardIcons ? "Showing keyboard & mouse icons." : "Showing gamepad icons.");
		RefreshAll();
	}
}
