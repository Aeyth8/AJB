#include "AJB.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../../Version/resource.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/BytePatcher.h"

#include "../CmdArgs/CommandLineArgs.h"

#include "../../Dumper-7/SDK/BP_AJBGameInstance_classes.hpp"
#include "../../Dumper-7/SDK/EngineSettings_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBOutGameProxy_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGameCharacter_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGamePlayerController_classes.hpp"
#include "../../Dumper-7/SDK/FlowState_classes.hpp"
#include "../../Dumper-7/SDK/FlowState_structs.hpp"
#include "../../Dumper-7/SDK/BP_PPV_VSFilter_classes.hpp"

#include "../../Dumper-7/CustomSDK/WBP_OptionsMenu_classes.hpp" // Custom SDK header (NOT GAME NATIVE)

#include <intrin.h>
#include "../../Dumper-7/SDK/WB_Credit_classes.hpp"
#include "../../Dumper-7/SDK/WB_TimeLimitCountDown_classes.hpp"
#include "../../Dumper-7/SDK/WB_PpBuyWindow_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL; using namespace Global; using namespace Pointers;

SDK::UBP_AJBGameInstance_C* AJB::Instance{nullptr};
SDK::UAJBAMSystemSettings* AJB::Settings{nullptr};
SDK::UAJBAMSystemObject* AJB::System{nullptr};
SDK::ABP_AJBOutGameProxy_C* AJB::OutGameProxy{nullptr};
SDK::UAJBVersion* AJB::Version{nullptr};
SDK::UAJBSettings* AJB::AJBSettings{nullptr};

SDK::FName* AJB::GameFlowState{nullptr};

SDK::UClass* AJB::MOD_OptionsMenuClass{nullptr};
SDK::UWBP_OptionsMenu_C* AJB::MOD_OptionsMenu{nullptr};

HMODULE AJB::PCPortLib{0};
HWND AJB::PCPortWindow{0};

__int32* AJB::PlayerPoints{nullptr};
bool* AJB::bDebugInputMode{nullptr};

SDK::UGameMapsSettings* AJB::MapSettings{nullptr};
//SDK::UClass* CoreUObject{nullptr};

// 8 bit to AL register
constexpr BYTE MOV{0xB0};
constexpr BYTE RETN{0xC3};
constexpr BYTE NOP{0x90};

// Forward declaration (I'm lazy)
static bool FlowUtilChangeState(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag);

std::vector<Hooks::HookStructure> StandaloneHooks =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::ConsoleCommand, UFunctions::ConsoleCommand},
	{OFF::Browse, UFunctions::Browse},
	{OFF::Login, UFunctions::Login},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::AJBPreLogin, UFunctions::PreLogin},
	{OFF::InitListen, UFunctions::InitListen},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::IsNonPakFileNameAllowed, UFunctions::IsNonPakFilenameAllowed},
	{OFF::FindFileInPakFiles, UFunctions::FindFileInPakFiles},
	{OFF::ChangeState, FlowUtilChangeState},
	{OFF::ProcessMulticastDelegate, UFunctions::ProcessMulticastDelegate}, // unsure if I'm keeping this
	{OFF::BroadcastDelegate, UFunctions::BroadcastDelegate},
};

A8CL::OFFSET NetID("UAJBNetworkObserver::GetNetID", 0x4ECC80);
A8CL::OFFSET OpenCommand("AAJBOutGameProxy::GetOpenCommand", 0x506DD0);

SDK::FString* __fastcall GetNetID(SDK::UAJBNetworkObserver* This, SDK::FString* OutString)
{
	const static SDK::FString NetID{L"Aeyth8"};
	OFF::CopyString.VerifyFC<UFunctions::Decl::CopyString>()(OutString, const_cast<SDK::FString*>(&NetID));
	
	return OutString;
}

A8CL::OFFSET ExecCharacterNo("UAJBGameInstance::execSetSelectedCharacterNo", 0x549AA0);

static void __fastcall execSetCharNo(SDK::UAJBGameInstance* This, int32 Num)
{
	uintptr_t Caller = (uintptr_t)_ReturnAddress();
	LogA(ExecCharacterNo.GetName(), std::format("[Num]: {} | [Caller Address]: {} / {} ", Num, HexToString(Caller), HexToString(Caller - GBA)));
	ExecCharacterNo.VerifyFC<void(__thiscall*)(SDK::UAJBGameInstance*, int32)>()(This, Num);
}

