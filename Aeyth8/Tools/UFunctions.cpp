#include "UFunctions.hpp"
#include "Pointers.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../UConsole/Core/ConsoleCommands.h"
#include "../Logic/AJB.h"

#include "../../Dumper-7/SDK/BP_AJBWwiseManager_classes.hpp"
#include "../../Dumper-7/SDK/BPF_AJBWwiseFunctionLibrary_classes.hpp"
#include "../../Dumper-7/SDK/GameplayTags_structs.hpp"

#include "../CmdArgs/CommandLineArgs.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;

/*
		Helpers
*/



const std::string& UFunctions::Helpers::FURLParser(SDK::FURL& URL)
{
	FURLParseCache.clear();

	// Parses FStrings
	for (int i{0}; i < 5; ++i)
	{
		if (&URL->*FURLPointers[i])
		{
			FURLParseCache += ("[" + FURLPointerNames[i] + "]: " + (URL.*FURLPointers[i]).ToString());

			// Combines the host and port
			if (i == 1 && URL.Port) FURLParseCache += ":" + std::to_string(URL.Port);
			FURLParseCache += " | ";
		}
	}
	if (&URL.Valid) FURLParseCache += ("[Valid]:" + std::to_string(URL.Valid) + " | ");

	if (URL.Op.Num() > 0) {
		FURLParseCache += "[Options]: ";
		for (int i{0}; i < URL.Op.Num(); ++i) FURLParseCache += ("?" + URL.Op[i].ToString());
		FURLParseCache += " | ";
	}
	
	return FURLParseCache;
}

const std::string& UFunctions::Helpers::FLPIParser(SDK::FFullyLoadedPackagesInfo& Info)
{
	FLPIParseCache.clear();

	FLPIParseCache += "\n[FullyLoadType]: " + FullyLoadPackageType[(int)Info.FullyLoadType];
	FLPIParseCache += " | [Tag]: " + Info.Tag.ToString() + " | [PackagesToLoad]: { ";

	for (int i{0}; i < Info.PackagesToLoad.Num(); ++i) FLPIParseCache += Info.PackagesToLoad[i].ToString() + " | ";
	FLPIParseCache += " } | [LoadedObjects]: { ";

	for (int i{0}; i < Info.LoadedObjects.Num(); ++i) FLPIParseCache +=  Info.LoadedObjects[i]->GetFullName() + " | ";
	FLPIParseCache += " }\n";

	return FLPIParseCache;
}

const std::string& UFunctions::Helpers::FLPIParser_T(SDK::TArray<SDK::FFullyLoadedPackagesInfo>& Info)
{
	std::string Return;

	for (int i{0}; i < Info.Num(); ++i) Return += UFunctions::Helpers::FLPIParser(Info[i]) + "\n";

	return Return;
}

const std::string& UFunctions::Helpers::FWorldContextParser(SDK::FWorldContext& Context)
{
	FWorldContextParseCache.clear();

	FWorldContextParseCache += ("\n[LastURL]: " + FURLParser(Context.LastURL));
	FWorldContextParseCache += ("\n[LastRemoteURL]: " + FURLParser(Context.LastRemoteURL));
	FWorldContextParseCache += ("\n[PackagesToFullyLoad]: " + FLPIParser_T(Context.PackagesToFullyLoad) + "\n[LoadedLevelsForPendingMapChange]: { ");

	for (int i{0}; i < Context.LoadedLevelsForPendingMapChange.Num(); ++i) FWorldContextParseCache += (Context.LoadedLevelsForPendingMapChange[i]->GetFullName() + " | ");
	FWorldContextParseCache += " }\n";

	// I don't think the rest is very important..

	return FWorldContextParseCache;
}

void UFunctions::Helpers::ProcessEnd()
{
	Hooks::DisableAllHooks();
	Hooks::Uninit(); 
	Global::CloseLog();
}

