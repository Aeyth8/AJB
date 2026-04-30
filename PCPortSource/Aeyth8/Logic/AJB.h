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

namespace UC
{
	class FString;
}
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
	class AActor;
	class APawn;
	class ALevelScriptActor;

	class FName;
	struct FGameplayTag;
	struct FVector;
	struct FRotator;


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

	class UMediaPlayer;

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
		
	struct FFlowStateHandler;
	class UAkAudioEvent;	
	class AAJBCreadit_C;
	class UWB_ModeSelect_C;
	class ABP_PPV_VSFilter_C;
	class UAJBWindowWidget;
	
	// Mod accessible only
	class UWBP_OptionsMenu_C;
	class UBP_GlobalPatcher_C;
	class UWBP_CallbackTimerHandler_C;
	class AGM_AJBUserInterface_C;
	class ALemonHelper_C;
	class ABP_Synchronizer_C;
}

namespace A8CL
{
namespace AJB
{
	// Blame the devs for making the numbers a mess
	enum ESelectedCharacter : unsigned char
	{		
		INVALID						= 0,
		JOTARO						= 1,
		DIO							= 11,
		POLNAREFF					= 8,
		DIO_GREATEST_HIGH			= 14,
		JOSUKE						= 7,
		OKUYASU						= 15,
		GIORNO						= 9,
		BUCCIARATI					= 3,
		DIAVOLO						= 17,
		JOLYNE						= 18,
		JOTARO_P6					= 20,
		ANASUI						= 21,
		AVDOL						= 23,
		KAKYOIN						= 2,
		HOL_HORSE					= 10,
		MISTA						= 4,
		NARANCIA					= 13,
		KOICHI						= 5,
		ROHAN						= 6,
		KIRA						= 12,
		KOSAKU						= 24,
		FUGO						= 22,
		ABBACCHIO					= 25,
		RISOTTO						= 16,
		PUCCI						= 28,
		WEATHER_REPORT				= 19,
		JOSEPH						= 26,
		CAESAR						= 27
	};


	/*
	SDK::FAJBBattleSettings

	1 Morioh Town (Trattoria Trussardi) | DamageAreaType = 7
	2 Morioh Town (Train Station) | DamageAreaType = 2
	3 Morioh Town (Angelo Rock) | DamageAreaType = 3
	4 Morioh Town (Rural) | DamageAreaType = 4
	5 Morioh Town (Owson) | DamageAreaType = 5
	6 Morioh Town (Kameyu) | DamageAreaType = 6
	7 Cairo | DamageAreaType = 8
	8 Farm | DamageAreaType = 9
	9 Colosseum | DamageAreaType = 10
	10 Venezia | DamageAreaType = 11

	PvE | DamageAreaType = 101
	Tutorial | DamageAreaType = 2

	No clue what 0-1 is
	*/
	enum EDamageAreaType : unsigned char
	{
		MORIOH_TRATTORIA_TRUSSARDI	= 7,
		MORIOH_TRAIN_STATION		= 2,	// Tutorial uses this
		MORIOH_ANGELO_ROCK			= 3,
		MORIOH_RURAL				= 4,
		MORIOH_OWSON				= 5,
		MORIOH_KAMEYU				= 6,
		CAIRO						= 8,
		FARM						= 9,
		COLOSSEUM					= 10,
		VENEZIA						= 11,
		PVE							= 101,
	};

	// ===========================================
	// --			   VARIABLES			    --
	// ===========================================

	/* -- UE Defaults --
	
	Native to any Unreal Engine game. */

	extern SDK::UClass* CoreUObject;					// Class CoreUObject.Object
	extern SDK::UGameMapsSettings* MapSettings;	

	/* -- AJB Specific --
	
	Game native only. */

