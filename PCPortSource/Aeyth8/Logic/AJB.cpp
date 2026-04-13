#include "AJB.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../../Version/resource.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/UnrealTypes.h"
#include "../Tools/BytePatcher.h"

#include "../Tools/UnrealExternWrapper.h"

#include "../CmdArgs/CommandLineArgs.h"

#include "../../Dumper-7/SDK/BP_AJBGameInstance_classes.hpp"
#include "../../Dumper-7/SDK/EngineSettings_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBOutGameProxy_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGameCharacter_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGamePlayerController_classes.hpp"
#include "../../Dumper-7/SDK/FlowState_classes.hpp"
#include "../../Dumper-7/SDK/FlowState_structs.hpp"
#include "../../Dumper-7/SDK/BP_PPV_VSFilter_classes.hpp"
#include "../../Dumper-7/SDK/BPF_AJBGameInstance_classes.hpp"

#include "../../Dumper-7/CustomSDK/WBP_OptionsMenu_classes.hpp"				// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/BP_GlobalPatcher_classes.hpp"			// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/LemonHelper_classes.hpp"					// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_CallbackTimerHandler_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/BP_Synchronizer_classes.hpp"				// Custom SDK header (NOT GAME NATIVE)

#include <intrin.h>
#include "../../Dumper-7/SDK/WB_Credit_classes.hpp"
#include "../../Dumper-7/SDK/WB_TimeLimitCountDown_classes.hpp"
#include "../../Dumper-7/SDK/WB_PpBuyWindow_classes.hpp"

#include "../../Dumper-7/SDK/AkAudio_classes.hpp"
#include "../../Dumper-7/SDK/BP_SimpleStartLocationSelectGameMode_classes.hpp"

// Needed for ALevelScriptActor hook
#include "../../Dumper-7/SDK/AJBCreadit_classes.hpp"

// Needed for the FlowstateUtil hook
#include "../../Dumper-7/SDK/BP_AJBInGameHUD_classes.hpp"
#include "../../Dumper-7/SDK/WB_FullMap_classes.hpp"

// Needed for AJBSimpleMatch_P translation
#include "../../Dumper-7/SDK/WB_ModeSelect_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelectTextBase_classes.hpp"

// Needed for temporarily fixing the infinite loading screen.
#include "../../Dumper-7/SDK/BP_AJBBattleGameMode_classes.hpp"

// ......
#include "Server/Temporary/MRWT.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL; using namespace Global; using namespace Pointers;

// -- UE Defaults -- 

SDK::UClass*						AJB::CoreUObject{nullptr};
SDK::UGameMapsSettings*				AJB::MapSettings{nullptr};

// -- AJB Specific -- 

SDK::UBP_AJBGameInstance_C*			AJB::Instance{nullptr};
SDK::UAJBAMSystemSettings*			AJB::Settings{nullptr};
SDK::UAJBAMSystemObject*			AJB::System{nullptr};
SDK::ABP_AJBOutGameProxy_C*			AJB::OutGameProxy{nullptr};
SDK::UAJBVersion*					AJB::Version{nullptr};
SDK::UAJBSettings*					AJB::AJBSettings{nullptr};

SDK::AAJBCreadit_C*					AJB::CreaditPointer{nullptr};
SDK::UWB_ModeSelect_C*				AJB::SimpleMatchHUD{nullptr};
SDK::FGameplayTag*					AJB::CurrentFlowstate{nullptr};

__int32*							AJB::PlayerPoints{nullptr};
bool*								AJB::bDebugInputMode{nullptr};

SDK::ALemonHelper_C*				AJB::MOD_LemonHelper{nullptr};
bool								AJB::bIsLemonPossessioned{false};
bool								AJB::bDebugModeFromCMLA{false};
int									AJB::TEMP_CachedCharacterID{1};
int									AJB::NUM_CPUCores{0};

// -- MOD --

SDK::UClass*						AJB::MOD_OptionsMenuClass{nullptr};
SDK::UWBP_OptionsMenu_C*			AJB::MOD_OptionsMenu{nullptr};

SDK::UClass*						AJB::MOD_GlobalPatcherClass{nullptr};
SDK::UBP_GlobalPatcher_C*			AJB::MOD_GlobalPatcher{nullptr};

SDK::UClass*						AJB::MOD_CallbackTimerClass{nullptr};
SDK::UWBP_CallbackTimerHandler_C*	AJB::MOD_CallbackTimer{nullptr};

SDK::UClass*						AJB::MOD_SynchronizerClass{nullptr};
SDK::ABP_Synchronizer_C*			AJB::MOD_PROXY_Synchronizer{nullptr};
SDK::ABP_Synchronizer_C*			AJB::MOD_Global_Synchronizer{nullptr};

const wchar_t*						AJB::DLLCommitVersion{L"[v0.5.5]"};
UC::FString*						AJB::StrDLLCommitVersion{nullptr};
UC::FString*						AJB::StrInGameUserName{nullptr};

// -- Windows External --

HMODULE								AJB::PCPortLib{nullptr};
HWND								AJB::PCPortWindow{nullptr};
bool								AJB::bKeepInitialThreadAlive{true};


// -- Assembly Opcodes -- 

constexpr BYTE MOV{0xB0}; // 8 bit to AL register
constexpr BYTE RETN{0xC3};
constexpr BYTE NOP{0x90};

void __fastcall GetNationalMatchSchedule(SDK::UAJBGameInstance*, bool*, bool*, SDK::FAJBMatchSchedule*, SDK::FAJBMatchScheduleDateTime*, SDK::FAJBMatchScheduleDateTime*);

extern void AJBPreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