bool UFunctions::Helpers::CheckForLocalDirectory(const wchar_t* Filename, unsigned char& Byte)
{
	while ((Byte & 0b11) < 3)
	{
		// 1,3,6								  // 2,4,7
		if (Filename[((Byte & 0b11) * 3) + 0] != '.' || Filename[((Byte & 0b11) * 3) + 1] != '.')
		{
			break;
		}

		// 0,5,8 (due to iterators and arrays this is technically 1,6,9)
		if (Filename[((Byte & 0b11) * 3) + 2] != '/' && Filename[((Byte & 0b11) * 3) + 2] != '\\')
		{
			break;
		}

		Byte |= (1 << ((Byte & 0b11) + 2));

		Byte = (Byte & ~0b11) | ((Byte & 0b11) + 1);
	}

	// This logic ensures that we are only allowing file overrides from within the game directory, and disallowing from externals such as AppData\Local
	return ((Byte & 0b00011100) == 0b00011100);
}


using namespace Global;


/*
		UFunctions
*/
#include "../../Dumper-7/SDK/BP_AJBGameInstance_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBOutGameProxy_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBBattleGameMode_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBOutGamePlayerController_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGamePlayerController_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGameCharacter_classes.hpp"
#include "../../Dumper-7/SDK/LoadingScreenSystem_classes.hpp"
#include "../../Dumper-7/SDK/FlowState_classes.hpp"
#include "../../Dumper-7/SDK/FlowState_structs.hpp"
#include "../../Dumper-7/SDK/BP_PPV_VSFilter_classes.hpp"
#include "../../Dumper-7/SDK/BP_HUDCountDownTimerWrapper_classes.hpp"
#include "../../Dumper-7/SDK/BPF_AJBOutGameHUD_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBOutGameHUD_classes.hpp"
#include "../../Dumper-7/SDK/WB_TimeLimitCountDown_classes.hpp"
#include "../../Dumper-7/SDK/WB_Credit_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_classes.hpp"

void UFunctions::UConsole(SDK::UConsole* This, SDK::FString& Command)
{
	std::string StrCommand = Command.ToString();

	// Sound.BGM.Play.BGM01.Attract is the title screen music
	// Sound.BGM.Play.BGM02.Menu1 is the simple match music

	LogA("UConsole", StrCommand);
	
	if (StrCommand == "play")
	{			
		SDK::ABP_AJBWwiseManager_C* Manager = Pointers::SpawnActor<SDK::ABP_AJBWwiseManager_C>();
		
		if (Manager)
		{
			reinterpret_cast<SDK::ABP_AJBWwiseManager_C*>(Manager)->PostWwiseBGMEvent(SDK::FGameplayTag{Pointers::FString2FName(L"Sound.BGM.Play.BGM02.Menu1")}, true);
		}
	}
	else if (StrCommand == "song")
	{
		LogA("Song", AJB::Instance->LastPlayedWwiseBGMEventTag.TagName.ToString());
	}
	else if (StrCommand == "game")
	{
		LogA("Owning GameMode", AJB::GetGameMode()->GetFullName());
	}
	/*else if (StrCommand == "time")
	{
		Pointers::Player<SDK::ABP_AJBOutGamePlayerController_C>()->OutGameProxy->CharacterSelectTimeoutTimer.Handle = 999;
	}
	else if (StrCommand == "char")
	{
		SDK::FMatchingPlayerInfo* Info = (SDK::FMatchingPlayerInfo*)FMemory::Malloc(sizeof(SDK::FMatchingPlayerInfo));

		SDK::ABP_AJBInGameCharacter_C* Char = AJB::GetCharacter();
		if (Char) Char->TryGetMatchingPlayerInfo(Info);
		else { LogA("HOW", "THE CHAR IS INVALID"); }
		LogA("Info", std::to_string(Info->CharactorID));
		LogA("Info", std::string(AJB::PlayerInfoParser(*Info)));
		//LogA("Current Player", std::to_string(Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>()->CharacterNo));
	}
	else if (StrCommand == "load")
	{
		AJB::GetBlueprintClass<SDK::ULoadingScreenSystemBPLibrary>()->EndManualLoadingScreen();
	}*/

	/*if (ConsoleCommands::ParseCommand(StrCommand.c_str()))
	{
		return;
	}*/

	OFF::UConsole.VerifyFC<Decl::UConsole>()(This, Command);
}

