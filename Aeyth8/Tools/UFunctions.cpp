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
#include "../../Dumper-7/SDK/BP_AJBOutGameProxy_classes.hpp"

#include "../../Dumper-7/SDK/AkAudio_classes.hpp"

#include "../../Dumper-7/SDK/WB_ModeSelect_Button_PvE_classes.hpp"

// A new gamemode base has been designed specifically for my custom UI, instead of multiple gamemodes hardcoded with logic.
//#include "../../Dumper-7/CustomSDK/GM_AJBTitleScreen_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)

#include "../../Dumper-7/CustomSDK/BP_GlobalPatcher_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_OptionsMenu_classes.hpp"		// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_AJBTitleScreen_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/GM_AJBUserInterface_classes.hpp" // Custom SDK header (NOT GAME NATIVE)

#include "../../Dumper-7/CustomSDK/WBP_TLVersionInfo_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)


#include "BytePatcher.h"
#include "../../Dumper-7/SDK/WB_ModeSelect_Button_SOLO_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_Txt_Training_classes.hpp"
#include "../../Dumper-7/SDK/WB_TestModePage_classes.hpp"

#include "../../Dumper-7/SDK/AJBCreadit_classes.hpp"
#include "UnrealExternWrapper.h"

#include "../../Dumper-7/SDK/BP_AJBSimpleMatchGameMode_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_Txt_PvE_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_Txt_Tutorial_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_Button_EndGame_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_Txt_Shop_classes.hpp"
#include "../../Dumper-7/SDK/WB_TestModeMenuBase_classes.hpp"
#include "../../Dumper-7/SDK/WB_CharacterSelect_classes.hpp"
#include "../../Dumper-7/SDK/WB_Fade_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBBattleGameState_classes.hpp"
#include "../../Dumper-7/SDK/BP_SimpleStartLocationSelectGameMode_classes.hpp"