std::vector<Hooks::HookStructure> StandaloneHooks =
{
	{OFF::UConsole,							UFunctions::UConsole},
	{OFF::ConsoleCommand,					UFunctions::ConsoleCommand},
	{OFF::OutputText,						UFunctions::OutputText},
	{OFF::Browse,							UFunctions::Browse},
	{OFF::Login,							UFunctions::Login},
	{OFF::PreLogin,							UFunctions::PreLogin},
	{OFF::AJBPreLogin,						AJBPreLogin},
	{OFF::InitListen,						UFunctions::InitListen},
	{OFF::NotifyControlMessage,				UFunctions::NotifyControlMessage},
	{OFF::InitLocalConnection,				UFunctions::InitLocalConnection},
	{OFF::AppPreExit,						UFunctions::AppPreExit},
	{OFF::IsNonPakFileNameAllowed,			UFunctions::IsNonPakFilenameAllowed},
	{OFF::FindFileInPakFiles,				UFunctions::FindFileInPakFiles},

	{OFF::ClientTeamMessageImplementation,	UFunctions::ClientTeamMessageImplementation},
	//{OFF::ProcessMulticastDelegate,		UFunctions::ProcessMulticastDelegate}, // unsure if I'm keeping this
	//{OFF::BroadcastDelegate,				UFunctions::BroadcastDelegate},
	{OFF::Invoke,							UFunctions::Invoke},
	{OFF::HandleStartingNewPlayer,			UFunctions::HandleStartingNewPlayer},

	//{OFF::PrepareMapChange,				UFunctions::PrepareMapChange},
	{OFF::PostLogin,						UFunctions::PostLogin},
	//{OFF::Logout,							UFunctions::Logout}, // Doesn't get called for some STUPID reason
	{OFF::Close,							UFunctions::CloseConnection},
	//{OFF::BeginPlay,						UFunctions::BeginPlay},
	//{OFF::RequestLevel,					UFunctions::RequestLevel}, Temporarily disabled since it inevitably crashes and if it doesn't it will stall forever
	

	// Core gameplay hooks

	{OFF::ALevelScriptActorConstructor,		AJB::ALevelScriptActor},
	{OFF::AJBWindowWidget,					AJB::AJBWindowWidget},
	{OFF::PostEventAtLocation,				AJB::PostEventAtLocation}, // RANDOMLY CRASHES INGAME NEEDS FIXED FOR NULLPTR DEREFERENCE
	{OFF::ChangeState,						AJB::FlowUtilChangeState},
	
	// Server logic hooks

	{OFF::IsTenpoHost,						AJB::IsServer},
	{OFF::IsAJBOfflineMode,					AJB::IsOfflineMode},
	{OFF::IsOfflineMode,					AJB::IsOfflineMode},	
};

A8CL::OFFSET NetID("UAJBNetworkObserver::GetNetID", 0x4ECC80);
A8CL::OFFSET OpenCommand("AAJBOutGameProxy::GetOpenCommand", 0x506DD0);
A8CL::OFFSET PostEventByName("UAkComponent::PostAkEventByName", 0x291650);
A8CL::OFFSET PostEvent("UAkComponent::PostAkEvent", 0x291390);
A8CL::OFFSET LoadBankByName("UAkGameplayStatics::LoadBankByName", 0x286850);

void __fastcall GetNationalMatchSchedule(SDK::UAJBGameInstance* This, bool* OutCanPlaySoloMode, bool* OutCanPlayPairMode, SDK::FAJBMatchSchedule* OutMatchSchedule, SDK::FAJBMatchScheduleDateTime* OutSoloScheduleDateTime, SDK::FAJBMatchScheduleDateTime* OutPairScheduleDateTime)
{
	*OutCanPlaySoloMode = true;
	*OutCanPlayPairMode = true;

}

void FormatterHook(void* This, bool bInRebuildText, bool bInRebuildAsSource, SDK::FString& OutResult)
{
	OFF::ToFormattedString.VerifyFC<void(__thiscall*)(void*, bool, bool, SDK::FString&)>()(This, bInRebuildText, bInRebuildAsSource, OutResult);

	LogA("FormatterThing", OutResult.ToString());
}

// Server functionality only
void TryGetMatchingMyPairInfo(SDK::UAJBGameInstance* This, bool* bIsValid, bool* bIsRoomHost, SDK::FMatchingPlayerInfo* Out)
{
	if (AJB::bDebugModeFromCMLA) LogA(OFF::TryGetMatchingMyPairInfo.GetName(), std::format("[This]: {} [bIsValid]: {} [bIsRoomHost]: {} [Info]: {}", This->GetFullName(), *bIsValid, *bIsRoomHost, AJB::PlayerInfoParser(*Out)));
	//SDK::FString Lemon{L"Lemon Possession"};
	//AJB::GetBlueprintClass<SDK::UAJBPlayerInfoUtility>()->SetBotFMatchingPlayerInfo(Out, Lemon);
	//Call<UFunctions::Decl::CopyString>(OFF::CopyString.PlusBase())(&Out->PlayerName, &Lemon);
	//memcpy(Out, &AJB::Instance->MatchingPlayers[0].Second, sizeof(SDK::FMatchingPlayerInfo));
	//AJB::CopyString(&Out->PlayerName, &AJB::Instance->MatchingPlayers[0].Second.PlayerName);	

	return OFF::TryGetMatchingMyPairInfo.VerifyFC<void(__thiscall*)(SDK::UAJBGameInstance*, bool*,bool*, SDK::FMatchingPlayerInfo*)>()(This, bIsValid, bIsRoomHost, Out);
}