A8CL::OFFSET CharacterNo("UAJBGameInstance::SetSelectedCharacterNo", 0x485F70);
static void SetCharNo(SDK::UAJBGameInstance* This, int32 Num)
{
	uintptr_t Caller = (uintptr_t)_ReturnAddress();
	LogA(CharacterNo.GetName(), std::format("[Num]: {} | [Caller Address]: {} / {} ", Num, HexToString(Caller), HexToString(Caller - GBA)));
	CharacterNo.VerifyFC<void(__thiscall*)(SDK::UAJBGameInstance*, int32)>()(This, Num);
}


SDK::FString* __fastcall GetOpenCommand(SDK::AAJBOutGameProxy* This, SDK::FString* OutString)
{
	uintptr_t Addressee = (uintptr_t)_ReturnAddress();
	SDK::FString* Return = OpenCommand.VerifyFC<SDK::FString*(__fastcall*)(SDK::AAJBOutGameProxy*, SDK::FString*)>()(This, OutString);

	LogA(OpenCommand.GetName(), std::format("[This]: {} | [OutString]: {} | [Address Caller]: {} / {} ", This->GetFullName(), OutString->IsValid() ? OutString->ToString() : "Null", HexToString(Addressee - GBA), HexToString(Addressee)));

	return Return;
}

A8CL::OFFSET ObjBlueprint("UAJBUtilityFunctionLibrary::NewObjectFromBlueprint", 0x49F080);
SDK::UObject* NewObjectFromBlueprint(SDK::UObject* WorldContextObject, SDK::UClass* InClass)
{
	LogA("NewObjectFromBlueprint", std::format("[WorldContextObject]: {} | [InClass]: {} ", WorldContextObject->GetFullName(), InClass->GetFullName()));
	return ObjBlueprint.VerifyFC<SDK::UObject*(__fastcall*)(SDK::UObject*, SDK::UClass*)>()(WorldContextObject, InClass);
}

static void* GConfigCache{nullptr};
static constexpr const wchar_t* StaticKey{L"SoftwareCursors"};
static const SDK::FString StaticValue{L"SoftwareCursors=((Default, /Game/Aeyth8/Blueprints/WBP_Cursor.WBP_Cursor_C))"};
static constexpr const wchar_t* HighDPI{L"bAllowHighDPIInGameMode"};

A8CL::OFFSET GSetString("FConfigCacheIni::SetString", 0x626330);

static bool __fastcall SetString(void* This, const wchar_t* Section, const wchar_t* Key, SDK::FString& Value, SDK::FString& Filename)
{
	if (!GConfigCache) GConfigCache = This;
	else if (GConfigCache != This) 
	{
		GConfigCache = This;
		LogA("New Cache Address", HexToString(*(uintptr_t*)(This) - GBA));
	}
	static int Count{0};
	if (wcscmp(Key, HighDPI) == 0)
	{
		Count++;

		if (Count == 1)
		{
			/*
			
			Uncomment to unrestrict the GUI size, allowing for bigger screens to resize and feel more like a PC game.

			SDK::UUserInterfaceSettings* Interface{nullptr};

			SDK::UClass* TheClass = Call<SDK::UClass * (__fastcall*)()>(PB(0x1908090))();
			Interface = Call<SDK::UUserInterfaceSettings*(__fastcall*)(SDK::UClass*)>(OFF::CreateDefaultObject.PlusBase())(TheClass);
			LogA("Interface", Interface->GetFullName());
			Call<void(__fastcall*)(SDK::UObject*, SDK::UClass*, const wchar_t*, uint32, SDK::UProperty*)>(PB(0x8066C0))(Interface, TheClass, 0,0,0);*/

			Key = StaticKey;
			Call<UFunctions::Decl::CopyString>(OFF::CopyString.PlusBase())(&Value, const_cast<SDK::FString*>(&StaticValue));
			Call<void(__fastcall*)(void*, bool, SDK::FString&)>(PB(0x620550))(This, true, Value); // FConfigCacheIni::Flush
			/*Key = StaticKey;
			wchar_t* Pointer = const_cast<wchar_t*>(Value.GetDataPtr());
			for (BYTE i{0}; i < 62; ++i)
			{
				if (Pointer)
				{
					*Pointer = StaticValue[i];
				}
			}*/
			// = StaticValue;
		}
		else if (Count == 2)
		{
			wchar_t* Pointer = const_cast<wchar_t*>(Value.GetDataPtr());
			static constexpr const wchar_t* One{L"1"};
			/* Value is already nullptr
			
			if (Pointer) *Pointer = *One;
			++Pointer;
			while (Pointer++ != nullptr)
			{
				*Pointer = 0;
			}*/
		}		
	}

	//LogA("SetString", std::format("[This] {} | [Section]: {} | [Key]: {} | [Value]: {} | [Filename]: {} ", HexToString(*(uintptr_t*)This - GBA), SDK::FString(Section).ToString(), SDK::FString(Key).ToString(), Value.ToString(), Filename.ToString()));
	return GSetString.VerifyFC<bool(__thiscall*)(void*, const wchar_t*, const wchar_t*, SDK::FString&, SDK::FString&)>()(This, Section, Key, Value, Filename);
}