static bool* TOGGLEDEBUGBADGAMEDESIGN{nullptr};

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
	else if (StrCommand == "playmode")
	{
		LogA("Current PlayMode", std::to_string((uint8)AJB::Instance->PlayMode));
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


	using SetInputModeGameAndUI = decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx);
	using SetInputModeGameOnly = decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameOnly);

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
	else if (StrCommand == "mute")
	{
		SDK::ABP_AJBWwiseManager_C* Manager = Pointers::SpawnActor<SDK::ABP_AJBWwiseManager_C>();
		
		Manager->StopWwiseBGMEvent();
		return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, false);
	}
	else if (StrCommand == "UISelect")
	{
		/*SDK::ABP_AJBWwiseManager_C* Manager = Pointers::SpawnActor<SDK::ABP_AJBWwiseManager_C>();

		Manager->PostWwiseBGMEvent(SDK::FGameplayTag{Pointers::FString2FName(L"Sound.UI.Common.Confirm")}, true);*/

		SDK::UAkComponent* Component = Pointers::GetLastOf<SDK::UAkComponent>(false);
		if (Component)
		{
			Component->PostAkEventByName(L"Sound.UI.Common.Confirm");
		}

		return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, false);
	}
	else if (StrCommand.find("AJBExecInternal Kill") != std::string::npos)
	{
		SDK::ABP_AJBInGamePlayerController_C* Player = AJB::GetPlayer();
		Call<Decl::ActorDestroy>(OFF::ActorDestroy.PlusBase())(Player->Character, 1, 1);
		Call<Decl::ActorDestroy>(OFF::ActorDestroy.PlusBase())(Player, 1, 1);
		
		/*if (Player->IsA(SDK::AAJBInGamePlayerController::StaticClass()))
		{
			static_cast<SDK::AAJBInGamePlayerController*>(Player)->OnDebugSuicide();
		}*/
	}
	else if (StrCommand.find("AJBExecInternalHost") != std::string::npos)
	{
		int PARM_Area{0};
		int PARM_NPCCount{0};
		int PARM_NPCDifficulty{0};
		bool PARM_Respawn{false};

		size_t AreaIdx = StrCommand.find("?Area=");
		if (AreaIdx != std::string::npos)
		{
			AreaIdx += 6;
			size_t AreaIdxEnd = StrCommand.find("?", AreaIdx);
			if (AreaIdxEnd == std::string::npos)
			{
				AreaIdxEnd = StrCommand.length();
			}

			PARM_Area = std::stoi(StrCommand.substr(AreaIdx, AreaIdxEnd - AreaIdx));
		}

		size_t NPCIdx = StrCommand.find("?NPCNum=");
		if (NPCIdx != std::string::npos)
		{
			NPCIdx += 8;
			size_t NPCIdxEnd = StrCommand.find("?", NPCIdx);
			if (NPCIdxEnd == std::string::npos)
			{
				NPCIdxEnd = StrCommand.length();
			}

			PARM_NPCCount = std::stoi(StrCommand.substr(NPCIdx, NPCIdxEnd - NPCIdx));
		}
		if (PARM_NPCCount != 0)
		{
			size_t NPCDifficultyIdx = StrCommand.find("?NPCDifficulty=");
			if (NPCDifficultyIdx != std::string::npos)
			{
				NPCDifficultyIdx += 15;
				size_t NPCDifficultyEndIdx = StrCommand.find('?', NPCDifficultyIdx); 
				if (NPCDifficultyEndIdx == std::string::npos) 
				{
					NPCDifficultyEndIdx = StrCommand.length();
				}

				PARM_NPCDifficulty = std::stoi(StrCommand.substr(NPCDifficultyIdx, NPCDifficultyEndIdx - NPCDifficultyIdx));
			}
		}

		PARM_Respawn = StrCommand.find("?Respawn") != std::string::npos;


		SDK::FAJBBattleSettings TheSettings{};
		TheSettings.AILevel = PARM_NPCDifficulty;
		TheSettings.DamageAreaType = PARM_Area;
		AJB::Instance->SetBattleSettings(TheSettings);
		AJB::Instance->PlayMode = SDK::EPlayMode::Shop;
		AJB::Instance->AreaTypeID = PARM_Area;

		//AJB::Instance->DebugNPCCharaIndex = PARM_NPCCount;
		AJB::Instance->NPCNum = PARM_NPCCount;
		AJB::Instance->NPCNumMax = PARM_NPCCount;

		AJB::Instance->bIsLocalSessionMode = true;
		AJB::Instance->CreateSession();
	}
	else if (StrCommand.find("AJBExecInternalChar") != std::string::npos)
	{
		int NewChar = std::stoi(StrCommand.substr(20));

		// Stupid game won't allow you to change characters if it's in "shop" mode.
		SDK::EPlayMode CachedPlayMode = AJB::Instance->PlayMode;
		if (CachedPlayMode != SDK::EPlayMode::None)
		{
			AJB::Instance->PlayMode = SDK::EPlayMode::None;
		}

		bool bLocalCache = AJB::Instance->bIsLocalSessionMode;
		AJB::Instance->bIsLocalSessionMode = false;

		AJB::SetSelectedCharacter((AJB::ESelectedCharacter)NewChar);

		AJB::Instance->bIsLocalSessionMode = bLocalCache;
		AJB::Instance->PlayMode = CachedPlayMode;
	}
	else if (StrCommand.find("AJBExecInternalMode") != std::string::npos)
	{
		uint8 NewPlayMode = std::stoi(StrCommand.substr(20));

		if (NewPlayMode == 3)
		{
			AJB::Instance->bIsLocalSessionMode = true;
		}
		else
		{
			AJB::Instance->bIsLocalSessionMode = false;
		}
		
		AJB::Instance->PlayMode = (SDK::EPlayMode)NewPlayMode;
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
		OFF::SetInputGameOnly.Call<SetInputModeGameOnly>()(Player);
	}
	else if (StrCommand == "netid")
	{
		LogA("NetID", AJB::Instance->NetworkObserverTask->GetNetID().ToString());
	}
	else if (StrCommand == "battle")
	{
		SDK::FAJBBattleSettings& Settings = AJB::Instance->BattleSettings;
		LogA("Battle Settings", std::format("[AI Level]: {} | [Damage Area Type]: {} | [SessionLevel]: {} | [StageTypeID]: {} | [AreaTypeId]: {}", Settings.AILevel, Settings.DamageAreaType, AJB::Instance->SessionLevel.ToString(), AJB::Instance->StageTypeID, AJB::Instance->AreaTypeID));
	}
	else if (StrCommand == "colon")
	{
		AJB::Instance->SessionLevel = Pointers::FString2FName(L"AJBStage04_P");
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

		AJB::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, GWorld, &Success, &HUD);
		if (HUD)
		{
			//HUD->ExecuteUbergraph_BP_AJBOutGameHUD(946);
			//HUD->OnLoaded_123AFB8B4187277BB012C9A7F9DCB63B(HUD->DebugMenuOutGameClassPtr.Get());
			for (SDK::UClass*& Widget : HUD->CreateWidgets)
			{
				LogA("Widget", Widget->GetFullName());
			}
			//HUD->ShowCharacterSelect();
			//HUD->ShowCharacterSelect();
			HUD->UpdateTimeCountDown(999, 999);
			HUD->TakeOverElapsedTime_ModeSelect = 9999;
			HUD->TakeOverRemainTime_PvE = 9999;
			HUD->TakeOverRemainTime_ShopStandby = 9999;
 		}

		for (SDK::UWB_TimeLimitCountDown_C* HUDs : Pointers::FindObjects<SDK::UWB_TimeLimitCountDown_C>(0))
		{
			//if (HUDs->Flags & (SDK::EObjectFlags::ArchetypeObject | SDK::EObjectFlags::ClassDefaultObject)) continue;
			LogA("Time", HUDs->GetFullName());
		}
	}
	else if (StrCommand == "char")
	{
		static bool bToggle{false};
		SDK::ABP_AJBOutGameHUD_C* HUD{nullptr};

		/*SDK::ULevelStreamingKismet::GetDefaultObj()->LoadLevelInstance(GWorld.GetPointer(), L"/Game/AJB/Maps/OutGame/AJBCharacterSelect", SDK::FVector{}, SDK::FRotator{}, 0);
		SDK::ULevelStreamingKismet::GetDefaultObj()->LoadLevelInstance(GWorld.GetPointer(), L"/Game/AJB/Maps/OutGame/AJBOutGame_ENV01", SDK::FVector{}, SDK::FRotator{}, 0);*/
		static SDK::UWB_ModeSelect_C* CurrentModeSelectPtr{nullptr};

		bToggle = !bToggle;

		

		AJB::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, GWorld.GetPointer(), 0, &HUD);
		if (HUD)
		{
			HUD->ShowCharacterSelect();
			SDK::UWB_CharacterSelect_C* OutWidget{nullptr};
			HUD->FindAJBWidgetOfClass(SDK::UWB_CharacterSelect_C::StaticClass(), (SDK::UAJBUserWidget**)&OutWidget);

			if (OutWidget)
			{
				OutWidget->CurrentTimer = 9999999999999999.0f;
				OutWidget->CountDownTimer = 9999999999999999.0f;
				if (bToggle)
				{
					OutWidget->OpenWindow();
				}
				else
				{
					OutWidget->CloseWindow();
					OutWidget->SetVisibility(SDK::ESlateVisibility::Collapsed);
					Pointers::GetLastOf<SDK::UWB_Fade_C>(false)->bFinishedFade = true;
				}
			}
			//Pointers::GetLastOf<SDK::AAJBHUDBase>(false)->SetupForceInvisibleAllWidgetsFlag(true);
		}

		CurrentModeSelectPtr = Pointers::GetLastOf<SDK::UWB_ModeSelect_C>(0);
		if (CurrentModeSelectPtr)
		{
			bToggle ? CurrentModeSelectPtr->SetVisibility(SDK::ESlateVisibility::Collapsed) : CurrentModeSelectPtr->SetVisibility(SDK::ESlateVisibility::Visible);
		}

	}
	else if (StrCommand == "skin")
	{
		AJB::SetSelectedCharacter(AJB::KAKYOIN, 7, 7);
		LogA("Selected Character", std::to_string(AJB::GetSelectedCharacter()));
	}
	else if (StrCommand == "tenpo")
	{
		constexpr const char* TenpoStatus[7]{"SelectRoom", "WaitPairMatching", "WaitRandomPairMatching", "CharacterSelect", "GameMatching", "WaitPairIDMatching", "EOutGameProxyState_MAX"};

		BYTE Int{0};
		for (SDK::ABP_AJBOutGameProxy_C*& Proxy : Pointers::FindObjects<SDK::ABP_AJBOutGameProxy_C>(false))
		{
			Int++;
			LogA("Proxy " + std::to_string(Int), std::format("[IsTenpoHost]: {} | [RoomHostUserId] {} | [OutGameProxyState]: {}", Proxy->IsTenpoHost(), Proxy->RoomHostUserID.ToString(), TenpoStatus[(unsigned char)Proxy->OutGameProxyState]));
		}
	}
	else if (StrCommand == "menu")
	{		
		if (AJB::MOD_OptionsMenu)
		{
			if (CMLA::Debug.GetAsBool()) LogA(AJB::MOD_OptionsMenu->GetFullName(), std::format("[bPauseMenuIsVisible]: {} | [Visibility]: {}", AJB::MOD_OptionsMenu->bPauseMenuIsVisible, AJB::MOD_OptionsMenu->Visibility == SDK::ESlateVisibility::Visible ? "Visible" : "Collapsed"));

			SDK::APlayerController* Player = Pointers::Player();
			if (Player)
			{
				if (!Player->bShowMouseCursor && AJB::MOD_OptionsMenu->bPauseMenuIsVisible) Player->bShowMouseCursor = true;

				if (Player->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
				{
					SDK::AAJBInGameHUD* HUD = static_cast<SDK::AAJBInGameHUD*>(Player->GetHUD());
					HUD->SetupForceInvisibleAllWidgetsFlag(AJB::MOD_OptionsMenu->bPauseMenuIsVisible);
				}

				AJB::MOD_OptionsMenu->bPauseMenuIsVisible ? OFF::SetInputMode_GameAndUIEx.Call<SetInputModeGameAndUI>()(Player, AJB::MOD_OptionsMenu, SDK::EMouseLockMode::LockAlways, false) :  OFF::SetInputGameOnly.Call<SetInputModeGameOnly>()(Player);
			}
		}		
	}
	else if (StrCommand == "oss")
	{
		static bool bOnline{false};
		bOnline = !bOnline;

		if (AJB::MOD_OptionsMenu) AJB::MOD_OptionsMenu->SetOnlineStatus(bOnline);
	}
	else if (StrCommand == "reset")
	{
		if (AJB::Instance)
		{
			AJB::Instance->ResetBattleSettings();
			AJB::Instance->PlayMode = SDK::EPlayMode::None;
			AJB::Instance->bIsLocalSessionMode = false;
			AJB::Instance->ClearPlayerLoginInfo();
		}
	}
	else if (StrCommand == "area")
	{
		LogA("Area Type", std::to_string(AJB::Instance->AreaTypeID));
	}
	else if (StrCommand == "createsession")
	{
		if (AJB::Instance) AJB::Instance->CreateSession();

		/*
		
		Calls 0x3EEF50 aka UCreateSessionCallbackProxy::CreateSession

		
		*/
	}
	else if (StrCommand == "toggledebugmenu")
	{
		static SDK::UClass* Classes[4]{nullptr};
		static SDK::UUserWidget* Menus[4]{nullptr};

		constexpr static const wchar_t* WidgetsToLoad[] =
		{
			L"/Game/AJB/Debug/UI/WB_AJB_DebugMenuPage.WB_AJB_DebugMenuPage_C",
			L"/Game/AJB/Debug/UI/WB_DebugMenu.WB_DebugMenu_C",
			L"/Game/AJB/Debug/UI/WB_DebugMenu_OutGame.WB_DebugMenu_OutGame_C",
			L"/Game/AJB/Debug/UI/WB_DebugMenuPage_NetPlayerInfo.WB_DebugMenuPage_NetPlayerInfo_C"
		};

		static bool bInitialized{false};
		if (!bInitialized)
		{
			bInitialized = true;

			int i{0};

			for (const wchar_t* const& Name : WidgetsToLoad)
			{
				Classes[i] = UFunctions::StaticLoadClass(SDK::UUserWidget::StaticClass(), GEngine, Name, nullptr, 0, nullptr);
				
				if (!Classes[i])
				{
					bInitialized = false;
					break;
				}
				else
				{
					Menus[i] = (SDK::UUserWidget*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(Classes[i], static_cast<SDK::UGameViewportClient*>(GEngine->GameViewport), Pointers::FString2FName(Name), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
					if (!Menus[i])
					{
						bInitialized = false;
						break;
					}
					/*else
					{
						LogA("Menu", Menus[i]->GetFullName());
						Menus[i]->AddToViewport(112);
						Menus[i]->SetVisibility(SDK::ESlateVisibility::Visible);
					}*/
				}

				i++;
			}
		}

		if (Menus[2])
		{
			SDK::UUserWidget* MenuObj = Menus[2];

			static bool bToggled{false};
			bToggled = !bToggled;
			if (bToggled)
			{
				OFF::SetInputMode_GameAndUIEx.Call<SetInputModeGameAndUI>()(Pointers::Player(), MenuObj, SDK::EMouseLockMode::LockAlways, false);
				if (!MenuObj->IsInViewport())
				{
					MenuObj->AddToViewport(112);
				}

				MenuObj->SetVisibility(SDK::ESlateVisibility::Visible);


				reinterpret_cast<SDK::UWB_TestModePage_C*>(MenuObj)->ViewPriority = SDK::EAJBUIViewPortPriority::Top;
				reinterpret_cast<SDK::UWB_TestModePage_C*>(MenuObj)->SetUserFocus(Pointers::Player());

				SDK::ABP_AJBOutGameHUD_C* HUD{nullptr};
				AJB::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, GWorld.GetPointer(), 0, &HUD);
				if (HUD) HUD->OnShowDebugMenu();
			}
			else
			{
				OFF::SetInputGameOnly.Call<SetInputModeGameOnly>()(Pointers::Player());
				MenuObj->SetVisibility(SDK::ESlateVisibility::Collapsed);

				reinterpret_cast<SDK::UWB_TestModeMenuBase_C*>(Menus[2])->CloseWindow();
			}
		}
	}	
	else if (StrCommand == "host")
	{
		AJB::Instance->bIsLocalSessionMode = true;
		AJB::Instance->CreateSession();
		AJB::Instance->PlayMode = SDK::EPlayMode::Shop;
	}
	else if (StrCommand == "join")
	{
		AJB::Instance->JoinSession();		
	}
	else if (StrCommand == "lemon")
	{
		for (SDK::UTextBlock* Block : Pointers::FindObjects<SDK::UTextBlock>())
		{
			if (Block)
			{
				AJB::MOD_GlobalPatcher->SetWidgetText(Block, L"LEMON POSSESSION");
				LogA("Lemon", Block->GetFullName());
			}
		}

	}
	else if (StrCommand == "screen")
	{
		AJB::GetBlueprintClass<SDK::ULoadingScreenSystemBPLibrary>()->StartManualLoadingScreen(0);
	}
	else if (StrCommand == "toggledebug")
	{
		if (TOGGLEDEBUGBADGAMEDESIGN)
		{
			*TOGGLEDEBUGBADGAMEDESIGN = !*TOGGLEDEBUGBADGAMEDESIGN;
			// Wow this actually works BEAUTIFULLY, it's so bad and needs to be removed and redesigned but for debugging ITS SUPER USEFUL
		}
	}
	else if (StrCommand == "communicate")
	{
		AJB::GetGameMode<SDK::ABP_AJBBattleGameMode_C>()->Say(L"WELL FECK");
	}
	/*else if (StrCommand == "sync")
	{
		AJB::Instance->BattleSettings.AILevel = 3;
		AJB::Instance->BattleSettings.DamageAreaType = 10;
	}*/
	//LogA("ConsoleCommand", std::format("[Owning PlayerController]: {} | [Command]: {}", This->GetFullName(), StrCommand));

	return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, bWriteToLog);
}