bool TryGetMatchingPlayerInfoByPlayerIDPureFunction(SDK::UAJBGameInstance* This, int32 PlayerID, SDK::FMatchingPlayerInfo* Out)
{
	// Valid indexes start at 1 for some reason.
	//if (PlayerID < 0) return false; 

	/*if (AJB::IsServer() && PlayerID > 0)*/ // NOTE: Might not have to be the server since the client keeps calling this and it appears to be working anyways when it does
	if (PlayerID > 0)
	{
		//bool Result = OFF::TryGetMatchingPlayerInfo.VerifyFC<bool(__thiscall*)(SDK::UAJBGameInstance*, int32, SDK::FMatchingPlayerInfo*)>()(This, PlayerID, Out);

		// Copying from the GameInstance WHICH HAS THE ACTUAL INFORMATION because this function is AN IDIOT.
		//memcpy(Out, &AJB::Instance->MatchingPlayers[PlayerID].Second, sizeof(SDK::FMatchingPlayerInfo));



		//Out = &AJB::Instance->MatchingPlayers[PlayerID].Second;

		/*for (int i{ 0 }; i < AJB::Instance->MatchingPlayers.Num(); ++i)
		{
			LogA("INHOOK - MatchingPlayers", std::format("[Player]: {} | [FMatchingPlayerInfo]: {}", AJB::Instance->MatchingPlayers[i].First.ToString(), AJB::PlayerInfoParser(AJB::Instance->MatchingPlayers[i].Second)));
		}*/

		byte IndexedId{static_cast<byte>(PlayerID) - 1u};
		
		if (AJB::Instance->MatchingPlayers.IsValidIndex(IndexedId))
		{
			SDK::FMatchingPlayerInfo const* Info = &AJB::Instance->MatchingPlayers[IndexedId].Second;

			AJB::CopyString(&Out->PlayerName, &AJB::Instance->MatchingPlayers[IndexedId].First);
			Out->CharactorID = Info->CharactorID;
			Out->CustomData.charaSkinId = Info->CustomData.charaSkinId;
			Out->PlayerID = PlayerID;

		}

		if (AJB::bDebugModeFromCMLA) LogA(OFF::TryGetMatchingPlayerInfo.GetName(), std::format("[PlayerID]: {} | [OUT FMatchingPlayerInfo]: {}", PlayerID, Out ? AJB::PlayerInfoParser(*Out) : "NULLPTR"));
		
		return true;
	}

	return OFF::TryGetMatchingPlayerInfo.VerifyFC<bool(__thiscall*)(SDK::UAJBGameInstance*, int32, SDK::FMatchingPlayerInfo*)>()(This, PlayerID, Out);
}

const wchar_t* GetUsername()
{
	return CMLA::Username.GetArgumentAsString();
}

int32 LoadBankByNameHook(SDK::UAkGameplayStatics* This, SDK::FString& Name)
{
	LogA(LoadBankByName.GetName(), Name ? Name.ToString() : "Null");
	return PostEventByName.VerifyFC<int32(__thiscall*)(SDK::UAkGameplayStatics*, SDK::FString&)>()(This, Name);
}

int32 PostEventByNameHook(SDK::UAkComponent* This, SDK::FString& Name)
{
	LogA(PostEventByName.GetName(), Name ? Name.ToString() : "Null");
	return PostEventByName.VerifyFC<int32(__thiscall*)(SDK::UAkComponent*, SDK::FString&)>()(This, Name);
}

int32 PostEventHook(SDK::UAkComponent* This, SDK::UAkAudioEvent* Event, int32 CallbackMask, void* Delegate, SDK::FString& InEventName)
{
	LogA(PostEventByName.GetName(), InEventName ? InEventName.ToString() : "Null");
	return PostEvent.VerifyFC<int32(__thiscall*)(SDK::UAkComponent*, SDK::UAkAudioEvent*, int32, void*, SDK::FString&)>()(This, Event, CallbackMask, Delegate, InEventName);
}

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

A8CL::OFFSET GetBaseMaterial("UMaterialInterface::GetBaseMaterial", 0x109B860);
SDK::UMaterial* HGetBaseMaterial(void* This)
{
	return SDK::UObject::FindObject<SDK::UMaterial>("Material M_LemonPossession.M_LemonPossession");

	return GetBaseMaterial.VerifyFC<SDK::UMaterial * (__thiscall*)(void*)>()(This);
}

A8CL::OFFSET GetMaterialInterface("FMaterialResource::GetMaterialInterface", 0x14D2C50);
SDK::UMaterialInterface* GetMaterial(void* This)
{
	static SDK::UMaterial* LemonEssence{nullptr};
	if (GWorld.GetPointer())
	{
		if (!LemonEssence) LemonEssence = SDK::UObject::FindObject<SDK::UMaterial>("Material M_LemonPossession.M_LemonPossession");
		else
		{
			return LemonEssence;
		}
	}
	
	return GetMaterialInterface.VerifyFC<SDK::UMaterialInterface * (__fastcall*)(void*)>()(This);
}

A8CL::OFFSET oGetDefaultMaterial("UMaterial::GetDefaultMaterial", 0x14ABA70);
SDK::UMaterial* GetDefaultMaterial(void* This)
{
	/*static SDK::UMaterial* Lemon{nullptr};
	if (!Lemon)
	{
		SDK::ALemonHelper_C* LemonHelper = Pointers::SpawnActor<SDK::ALemonHelper_C>();
		if (LemonHelper)
		{
			LemonHelper->PlayGrayscaleLemonPossession();
			Lemon = SDK::UObject::FindObject<SDK::UMaterial>("Material M_LemonPossession.M_LemonPossession");
		}		
	}
	if (Lemon)
	{
		return Lemon;
	}*/

	return oGetDefaultMaterial.VerifyFC<SDK::UMaterial*(__fastcall*)(void*)>()(This);
}

A8CL::OFFSET FTextConstructor("FText::FText", 0x5DCD20);
SDK::FText* FText(SDK::FText* This, SDK::FString* InString)
{
	SDK::FText* Return = FTextConstructor.VerifyFC<SDK::FText*(__fastcall*)(SDK::FText*, SDK::FString*)>()(This, InString);
	LogA(FTextConstructor.GetName(), std::format("{} | {}", This->ToString(), InString->ToString()));

	return Return;
}