void AJB::Init_Hooks()
{
	constexpr const BYTE Replacement[] = { RETN, NOP };
	constexpr const BYTE ReturnZero[] = {MOV, 00, RETN, NOP};

	if (GBA != 0)
	{
		/*
			Since each call manually unprotects and reprotects a 4kb page, and since the memory regions are so close I should be able to just one and done some of them to be more efficient 
		*/

		BytePatcher::ReplaceBytes(PB(0x2233A0), Replacement); // Retrieves the NBAM Save Data by calling externals from nbamsavdat.dll

		uintptr_t AMActivator_Destroy{PB(0x20E680)}; // Calls AMActivator_Destroy

		DWORD OldProtectionStatus = BytePatcher::GetProtectionStatus(AMActivator_Destroy);
		BytePatcher::SetProtectionStatus(AMActivator_Destroy, 0x3F0, BytePatcher::EXECUTE_READWRITE);

		BYTE Destroy[5]{MOV, 0x00, RETN, NOP, NOP};
		memcpy((void*)AMActivator_Destroy, Destroy, 5); 
		memcpy((void*)(AMActivator_Destroy + 0x60), Replacement, 2); // Calls AMActivator_Create and a bunch of other initialization functions for amactivator.dll

		uintptr_t RequestOneTimeKey{PB(0x20E8D0)}; // Calls AMActivator_RequestOneTimeKey
		for (BYTE i{0}; i < 6; ++i)
		{	
			/*
				Patches:

				AMActivator_RequestOneTimeKey
				AMActivator_RequestSignature
				AMActivator_IsBusy
				AMActivator_GetOneTimeKeyLastStatus
				AMActivator_GetSignatureLastStatus
				AMActivator_GetOneTimeKey
			*/

			memcpy((void*)RequestOneTimeKey, ReturnZero, 4);
			RequestOneTimeKey += 0x20;
		}
		memcpy((void*)RequestOneTimeKey, Replacement, 2); // Calls AMActivator_GetOneTimeKeyExpiration

		uintptr_t GetSignatureGeneration{PB(0x20EA10)};

		for (BYTE i{0}; i < 4; ++i)
		{
			/*
				Patches:

				AMActivator_GetSignatureGeneration
				AMActivator_Restore
				AMActivator_BitLockerLock
				AMActivator_BitLockerUnlock
			*/

			memcpy((void*)GetSignatureGeneration, ReturnZero, 4);
			GetSignatureGeneration += 0x20;
		}

		BytePatcher::SetProtectionStatus(AMActivator_Destroy, 0x3F0, OldProtectionStatus); // Just restoring the old protection after all patches are applied

		BytePatcher::ReplaceBytes(PB(0x223610), {MOV, 0, RETN, NOP, NOP}); // FDrive, I don't have a proper name but it creates a folder on your F:// drive if you have one, it saves data there.
		BytePatcher::ReplaceBytes(PB(0x20FB00), ReturnZero); // Calls AMActivator_Update

		BytePatcher::ReplaceBytes(PB(0x4840B0), Replacement); // UAJBGameInstance::ResetPP
		BytePatcher::ReplaceBytes(PB(0x522CE0), Replacement); // UAJBGameInstance::StartConsumePP
		//BytePatcher::ReplaceBytes(PB(0x507210), {MOV, 01, RETN, NOP, NOP}); // AAJBOutGameProxy::IsTenpoHost
		
		//BytePatcher::ReplaceBytes(PB(0x54D8CE), {MOV, 00, RETN, NOP, NOP, NOP}); // 

		// Completely wipes out the HideCursorCaller and any trace (to be safe)
		BYTE AntiAntiCursor[100]{RETN};
		memset(&AntiAntiCursor[1], NOP, 99);

		BytePatcher::ReplaceBytes(PB(0x4A04A0), AntiAntiCursor); // HideCursorCaller, I don't have a proper name but it spam-hides the cursor like 100 times a second


		//constexpr BYTE NOP5[5]{NOP};
		//BytePatcher::ReplaceBytes(PB(0x13CCB43), NOP5); // AJBGetMaxTickRate, no proper name but it's a wrapper that calls UEngine::GetMaxTickRate and this function enforces a 60fps cap if you set it to uncapped (t.MaxFPS 0)
		//BytePatcher::ReplaceBytes(PB(0x13CCBD8), {NOP, NOP}); ^ Actual patch is this line right here that I am commenting on <----
		
		//BytePatcher::ReplaceBytes(PB(0x49DEC0), {MOV, 01, RETN, NOP}); // UAJBUtilityFunctionLibrary::IsEditorPreview
		BytePatcher::ReplaceBytes(PB(0x49DF00), ReturnZero); // UAJBUtilityFunctionLibrary::IsEnableGachaSchedule
		BytePatcher::ReplaceBytes(PB(0x4978B0), { 0xB8, 0x90, 0x90, 0x00, 0x00, 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90}); // UAJBSettings::GetDefaultCredit
		BytePatcher::ReplaceBytes(PB(0x499AA0), {MOV, 01, RETN, NOP}); // UAJBUtilityFunctionLibrary::CanAJBArcadeGamePlay

		
		/*
		BYTE ShippingOnlyLaunch[33]{};
		memset(&ShippingOnlyLaunch[0], NOP, 31);
		ShippingOnlyLaunch[31] = MOV, ShippingOnlyLaunch[32] = 01;

		BytePatcher::ReplaceBytes(PB(0x2076362), ShippingOnlyLaunch); // [__scrt_initialize_crt] The game automatically closes if it isn't set to shipping.
		BytePatcher::ReplaceByte(PB(0x1DE861), 00); // UAJBUtilityFunctionLibrary::IsShipping
		*/

		//BytePatcher::ReplaceBytes(PB(0x49DE20), {MOV, 00, RETN, NOP, NOP}); // UAJBUtilityFunctionLibrary::IsAJBOfflineMode (useless)
		//BytePatcher::ReplaceBytes(PB(0x4ED5D0), { MOV, 00, RETN, NOP, NOP }); // UAJBNetworkObserver::IsOfflineMode (useless)
		//BytePatcher::ReplaceBytes(PB(0x54D8CE), {MOV, 00, RETN, NOP, NOP, NOP}); // AAJBHUDBase::execSetCreditWidgetInstance (Result: Kills the game)
		
		LogA("BytePatcher", "Applied all patches successfully. (Failing would crash)");
	}

	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(StandaloneHooks);

		if (CMLA::HookAndLogProcessEvent.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::ProcessEvent, UFunctions::ProcessEvent);
		}
		if (CMLA::HookAndLogInvoke.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::Invoke, UFunctions::Invoke);
		}
		if (CMLA::HookAndLogLoader.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::StaticLoadClass, UFunctions::StaticLoadClass);
			Hooks::CreateAndEnableHook(OFF::StaticLoadObject, UFunctions::StaticLoadObject);
		}

		Hooks::CreateAndEnableHook(NetID, GetNetID);
		Hooks::CreateAndEnableHook(CharacterNo, SetCharNo);
		//Hooks::CreateAndEnableHook(ExecCharacterNo, execSetCharNo);
		Hooks::CreateAndEnableHook(GSetString, SetString);
		Hooks::CreateAndEnableHook(OpenCommand, GetOpenCommand);
		Hooks::CreateAndEnableHook(ObjBlueprint, NewObjectFromBlueprint);
	}

}

