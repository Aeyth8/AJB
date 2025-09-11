#pragma once

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

struct HINSTANCE__;
typedef struct HINSTANCE__* HINSTANCE;
typedef HINSTANCE HMODULE;
struct HWND__;
typedef struct HWND__* HWND;

namespace SDK
{
	class UObject;
	class UClass;
	class UWorld;
	class UEngine;
	class UGameMapsSettings;
	class UBlueprintFunctionLibrary;
	class UGameplayStatics;
	class AGameModeBase;
	class AGameMode;
	class APlayerController;
	class ACharacter;
	class APawn;

	class UAJBGameInstance;
	class UBP_AJBGameInstance_C; // Final class of UAJBGameInstance
	class UAJBAMSystemSettings;
	class UAJBAMSystemObject;
	class UAJBVersion;
	class ABP_AJBOutGameProxy_C; // Final class
	class AAJBOutGameProxy;
	class UAJBSettings;

	class ABP_AJBBattleGameMode_C; // Final class
	class AAJBBattleGameMode;

	class ABP_AJBBattleGameState_C; // Final class
	class AJBBattleGameState;

	class AAJBPlayerControllerBase;
	class AAJBInGamePlayerController;
	class ABP_AJBInGamePlayerController_C; // Final class when ingame

	class AAJBInGameCharacterBase;
	class AAJBInGameCharacter;
	class ABP_AJBInGameCharacter_C; // Main class when ingame

	class AAJBHUDBase;
	class AAJBInGameHUD;
	class ABP_AJBInGameHUD_C;
	class ABP_AJBOutGameHUD_C;
	class ABP_AJBSimpleMatchHUD_C;

	class UAJBUserWidget;
	class UAJBWindowWidget;
	class UWB_ModeSelect_C;

	struct FMatchingPlayerInfo;

	// All game specific subclasses of UBlueprintFunctionLibrary
	class ULoadingScreenSystemBPLibrary;
	class UAJBUtilityFunctionLibrary;
	class UAJBInGameStageFunctionLibrary_C;
	class UBPF_AJBPvEFunctionLibrary_C;
	class UAJBIngameUtilFunctionLibrary_C;
	class UBP_AJBInteractFunctionLibrary_C;
	class UBPF_AJBAIBehaviorFunctionLibrary_C;
	class UBPF_AJBAIDebugBehaviorFunctionLibrary_C;
	class UBPF_UIStringUtil_C;
	class UBPF_AJBWwiseFunctionLibrary_C;
	class UBPF_AJBGameInstance_C;
	class UBPF_AJBInGameDebugFunctionLibrary_C;
	class UBPF_GameIconUtil_C;
	class UBPF_UIConstantNumberUtil_C;
	class UBPF_AJBTraceFunctions_C;
	class UBPF_AJBCollisionFunctions_C;
	class UBPF_AJBAIFunctionLibrary_C;
	class UAJBAIFunctionLibrary;
	class UAJBAMLED;
	class UAJBArrayFunctionLibrary;
	class UAJBBTNodeFunctionLibrary;
	class UAJBDataTableFunctionLibrary;
	class UUSBFinderPluginBPLibrary;
	class UUsioFunctionLibrary;
	class UAJBError;
	class UAJBParamAccessor;
	class UAJBPlayerInfoUtility;
	class UAJBSystemTestFunctionLibrary;
	class UAJBWinPlatformUtils;
	class UAJBIngameAnimFunctionLibrary_C;
	class UBF_GameFlowStateUtils_C;
	class UBF_InGameEffect_C;
	class UBF_OutGameEffect_C;
	class UBPF_AJBConsoleCommandFunctions_C;
	class UBPF_AJBInGameHUD_C;
	class UBPF_AJBInGameMessage_C;
	class UBPF_AJBInGamePlayerController_C;
	class UBPF_AJBInGameSkillFunctionLibrary_C;
	class UBPF_AJBOutGameHUD_C;
	class UBPF_AJBOutGamePlayerController_C;
	class UBPF_AJBOutGameHUD_C;

	class ABP_PPV_VSFilter_C;

	class FName;
	struct FFlowStateHandler;

}

namespace A8CL
{
namespace AJB
{
	enum ESelectedCharacter : unsigned char
	{
		// Blame the devs for making the numbers a mess
		INVALID = 0,
		JOTARO = 1,
		DIO = 11,
		JEAN = 8,
		DIO_THE_WORLD = 14,
		JOSUKE = 7,
		OKUYASU = 15,
		GIORNO = 9,
		BRUNO = 3,
		DIAVOLO = 17,
		JOLYNE = 18,
		JOTARO_STONE_OCEAN = 20,
		ANASUI = 21,
		AVDOL = 23,
		KAKYOIN = 2,
		HOL_HORSE = 10,
		GUIDO = 4,
		NARANCIA = 13,
		KOICHI = 5,
		ROHAN = 6,
		KIRA = 12,
		KOSAKU = 24,
		FUGO = 22,
		LEONE = 25,
		RISOTTO = 16,
		PUCCI = 28,
		WEATHER_REPORT = 19,
		JOSEPH = 26,
		CAESAR = 27
	};