	extern SDK::UBP_AJBGameInstance_C* Instance;		// Final subclass for UAJBGameInstance.
	extern SDK::UAJBAMSystemSettings* Settings;
	extern SDK::UAJBAMSystemObject* System;
	extern SDK::ABP_AJBOutGameProxy_C* OutGameProxy;
	extern SDK::UAJBVersion* Version;
	extern SDK::UAJBSettings* AJBSettings;

	extern SDK::AAJBCreadit_C* CreaditPointer;
	extern SDK::UWB_ModeSelect_C* SimpleMatchHUD;		// Only accessible when in AJBSimpleMatch_P, the constructor is hooked and this value gets updated to transient objects only.
	extern SDK::FGameplayTag* CurrentFlowstate;

	extern __int32* PlayerPoints;
	extern bool* bDebugInputMode;

	/* -- MOD --
		
	Not native in any form, only exists within the PC Port mod as custom blueprints.
	UClasses must be loaded using StaticLoadClass and passed into StaticConstructObject_Internal to create the object. */

	extern SDK::UClass* MOD_OptionsMenuClass;					// Options menu class, must be loaded to create an object.
	extern SDK::UClass* MOD_GlobalPatcherClass;					// Global patcher class, must be loaded to create an object.
	extern SDK::UClass* MOD_CallbackTimerClass;					// Callback timer class, must be loaded to create an object.

	extern SDK::UClass* MOD_SynchronizerClass;					// Synchronizer class, contains replicated variables used to sync PlayModes across from server-client, may be used for more later.
	extern SDK::ABP_Synchronizer_C* MOD_PROXY_Synchronizer;		// It's stupid but if I want the class to live I need an object instance, however this cannot be used because it's rootset and it's supposed to.. replicate? How is that gonna work..? If it works I'd use it forever. [EDIT: No it does not replicate, this is fine, it's worth it.]
	extern SDK::ABP_Synchronizer_C* MOD_Global_Synchronizer;	// NULL UNLESS CONNECTED TO SERVER OR IS SERVER

	extern SDK::UWBP_OptionsMenu_C* MOD_OptionsMenu;			// Options menu, a self maintained Widget Blueprint that uses its own internal ticking system, communicates with this DLL internally by executing console commands that are parsed with a hook to (APlayerController::ConsoleCommand).
	extern SDK::UBP_GlobalPatcher_C* MOD_GlobalPatcher;			// Global object used as a translation layer between my DLL logic and Unreal Engine blueprints.
	extern SDK::UWBP_CallbackTimerHandler_C* MOD_CallbackTimer;	// Global persistent widget object used to create inter-gamethread timers.

	extern const wchar_t* DLLCommitVersion;						// Global hardcoded string used for commit versioning.
	extern UC::FString* StrDLLCommitVersion;					// FString Singleton for UI usage, not guaranteed to be a valid pointer.
	extern UC::FString* StrInGameUserName;						// Temporary because it's 4am and my mind has shattered I AM SO TIRED TODAY

	extern SDK::ALemonHelper_C* MOD_LemonHelper;				// Only exists as a singleton during in lemon possession mode.

	extern int TEMP_CachedCharacterID;
	extern int NUM_CPUCores;

	extern bool bIsDedicatedServer;
	extern bool bServerAllowsAdmins;
	extern bool bServerHasPassword;

	extern bool bDebugModeFromCMLA;								// Used to determine if extra/unnecessary logs for development purposes are enabled.
	extern bool bIsLemonPossessioned;							// Oh that's nice, I work as LP | LP? as in, Loss Prevention? | lemon possession

	
	
	

	/* -- Windows External --
	
	Used to identify the game's process and window, allowing for live modification.
	Currently it's only used to change the process icon and name, which is mainly for polish. */

	extern HMODULE PCPortLib;									// The PC Port library | 'This' DLL | The dynamic global base address of it.
	extern HWND PCPortWindow;									// The game's process window, containing the process name, title, icon, etc.
	extern bool bKeepInitialThreadAlive;						// Only one thread gets created by this DLL, it dies at Init_Vars but will be kept alive forever until marked false.