void AJB::Init_Engine()
{
	while (AJB::GEngine() == nullptr) Sleep(25);

	

	// Calls FConfigCacheIni::GetSectionPrivate
	//void* SectionPrivate = Call<void*(__fastcall*)(const wchar_t* Section, const bool Force, const bool Const, const SDK::FString* FileName)>(PB(0x6246F0))(L"/Script/Engine.UserInterfaceSettings", false, true, reinterpret_cast<SDK::FString*>(PB(0x3051380)));

	// Calls FConfigFile::GenerateExportedPropertyLine
	/*SDK::FString TheKey = L"SoftwareCursors";
	SDK::FString TheValue = L"((Default, /Game/Aeyth8/Blueprints/WBP_Cursor.WBP_Cursor_C))";
	SDK::FString ExportedLine = Call<SDK::FString(__fastcall*)(SDK::FString& PropertyName, SDK::FString& PropertyValue)>(PB(0x6213C0))(TheKey, TheValue);

	LogA("Export", ExportedLine.ToString());
	LogA("GEngineIni", reinterpret_cast<SDK::FString*>(PB(0x3051380))->ToString());*/

	if (GConfigCache)
	{
		// Calls FConfigCacheIni::SetString
	Call<void(__fastcall*)(void* This, const wchar_t* Section, const wchar_t* Key, const wchar_t* Value, SDK::FString* Filename)>(PB(0x6331F0))(GConfigCache, L"/Script/Engine.UserInterfaceSettings", L"SoftwareCursors", L"((Default, /Game/Aeyth8/Blueprints/WBP_Cursor.WBP_Cursor_C))", reinterpret_cast<SDK::FString*>(PB(0x3051380)));
	LogA("GConfigCache", "Called");
	/*for (SDK::TPair<SDK::FString, void*>& Pair : *reinterpret_cast<SDK::TMap<SDK::FString, void*>*>(GConfigCache))
	{
		LogA("Pair", Pair.First.ToString());
	}*/
	}
	
	if (Call<float(__fastcall*)()>(PB(0x176A220))() == 0)
	{
		//Call<void(__fastcall*)(SDK::UEngine*, float MaxFPS)>(PB(0x17820A0))(AJB::GEngine(), 60.0f);
		/*TAutoConsoleVariable<float>& CVarMaxFPS = reinterpret_cast<TAutoConsoleVariable<float>&>(PB(0x32557F0));
		float MaxFPS{1170.0f};
		MaxFPS = CVarMaxFPS.Ref->ShadowedValue[1];
		//MaxFPS = CVarMaxFPS.Ref->GetReferenceFromThread();

		LogA("MaxFPS", std::to_string(MaxFPS));*/
	}

	SDK::TArray<SDK::FWorldContext*>* WorldList = &*reinterpret_cast<SDK::TArray<SDK::FWorldContext*>*>(GEngine()->Pad_B79[0]);
	if (WorldList && WorldList->IsValid())
	{
		LogA("WorldList", "Valid!");
	}

	if (!IsNull(AJB::MapSettings = SDK::UGameMapsSettings::GetDefaultObj()))
	{
		AJB::MapSettings->GameDefaultMap.AssetPathName = FString2FName(CMLA::GameDefaultMap.GetArgumentAsString());
		AJB::MapSettings->TransitionMap.AssetPathName = FString2FName(CMLA::TransitionMap.GetArgumentAsString());
		AJB::MapSettings->GlobalDefaultGameMode.AssetPathName = FString2FName(CMLA::GlobalDefaultGameMode.GetArgumentAsString());
	}

	if (!IsNull(AJB::Version = SDK::UAJBVersion::GetDefaultObj()))
	{
		SDK::FString NewVersion{L"JJL128-1-NA-MPR0-F02-AEYTH8"};
		Call<UFunctions::Decl::CopyString>(OFF::CopyString.PlusBase())(&Version->BuildName, &NewVersion);
	}

	/*SDK::UUserInterfaceSettings* Interface{nullptr};

	//Interface = Call<SDK::UUserInterfaceSettings*(__fastcall*)()>(PB(0x1CDB90))();'
	SDK::UClass* TheClass = Call<SDK::UClass*(__fastcall*)()>(PB(0x1908090))();
	Interface = Call<SDK::UUserInterfaceSettings*(__fastcall*)(SDK::UClass*)>(OFF::CreateDefaultObject.PlusBase())(TheClass);
	LogA("Interface", Interface->GetFullName());
	Interface->DefaultCursor.AssetPathName = FString2FName(CMLA::MouseCursor.GetArgumentAsString());
	SDK::UClass* Inter = UFunctions::StaticLoadClass(SDK::UObject::FindClass("Class Engine.UserInterfaceSettings"), nullptr, L"/Script/Engine.UserInterfaceSettings", nullptr, 0);
	SDK::UUserInterfaceSettings* Face = (SDK::UUserInterfaceSettings*)UFunctions::StaticLoadObject(Inter, nullptr, L"/Script/Engine.UserInterfaceSettings", nullptr, 0, 0, 1);
	LogA("Interface", Inter ? Inter->GetFullName() : "null");
	LogA("Interface Obj", Face ? Face->GetFullName() : "null");*/
	SDK::UUserInterfaceSettings* Interface{nullptr};

	if (!IsNull(Interface = GetLastOf<SDK::UUserInterfaceSettings>()))
	{
		LogA("Interface", Interface->GetFullName());
		BYTE i{0};
		for (SDK::TPair<SDK::EMouseCursor, SDK::FSoftClassPath>& Entry : Interface->SoftwareCursors)
		{
			i++;
			constexpr const char* MouseNames[]{"None", "Default", "TextEditBeam", "ResizeLeftRight", "ResizeUpDown", "ResizeSouthEast", "ResizeSouthWest", "CardinalCross", "Crosshairs", "Hand", "GrabHand", "GrabHandClosed", "SlashedCircle", "EyeDropper", "EMouseCursor_MAX"};
			LogA(std::string(MouseNames[i]), Entry.Second.AssetPathName.ToString());

			Entry.Second.AssetPathName = FString2FName(CMLA::MouseCursor.GetArgumentAsString());
		}
		//Interface->DefaultCursor.AssetPathName = FString2FName(CMLA::MouseCursor.GetArgumentAsString());
	}
	
	while (AJB::PCPortWindow == nullptr)
	{
		AJB::PCPortWindow = FindWindowW(L"UnrealWindow", 0);
	}
	
	HICON AJBLogo = LoadIconA(AJB::PCPortLib, (char*)IDI_ICON1);
	if (AJBLogo)
	{
		SendMessageA(AJB::PCPortWindow, WM_SETICON, ICON_SMALL, (LPARAM)AJBLogo);
	}

	SetWindowTextA(AJB::PCPortWindow, "AJB PC Port v28.0.6");
}