A8CL::OFFSET oAddActionMapping("SDK::UPlayerInput::AddActionMapping", 0x1793C60);
void AddActionMapping(SDK::UPlayerInput* This, SDK::FInputActionKeyMapping& Mapping)
{
	LogA(oAddActionMapping.GetName(), std::format("[This]: {} | [Action]: {} | [Key]:{}", This->GetFullName(), Mapping.ActionName.ToString(), Mapping.Key.KeyName.ToString()));
	if (Mapping.ActionName.ToString() == "HDbg_DebugMenu")
	{
		Call<void(__thiscall*)(SDK::UPlayerInput*, SDK::FKey Key, float)>(PB(0x17A80B0))(This, Mapping.Key, 1.0f);
	}
	return oAddActionMapping.VerifyFC<void(__thiscall*)(SDK::UPlayerInput*, SDK::FInputActionKeyMapping&)>()(This, Mapping);
}

A8CL::OFFSET oWinGetUsername("FWindowsPlatformProcess::UserName", 0x699AA0);
const wchar_t* WinGetUsername()
{
	if (AJB::StrInGameUserName)
	{
		return AJB::StrInGameUserName->CStr();
	}

	return L"NAMELESS FECKER";
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
			
			
			//Uncomment to unrestrict the GUI size, allowing for bigger screens to resize and feel more like a PC game.

			if (CMLA::Debug.GetAsBool())
			{
				SDK::UUserInterfaceSettings* Interface{nullptr};

				SDK::UClass* TheClass = Call<SDK::UClass * (__fastcall*)()>(PB(0x1908090))();
				Interface = Call<SDK::UUserInterfaceSettings*(__fastcall*)(SDK::UClass*)>(OFF::CreateDefaultObject.PlusBase())(TheClass);
				LogA("Interface", Interface->GetFullName());
				Call<void(__fastcall*)(SDK::UObject*, SDK::UClass*, const wchar_t*, uint32, SDK::UProperty*)>(PB(0x8066C0))(Interface, TheClass, 0,0,0);
			}

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
		
		
		#################### TO DO ####################

		Recreate this logic without any offsets by parsing the import directory and finding all DLLs requiring to be patched.
		Have something to find the end instruction to ensure that the patch can fit, also have something that ISN'T string parsing to determine the return value without too much accuracy just enough to make sure it works.
		
		*/

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
		//BytePatcher::ReplaceBytes(PB(0x13CCBD8), {NOP, NOP}); ^ Actual patch is this line right here that I am commenting on <---- ; WRONG both need to be patched I think but I didnt look at the binary to actually verify I just tested it again today
		
		//BytePatcher::ReplaceBytes(PB(0x49DEC0), {MOV, 01, RETN, NOP}); // UAJBUtilityFunctionLibrary::IsEditorPreview
		BytePatcher::ReplaceBytes(PB(0x49DF00), ReturnZero); // UAJBUtilityFunctionLibrary::IsEnableGachaSchedule
		BytePatcher::ReplaceBytes(PB(0x4978B0), { 0xB8, 0x90, 0x90, 0x00, 0x00, 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90}); // UAJBSettings::GetDefaultCredit
		BytePatcher::ReplaceBytes(PB(0x499AA0), {MOV, 1, RETN, NOP}); // UAJBUtilityFunctionLibrary::CanAJBArcadeGamePlay
		//BytePatcher::ReplaceByte(PB(0x47E422), 0x74); // UAJBGameInstance::GetNationalMatchSchedule JNZ -> JZ

		//BytePatcher::ReplaceBytes(PB(0x500B20), {MOV, 1, RETN, NOP, NOP}); // AAJBOutGameProxy::CanTenpoBattle
		
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

		Hooks::CreateAndEnableHook(OFF::GetUsername, GetUsername);
		Hooks::CreateAndEnableHook(OFF::TryGetMatchingMyPairInfo, TryGetMatchingMyPairInfo);

		if (CMLA::HookAndLogProcessEvent.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::ProcessEvent, UFunctions::ProcessEvent);
		}
		/*if (CMLA::HookAndLogInvoke.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::Invoke, UFunctions::Invoke);
		}*/
		if (CMLA::HookAndLogSpawnActor.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::SpawnActor, UFunctions::SpawnActor);
		}
		if (CMLA::HookAndLogLoader.GetAsBool())
		{
			Hooks::CreateAndEnableHook(OFF::StaticLoadClass, UFunctions::StaticLoadClass);
			Hooks::CreateAndEnableHook(OFF::StaticLoadObject, UFunctions::StaticLoadObject);
		}

		Hooks::CreateAndEnableHook(NetID, GetNetID);
		Hooks::CreateAndEnableHook(CharacterNo, SetCharNo);

		Hooks::CreateAndEnableHook(OFF::TryGetMatchingPlayerInfo, TryGetMatchingPlayerInfoByPlayerIDPureFunction);
		//Hooks::CreateAndEnableHook(oWinGetUsername, WinGetUsername);


		//Hooks::CreateAndEnableHook(oGetDefaultMaterial, GetDefaultMaterial);

		//Hooks::CreateAndEnableHook(ExecCharacterNo, execSetCharNo);
		if (CMLA::Debug.GetAsBool())
		{
			AJB::bDebugModeFromCMLA = true;
			
			Hooks::CreateAndEnableHook(GSetString, SetString);			// Major problem that needs to be handled later.

			Hooks::CreateAndEnableHook(PostEventByName, PostEventByNameHook);
			Hooks::CreateAndEnableHook(oAddActionMapping, AddActionMapping);
		}
		
		if (CMLA::LemonPossession.GetAsBool())
		{
			AJB::bIsLemonPossessioned = true;
		}

		//Hooks::CreateAndEnableHook(GetBaseMaterial, HGetBaseMaterial);

		/* If I remember correctly none of these hooks did anything.
		Hooks::CreateAndEnableHook(OpenCommand, GetOpenCommand);
		Hooks::CreateAndEnableHook(ObjBlueprint, NewObjectFromBlueprint);		
		Hooks::CreateAndEnableHook(PostEvent, PostEventHook);
		Hooks::CreateAndEnableHook(LoadBankByName, LoadBankByNameHook);*/

		

		//Hooks::CreateAndEnableHook(OFF::ALevelScriptActorConstructor, ALevelScriptActor);
		//Hooks::CreateAndEnableHook(OFF::ToFormattedString, FormatterHook);
		//Hooks::CreateAndEnableHook(FTextConstructor, FText);
		

		//BytePatcher::ReplaceBytes(PB(0x47C510),{RETN,NOP}); // UAJBGameInstance::ClearMatchingID

		
	}
	
}