bool UFunctions::RequestLevel(SDK::ULevelStreaming* This, SDK::UWorld* PersistentWorld, bool bAllowLevelLoadRequests, EReqLevelBlock BlockPolicy)
{
	SDK::FName WorldAssetPackageFName = This->GetWorldAssetPackageFName();

	EFlushLevelStreamingType* StreamingType = reinterpret_cast<EFlushLevelStreamingType*>(PersistentWorld + 2008); // UWorld::FlushLevelStreamingType

	static bool StupidLevelGoAway{false};
	if (StupidLevelGoAway)
	{
		if (StreamingType && *StreamingType == EFlushLevelStreamingType::Visibility)
		{
			*StreamingType = EFlushLevelStreamingType::None;
		}
	}

	if (!StupidLevelGoAway) LogA(OFF::RequestLevel.GetName(), std::format("[WorldAssetPackageFName]: {} | [bAllowLevelLoadRequests]: {} | [ComparisonIndex]: {}", WorldAssetPackageFName.ToString(), bAllowLevelLoadRequests, WorldAssetPackageFName.ComparisonIndex));

	constexpr static int32 WorldBlacklist[]
	{
		23788,	// [AJBCreadit] Worthless level that displays the credit counter.
	};

	for (const int32& Entry : WorldBlacklist)
	{
		if (WorldAssetPackageFName.ComparisonIndex == Entry)
		{
			if (!StupidLevelGoAway) LogA(OFF::RequestLevel.GetName(), "Rejecting requested blacklisted level: " + WorldAssetPackageFName.ToString());

			StupidLevelGoAway = true;

			// It won't stop requesting unless UWorld::AllowLevelLoadRequests is false, however it's not a global variable, it's a function.
			// So I could either patch it which would be extremely unoptimal and just garbage all around, or I could force the condition to be false by doing this.
			*StreamingType = EFlushLevelStreamingType::Visibility;

			*reinterpret_cast<ECurrentState*>(This + 180) = ECurrentState::FailedToLoad; // ULevelStreaming::CurrentState

			return false;
		}
	}

	StupidLevelGoAway = false;

	return OFF::RequestLevel.VerifyFC<Decl::RequestLevel>()(This, PersistentWorld, bAllowLevelLoadRequests, BlockPolicy);
}