SDK::FString* UFunctions::ConsoleCommand(SDK::APlayerController* This, SDK::FString* Result, SDK::FString* Command, bool bWriteToLog)
{
	std::string StrCommand = Command->ToString();

	if (StrCommand == "AJBExecInternal PlayBG Sound.BGM.Play.BGM01.Attract") // Hardcoding this until I finish my console command parser (but this is a bad practice)
	{
		SDK::ABP_AJBWwiseManager_C* Manager = Pointers::SpawnActor<SDK::ABP_AJBWwiseManager_C>();
		
		Manager->PostWwiseBGMEvent(SDK::FGameplayTag{Pointers::FString2FName(L"Sound.BGM.Play.BGM01.Attract")}, true);
		return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, false);
	}
	else if (StrCommand == "AJBExecInternal PlayBG Sound.BGM.Play.BGM02.Menu1")
	{
		SDK::ABP_AJBWwiseManager_C* Manager = Pointers::SpawnActor<SDK::ABP_AJBWwiseManager_C>();
		
		Manager->PostWwiseBGMEvent(SDK::FGameplayTag{Pointers::FString2FName(L"Sound.BGM.Play.BGM02.Menu1")}, true);
		return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, false);
	}
	else if (StrCommand == "hidemouse")
	{
		Pointers::Player()->bShowMouseCursor = false;
	}
	else if (StrCommand == "showmouse")
	{
		Pointers::Player()->bShowMouseCursor = true;
	}
	else if (StrCommand == "lockmouse")
	{
		SDK::APlayerController* Player = Pointers::Player();
		AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_GameOnly(Player);
	}
	else if (StrCommand == "netid")
	{
		LogA("NetID", AJB::Instance->NetworkObserverTask->GetNetID().ToString());
	}
	else if (StrCommand == "battle")
	{
		SDK::FAJBBattleSettings& Settings = AJB::Instance->BattleSettings;
		LogA("Battle Settings", std::format("AI Level: {} | Difficulty: {} | Damage Area Type: {} ", Settings.AILevel, (uint8)Settings.Pad_1, Settings.DamageAreaType));
	}
	else if (StrCommand == "filter")
	{
		SDK::ABP_PPV_VSFilter_C* Filter = AJB::GetPostProcessFilter(AJB::GetPlayer<SDK::ABP_AJBInGamePlayerController_C>());

		if (!IsNull(Filter))
		{
			LogA("Filter", std::to_string((uint8)Filter->CurrentType));
		}
	}
	else if (StrCommand == "shader")
	{
		SDK::ABP_PPV_VSFilter_C* Filter = AJB::GetPostProcessFilter(AJB::GetPlayer<SDK::ABP_AJBInGamePlayerController_C>());

		if (!IsNull(Filter))
		{
			Filter->NextFilter();
		}
	}
	else if (StrCommand == "hud")
	{

		//for (SDK::UWB_Credit_C* Credit : Pointers::FindObjects<SDK::UWB_Credit_C>(false))
		//{
		//	Credit->WB_TimeLimitCountDown->SetVisibility(SDK::ESlateVisibility::Hidden);
		//	/*Credit->WB_TimeLimitCountDown->SetTextNum(1000, 1000);
		//	Credit->WB_TimeLimitCountDown->PreviousTimerNum = 1000;
		//	Credit->WB_TimeLimitCountDown->TimerNum = 1000;*/
		//}
		
		bool Success{false};
		SDK::ABP_AJBOutGameHUD_C* HUD{nullptr};

		AJB::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, AJB::GWorld(), &Success, &HUD);
		if (HUD)
		{
			for (SDK::UClass*& Widget : HUD->CreateWidgets)
			{
				LogA("Widget", Widget->GetFullName());
			}
			HUD->ShowCharacterSelect();
			//HUD->ShowCharacterSelect();
			//HUD->UpdateTimeCountDown(999, 999);
			HUD->TakeOverElapsedTime_ModeSelect = 9999;
			HUD->TakeOverRemainTime_PvE = 9999;
			HUD->TakeOverRemainTime_ShopStandby = 9999;
 		}
	}
	else if (StrCommand == "skin")
	{
		AJB::SetSelectedCharacter(AJB::KAKYOIN, 7, 7);
		LogA("Selected Character", std::to_string(AJB::GetSelectedCharacter()));
	}

	//LogA("ConsoleCommand", std::format("[Owning PlayerController]: {} | [Command]: {}", This->GetFullName(), StrCommand));

	return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, bWriteToLog);
}