void AJB::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		Instance = static_cast<SDK::UBP_AJBGameInstance_C*>(GWorld->OwningGameInstance);
		Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings);
		System = static_cast<SDK::UAJBAMSystemObject*>(Instance->AMSystemObject);
		PlayerPoints = (&System->PP);
		
		if (!IsNull(Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings)))
		{
			bDebugInputMode = (&Settings->bDebugInputMode);

			Settings->CoinOptions.FreePlay = true;
			//Settings->UpdateSettings.bIsServerMode = true;

			*bDebugInputMode = CMLA::bDebugInputMode.GetAsBool();
		}

		if (!IsNull(PlayerPoints = &System->PP))
		{
			*PlayerPoints = 1170;
		}
		if (!IsNull(AJBSettings = SDK::UAJBSettings::GetDefaultObj()))
		{
			AJBSettings->bAvailableAllCharacters = true;
			//AJBSettings->bAvailableAllStages = true;		I'm pretty sure everything is available and enabling this only allows you to open the PvE map on BR which puts you in an infinite loading screen. 
			AJBSettings->bEnableSkinCustomDebug = true;
			AJBSettings->bUseDebugClosedArcadeTimeSchedule = true;
		}

		//if (Player()) Player()->bShowMouseCursor = true; // This works for the first level

		SDK::UAJBArcadeTimeManager* TimeManager{nullptr};
		if (!IsNull(TimeManager = Instance->ArcadeTimeManager))
		{

			// Can 100% confirm that this somehow fixes being booted to the main menu when the store close time is up, 
			// it also allows you to use the menu as if it wasn't closed.
			// However it may be affecting listen servers so I probably need to find the function that uses this pointer and kill it manually, this is just a simple lazy fix that works for now.
			// UPDATE: NO IT DOES NOT AFFECT LISTEN SERVERS SO THIS MAY BE PERMANENT
			Instance->ArcadeTimeManager = nullptr;	
		}
		
		//constexpr const static wchar_t* ModdedPauseMenu{L"WidgetBlueprintGeneratedClass'/Game/Aeyth8/UI/InGame/WBP_OptionsMenu.WBP_OptionsMenu_C'"};
		//UFunctions::StaticLoadObject(SDK::UClass::FindClass("Class CoreUObject.Class"), nullptr, L"/Game/Aeyth8/UI/InGame/WBP_OptionsMenu.WBP_OptionsMenu_C", nullptr, 0, nullptr, true);
		/*SDK::UClass* PauseMenu = UFunctions::StaticLoadClass(SDK::UWidgetBlueprintGeneratedClass::StaticClass(), nullptr, (wchar_t*)ModdedPauseMenu, nullptr);
		LogA("PauseMenu", PauseMenu ? "YIPEE!" : "STUPID PIEC OF SH");
		GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->Create(GWorld, PauseMenu, Player());*/
		//LogA("PauseMenu", PauseMenu->GetFullName());
		//reinterpret_cast<SDK::UBPF_AJBGameInstance_C*>(SDK::UKismetSystemLibrary::GetDefaultObj())->SetPlayMode(SDK::EPlayMode::Pair, GWorld);
	}
	//GetBlueprintClass<SDK::UAJBPlayerInfoUtility>()->MakeAutoPlayerName(L"Aether", 1, 0);
}