	// ===========================================
	// ##			  INITIALIZATION			## 
	// ===========================================

	void Init_Hooks();											// Called before entry, modifies the game's runtime instance before it even starts up, applying bytepatches and hooks.
	void Init_Engine();											// Called after entry, waits for the core game engine to initialize, and sets all pre-world variables.
	void Init_Vars();											// Called after game world is initialized, retrieves and sets any applicable pointer variables.
	void ThreadLoop();											// JMP into after Init_Vars, runs in an infinite loop until the game is shutdown, checks the networking and ensures that server->clients are synchronized.

	// ===========================================
	// **			POINTER FUNCTIONS			**
	// ===========================================

	SDK::ABP_PPV_VSFilter_C* GetPostProcessFilter(const SDK::ABP_AJBInGamePlayerController_C* Player, const bool bCreateIfNull = true); // Only accessible ingame from the PlayerController.

	bool IsOfType(SDK::UObject* Object, SDK::UClass* Type);	

	// ===========================================
	// **			 HELPER FUNCTIONS			**
	// ===========================================

	const char* PlayerInfoParser(SDK::FMatchingPlayerInfo& Info);

	ESelectedCharacter GetSelectedCharacter();
	unsigned char GetSelectedSkin(); // 0 is invalid, normally it's 1-10
	unsigned char GetSelectedStandSkin();
	bool SetSelectedCharacter(const ESelectedCharacter CharacterIndex, const unsigned char SkinIndex, const unsigned char StandSkinIndex);
	bool SetSelectedCharacter(const ESelectedCharacter CharacterIndex, const unsigned char SkinIndex);
	bool SetSelectedCharacter(const ESelectedCharacter CharacterIndex);

	void CopyString(UC::FString* StringToModify, UC::FString* StringToCopy);
	bool IsServer();
	bool IsInSession();
	bool IsOfflineMode();

	// The callback function MUST have no parameters and return void.
	// The system relies solely on inter-gamethread communication with a persistent blueprint object that sets the timer and executes a console command indicating the callback.
	// We access the blueprint object from the DLL, inside the object is two int32s which contain the split address of this callback function which is executed in the hook for APlayerController::ConsoleCommand.
	// You don't have to worry about any of that stuff since this wrapper simply requires the callback function.
	void CreateCallbackTimer(void* FunctionCallback, float fTimer);

	// Called externally by a callback timer, should not be manually called!
	void TranslateSimpleMatch();

	enum EInfiniteLoadingReason : unsigned char
	{
		FUNCTIONAL				= 1 << 0,
		BROKEN_PLAYERID			= 1 << 1,
		BROKEN_ENTRY			= 1 << 2,
		BROKEN_CHARACTER_SPAWN	= 1 << 3,
	};

	// Temporary fixes to the MatchingPlayers array (the cause of the infamous infinite loading screen)

	// Called externally by a callback timer, should not be manually called!
	void TryFixInfiniteLoadingScreen();

	// Called externally by a callback timer, should not be manually called!
	void CheckForInfiniteLoadingScreen();

	// Called externally by a callback timer, should not be manually called!
	void DedicatedServerLoop();

	// ===========================================
	// **		EXTERNAL HOOK FUNCTIONS			**
	// ===========================================

	bool __fastcall FlowUtilChangeState(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag);
	void __fastcall OnToggleFullMapVisibility(SDK::UObject* Object);
	int __fastcall PostEventAtLocation(SDK::UAkAudioEvent* AkEvent, SDK::FVector& Location, SDK::FRotator& Orientation, UC::FString& EventName, SDK::UObject* WorldContextObject);

	// Constructor Hooks
	SDK::UAJBWindowWidget* __fastcall AJBWindowWidget(SDK::UAJBWindowWidget* This);
	SDK::ALevelScriptActor* __fastcall ALevelScriptActor(SDK::AActor* This, void* ObjectInitializer);
}
}