bool UFunctions::PrepareMapChange(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::TArray<SDK::FName>& LevelNames)
{
	std::string Levels;

	for (SDK::FName& Level : LevelNames)
	{
		Levels += Level.ToString() + " | ";
	}
	LogA(OFF::PrepareMapChange.GetName(), Levels);

	return OFF::PrepareMapChange.VerifyFC<Decl::PrepareMapChange>()(This, WorldContext, LevelNames);
}

UFunctions::BrowseReturnVal UFunctions::Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
{
	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = Pointers::ConstructUConsole(SDK::FString(CMLA::ConsoleKey.GetArgumentAsString()));
		LogA("Browse", "Constructed UConsole early.");
	}

	if (wcscmp(URL.Map.CStr(), L"/Game/AJB/Maps/AJBStartUp_P") == 0 || wcscmp(URL.Map.CStr(), L"/Game/AJB/Maps/AJBTitle_P") == 0)
	{
		wchar_t* BadPractice = const_cast<wchar_t*>(CMLA::GameDefaultMap.GetArgumentAsString());
		wchar_t* EndP = FindChar(BadPractice, L'.', true);

		wchar_t RedirectionBuffer[260]{0};
		wmemcpy(RedirectionBuffer, BadPractice, EndP - BadPractice);

		static SDK::FString Redirect{RedirectionBuffer};
		Call<Decl::CopyString>(OFF::CopyString.PlusBase())(&URL.Map, &Redirect);
	}
	else if (wcscmp(URL.Map.CStr(), L"/Game/AJB/Maps/SimpleStartLocationSelect_P") == 0 && CMLA::HardcodedNPCNum.HasChanged())
	{
		for (SDK::FString& Entry : URL.Op)
		{
			if (Entry.ToString().find("NPC=") != std::string::npos)
			{
				//static SDK::FString NPCNum = SDK::FString{CMLA::HardcodedNPCNum.GetArgumentAsString()};
				std::wstring NPCNumStr(L"NPC=");
				NPCNumStr += CMLA::HardcodedNPCNum.GetArgumentAsString();
				static SDK::FString NPCNum = SDK::FString{NPCNumStr.c_str()};
				AJB::CopyString(&Entry, &NPCNum);
				break;
			}
		}
	}

	LogA("Browse", Helpers::FURLParser(URL));
	
	//LogA("Browse", Helpers::FWorldContextParser(WorldContext));

	return OFF::Browse.VerifyFC<Decl::Browse>()(This, WorldContext, URL, Error);
	
}

void UFunctions::ClientTeamMessageImplementation(SDK::APlayerController* This, SDK::APlayerState* SenderPlayerState, SDK::FString* String, SDK::FName Type, float MsgLifeTime)
{
	LogA("ClientTeamMessageImplementation", std::format("[This]: {} | [SenderPlayerState]: {} | [String]: {} | [Type]: {} | [MsgLifeTime]: {}", This->GetFullName(), SenderPlayerState->GetFullName(), String->ToString(), Type.GetRawString(), std::to_string(MsgLifeTime)));
	OFF::ClientTeamMessageImplementation.VerifyFC<Decl::ClientTeamMessageImplementation>()(This, SenderPlayerState, String, Type, MsgLifeTime);
}