// -- Pointers

SDK::UEngine* const& AJB::GEngine(const bool bLog)
{
	SDK::UEngine*& Engine = *reinterpret_cast<SDK::UEngine**>(OFF::GEngine.PlusBase());
	if (bLog && IsNull(Engine))
	{
		LogA("Logic", "GEngine is a null pointer!");
	}
	return Engine;
}

SDK::UWorld* const& AJB::GWorld(const bool bLog)
{
	SDK::UWorld*& World = *reinterpret_cast<SDK::UWorld**>(OFF::GWorld.PlusBase());
	if (bLog && IsNull(World))
	{
		LogA("Logic", "GWorld is a null pointer!");
	}
	return World;
}

SDK::APlayerController* AJB::GPlayer(const int& Index)
{
	return Pointers::Player(Index);
}

SDK::UBlueprintFunctionLibrary* const& AJB::BlueprintFunctionLibrary()
{
	static SDK::UBlueprintFunctionLibrary* Library{nullptr};
	if (!Library) Library = SDK::UBlueprintFunctionLibrary::GetDefaultObj();

	return Library;
}

SDK::AGameModeBase* AJB::GetGameMode(SDK::UWorld* OverrideWorld)
{
	return GetBlueprintClass<SDK::UGameplayStatics>()->GetGameMode(OverrideWorld);
}