void AJB::Init_Engine()
{
	while (!GEngine) Sleep(25);

	MRWT::Activate();

	byte* LogVerbosity = reinterpret_cast<byte*>(PB(0x300D3C8));
	*LogVerbosity = 6u;

	AJB::CoreUObject = SDK::UObject::FindClass("Class CoreUObject.Object");

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
	}

	if ((AJB::MapSettings = SDK::UGameMapsSettings::GetDefaultObj()) != nullptr)
	{
		FName::NAME_FindOrAdd(&MapSettings->GameDefaultMap.AssetPathName, CMLA::GameDefaultMap.GetArgumentAsString());
		FName::NAME_FindOrAdd(&MapSettings->TransitionMap.AssetPathName, CMLA::TransitionMap.GetArgumentAsString());
		FName::NAME_FindOrAdd(&MapSettings->GlobalDefaultGameMode.AssetPathName, CMLA::GlobalDefaultGameMode.GetArgumentAsString());
	}

	if (!IsNull(AJB::Version = SDK::UAJBVersion::GetDefaultObj()))
	{
		SDK::FString NewVersion{L"JJL128-1-NA-MPR0-F02-AEYTH8"};
		Call<UFunctions::Decl::CopyString>(OFF::CopyString.PlusBase())(&Version->BuildName, &NewVersion);
	}
	if (!AJB::StrDLLCommitVersion)
	{
		// Creates the global wide string literal into a dynamic FString. 
		static SDK::FString DLLCommitVersionSingleton{AJB::DLLCommitVersion};
		if (DLLCommitVersionSingleton.IsValid())
		{
			AJB::StrDLLCommitVersion = &DLLCommitVersionSingleton;
		}
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

	static wchar_t VersioningBuffer[30]{L"AJB PC Port V28 "};
	lstrcatW(VersioningBuffer, AJB::DLLCommitVersion);
	SetWindowTextW(AJB::PCPortWindow, VersioningBuffer);
	//SetConsoleTitleW(AJB::DLLCommitVersion);

	SYSTEM_INFO CPUInfo{};
	GetSystemInfo(&CPUInfo);

	AJB::NUM_CPUCores = CPUInfo.dwNumberOfProcessors;
}



void AJB::Init_Vars()
{
	Instance = static_cast<SDK::UBP_AJBGameInstance_C*>(GWorld->OwningGameInstance);
	Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings);
	System = static_cast<SDK::UAJBAMSystemObject*>(Instance->AMSystemObject);
	PlayerPoints = (&System->PP);

	/*SDK::FString ElSev{L"1170"};
	SDK::FString Username{CMLA::Username.GetArgumentAsString()};
	CopyString(&Instance->PlayerLoginInfo.SessionID, &ElSev);
	CopyString(&Instance->PlayerLoginInfo.AccessCode, &ElSev);
	CopyString(&Instance->PlayerLoginInfo.UserDataID, &ElSev);
	CopyString(&Instance->PlayerLoginInfo.MatchingPlayerInfo.PlayerName, &Username);
	CopyString(&Instance->PlayerLoginInfo.UserDataID, &ElSev);
	Instance->PlayerLoginInfo.MatchingPlayerInfo.PlayerIconID = 5;
	Instance->PlayerLoginInfo.bIsBNCard = true;
	Instance->PlayerLoginInfo.bIsGuest = false;*/
			
	/*for (SDK::FCustomData& Data : Instance->PlayerLoginInfo.CustomData)
	{
		LogA("charaSkinId", std::to_string(Data.charaSkinId));
		Data.charaSkinId = 2;
		for (SDK::FEmoteData& Emote : Data.EmoteData)
		{
			LogA("Emote", Emote.EmoteName.ToString());
			Emote.emoteId = 11;
		}
	}*/

	/**(int*)&Instance->Pad_3A0[8] = 2; UAJBGameInstance::GetNationalMatchSchedule Modifies this*/

	if (!IsNull(Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings)))
	{
		bDebugInputMode = (&Settings->bDebugInputMode);

		Settings->CoinOptions.FreePlay = true;
		Settings->bUseDedicatedSeverStartSelect = true;
		//Settings->ShopEventSettings.bIsShopCompetition = true;
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
		//LogA("AJBSettings AutoPlayTestMode", std::to_string(AJBSettings->AutoPlayTestMode));
	}

	SDK::UAJBArcadeTimeManager* TimeManager{nullptr};
	if (!IsNull(TimeManager = Instance->ArcadeTimeManager))
	{
		// Can 100% confirm that this somehow fixes being booted to the main menu when the store close time is up.
		// It also allows you to use the menu as if it wasn't closed.
		// I'm unaware of any negative sideeffects caused from doing this.
		Instance->ArcadeTimeManager = nullptr;

	}
	
	//AJB::ThreadLoop(); // JMPs to the ThreadLoop until process exit or variable set for thread destruction.
}

void AJB::ThreadLoop()
{
	while (AJB::bKeepInitialThreadAlive)
	{
		//Sleep(100);

		/*
			To be implemented later if needed....
		*/
	}
}

// -- Pointers