	// -- Vars

	extern SDK::UGameMapsSettings* MapSettings;

	extern SDK::UBP_AJBGameInstance_C* Instance; // Originally SDK::UAJBGameInstance but this is a parent class. 
	extern SDK::UAJBAMSystemSettings* Settings;
	extern SDK::UAJBAMSystemObject* System;
	extern SDK::ABP_AJBOutGameProxy_C* OutGameProxy;
	extern SDK::UAJBVersion* Version;
	extern SDK::UAJBSettings* AJBSettings;

	extern SDK::FName* GameFlowState;

	extern __int32* PlayerPoints;
	extern bool* bDebugInputMode;

	extern HMODULE PCPortLib;
	extern HWND PCPortWindow;

	// -- Initialization

	void Init_Hooks();
	void Init_Engine();
	void Init_Vars(SDK::UWorld* GWorld);

	// -- Pointers

	SDK::UEngine* const& GEngine(const bool bLog = false);
	SDK::UWorld* const& GWorld(const bool bLog = false);
	SDK::APlayerController* GPlayer(const int& Index = 0);
	SDK::UBlueprintFunctionLibrary* const& BlueprintFunctionLibrary();

	SDK::AGameModeBase* GetGameMode(SDK::UWorld* OverrideWorld = GWorld());
	SDK::ABP_AJBInGamePlayerController_C* const& GetPlayer(const int& Index = 0);
	SDK::ABP_AJBInGameCharacter_C* const& GetCharacter(const SDK::ABP_AJBInGamePlayerController_C* Player = GetPlayer());
	SDK::ABP_PPV_VSFilter_C* GetPostProcessFilter(const SDK::ABP_AJBInGamePlayerController_C* Player = GetPlayer(), const bool bCreateIfNull = true); // Only accessible ingame from the PlayerController.

	bool IsOfType(SDK::UObject* Object, SDK::UClass* Type);

	template <class Subclass>
	Subclass* const& GetBlueprintClass()
	{
		return static_cast<Subclass*>(BlueprintFunctionLibrary());
	}
	
	template <class UClass>
	UClass* const& GetGameMode(SDK::UClass* Class = UClass::StaticClass(), SDK::UWorld* OverrideWorld = nullptr)
	{
		SDK::AGameModeBase* AuthorityGameMode = GetGameMode();

		if (AuthorityGameMode && IsOfType((SDK::UObject*)AuthorityGameMode, Class))
		{
			return static_cast<UClass*>(AuthorityGameMode);
		}
	
		return nullptr;
	}

	template <class UClass>
	UClass* const& GetPlayer(SDK::UClass* Class = UClass::StaticClass(), const int& Index = 0)
	{
		SDK::APlayerController* Player = GPlayer();

		if (Player && IsOfType((SDK::UObject*)Player, Class))
		{
			return static_cast<UClass*>(Player);
		}

		return nullptr;
	}

	// -- Helpers

	const char* PlayerInfoParser(SDK::FMatchingPlayerInfo& Info);

	ESelectedCharacter GetSelectedCharacter();
	unsigned char GetSelectedSkin(); // 0 is invalid, normally it's 1-10
	unsigned char GetSelectedStandSkin();
	bool SetSelectedCharacter(const ESelectedCharacter CharacterIndex, const unsigned char SkinIndex, const unsigned char StandSkinIndex);
	bool SetSelectedCharacter(const ESelectedCharacter CharacterIndex, const unsigned char SkinIndex);
	bool SetSelectedCharacter(const ESelectedCharacter CharacterIndex);
}

// -- FMemory

struct FMemory
{
	class Decl
	{
	public:
		typedef void*(__fastcall* Malloc)(unsigned long long Count, unsigned int Alignment);
		typedef void*(__fastcall* Realloc)(void* Original, unsigned long long Count, unsigned int Alignment);
		typedef void(__fastcall* Free)(void* Original);
		typedef void(__fastcall* Trim)(bool bTrimThreadCaches);
	};

	enum AllocationHints
	{
		None = -1,
		Default,
		Temporary,
		SmallPool,
		Max
	};

	enum
	{
		// Default allocator alignment. If the default is specified, the allocator applies to engine rules.
		// Blocks >= 16 bytes will be 16-byte-aligned, Blocks < 16 will be 8-byte aligned. 
		// If the allocator does not support allocation alignment, the alignment will be ignored.
		DEFAULT_ALIGNMENT = 0,

		// Minimum allocator alignment
		MIN_ALIGNMENT = 8,
	};

	// C-Style Memory Allocation (The most important part)

	static void* Malloc(unsigned long long Count, unsigned int Alignment = DEFAULT_ALIGNMENT);
	static void* Realloc(void* Original, unsigned long long Count, unsigned int Alignment = DEFAULT_ALIGNMENT);
	static void Free(void* Original);
};







































}