SDK::ABP_AJBInGamePlayerController_C* const& AJB::GetPlayer(const int& Index)
{
	SDK::APlayerController* Player = Pointers::Player();

	if (Player && Player->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
	{
		return static_cast<SDK::ABP_AJBInGamePlayerController_C*>(Player);
	}

	return nullptr;
}

SDK::ABP_AJBInGameCharacter_C* const& AJB::GetCharacter(const SDK::ABP_AJBInGamePlayerController_C* Player)
{
	if (Player && Player->Character->IsA(SDK::ABP_AJBInGameCharacter_C::StaticClass()))
	{
		return static_cast<SDK::ABP_AJBInGameCharacter_C*>(Player->Character);
	}

	return nullptr;

}

SDK::ABP_PPV_VSFilter_C* AJB::GetPostProcessFilter(const SDK::ABP_AJBInGamePlayerController_C* Player, const bool bCreateIfNull)
{
	if (Player)
	{
		SDK::ABP_PPV_VSFilter_C* Filter = Player->PPVVSFilter;

		return Filter ? Filter : bCreateIfNull ? const_cast<SDK::ABP_AJBInGamePlayerController_C*>(Player)->PPVVSFilter = SpawnActor<SDK::ABP_PPV_VSFilter_C>() : nullptr;		
	}

	return nullptr;
}

bool AJB::IsOfType(SDK::UObject* Object, SDK::UClass* Type)
{
	return Object->IsA(Type);	
}


// -- Helpers

const char* AJB::PlayerInfoParser(SDK::FMatchingPlayerInfo& Info)
{
	return std::format("[PlayerID]: {} | [GameServerUserID]: {} | [TeamID]: {} | [TeamHostUserID]: {} | [PlayerName]: {} | [PlayerIconID]: {} | [PlayerLevel]: {} | [PlayerTitle]: {} | [CharactorID]: {} | [bIsCameraMode]: {} | [Rate]: {}", Info.PlayerID, Info.GameServerUserID.ToString(), Info.TeamID, Info.TeamHostUserID.ToString(), Info.PlayerName.ToString(), Info.PlayerIconID, Info.PlayerLevel, Info.PlayerTitle.ToString(), Info.CharactorID, Info.bIsCameraMode, Info.Rate).c_str();
}

AJB::ESelectedCharacter AJB::GetSelectedCharacter()
{
	return Instance ? static_cast<ESelectedCharacter>(Instance->GetSelectedCharacterNo()) : INVALID;
}

unsigned char AJB::GetSelectedSkin()
{
	return Instance ? Instance->GetCharacterSkinId(AJB::GetSelectedCharacter()) : 0;
}

unsigned char AJB::GetSelectedStandSkin()
{
	return Instance ? Instance->GetStandSkinId(AJB::GetSelectedCharacter()) : 0;
}

bool AJB::SetSelectedCharacter(const ESelectedCharacter CharacterIndex, const unsigned char SkinIndex, const unsigned char StandSkinIndex)
{
	return AJB::SetSelectedCharacter(CharacterIndex, SkinIndex) ? (Instance->SetStandSkinId(CharacterIndex, StandSkinIndex), static_cast<int32>(AJB::GetSelectedStandSkin() == StandSkinIndex)) : false;
}

bool AJB::SetSelectedCharacter(const ESelectedCharacter CharacterIndex, const unsigned char SkinIndex)
{
	return AJB::SetSelectedCharacter(CharacterIndex) ? (Instance->SetCharacterSkinId(CharacterIndex, SkinIndex), static_cast<int32>(AJB::GetSelectedSkin() == SkinIndex)) : false;
}

bool AJB::SetSelectedCharacter(const ESelectedCharacter CharacterIndex)
{
	return Instance ? (SetCharNo(Instance, CharacterIndex), Instance->CharacterNo == static_cast<int32>(CharacterIndex)) : false;
}

static bool FlowUtilChangeState(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag)
{
	// The mouse will not lock into the viewport on its own (making KBM compability unplayable unless you enjoy constantly holding down middle click to move your camera)  
	constexpr const static wchar_t* MouseLockFlowstates[]
	{
		L"InGame.Gameplay",
		L"InGame.Victory",
		L"InGame.VictoryResult",
		L"InGame.VictoryShot.Posing",
		L"InGame.VictoryShot.Shot",
		L"InGame.VictoryShot.Finish"
	};

	constexpr const wchar_t* CharacterSelect{L"SimpleMatch.SelectCharacter"};

	using TCredit = SDK::UWidget* SDK::UWB_Credit_C::*;
	constexpr static SDK::UWidget* SDK::UWB_Credit_C::* CreditGarbage[] = {(TCredit)&SDK::UWB_Credit_C::PPNumberRoot, (TCredit)&SDK::UWB_Credit_C::PPStopped, (TCredit)&SDK::UWB_Credit_C::PPNumber, (TCredit)&SDK::UWB_Credit_C::PPBuyWindow, (TCredit)&SDK::UWB_Credit_C::Button_PPBuy, (TCredit)&SDK::UWB_Credit_C::WB_TimeLimitCountDown};
	constexpr const static BYTE TCreditSize = sizeof(CreditGarbage) / sizeof(CreditGarbage[0]);

	LogA("UFlowStateUtil", std::format("New FlowState: {}", NextStateTag.TagName.ToString()));
	AJB::GameFlowState = &NextStateTag.TagName;

	SDK::FString TempString = AJB::GetBlueprintClass<SDK::UKismetStringLibrary>()->Conv_NameToString(*AJB::GameFlowState).CStr();
	wchar_t* FlowstateLocal = TempString.CStr();

	for (SDK::UWB_TimeLimitCountDown_C* POS : Pointers::FindObjects<SDK::UWB_TimeLimitCountDown_C>())
	{
		//if (!ObjectHasFlag(POS, EObjectFlags::Transient)) continue;
		LogA("POS", POS->Visibility == SDK::ESlateVisibility::Visible ? "Visible" : "Not Visible");
	}

	// Nukes the hideous and worthless PP/Credit counter that display at all times at the top right corner of the screen.
	SDK::UWB_Credit_C* Garbage = Pointers::GetLastOf<SDK::UWB_Credit_C>(0);
	if (Garbage)
	{
		//for (SDK::UWB_Credit_C* Garbage : Pointers::FindObjects<SDK::UWB_Credit_C>())
		for (BYTE i{0}; i < TCreditSize; ++i)
		{
			SDK::UWidget* Trash{nullptr};

			if ((Trash = Garbage->*CreditGarbage[i]) == nullptr) continue;

			if (Trash->GetParent() != nullptr)
			{
				Trash->RemoveFromParent();
			}
			
			Trash->SetVisibility(SDK::ESlateVisibility::Hidden);
			Trash->Flags = static_cast<SDK::EObjectFlags>(static_cast<int32>(Trash->Flags) | static_cast<int32>(UFunctions::EInternalObjectFlags::PendingKill));
			*Garbage.*CreditGarbage[i] = nullptr;
		}
	}

	/*if (wcscmp(CharacterSelect, FlowstateLocal) == 0)
	{
		return OFF::ChangeState.VerifyFC<bool(__fastcall*)(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag)>()(StateHandler, NextStateTag);
	}*/

	if (SDK::APlayerController* PC = Player(); PC != nullptr)
	{
		for (const wchar_t* Flowstate : MouseLockFlowstates)
		{
			if (wcscmp(Flowstate, FlowstateLocal) == 0)
			{
				AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_GameOnly(PC);
				PC->bShowMouseCursor = false;
				break;
			}
		}		
	}
	
	return OFF::ChangeState.VerifyFC<bool(__fastcall*)(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag)>()(StateHandler, NextStateTag);
}

// -- FMemory

void* FMemory::Malloc(unsigned long long Count, unsigned int Alignment)
{
	return OFF::FMalloc.VerifyFC<Decl::Malloc>()(Count, Alignment);
}

void* FMemory::Realloc(void* Original, unsigned long long Count, unsigned int Alignment)
{
	return OFF::FRealloc.VerifyFC<Decl::Realloc>()(Original, Count, Alignment);
}

void FMemory::Free(void* Original)
{
	OFF::FFree.VerifyFC<Decl::Free>()(Original);
}