SDK::ABP_PPV_VSFilter_C* AJB::GetPostProcessFilter(const SDK::ABP_AJBInGamePlayerController_C* Player, const bool bCreateIfNull)
{
	if (Player && Player->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
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

void AJB::CopyString(UC::FString* StringToModify, UC::FString* StringToCopy)
{
	Call<UFunctions::Decl::CopyString>(OFF::CopyString.PlusBase())(StringToModify, StringToCopy);
}



bool AJB::IsServer()
{
	SDK::UWorld* CurrentWorld = GWorld.GetPointer();
	if (CurrentWorld && CurrentWorld->NetDriver)
	{
		/*LogA("GWorld", CurrentWorld->GetFullName());
		LogA("NetDriver", CurrentWorld->NetDriver->GetFullName());*/
		// Only clients have a valid ServerConnection pointer.
		return CurrentWorld->NetDriver->ServerConnection == nullptr && GetNetMode(CurrentWorld->NetDriver) == Enums::ENetMode::NM_ListenServer;
	}

	return false;
}

bool A8CL::AJB::IsInSession()
{
	SDK::UWorld* CurrentWorld = GWorld.GetPointer();
	return CurrentWorld && CurrentWorld->NetDriver && CurrentWorld->NetDriver->ServerConnection;
}

bool A8CL::AJB::IsOfflineMode()
{
	return !IsInSession();
}

void AJB::CreateCallbackTimer(void* FunctionCallback, float fTimer)
{
	if (AJB::MOD_CallbackTimer)
	{
		uint64 Function = (uint64)FunctionCallback;

		uint32 Lower = static_cast<uint32>(Function & 0xFFFFFFFF);
		uint32 Upper = static_cast<uint32>((Function >> 32) & 0xFFFFFFFF);

		AJB::MOD_CallbackTimer->SetCallbackTimer(fTimer, Upper, Lower);
	}
}

void AJB::TranslateSimpleMatch()
{
	//LogA("TranslateSimpleMatch", "START");
	
	struct RetainerBoxSubclass : SDK::UWB_ModeSelectTextBase_C { SDK::URetainerBox* RetainerBox; };

	struct WidgetSubclassIndexer
	{
		// This may seem confusing atfirst but all this really does is prevent me from having to include every single pointless header for each widget.
		// It simply adds the offsets to memory starting from UWB_ModeSelect_C and the offsets lead to each widget pointer and then retainer box within.
		static RetainerBoxSubclass* GetRetainerBox(uint64 MainModeSelectWidget, uint32 OffsetToClass, uint32 OffsetToRetainerBox)
		{
			uint64 Subclass = reinterpret_cast<uint64>(*reinterpret_cast<uint64**>(MainModeSelectWidget + OffsetToClass));
			uint64 RetainerBox = reinterpret_cast<uint64>(*reinterpret_cast<uint64**>(Subclass + OffsetToRetainerBox));

			return reinterpret_cast<RetainerBoxSubclass*>(RetainerBox);
		}
	};

	struct ModeSelectWidget
	{
		uint32			OffsetToClass;
		uint32			OffsetToRetainerBox;
		const wchar_t*  TranslationString;
		byte			BestPlacementIndex;
		bool			bSubwidget = false;
	};

	constexpr const ModeSelectWidget WidgetsToTranslate[] =
	{		
		{0x02E8, 0x0370, L"ONLINE",					0},			// WB_ModeSelect_Button_PAIR		// WB_ModeSelect_Txt_PAIR
		{0x0300, 0x0398, L"GAMBLING",				2},			// WB_ModeSelect_Button_Reward		// WB_ModeSelect_Txt_Reward
		{0x02F0, 0x0378, L"MORE GAMBLING",			1},			// WB_ModeSelect_Button_PremiumDraw // WB_ModeSelect_Txt_PremiumDraw_C_0
		{0x02F8, 0x0330, L"DEALER'S CHALLENGE",		4},			// WB_ModeSelect_Button_PvE			// WB_ModeSelect_Txt_PvE_C_1		
		{0x0310, 0x0368, L"STORE BATTLE",			1},			// WB_ModeSelect_Button_Shop		// WB_ModeSelect_Txt_Shop
		{0x0318, 0x0370, L"ONLINE",					0},			// WB_ModeSelect_Button_SOLO		// WB_ModeSelect_Txt_SOLO
		{0x0320, 0x0330, L"TRAINING",				1},			// WB_ModeSelect_Button_Training	// WB_ModeSelect_Txt_Training
		{0x0328, 0x0358, L"TUTORIAL",				1},			// WB_ModeSelect_Button_Tutorial	// WB_ModeSelect_Txt_Tutorial

		// Subwidgets // They're one less pointer away.

		{0x02E0, 0x0320, L"Exit to Titlescreen",							1, true},	// WB_ModeSelect_Button_EndGame		// RetainerBox_1
		{0x02F8, 0x0328, L"Fight waves of bots in the Everglades Farm.",	6, true},	// WB_ModeSelect_Button_PvE			// RetainerBox_0	// The only UAJBTextBlock is in index #6, everything else is a UImage or other crap.
	};

	static SDK::FString Blank{L" "};

	for (const ModeSelectWidget& WidgetTT : WidgetsToTranslate)
	{
		RetainerBoxSubclass* RetainerBoxWrapper = WidgetSubclassIndexer::GetRetainerBox((uint64)AJB::SimpleMatchHUD, WidgetTT.OffsetToClass, WidgetTT.OffsetToRetainerBox);
		if (RetainerBoxWrapper)
		{
			SDK::URetainerBox* CurrentRetainer = WidgetTT.bSubwidget ? (SDK::URetainerBox*)RetainerBoxWrapper : RetainerBoxWrapper->RetainerBox;
			if (CurrentRetainer)
			{
				SDK::UHorizontalBox* Box = static_cast<SDK::UHorizontalBox*>(CurrentRetainer->Slots[0]->Content);
				const int Count = Box->Slots.Num();

				for (int i{0}; i < Count; ++i)
				{
					if (!Box->Slots[i] || !Box->Slots[i]->Content || !Box->Slots[i]->Content->IsA(SDK::UTextBlock::StaticClass())) continue;

					///LogA("Slot", Box->Slots[i]->Content->GetFullName());
					// LogA(Widget->GetFullName(), std::to_string(i));

					SDK::UTextBlock* Widget = static_cast<SDK::UTextBlock*>(Box->Slots[i]->Content);
					AJB::MOD_GlobalPatcher->SetWidgetText(Widget, i == WidgetTT.BestPlacementIndex ? WidgetTT.TranslationString : Blank);
				}				
			}
		}
	}
}

void AJB::TryFixInfiniteLoadingScreen()
{
	// If a player leaves and rejoins the stupid PlayerID increments even though the count is wrong, it goes from 1 and upwards but due to the bug you will have missing slots.
	// So basically if there is [PlayerID 1], [PlayerID 2] and someone leaves, or rejoins, it becomes [PlayerID 1], [PlayerID 3], now there's a gap, and it also breaks the host for some STUPID reason and deletes the entry for that.
	// And you would assume huh okay so then the disconnecting logic must be broken or missing something, ITS JUST THIS STUPID NUMBER AND SOME OTHER NUMBER THAT HAS NO SYNCHRONIZATION WITH THE REST!

	/*if (BugsToFix & BROKEN_CHARACTER_SPAWN)
	{
		SDK::ABP_AJBInGamePlayerController_C* Player = Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>();
		if (Player) 
		{
			Player->ROS_DebugCharaChange(AJB::TEMP_CachedCharacterID);
		}
	}
	if (BugsToFix & BROKEN_ENTRY)
	{
		for (int i{0}; i < Instance->MatchingPlayers.Num(); ++i)
		{
			auto& Value = Instance->MatchingPlayers[i].Value();

			Value.PlayerID = (i + 1);
		}
	}
	if (BugsToFix & BROKEN_PLAYERID)
	{

	}*/

	LogA("TryFixInfiniteLoadingScreen", "Attempting...");

	/*for (SDK::ULocalPlayer* Player : AJB::Instance->LocalPlayers)*/
	for (SDK::APlayerController* Player : Pointers::FindObjects<SDK::APlayerController>())
	{
		if (Player && Player->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
		{
			SDK::ABP_AJBInGamePlayerController_C* Controller = static_cast<SDK::ABP_AJBInGamePlayerController_C*>(Player);
			if (!Controller->Character)
			{
				const bool bIsHost = Pointers::Player() == Controller;
				if (bIsHost)
				{
					Controller->DebugCharacterChange(AJB::TEMP_CachedCharacterID);
				}
				else Controller->DebugCharacterChange(Controller->CharacterNo > 0 ? Controller->CharacterNo : 1);
			}
		}
	}

	/*SDK::ABP_AJBBattleGameMode_C* CurrentGameMode = AJB::GetGameMode<SDK::ABP_AJBBattleGameMode_C>();
	if (CurrentGameMode)
	{
		CurrentGameMode->ResetGame();
	}*/

	//AJB::CreateCallbackTimer(CheckForInfiniteLoadingScreen, 30.0f);
}

void AJB::CheckForInfiniteLoadingScreen()
{	
	constexpr const char* LogHeader{"CheckForInfiniteLoadingScreen"};
	constexpr const char* SDT_BUG[4]{"FUNCTIONAL | ", "BROKEN_PLAYERID | ", "BROKEN_ENTRY | ", "BROKEN_CHARACTER_SPAWN | "};

	byte Bug{0};

	SDK::UWorld* CurrentWorld = GWorld.GetPointer();
	if (CurrentWorld && CurrentWorld->NetDriver && CurrentWorld->NetDriver->ClientConnections.IsValid())
	{
		if (Instance->MatchingPlayers.Num() > CurrentWorld->NetDriver->ClientConnections.Num())
		{
			Bug |= BROKEN_ENTRY;
		}

		for (int i{0}; i < Instance->MatchingPlayers.Num(); ++i)
		{
			SDK::FMatchingPlayerInfo& Info = Instance->MatchingPlayers[i].Second;

			if (Info.PlayerID == 0)
			{
				Bug |= BROKEN_PLAYERID;
			}
			if (Info.CharactorID == 0)
			{
				Bug |= BROKEN_CHARACTER_SPAWN;
			}

			LogA(LogHeader, AJB::PlayerInfoParser(Info));
		}

		std::string BugResult{""};

		if (Bug == 0)
		{
			BugResult = "No errors detected.";
		}
		else
		{
			BugResult += "Errors found: ";

			byte e{1};
			while (e < 4)
			{				
				if (Bug & (1 << e))
				{
					BugResult += SDT_BUG[e];
				}
				++e;
			}

			AJB::TryFixInfiniteLoadingScreen();
		}

		LogA(LogHeader, BugResult);
	}
}

bool __fastcall AJB::FlowUtilChangeState(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag)
{
	LogA("UFlowStateUtil", std::format("New FlowState: {}", NextStateTag.TagName.ToString()));
	
	AJB::CurrentFlowstate = &NextStateTag;
	
	// The mouse will not lock into the viewport on its own (making KBM compatibility unplayable unless you enjoy constantly holding down middle click to move your camera)
	constexpr const static wchar_t* SDT_MouseLockFlowstates[]
	{
		L"InGame.Gameplay",
		L"InGame.Victory",
		L"InGame.VictoryResult",
		L"InGame.VictoryShot.Posing",
		L"InGame.VictoryShot.Shot",
		L"InGame.VictoryShot.Finish"
	};

	constexpr uint32 SDT_Size = sizeof(SDT_MouseLockFlowstates) / sizeof(SDT_MouseLockFlowstates[0]);

	static SDK::FName MouseLockFlowstates[SDT_Size]{0};

	static bool bOne{0};
	if (!bOne)
	{
		bOne = 1;

		uint32 i{0};
		while (i < SDT_Size)
		{
			MouseLockFlowstates[i] = FName::NAME_FindOrAdd(SDT_MouseLockFlowstates[i]);
			++i;
		}
	}

	if (SDK::APlayerController* PC = Player(); PC != nullptr)
	{
		for (SDK::FName& Flowstate : MouseLockFlowstates)
		{
			if (NextStateTag.TagName == Flowstate)
			{
				OFF::SetInputGameOnly.Call<decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameOnly)>()(PC);
				PC->bShowMouseCursor = false;
				break;
			}
		}

		static SDK::FName InGameStandby = FName::NAME_FindOrAdd(L"InGame.Standby");
		if (AJB::IsServer() && NextStateTag.TagName == InGameStandby)
		{
			static const float WaitFor = AJB::NUM_CPUCores >= 4 ? (16.0f / AJB::NUM_CPUCores) * 10.0f : 60.0f;
			AJB::CreateCallbackTimer(AJB::CheckForInfiniteLoadingScreen, WaitFor);
		}
	}
	
	return OFF::ChangeState.VerifyFC<bool(__fastcall*)(SDK::FFlowStateHandler* StateHandler, SDK::FGameplayTag NextStateTag)>()(StateHandler, NextStateTag);
}

void __fastcall AJB::OnToggleFullMapVisibility(SDK::UObject* Object)
{
	static bool bToggled{false};
	SDK::UWB_FullMap_C* MapCache{nullptr};

	bToggled = !bToggled;

	//LogA("OnToggleFullMapVisibility", Object->GetFullName());

	if (Object->IsA(SDK::ABP_AJBInGameHUD_C::StaticClass()))
	{
		SDK::ABP_AJBInGameHUD_C* HUD = reinterpret_cast<SDK::ABP_AJBInGameHUD_C*>(Object);
		HUD->PlayerOwner->bShowMouseCursor = bToggled;

		OFFSET::VFTable<void(__thiscall*)(SDK::AAJBHUDBase*, SDK::UClass*, SDK::UAJBUserWidget**)>(HUD)[0xFE](HUD, SDK::UWB_FullMap_C::StaticClass(), (SDK::UAJBUserWidget**)&MapCache); // AAJBHUDBase::FindAJBWidgetOfClass

		if (MapCache)
		{
			if (bToggled)
			{
				//LogA("FullMapVisibility", MapCache->GetFullName());
				OFF::SetInputMode_GameAndUIEx.Call<decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx)>()(HUD->PlayerOwner, nullptr, SDK::EMouseLockMode::LockAlways, false);
			}
			else
			{
				OFF::SetInputGameOnly.Call<decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameOnly)>()(HUD->PlayerOwner);
			}
		}
	}
}