bool UFunctions::InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
{
	LogA("InitListen", This->GetFullName() + " | " + Helpers::FURLParser(LocalURL));
	LocalURL.Port = wcstol(CMLA::ServerPort.GetArgumentAsString(), 0, 10);

	return OFF::InitListen.VerifyFC<Decl::InitListen>()(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
}

template <typename Class, typename T>
Class* GetTypedOuter(T* Object)
{
	return Object->IsA(Class::StaticClass()) ? (Class*)Object : (Class*)GetTypedOuter<Class>((T*)Object->Outer);
}

/*
0x176A260 UEngine::GetMaxTickRate
0x176A220 UEngine::GetMaxFPS ? (idk for sure I got this offset from an AOB I made back when I sucked at decompilation and I dont feel like looking right now)
*/

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

SDK::APlayerController* UFunctions::Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage)
{
	LogA("Login", std::format("[PlayerController]: {} | [NewPlayer]: {} | [InRemoteRole]: {} | [Options]: {} | [ErrorMessage]: {}", This->GetFullName(), NewPlayer->GetFullName(), std::string((*reinterpret_cast<ENetRole*>(&InRemoteRole)).ToString()), Portal.ToString(), ErrorMessage.ToString()));

	/*if (Options.ToString().rfind("?Name") != std::string::npos)
	{
		static SDK::FString NewUser(CMLA::Username.GetArgumentAsString());
		Call<Decl::CopyString>(OFF::CopyString.PlusBase())(&Options, &NewUser);
	}*/
	
	SDK::AGameModeBase* CurrentGameMode = AJB::GetGameMode();

	if (AJB::PlayerPoints) *AJB::PlayerPoints = 1170;
	if (AJB::Instance)
	{
		//AJB::Instance->NPCNum = wcstol(CMLA::HardcodedNPCNum.GetArgumentAsString(), nullptr, 10); Does nothing
		if (AJB::Instance->ArcadeTimeManager) AJB::Instance->ArcadeTimeManager = nullptr;
	}
	if (AJB::MOD_OptionsMenu)
	{
		//LogA(AJB::MOD_OptionsMenu->IsInViewport() ? "In Viewport" : "Not In Viewport", AJB::GEngine()->GameViewport->GetFullName());
		if (!AJB::MOD_OptionsMenu->IsInViewport()) AJB::MOD_OptionsMenu->AddToViewport(111);
	}
	
	//AGM_AJBTitleScreen_C

	
	/*UFunctions::StaticLoadObject(SDK::UObject::FindClass("Class CoreUObject.Object"), nullptr, L"/Game/Aeyth8/UI/CustomUIManager.CustomUIManager_C", nullptr, 0, nullptr, true);
	UFunctions::StaticLoadObject(SDK::UGameInstance::StaticClass(), nullptr, L"/Game/Aeyth8/UI/CustomMenuManager.CustomMenuManager_C", nullptr, 0, nullptr, true);*/
	static bool ONE{0};
	if (!ONE)
	{
		ONE = 1;

		constexpr const wchar_t* GlobalPatchObjectBlueprintPath{L"/Game/Aeyth8/Blueprints/Global/BP_GlobalPatcher.BP_GlobalPatcher_C"};
		constexpr const wchar_t* OptionsMenuBlueprintPath{L"/Game/Aeyth8/Blueprints/UI/OptionsMenu/WBP_OptionsMenu.WBP_OptionsMenu_C"};
		
		AJB::MOD_GlobalPatcherClass = UFunctions::StaticLoadClass(AJB::CoreUObject, GEngine, GlobalPatchObjectBlueprintPath, nullptr, 0, nullptr);
		if (AJB::MOD_GlobalPatcherClass)
		{
			AJB::MOD_GlobalPatcher = (SDK::UBP_GlobalPatcher_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_GlobalPatcherClass, GEngine, Pointers::FString2FName(GlobalPatchObjectBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
			if (AJB::MOD_GlobalPatcher)
			{
				LogA("Global Patcher", std::format("[ProofOfExistenceSignature]: {} | [Object]: {}", AJB::MOD_GlobalPatcher->ProofOfExistenceSignature, AJB::MOD_GlobalPatcher->GetFullName()));

			}
		}		


		if (CMLA::Debug.GetAsBool())
		{
			AJB::MOD_OptionsMenuClass = UFunctions::StaticLoadClass(SDK::UUserWidget::StaticClass(), GEngine, OptionsMenuBlueprintPath, nullptr, 0, nullptr);
			if (AJB::MOD_OptionsMenuClass)
			{
				AJB::MOD_OptionsMenu = (SDK::UWBP_OptionsMenu_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_OptionsMenuClass, static_cast<SDK::UGameViewportClient*>(GEngine->GameViewport), Pointers::FString2FName(OptionsMenuBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
				//	OptionsMenu = static_cast<SDK::UWBP_OptionsMenu_C*>(AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->Create(AJB::GWorld(), PrototypeMenu, Pointers::Player()));
				if (AJB::MOD_OptionsMenu)
				{
					LogA("OptionsMenu Success", AJB::MOD_OptionsMenu->GetFullName());

					AJB::MOD_OptionsMenu->AddToViewport(1170);
					AJB::MOD_OptionsMenu->SetVisibility(SDK::ESlateVisibility::Collapsed);

					if (AJB::StrDLLCommitVersion)
					{
						AJB::MOD_OptionsMenu->SetDLLCommitVersion(*AJB::StrDLLCommitVersion);
					}

					/*OptionsMenu->AddToViewport(111);
					OptionsMenu->SetVisibility(SDK::ESlateVisibility::Collapsed);*/
					//OptionsMenu->ToggleVisibility();
					// AJBSimpleMatch_P's hud has a ZOrder of 30, the ALLNet status is a different story, the number is a lot higher. (IDK what it is) 

					// I read the source code and these flags seemingly do absolutely nothing.
					//OptionsMenu->Flags = static_cast<SDK::EObjectFlags>(static_cast<int32>(OptionsMenu->Flags) | static_cast<int32>(EInternalObjectFlags::RootSet));

					//float MaxFrameRate = Call<float(__fastcall*)()>(PB(0x176A220))();
					/*float MaxFrameRate = Call<float(__fastcall*)(SDK::UEngine * This, float DeltaTime, bool bAllowFrameRateSmoothing)>(PB(0x13CCAE0))(Pointers::UEngine(), 0.0f, true);

					MaxFrameRate > 60.0f ? OptionsMenu->InternalTickRate = MaxFrameRate * 1.5f : OptionsMenu->InternalTickRate = 60.0f;
					LogA("AJBMaxTickRate", std::to_string(MaxFrameRate));*/



					/* if (MaxFrameRate > 60.0f)
					{
						OptionsMenu->InternalTickRate = MaxFrameRate * 1.5f;
					}
					else
					{
						float MaxTickRate = Call<float(__fastcall*)(SDK::UEngine* This, float DeltaTime, bool bAllowFrameRateSmoothing)>(PB(0x176A260))(Pointers::UEngine(), 0.0f, true);
						if (MaxTickRate == 0.0f)
						{
							OptionsMenu->InternalTickRate = 120.0f;
						}
						else
						{
							OptionsMenu->InternalTickRate = MaxTickRate * 1.5f;
						}

					}*/


				}
			}
		}
		else
		{
			ONE = 0;
		}
	}

	if (CurrentGameMode)		
	{		
		if (CurrentGameMode->IsA(SDK::AGM_AJBUserInterface_C::StaticClass()))
		{
			if (AJB::StrDLLCommitVersion) static_cast<SDK::AGM_AJBUserInterface_C*>(CurrentGameMode)->SetGlobalGameModeScopeVersioningInfo(AJB::StrDLLCommitVersion);
		}
		else if (CurrentGameMode->IsA(SDK::ABP_AJBSimpleMatchGameMode_C::StaticClass()) && AJB::MOD_GlobalPatcher)
		{
			struct RetainerBoxSubclass : SDK::UWB_ModeSelectTextBase_C { SDK::URetainerBox* RetainerBox; };
			/*enum ETextBlockTypeIndex : int32
			{

				TRAINING	= 0,
				PVE			= 1,
				TUTORIAL	= 2,
				SHOP		= 3, // Because designing a new UI is so exhausting I will temporarily redirect this button to work for hosting multiplayer
				ENDGAME		= 4
			};

			ETextBlockTypeIndex TBTIndex{0};

			static SDK::TSubclassOf<SDK::UWB_ModeSelectTextBase_C> Classes[4] =
			{
				SDK::UWB_ModeSelect_Txt_Training_C::StaticClass(),
				SDK::UWB_ModeSelect_Txt_PvE_C::StaticClass(),
				SDK::UWB_ModeSelect_Txt_Tutorial_C::StaticClass(),
				SDK::UWB_ModeSelect_Txt_Shop_C::StaticClass(),
				//SDK::UWB_ModeSelect_Button_EndGame_C::StaticClass(),
			};*/

			struct TClassType
			{
				SDK::UClass*	Class;
				const wchar_t*	TranslationString;
				int				BestPlacementIndex;
			};

			static TClassType ClassTypes[4] =
			{
				{SDK::UWB_ModeSelect_Txt_Training_C::StaticClass(), L"TRAINING",		   1},
				{SDK::UWB_ModeSelect_Txt_PvE_C::StaticClass(),		L"DEALER'S CHALLENGE", 4},
				{SDK::UWB_ModeSelect_Txt_Tutorial_C::StaticClass(), L"TUTORIAL",		   1},
				{SDK::UWB_ModeSelect_Txt_Shop_C::StaticClass(),		L"MULTIPLAYER",		   3}
			};

			std::vector<RetainerBoxSubclass*> GlobalTextBlocks = Pointers::FindObjects<RetainerBoxSubclass>(false);
			for (int GlobalIndex{0}; GlobalIndex < GlobalTextBlocks.size(); ++GlobalIndex)
			{
				RetainerBoxSubclass* CurrentObject = GlobalTextBlocks[GlobalIndex];
				SDK::UClass* CurrentClass = GlobalTextBlocks[GlobalIndex]->Class;

				if (CurrentObject && CurrentClass)
				{
					if (CurrentObject->Flags & SDK::EObjectFlags::ArchetypeObject)
					{
						continue;
					}

					int ClassTypeIndex{0};
					bool bClassMatches{false};

					for (TClassType& ClassType : ClassTypes)
					{
						if (CurrentClass == ClassType.Class)
						{
							//LogA("SUCCESS", std::format("[CurrentObject]: {} | [CurrentClass]: {} | [IsArchetype]: {} [Flags]: {}", CurrentObject->GetFullName(), CurrentClass->GetFullName(), CurrentObject->Flags& SDK::EObjectFlags::ArchetypeObject ? "True" : "False", std::to_string((uint32)CurrentObject->Flags)));
							bClassMatches = true;
							break;
						}

						ClassTypeIndex++;
					}

					/*if (!bClassMatches) Apparently this condition is never met.
					{
						SDK::UWB_ModeSelectButtonBase_C* ActualButton = GetTypedOuter<SDK::UWB_ModeSelectButtonBase_C>(CurrentObject->RetainerBox->GetContent());
						if (ActualButton) ActualButton->RemoveFromViewport();
						continue;
					}*/

					SDK::URetainerBox* CurrentRetainer = CurrentObject->RetainerBox;
					if (CurrentRetainer)
					{
						//LogA(std::to_string(GlobalIndex), GlobalTextBlocks[GlobalIndex]->GetFullName());
						SDK::UWidget* Child = CurrentRetainer->GetContent();
						if (Child && Child->IsA(SDK::UHorizontalBox::StaticClass()))
						{
							SDK::UHorizontalBox* Box = static_cast<SDK::UHorizontalBox*>(Child);
							const int Count = Box->GetChildrenCount();

							for (int i{0}; i < Count; ++i)
							{
								SDK::UWidget* Widget = Box->GetChildAt(i);
								if (Widget->IsA(SDK::UTextBlock::StaticClass()))
								{
									if (i == ClassTypes[ClassTypeIndex].BestPlacementIndex)
									{
										SDK::FString NewChar{ClassTypes[ClassTypeIndex].TranslationString};
										AJB::MOD_GlobalPatcher->SetWidgetText(static_cast<SDK::UTextBlock*>(Widget), NewChar);
										/*if (i == 3)	Doesn't currently work and I don't have enough time to not only fix this but also bind it.
										{
											SDK::UWB_ModeSelectButtonBase_C* ActualButton = GetTypedOuter<SDK::UWB_ModeSelectButtonBase_C>(Widget);
											if (ActualButton)
											{
												ActualButton->bIsEnabled = true;
												ActualButton->bEnableSelect = true;
												ActualButton->NeedPP = 0;
												LogA("Outer", ActualButton->GetFullName());
											}
										}*/
									}
									else
									{
										static SDK::FString Blank{L" "};
										AJB::MOD_GlobalPatcher->SetWidgetText(static_cast<SDK::UTextBlock*>(Widget), Blank);
									}
								}
							}
						}
					}
				}
			}
		}
		/*else if (CurrentGameMode->IsA(SDK::ABP_AJBBattleGameMode_C::StaticClass()))
		{
			SDK::ABP_AJBBattleGameMode_C* BattleMode = static_cast<SDK::ABP_AJBBattleGameMode_C*>(CurrentGameMode);
			__assume (BattleMode != nullptr); // SHUTUP
			SDK::ABP_AJBBattleGameState_C* GameState = static_cast<SDK::ABP_AJBBattleGameState_C*>(BattleMode->GameState);

			GameState->bDisableTimeLimit_Debug_ = true;

		}
		else if (CurrentGameMode->IsA(SDK::ABP_SimpleStartLocationSelectGameMode_C::StaticClass()))
		{
			SDK::ABP_SimpleStartLocationSelectGameMode_C* MatchingGameMode = static_cast<SDK::ABP_SimpleStartLocationSelectGameMode_C*>(CurrentGameMode);
			//MatchingGameMode->Say
		}
		if (NewPlayer->IsA(SDK::UIpConnection::StaticClass()))
		{
			// DOES NOT WORK DUE TO NO IMPLEMENTATION IN THE GAME MODE, I'm gonna have to find another way to synchronize it, there's plenty of RPC crap in the SDK that Namco implemented but I don't know how to use it nor do I honestly trust their bloated hellscape but it's worth a shot.
			//SDK::FString Message{L"DRIVING IN MY CAR RIGHT AFTER A BEEEEEEER"};
			//OFF::ClientTeamMessage.VerifyFC<void(__thiscall*)(SDK::APlayerController*, SDK::APlayerState*, SDK::FString*, SDK::FName, float)>()(This, This->PlayerState, &Message, SDK::FName{}, 0.0f);
			//OFFSET::VFTable<void(__thiscall*)(SDK::AGameMode*, SDK::AActor*, SDK::FString*, SDK::FName)>(CurrentGameMode)[0x114](GetTypedOuter<SDK::AGameMode>(CurrentGameMode), This, &Message, SDK::FName{});
		}*/
	}
	
	
	/*
	AJB::TAutoConsoleVariable<float>& CVarMaxFPS = reinterpret_cast<AJB::TAutoConsoleVariable<float>&>(PB(0x32557F0));
	float MaxFPS{ 1170.0f };
	MaxFPS = CVarMaxFPS.Ref->GetReferenceFromThread(1);

	LogA("MaxFPS", std::to_string(MaxFPS));
	*/

	return OFF::Login.VerifyFC<Decl::Login>()(This, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void UFunctions::PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage)
{
	LogA("PreLogin", std::format("[AGameModeBase]: {} | [Options]: {} | [Address]: {} | [ErrorMessage]: {}", This->GetFullName(), Options->ToString(), Address->ToString(), ErrorMessage->ToString()));
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
	static bool bIsDebugging = CMLA::HookAndLogInvoke.GetAsBool();
	TOGGLEDEBUGBADGAMEDESIGN = &bIsDebugging;

	if (bIsDebugging)
	{
		static constexpr const int32 ObjectBlacklist[] =
		{
			96692, // KismetArrayLibrary Engine.Default__KismetArrayLibrary
			97352, // AkGameplayStatics AkAudio.Default__AkGameplayStatics
			96702, // KismetSystemLibrary Engine.Default__KismetSystemLibrary
			96703, // KismetTextLibrary Engine.Default__KismetTextLibrary
			96700, // KismetStringLibrary Engine.Default__KismetStringLibrary
			96440, // DataTableFunctionLibrary Engine.Default__DataTableFunctionLibrary
			96580, // GameplayStatics Engine.Default__GameplayStatics
			96311, // BlueprintMapLibrary Engine.Default__BlueprintMapLibrary

			// Not UE Native

			98612, // AJBNetworkObserver AJB.Default__AJBNetworkObserver
			97329 // LoadingScreenSystem.Default__LoadingScreenSystemBPLibrary
		};

		static constexpr const int32 FunctionBlacklist[] =
		{
			8321, // Function <Class> ReceiveTick
			14300, // Function UMG.Widget.IsVisible
			14310, // UMG.Widget.SetRenderOpacity
			14319, // Function UMG.Widget.SetVisibility
			14423, // Function UMG.WidgetBlueprintLibrary.Create
			14739, // Function UMG.BrushBinding.GetValue
			15873, // Function UMG.UserWidget.AddToViewport
			15895, // Function UMG.TextBlock.SetColorAndOpacity
			15991, // Function Engine.Controller.GetViewTarget
			16039, // Function Engine.PlayerController.GetViewportSize
			16062, // Function Engine.PlayerController.WasInputKeyJustPressed
			16392, // Function UMG.Image.GetDynamicMaterial
			16396, // Function UMG.Image.SetBrushFromMaterial		
			16400, // Function UMG.Image.SetBrushTintColor
			16925, // Function UMG.TextBlock.SetText
			17338, // Function UMG.CanvasPanel.AddChildToCanvas
			17617, // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
			17669, // UMG.WidgetLayoutLibrary.GetViewportScale		
			18269, // Function Engine.GameplayStatics.GetPlayerController
			18277, // Function Engine.GameplayStatics.GetWorldDeltaSeconds
			18592, // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue
			18517, // Function Engine.KismetArrayLibrary.Array_Get
			18521, // Function Engine.KismetArrayLibrary.Array_Length
			18259, // Function Engine.GameplayStatics.GetGameInstance



			// Not UE Native

			7393, // Function <UAJBUserWidget> Tick
			7384, // Function <UAJBUserWidget> OnPaint
			14391, // Function FlowState.FlowStateUtil.TickFlowState
			14412, // Function LoadingScreenSystem.LoadingScreenSystemBPLibrary.SetCacheInteger
			14669, // Function AJB.AJBUtilityFunctionLibrary.IsEditor
			15801, // Function AJB.AJBAMSystemObject.IsAMSystemErrorMode
			16204, // Function AJB.AJBHighlightManager.GetFocusActor
			16210, // Function AJB.AJBGameInstance.GetHighlightManager
			16220, // Function AJB.AJBGameInstance.GetParamRepos
			16229, // Function AJB.AJBGameInstance.IsConsumePP
			16231, // Function AJB.AJBGameInstance.IsFreePlay
			16241, // Function AJB.AJBHighlightManager.IsPlayingReplay
			16244, // Function AJB.AJBGameInstance.IsServicePlay
			16799, // Function AJB.AJBParamRepos.CheckExistParamFile		
			16802, // Function AJB.AJBParamRepos.LoadParamFile
			16971, // Function AJB.AJBUtilityFunctionLibrary.IsAJBOfflineMode
			16929, // Function AJB.AJBUtilityFunctionLibrary.CanAJBArcadeGamePlay
			16973, // Function AJB.AJBUtilityFunctionLibrary.IsDistribution
			134207, // Function WB_CharacterSelect.WB_CharacterSelect_C.ExecuteUbergraph_WB_CharacterSelect
			135155, // Function WB_Credit.WB_Credit_C.Get_Img_AllNetIcon_Brush_0
			136949, // Function WB_PPBuyButton.WB_PPBuyButton_C.OnCheckPP
		};

		// Must be called once at runtime since the index always varies.
		static constexpr const wchar_t* ClassFunctionBlacklist[][2] =
		{
			{L"WB_Credit_C", L"Get_Img_AllNetIcon_Brush_0"},
			{L"WB_PPBuyButton_C", L"OnCheckPP"},
			{L"WB_CharacterSelect_C", L"ExecuteUbergraph_WB_CharacterSelect"}
		};

		constexpr const unsigned char CFBL_Size = sizeof(ClassFunctionBlacklist) / sizeof(ClassFunctionBlacklist[0]);

		int32 DynamicClassFunctionIndexArray[CFBL_Size]{ -1 };

		bool bLogInvoke{true};

		if (AJB::MOD_OptionsMenu && Obj->Name.ComparisonIndex == AJB::MOD_OptionsMenu->Name.ComparisonIndex)
			bLogInvoke = false;

		for (const int32& ObjNameIndex : ObjectBlacklist)
		{
			if (Obj->Name.ComparisonIndex == ObjNameIndex)
			{
				bLogInvoke = false;
				break;
			}
		}
		if (bLogInvoke)
		{
			for (const int32& FuncNameIndex : FunctionBlacklist)
			{
				if (This->Name.ComparisonIndex == FuncNameIndex)
				{
					bLogInvoke = false;
					break;
				}
			}
		}
		if (bLogInvoke)
		{
			for (const int32& ClassFuncNameIndex : DynamicClassFunctionIndexArray)
			{
				if (ClassFuncNameIndex != -1 && This->Name.ComparisonIndex == ClassFuncNameIndex)
				{
					bLogInvoke = false;
					break;
				}
			}
		}

		if (bLogInvoke)
		{
			LogA(OFF::Invoke.GetName(), std::format("[UFunction]: {} | [ComparisonIndex]: {} | [UObject]: {} | [ComparisonIndex]: {}", This->GetFullName(), This->Name.ComparisonIndex, Obj->GetFullName(), Obj->Name.ComparisonIndex));
		}
	}

	// A structure I made allowing me to pass the object obtained here to external functions.
	struct TExternFunction { void(*Function)(SDK::UObject*); int32 FunctionIndex; };
	constexpr TExternFunction ExternFunctionList[] = 
	{
		{AJB::OnToggleFullMapVisibility, 2427}, // Function BP_AJBInGameHUD.BP_AJBInGameHUD_C.OnToggleFullMapVisibility
		// More will be added later.
	};

	for (TExternFunction const& Entry : ExternFunctionList)
	{
		if (This->Name.ComparisonIndex == Entry.FunctionIndex)
		{
			Entry.Function(Obj);
			break;
		}
	}

	static int32 CreaditMainIndex{0};
	static int32 CreaditWidgetIndex{0};
	thread_local static bool bWidgetFlagChanged{false};

	if (bWidgetFlagChanged)
	{
		bWidgetFlagChanged = false;
		AJB::CreaditPointer->Creadit->SetVisibility(SDK::ESlateVisibility::Collapsed);
	}

	// Once the FName has been constructed the order and index will not change until relaunch, and even then it shouldn't really change unless mods get created first/etc.
	if (CreaditMainIndex == 0)
	{
		if (AJB::CreaditPointer && Obj == AJB::CreaditPointer) CreaditMainIndex = AJB::CreaditPointer->Name.ComparisonIndex;
	}
	else 
	{
		if (CreaditWidgetIndex == 0)
		{
			if (AJB::CreaditPointer && AJB::CreaditPointer->Creadit)
			{
				CreaditWidgetIndex = AJB::CreaditPointer->Creadit->Name.ComparisonIndex;
			}
		}
		else if (Obj->Name.ComparisonIndex == CreaditWidgetIndex)
		{
			if (AJB::CreaditPointer->Creadit->Visibility != SDK::ESlateVisibility::Collapsed)
			{
				//AJB::CreaditPointer->Creadit->Visibility = SDK::ESlateVisibility::Collapsed;
				bWidgetFlagChanged = true;
			}
			//LogA(OFF::Invoke.GetName(), std::format("[UFunction]: {} | [ComparisonIndex]: {} | [UObject]: {} | [ComparisonIndex]: {}", This->GetFullName(), This->Name.ComparisonIndex, Obj->GetFullName(), Obj->Name.ComparisonIndex));
		}
	}

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
			//std::wstring WFile(Filename);
			//LogA("FindFileInPakFiles OVERRIDE", std::string(WFile.begin(), WFile.end()));
			return false;
		}
	}

	// Returns the result of the actual function which is stored in the 6th bit.
	return X & 0b00100000;
}

void __fastcall UFunctions::ProcessMulticastDelegate(__int64* This, void* Parameters)
{



	return OFF::ProcessMulticastDelegate.VerifyFC<Decl::ProcessMulticastDelegate>()(This, Parameters);
}

void __fastcall UFunctions::BroadcastDelegate(SDK::UMulticastDelegateProperty* This)
{
	/*if (Global::bConstructedUConsole)
	{
		static SDK::UMulticastDelegateProperty_* Garbage{nullptr}; 
		if (!Garbage)
		{
			SDK::UWB_TimeLimitCountDown_C* CountDown = Pointers::GetLastOf<SDK::UWB_TimeLimitCountDown_C>(0);
			if (CountDown) Garbage = &CountDown->OnFinishedLocalTime;
		}
		if (Garbage && reinterpret_cast<SDK::UMulticastDelegateProperty_*>(This->Pad_70) == Garbage)
		{
			return;
		}
	}*/
	
	OFF::BroadcastDelegate.VerifyFC<Decl::BroadcastDelegate>()(This);
}

SDK::UClass* __fastcall UFunctions::StaticLoadClass(SDK::UClass* BaseClass, SDK::UObject* InOuter, const wchar_t* Name, const wchar_t* Filename, unsigned int LoadFlags, SDK::UPackageMap* Sandbox)
{
	SDK::FString AName{Name ? Name : L"None"};
	SDK::FString AFilename{ Filename ? Filename : L"None"};

	LogA("StaticLoadClass", std::format("[BaseClass]: {} | [InOuter]: {} | [Name]: {} | [Filename]: {} | [LoadFlags]: {} | [Sandbox]: {}", BaseClass->GetFullName(), InOuter->GetFullName(), AName.ToString(), AFilename.ToString(), LoadFlags, Sandbox->GetFullName()));

	return OFF::StaticLoadClass.VerifyFC<Decl::StaticLoadClass>()(BaseClass, InOuter, Name, Filename, LoadFlags, Sandbox);
}

SDK::UObject* __fastcall UFunctions::StaticLoadObject(SDK::UClass* ObjectClass, SDK::UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, SDK::UPackageMap* Sandbox, bool bAllowObjectReconciliation)
{
	SDK::FString AName{InName ? InName : L"None"};
	SDK::FString AFilename{ Filename ? Filename : L"None"};
	/*bool One{0};
	if (!One && ObjectClass->GetFullName() == "Class CoreUObject.Class")
	{
		One = 1;
		OFF::StaticLoadObject.VerifyFC<Decl::StaticLoadObject>()(ObjectClass, nullptr, L"/Game/Aeyth8/UI/InGame/WBP_OptionsMenu.WBP_OptionsMenu_C", nullptr, 0, nullptr, true);
	}*/

	LogA("StaticLoadObject", std::format("[ObjectClass]: {} {} | [InOuter]: {} | [Name]: {} | [Filename]: {} | [LoadFlags]: {} | [Sandbox]: {}", ObjectClass->GetFullName(), HexToString((uintptr_t)ObjectClass), InOuter->GetFullName(), AName.ToString(), AFilename.ToString(), LoadFlags, Sandbox->GetFullName()));
	return OFF::StaticLoadObject.VerifyFC<Decl::StaticLoadObject>()(ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation);
}

/*
Cleanup later:

Stupid function just HAD to be inline but fortunately it doesn't seem to be too big of a deal

//
// Add an object to the root set. This prevents the object and all
// its descendants from being deleted during garbage collection.
//
FORCEINLINE void AddToRoot()
{
	GUObjectArray.IndexToObject(InternalIndex)->SetRootSet();
}

FORCEINLINE void SetRootSet()
{
	Flags |= int32(EInternalObjectFlags::RootSet);
}


*/