UFunctions::BrowseReturnVal UFunctions::Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
{
	constexpr const wchar_t* DefaultMap = L"/Game/Aeyth8/Maps/TitleScreen/PlaceholderTitleScreen";

	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = Pointers::ConstructUConsole(SDK::FString(CMLA::ConsoleKey.GetArgumentAsString()));
		LogA("Browse", "Constructed UConsole early.");
	}

	if (wcscmp(URL.Map.CStr(), L"/Game/AJB/Maps/AJBStartUp_P") == 0 || wcscmp(URL.Map.CStr(), L"/Game/AJB/Maps/AJBTitle_P") == 0)
	{
		SDK::FString Redirect{DefaultMap};
		Call<Decl::CopyString>(OFF::CopyString.PlusBase())(&URL.Map, &Redirect);
	}

	LogA("Browse", Helpers::FURLParser(URL));
	
	//LogA("Browse", Helpers::FWorldContextParser(WorldContext));

	return OFF::Browse.VerifyFC<Decl::Browse>()(This, WorldContext, URL, Error);
	
}

bool UFunctions::InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
{
	LogA("InitListen", This->GetFullName() + " | " + Helpers::FURLParser(LocalURL));
	LocalURL.Port = wcstol(CMLA::ServerPort.GetArgumentAsString(), 0, 10);

	return OFF::InitListen.VerifyFC<Decl::InitListen>()(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
}

SDK::APlayerController* UFunctions::Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage)
{
	LogA("Login", "Called.");

	if (AJB::PlayerPoints) *AJB::PlayerPoints = 1170;
	if (AJB::Instance && AJB::Instance->ArcadeTimeManager) AJB::Instance->ArcadeTimeManager = nullptr;
	
	/*SDK::ABP_AJBBattleGameMode_C* Game = AJB::GetGameMode<SDK::ABP_AJBBattleGameMode_C>();
	if (!IsNull(Game))
	{
		LogA(Game->GetFullName(), std::to_string(Game->bUseTimeLimit));
		Game->bUseTimeLimit = false;
	}
	else
	{
		LogA("Owning GameMode", AJB::GetGameMode()->GetFullName());
	}*/
	//SDK::ULevelStreamingKismet::GetDefaultObj()->LoadLevelInstance(Pointers::UWorld(), L"/Game/Aeyth8/UI/InGame/LVL_KeyListener", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
	//SDK::ULevelStreamingKismet::GetDefaultObj()->LoadLevelInstance(Pointers::UWorld(), L"/Game/Aeyth8/UI/InGame/LVL_KeyListener", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
	
	//LogA("Last Played Event", AJB::Instance->LastPlayedWwiseBGMEventTag.TagName.ToString());

	return OFF::Login.VerifyFC<Decl::Login>()(This, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void UFunctions::PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage)
{
	LogA("PreLogin", "Options: " + Options->ToString() + " Address: " + Address->ToString());
}

void UFunctions::AppPreExit()
{
	Global::ConstructThread(Helpers::ProcessEnd);
	OFF::AppPreExit.VerifyFC<Decl::AppPreExit>()();
}

__int64* UFunctions::SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters)
{



}