int __fastcall AJB::PostEventAtLocation(SDK::UAkAudioEvent* AkEvent, SDK::FVector& Location, SDK::FRotator& Orientation, SDK::FString& EventName, SDK::UObject* WorldContextObject)
{
	if (AJB::bDebugModeFromCMLA) LogA(OFF::PostEventAtLocation.GetName(), EventName.ToString());

	// Play_BGM03_Menu2 is the song played for the stupid "GameOver" sequence whenever you run out of time in AJBSimpleMatch_P (which I patched long ago) but also when you click to "exit" the game.
	// Normally doing so would play the annoying and pointlessly delayed song and then eventually try to go to AJBStartUp_P.
	// Since my browse hook already redirects it to my Titlescreen this hook will simply end the stupid delayed sequence early and immediately head back to the Titlescreen, I'M DONE WAITING.

	if (EventName.ToString() == "Play_BGM03_Menu2")
	{
		constexpr const wchar_t* Titlescreen = L"open /Game/Aeyth8/Maps/TitleScreen/AJBTitleScreen";
		SDK::FString ImmediateExit(Titlescreen);

		UFunctions::UConsole(GEngine->GameViewport->ViewportConsole, ImmediateExit);
	}

	return OFF::PostEventAtLocation.VerifyFC<int32(__fastcall*)(SDK::UAkAudioEvent*, SDK::FVector&, SDK::FRotator&, SDK::FString&, SDK::UObject*)>()(AkEvent, Location, Orientation, EventName, WorldContextObject);
}

