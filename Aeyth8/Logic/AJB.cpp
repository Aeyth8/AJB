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

HMODULE AJB::PCPortLib{0};
HWND AJB::PCPortWindow{0};

__int32* AJB::PlayerPoints{nullptr};
bool* AJB::bDebugInputMode{nullptr};

SDK::UGameMapsSettings* AJB::MapSettings{nullptr};

// 8 bit to AL register
constexpr BYTE MOV{0xB0};
constexpr BYTE RETN{0xC3};
constexpr BYTE NOP{0x90};

std::vector<Hooks::HookStructure> StandaloneHooks =
{
	//{OFF::ProcessEvent, UFunctions::ProcessEvent},
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::ConsoleCommand, UFunctions::ConsoleCommand},
	{OFF::Browse, UFunctions::Browse},
	{OFF::Login, UFunctions::Login},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::AJBPreLogin, UFunctions::PreLogin},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::IsNonPakFileNameAllowed, UFunctions::IsNonPakFilenameAllowed},
	{OFF::FindFileInPakFiles, UFunctions::FindFileInPakFiles},
};


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

		BytePatcher::ReplaceBytes(PB(0x20FB00), ReturnZero); // Calls AMActivator_Update

		BytePatcher::ReplaceBytes(PB(0x4840B0), Replacement); // UAJBGameInstance::ResetPP
		BytePatcher::ReplaceBytes(PB(0x522CE0), Replacement); // UAJBGameInstance::StartConsumePP
		

		// Completely wipes out the HideCursorCaller and any trace (to be safe)
		BYTE AntiAntiCursor[100]{RETN};
		memset(&AntiAntiCursor[1], NOP, 99);

		BytePatcher::ReplaceBytes(PB(0x4A04A0), AntiAntiCursor); // HideCursorCaller, I don't have a proper name but it spam-hides the cursor like 100 times a second

		//BytePatcher::ReplaceBytes(PB(0x49DE20), {MOV, 00, RETN, NOP, NOP}); // UAJBUtilityFunctionLibrary::IsAJBOfflineMode (useless)
		//BytePatcher::ReplaceBytes(PB(0x4ED5D0), { MOV, 00, RETN, NOP, NOP }); // UAJBNetworkObserver::IsOfflineMode (useless)
		
		LogA("BytePatcher", "Applied all patches successfully. (Failing would crash)");
	}

	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(StandaloneHooks);
	}

}

void AJB::Init_Engine()
{
	while (AJB::GEngine() == nullptr) Sleep(25);

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
	
	while (AJB::PCPortWindow == nullptr)
	{
		AJB::PCPortWindow = FindWindowW(L"UnrealWindow", 0);
	}
	
	HICON AJBLogo = LoadIconA(AJB::PCPortLib, (char*)IDI_ICON1);
	if (AJBLogo)
	{
		SendMessageA(AJB::PCPortWindow, WM_SETICON, ICON_SMALL, (LPARAM)AJBLogo);
	}

	SetWindowTextA(AJB::PCPortWindow, "AJB PC Port v28.0.0");
}

void AJB::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		Instance = static_cast<SDK::UBP_AJBGameInstance_C*>(GWorld->OwningGameInstance);
		Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings);
		System = static_cast<SDK::UAJBAMSystemObject*>(Instance->AMSystemObject);
		PlayerPoints = (&System->PP);
		//OutGameProxy = SDK::ABP_AJBOutGameProxy_C::GetDefaultObj();

		if (!IsNull(Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings)))
		{
			bDebugInputMode = (&Settings->bDebugInputMode);

			Settings->CoinOptions.FreePlay = true;

			*bDebugInputMode = true;
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


			//Call<UFunctions::Decl::DestroyActor>(OFF::DestroyActor.PlusBase())(GWorld, (SDK::AActor*)TimeManager, true, true);
			//typedef void(__fastcall* Free)(void* Original);
			//Call<Free>(PB(0x5BC5E0))(TimeManager);
		}
		
		//reinterpret_cast<SDK::UBPF_AJBGameInstance_C*>(SDK::UKismetSystemLibrary::GetDefaultObj())->SetPlayMode(SDK::EPlayMode::Pair, GWorld);
	}
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

SDK::AAJBPlayerControllerBase* const& AJB::GetPlayer(const int& Index)
{
	SDK::APlayerController* Player = Pointers::Player();

	if (Player && Player->IsA(SDK::AAJBPlayerControllerBase::StaticClass()))
	{
		return static_cast<SDK::AAJBPlayerControllerBase*>(Player);
	}

	return nullptr;
}

SDK::ABP_AJBInGameCharacter_C* const& AJB::GetCharacter(const SDK::AAJBPlayerControllerBase* Player)
{
	if (Player && Player->Character->IsA(SDK::ABP_AJBInGameCharacter_C::StaticClass()))
	{
		return static_cast<SDK::ABP_AJBInGameCharacter_C*>(Player->Character);
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