void UFunctions::ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms)
{
	constexpr const int32 PEObjectBlacklist[] =
	{


		// Not UE Native

		79194, // BP_CSMannequin_JSP_C
		71490, // WB_SnapTouchScrollBox_C
		71475, // WB_CharaSelectCard_C
		116387, // WB_CharaSelectButton_C
		133945, // WB_CharacterSelect_C
	};

	constexpr const int32 PEFunctionBlacklist[] =
	{
		8321, // ReceiveTick
		7393, // Tick
		7357, // Construct
		7392, // Preconstruct
		7358, // Destruct
		8315, // ReceiveBeginPlay
		8317, // ReceiveEndPlay
		9903, // ReceiveDrawHUD
		14310, // SetRenderOpacity
		14313, // SetRenderTransform
		15895, // SetColorAndOpacity
		9033, // BlueprintModifyCamera
		9034, // BlueprintModifyPostProcess
		8483, // BlueprintUpdateAnimation
		8482, // BlueprintPostEvaluateAnimation
		8482, // BlueprintPostEvaluateAnimation
		2052, // GetButton
		2053, // GetTextBlock
		14739, // GetValue
		7361, // OnAnalogValueChanged
		7362, // OnAnimationFinished
		7363, // OnAnimationStarted
		7380, // OnMouseEnter
		7381, // OnMouseLeave
		7382, // OnMouseMove
		7384, // OnPaint
		18127, // SetIntensity
		17711, // SetFieldOfView
		

		// Not UE Native
		135142, // Get_Img_AllNetIcon_Brush_0
		135219, // Get_Img_AllNetIcon_Brush_0
		136935, // OnCheckPP
		119129, // ExecuteUbergraph_WB_ModeSelectButtonBase
		119390, // ExecuteUbergraph_WB_ModeSelectButtonBase
	};

	bool bLogPE{true};

	for (const int32& ObjNameIndex : PEObjectBlacklist)
	{
		if (This->Name.ComparisonIndex == ObjNameIndex)
		{
			bLogPE = false;
			break;
		}
	}
	if (bLogPE)
	{
		for (const int32& FuncNameIndex : PEFunctionBlacklist)
		{
			if (Function->Name.ComparisonIndex == FuncNameIndex)
			{
				bLogPE = false;
				break;
			}
		}
	}
	
	if (Function->Name.ComparisonIndex == 2130)
	{
		return;
	}
	
	if (bLogPE) 
	{
		LogA("PE", std::format("[UObject]: Name = {} , ComparisonIndex = {} , Address = {} / {} / {} | [UFunction]: Name = {} , Outer = {} , ComparisonIndex = {} , Address = {} / {} / {} | [Parms]: {} / {} |", 
			This->GetFullName(), This->Name.ComparisonIndex, This ? HexToString(*(uintptr_t*)This - GBA) : "nullptr", This ? HexToString(*(uintptr_t*)This) : "nullptr", This ? HexToString((uintptr_t)This) : "nullptr",
			Function->GetFullName(), Function->Outer->GetFullName(), Function->Name.ComparisonIndex, Function ? HexToString(*(uintptr_t*)Function - GBA) : "nullptr", Function ? HexToString(*(uintptr_t*)Function) : "nullptr", Function ? HexToString((uintptr_t)Function) : "nullptr",
			Parms ? HexToString(*(uintptr_t*)Parms) : "nullptr", Parms ? HexToString((uintptr_t)Parms) : "nullptr"));
	}

	OFF::ProcessEvent.VerifyFC<Decl::ProcessEvent>()(This, Function, Parms);
}

void UFunctions::Invoke(SDK::UFunction* This, SDK::UObject* Obj, void* FFrame_Stack, void* Result)
{
	LogA(OFF::Invoke.GetName(), std::format("[UFunction]: {} | [UObject]: {}", This->GetFullName(), Obj->GetFullName()));

	OFF::Invoke.VerifyFC<Decl::Invoke>()(This, Obj, FFrame_Stack, Result);
}

bool UFunctions::IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename)
{
	if (!InFilename) return false;

	BYTE X{0};

	X |= (OFF::IsNonPakFileNameAllowed.VerifyFC<Decl::IsNonPakFilenameAllowed>()(This, InFilename) << 5);

	if (UFunctions::Helpers::CheckForLocalDirectory(InFilename.CStr(), X) && GetFileAttributesW(InFilename.CStr()) != INVALID_FILE_ATTRIBUTES)
	{
		//LogA("IsNonPakFilenameAllowed OVERRIDE", InFilename.ToString());
		return true;
	}
	
	// Returns the result of the actual function which is stored in the 6th bit.
	return X & 0b00100000;
}

bool UFunctions::FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry)
{
	// 00000000
	BYTE X{0};

	// 00[0]00000
	// The return result of the real function (bool) 0/1 will be crammed into the 6th bit.
	X |= (OFF::FindFileInPakFiles.VerifyFC<Decl::FindFileInPakFiles>()(This, Filename, OutPakFile, OutEntry) << 5);

	// This logic ensures that we are only allowing file overrides from within the game directory, and disallowing from externals such as AppData\Local
	if (UFunctions::Helpers::CheckForLocalDirectory(Filename, X))
	{
		// If the file already exists within the pak file
		if (X & 0b00100000 && GetFileAttributesW(Filename) != INVALID_FILE_ATTRIBUTES)
		{
			std::wstring WFile(Filename);
			//LogA("FindFileInPakFiles OVERRIDE", std::string(WFile.begin(), WFile.end()));
			return false;
		}
	}

	// Returns the result of the actual function which is stored in the 6th bit.
	return X & 0b00100000;
}