SDK::UAJBWindowWidget* __fastcall AJB::AJBWindowWidget(SDK::UAJBWindowWidget* This)
{
	SDK::UAJBWindowWidget* Result = OFF::AJBWindowWidget.VerifyFC<SDK::UAJBWindowWidget*(__fastcall*)(SDK::UAJBWindowWidget*)>()(This);

	if (!Result->IsDefaultObject() && !(Result->Flags & SDK::EObjectFlags::ArchetypeObject))
	{
		if (Result->IsA(SDK::UWB_ModeSelect_C::StaticClass()))
		{
			//LogA("ModeSelect", Result->GetFullName());

			AJB::SimpleMatchHUD = (SDK::UWB_ModeSelect_C*)This;

			if (AJB::MOD_CallbackTimerClass && AJB::MOD_CallbackTimer)
			{
				AJB::CreateCallbackTimer(AJB::TranslateSimpleMatch, 0.0f);
			}
		}
		/*else if (Result->IsA(SDK::UWB_GameOver_C::StaticClass()))
		{
			LogA("Stupid", "it may be stupid BUT ITS ALSO DUMB");
		}*/		
	}

	return Result;
}

SDK::ALevelScriptActor* __fastcall AJB::ALevelScriptActor(SDK::AActor* This, void* ObjectInitializer)
{
	if (This->IsA(SDK::AAJBCreadit_C::StaticClass())) {
		AJB::CreaditPointer = static_cast<SDK::AAJBCreadit_C*>(This);
	}
	return OFF::ALevelScriptActorConstructor.VerifyFC<SDK::ALevelScriptActor* (__fastcall*)(SDK::AActor*, void*)>()(This, ObjectInitializer);
}

