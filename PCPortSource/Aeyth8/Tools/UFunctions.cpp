#include "UFunctions.hpp"
#include "Pointers.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../Logic/AJB.h"

#include "../../Dumper-7/SDK/BP_AJBWwiseManager_classes.hpp"
#include "../../Dumper-7/SDK/BPF_AJBWwiseFunctionLibrary_classes.hpp"
#include "../../Dumper-7/SDK/GameplayTags_structs.hpp"

#include "../CmdArgs/CommandLineArgs.h"
#include "../Tools/UnrealTypes.h"

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
	AJB::bKeepInitialThreadAlive = false;
	Hooks::DisableAllHooks();
	Hooks::Uninit(); 
	Global::CloseLog();
}

extern "C" bool IsInLocalDirectory(const wchar_t*);

bool UFunctions::Helpers::CheckForLocalDirectory(const wchar_t* Filename)
{
	//Old function written in bitflag hellscape C++ is 249 bytes
	//New function in ASM is (IsInLocalDirectory 0x46) + (actual function 0x92) is 216 bytes, barely any difference looking back but the logic should be much faster

	/*
	stupid OCD

	2 E 0 0 2 F 0 0 2 E 0 0 2 E
	2 E 0 0 2 E 0 0 2 F 0 0 2 E

	129480 50795167790
	129480 46500266030

	50795167790 - 46500266030

	WHY CANT I SUB RAX, FFFF0000h
	THIS IS SO STUPID

	*/
	return IsInLocalDirectory(Filename);
	

	/*constexpr const wchar_t LocalPath[8] = {L'.', L'.', L'/', L'.', L'.', L'/', L'.', L'.'};
	constexpr const wchar_t LocalPathBack[8] = {L'.', L'.', L'\\', L'.', L'.', L'\\', L'.', L'.'};*/

	/*
		0x2e 0x00 0x2e 0x00 0x2f 0x00 0x2e 0x00 | L "../." | 2e002f002e002e
		0x2e 0x00 0x2f 0x00 0x2e 0x00 0x2e 0x00 | L "./.." | 2e002e002f002e
		0x2e 0x00 0x5c 0x00 0x2e 0x00 0x2e 0x00 | L ".\.." | 2e005c002e002e
		0x2e 0x00 0x2e 0x00 0x5c 0x00 0x2e 0x00 | L "..\." | 2e002e005c002e
	*/
 
	/* I think this would be easier to do in assembly.
	const int64 LocalQuad1 = *reinterpret_cast<const int64*>(&LocalPath[0]);
	const int64 LocalQuad2 = *reinterpret_cast<const int64*>(&LocalPath[4]);
	const int64 LocalQuad1B = *reinterpret_cast<const int64*>(&LocalPathBack[0]);
	const int64 LocalQuad2B = *reinterpret_cast<const int64*>(&LocalPathBack[4]);
	std::wcout << "LocalQuad1 " << std::hex << LocalQuad1 << '\n';
	std::wcout << "LocalQuad2 " << std::hex << LocalQuad2 << '\n';
	std::wcout << "LocalQuad1B " << std::hex << LocalQuad1B << '\n';
	std::wcout << "LocalQuad2B " << std::hex << LocalQuad2B << '\n';
	*/
}


using namespace Global;


/*
		UFunctions
*/
#include "../../Dumper-7/SDK/BP_AJBGameInstance_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInGameHUD_classes.hpp"
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

#include "../../Dumper-7/CustomSDK/BP_GlobalPatcher_classes.hpp"			// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_OptionsMenu_classes.hpp"				// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_BLOnlineStatus_classes.hpp"

#include "../../Dumper-7/CustomSDK/GM_AJBUserInterface_classes.hpp"			// Custom SDK header (NOT GAME NATIVE)

#include "../../Dumper-7/CustomSDK/WBP_TLVersionInfo_classes.hpp"			// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/LemonHelper_classes.hpp"					// Custom SDK header (NOT GAME NATIVE)

#include "../../Dumper-7/CustomSDK/BP_Synchronizer_classes.hpp"				// Custom SDK header (NOT GAME NATIVE)


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
#include "../../Dumper-7/SDK/WB_TournamentMode_Main_classes.hpp"
#include "../../Dumper-7/SDK/Landscape_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBDamageAreaLocal_classes.hpp"
#include "../../Dumper-7/SDK/WB_DBISequencerSkipper_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBInteractAction_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBPlacementSkill_classes.hpp"
#include "../../Dumper-7/SDK/BP_GameFlowStateManager_classes.hpp"
#include "../../Dumper-7/SDK/BP_AJBinGameDeathCamera_classes.hpp"

#include "../../Dumper-7/SDK/MediaAssets_classes.hpp"

#include "TickHook/TickHook.h"
#include "../Logic/Callbacks/AJBCallbacks.h"
#include "../UConsole/Core/UConsole.h"

static bool* TOGGLEDEBUGBADGAMEDESIGN{nullptr};

#include "../../Dumper-7/SDK/Engine_parameters.hpp"

#include <sstream>
#include "StringTables.inl"

#include "../Logic/ServerLogic.h"
#include "../../Dumper-7/SDK/BP_AJBInGameCharacter_CSR_classes.hpp"

extern "C" void GodMode()
{
	SDK::ABP_AJBInGameCharacter_C* Character = Pointers::Character<SDK::ABP_AJBInGameCharacter_C>();
	if (Character)
	{
		Character->Heal(1000, 1000, 0, 0);
		Character->DebugSPMax();
		Character->DebugAPMax();
		Character->DebugCPMax();
		Character->DebugForceFireSkill_On();
		Character->DebugAutoFullMP_On();
		
	}
}

void UFunctions::UConsole(SDK::UConsole* This, SDK::FString& Command)
{
	std::string StrCommand = Command.ToString();

	// Sound.BGM.Play.BGM01.Attract is the title screen music
	// Sound.BGM.Play.BGM02.Menu1 is the simple match music

	LogA("UConsole", StrCommand);
	
	if (StrCommand == "song")
	{
		LogA("Song", AJB::Instance->LastPlayedWwiseBGMEventTag.TagName.ToString());
	}
	else if (StrCommand == "game")
	{
		LogA("Owning GameMode", Pointers::GameMode()->GetFullName());
	}
	
	else if (StrCommand == "matchingplayers")
	{
		
		for (int i{0}; i < AJB::Instance->MatchingPlayers.Num(); ++i)
		{
			LogA("MatchingPlayers", std::format("[Player]: {} | [FMatchingPlayerInfo]: {}", AJB::Instance->MatchingPlayers[i].First.ToString(), AJB::PlayerInfoParser(AJB::Instance->MatchingPlayers[i].Second)));
		}
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

void UFunctions::OutputText(SDK::UConsole* This, SDK::FString* Text)
{
	if (ConsoleOutput::bShouldOutput)
	{		
		ConsoleOutput::bShouldOutput = false;
		SDK::FString Output{ConsoleOutput::TextCache.c_str()};
		AJB::CopyString(Text, &Output);

		LogA(OFF::OutputText.GetName(), Text->ToString());
	}
	
	OFF::OutputText.VerifyFC<Decl::OutputText>()(This, Text);
}


SDK::FString* UFunctions::ConsoleCommand(SDK::APlayerController* This, SDK::FString* Result, SDK::FString* Command, bool bWriteToLog)
{
	std::string StrCommand = Command->ToString();

	if (AJB::IsServer())
	{
		SDK::APlayerController* Me = Pointers::Player();
		if (Me && This != Me && !AJB::Server::IsAdmin(This))
		{
			LogA("RCE Detected", std::format("{} has attempted to remotely execute a console command, they have been kicked. || The command they attempted to execute was '{}'", This->GetName(), StrCommand));

			UFunctions::CloseConnection(This->NetConnection);

			static SDK::FString AWholeLottaNothin{L""};
			AJB::CopyString(Command, &AWholeLottaNothin);
			return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, bWriteToLog);
		}
	}

	using SetInputModeGameAndUI = decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx);
	using SetInputModeGameOnly = decltype(&SDK::UWidgetBlueprintLibrary::SetInputMode_GameOnly);

	if (StrCommand == "exit")
	{
		exit(0);
	}
	else if (StrCommand == "playmode")
	{
		UConsole::ConsoleOutput::Text(std::format("Current PlayMode: {}", SDT::EPlayMode[(byte)AJB::Instance->PlayMode]).c_str());
	}
	else if (StrCommand.find("kick") != std::string::npos && StrCommand.size() > 5)
	{
		const uint32 PlayerIndex = std::stoi(StrCommand.substr(5));
		
		if (SDK::UNetDriver* Driver = GWorld.GetPointer()->NetDriver)
		{
			for (SDK::UNetConnection*& Connection : Driver->ClientConnections)
			{
				if (Connection->PlayerController && Connection->PlayerController->PlayerState && Connection->PlayerController->PlayerState->PlayerID == PlayerIndex) UFunctions::CloseConnection(Connection);
			}
		}	
	}
	else if (StrCommand.find("AJBExecInternal GrantAdmin") != std::string::npos && StrCommand.size() > 27)
	{
		const uint32 PlayerIndex = std::stoi(StrCommand.substr(27));
		
		if (SDK::UNetDriver* Driver = GWorld.GetPointer()->NetDriver)
		{
			for (SDK::UNetConnection*& Connection : Driver->ClientConnections)
			{
				if (Connection->PlayerController && Connection->PlayerController->PlayerState && Connection->PlayerController->PlayerState->PlayerID == PlayerIndex) AJB::Server::SetAdmin(AJB::Server::GetConnection(Connection), true);
			}
		}	
	}
	else if (StrCommand.find("AJBExecInternal RevokeAdmin") != std::string::npos && StrCommand.size() > 28)
	{
		const uint32 PlayerIndex = std::stoi(StrCommand.substr(27));
		
		if (SDK::UNetDriver* Driver = GWorld.GetPointer()->NetDriver)
		{
			for (SDK::UNetConnection*& Connection : Driver->ClientConnections)
			{
				if (Connection->PlayerController && Connection->PlayerController->PlayerState && Connection->PlayerController->PlayerState->PlayerID == PlayerIndex) AJB::Server::SetAdmin(AJB::Server::GetConnection(Connection), false);
			}
		}	
	}
	else if (StrCommand.find("kickindex") != std::string::npos && StrCommand.size() > 5)
	{
		const uint32 PlayerIndex = std::stoi(StrCommand.substr(5));
		
		if (SDK::UNetDriver* Driver = GWorld.GetPointer()->NetDriver)
		{
			if (Driver->ClientConnections.IsValidIndex(PlayerIndex)) UFunctions::CloseConnection(Driver->ClientConnections[PlayerIndex]);
		}		
	}
	
	else if (StrCommand.find("AJBExecInternal SwapCharacter") == 0)
	{
		SDK::ABP_AJBInGamePlayerController_C* Player = Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>();
		if (Player && Player->Character->IsA(SDK::AAJBInGameCharacterBase::StaticClass()))
		{
			int NewChar = std::stoi(StrCommand.substr(30));
			if (NewChar)
			{
				//static_cast<SDK::AAJBInGameCharacterBase*>(Player->Character)->SetMatchingPlayerIndex(NewChar);
				AJB::TEMP_CachedCharacterID = NewChar;
				AJB::SetSelectedCharacter((AJB::ESelectedCharacter)NewChar);
				Player->ROS_DebugCharaChange(NewChar);
				UConsole::ConsoleOutput::Text(std::format("Changing character to [{}] --> {}", NewChar, SDT::ESelectedCharacter[NewChar]).c_str());
			}			
		}
		else
		{
			UConsole::ConsoleOutput::Text("Unable to swap characters.");
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

		

		Pointers::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, GWorld.GetPointer(), 0, &HUD);
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
	//else if (StrCommand.find("AJBExecInternal PlayBG") == 0 && StrCommand.size() > 23) // Deprecated, it works but either my compiler or the game has gone completely stupid because it suddenly wants to crash all of a sudden after using this, it's not the substring it's the stupid SpawnActor.
	//{
	//	SDK::ABP_AJBWwiseManager_C* Manager = Pointers::SpawnActor<SDK::ABP_AJBWwiseManager_C>();
	//	
	//	if (Manager)
	//	{
	//		Manager->PostWwiseBGMEvent(SDK::FGameplayTag{ FName::NAME_FindOrAdd(StrCommand.substr(23).c_str()) }, true);
	//		ConsoleOutput::Text(L"Playing soundtrack " + Command->ToWString().substr(23));
	//	}
	//}	
	else if (StrCommand.find("AJBExecInternal PlayBG") == 0 && StrCommand.size() > 23)
	{
		Pointers::GetBlueprintClass<SDK::UBPF_AJBWwiseFunctionLibrary_C>()->RequestWwiseBGM_Event(SDK::FGameplayTag{FName::NAME_FindOrAdd(StrCommand.substr(23).c_str())}, true, GWorld.GetPointer());
		UConsole::ConsoleOutput::Text(std::format("Playing soundtrack {}", Command->ToString().substr(23)).c_str());
	}
	else if (StrCommand.find("AJBExecInternal TempFix") == 0)
	{
		if (AJB::IsServer())
		{
			AJB::TryFixInfiniteLoadingScreen();
		}
		else if (AJB::IsOfflineMode())
		{
			SDK::ABP_AJBInGamePlayerController_C* Player = Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>();
			if (Player) 
			{
				Player->ROS_DebugCharaChange(AJB::TEMP_CachedCharacterID);
			}
		}
	}
	else if (StrCommand.find("AJBExecInternal WinError") == 0)
	{
		size HeaderEnd = StrCommand.find('~');
		if (HeaderEnd != std::string::npos)
		{
			const int Box = MessageBoxA(0, StrCommand.substr((HeaderEnd + 1)).c_str(), StrCommand.substr(25, HeaderEnd - 25).c_str(), MB_OK);
			if (Box == IDNO) AJB::bIsLemonPossessioned = false;
		}
	}
	else if (StrCommand.find("AJBExecInternal Host") == 0)
	{
		int PARM_Area{0};
		int PARM_NPCCount = wcstol(CMLA::HardcodedNPCNum.GetArgumentAsString(), 0, 10);
		int PARM_NPCDifficulty{0};
		int PARM_PlayMode{0};
		bool PARM_Respawn{false};

		size AreaIdx = StrCommand.find("?Area=");
		if (AreaIdx != std::string::npos)
		{
			AreaIdx += 6;
			size AreaIdxEnd = StrCommand.find("?", AreaIdx);
			if (AreaIdxEnd == std::string::npos)
			{
				AreaIdxEnd = StrCommand.length();
			}

			PARM_Area = std::stoi(StrCommand.substr(AreaIdx, AreaIdxEnd - AreaIdx));
		}

		size ModeIdx = StrCommand.find("?PlayMode=");
		if (ModeIdx != std::string::npos)
		{
			ModeIdx += 10;

			size ModeIdxEnd = StrCommand.find("?", ModeIdx);
			if (ModeIdxEnd == std::string::npos)
			{
				ModeIdxEnd = StrCommand.length();
			}

			PARM_PlayMode = std::stoi(StrCommand.substr(ModeIdx, ModeIdxEnd - ModeIdx));
		}

		size NPCIdx = StrCommand.find("?NPCNum=");
		if (NPCIdx != std::string::npos)
		{
			NPCIdx += 8;
			size NPCIdxEnd = StrCommand.find("?", NPCIdx);
			if (NPCIdxEnd == std::string::npos)
			{
				NPCIdxEnd = StrCommand.length();
			}

			PARM_NPCCount = std::stoi(StrCommand.substr(NPCIdx, NPCIdxEnd - NPCIdx));
		}
		if (PARM_NPCCount != 0)
		{
			size NPCDifficultyIdx = StrCommand.find("?NPCDifficulty=");
			if (NPCDifficultyIdx != std::string::npos)
			{
				NPCDifficultyIdx += 15;
				size NPCDifficultyEndIdx = StrCommand.find('?', NPCDifficultyIdx);
				if (NPCDifficultyEndIdx == std::string::npos) 
				{
					NPCDifficultyEndIdx = StrCommand.length();
				}

				PARM_NPCDifficulty = std::stoi(StrCommand.substr(NPCDifficultyIdx, NPCDifficultyEndIdx - NPCDifficultyIdx));
			}
		}
		size PasswordIdx = StrCommand.find("?Password=");
		if (PasswordIdx != std::string::npos)
		{
			PasswordIdx += 10;
			size PasswordIdxEnd = StrCommand.find("?", PasswordIdx);
			if (PasswordIdxEnd == std::string::npos)
			{
				PasswordIdxEnd = StrCommand.length();
			}

			AJB::bServerHasPassword = true;
			FName::NAME_FindOrAdd(&AJB::NAME_ServerPassword, StrCommand.substr(PasswordIdx, PasswordIdxEnd - PasswordIdx).c_str());
		}
		else
		{
			AJB::bServerHasPassword = false;
		}

		size AdminPasswordIdx = StrCommand.find("?AdminPassword=");
		if (AdminPasswordIdx != std::string::npos)
		{
			AdminPasswordIdx += 15;
			size AdminPasswordIdxEnd = StrCommand.find("?", AdminPasswordIdx);
			if (AdminPasswordIdxEnd == std::string::npos)
			{
				AdminPasswordIdxEnd = StrCommand.length();
			}

			AJB::bServerAllowsAdmins = true;
			FName::NAME_FindOrAdd(&AJB::NAME_AdminPassword, StrCommand.substr(AdminPasswordIdx, AdminPasswordIdxEnd - AdminPasswordIdx).c_str());
		}
		else
		{
			AJB::bServerAllowsAdmins = false;
		}

		SDK::FAJBBattleSettings TheSettings{};
		TheSettings.AILevel = PARM_NPCDifficulty;
		TheSettings.DamageAreaType = PARM_Area;
		AJB::Instance->SetBattleSettings(TheSettings);
		AJB::Instance->PlayMode = (SDK::EPlayMode)PARM_PlayMode;
		AJB::Instance->AreaTypeID = PARM_Area;

		//AJB::Instance->DebugNPCCharaIndex = PARM_NPCCount;
		AJB::Instance->NPCNum = PARM_NPCCount;
		AJB::Instance->NPCNumMax = PARM_NPCCount;

		AJB::Instance->bIsLocalSessionMode = true;
		AJB::Instance->CreateSession();

		std::string ServerPasswordStr = (AJB::bServerHasPassword ? AJB::NAME_ServerPassword.ToString() : "None");
		std::string AdminPasswordStr = (AJB::bServerAllowsAdmins ? AJB::NAME_AdminPassword.ToString() : "None");

		UConsole::ConsoleOutput::Text(std::format("Creating a session with parameters === [Area]: {} || [Mode]: {} || [NPC Num]: {} || [NPC Difficulty]: {} || [Password]: {} || [[Admin Password]: {}", SDT::EDamageAreaType.Find(PARM_Area), SDT::EPlayMode[PARM_PlayMode], PARM_NPCCount, PARM_NPCDifficulty, std::string(ServerPasswordStr.begin(), ServerPasswordStr.end()), std::string(AdminPasswordStr.begin(), AdminPasswordStr.end())).c_str());
	}
	else if (StrCommand.find("AJBExecInternal Char") == 0)
	{
		int NewChar = std::stoi(StrCommand.substr(21));
		AJB::TEMP_CachedCharacterID = NewChar;
		AJB::SetSelectedCharacter((AJB::ESelectedCharacter)NewChar);

		UConsole::ConsoleOutput::Text(std::format("Setting character number to [{}] --> {} || Requires level restart and may not reflect during online sessions, use AJBExecInternalSwapCharacter instead.", NewChar, SDT::ESelectedCharacter[NewChar]).c_str());
	}
	else if (StrCommand.find("AJBExecInternal Mode") == 0)
	{
		uint8 NewPlayMode = std::stoi(StrCommand.substr(21));

		AJB::SetPlayMode(NewPlayMode);
		if (AJB::MOD_Global_Synchronizer) AJB::MOD_Global_Synchronizer->PlayMode = NewPlayMode;
	}
	else if (StrCommand == "chartable")
	{
		for (int i{0}; i < AJB::Instance->CharacterInfoTable->RowMap.Num(); ++i)
		{
			SDK::TMap<SDK::FName, SDK::FAJBCharacterInfo*>& RowMap = (SDK::TMap<SDK::FName, SDK::FAJBCharacterInfo*>&)AJB::Instance->CharacterInfoTable->RowMap;
			//if (RowMap[i].First.ToString() == "CharaParam.C28") RowMap[i].Second->CharaIndex = 31;
			LogA(RowMap[i].First.ToString(), std::to_string(RowMap[i].Second->CharaIndex));
		}
	}
	else if (StrCommand == "charmap")
	{
		SDK::FAJBCharacterInfo Out{};
		Pointers::GetBlueprintClass<SDK::UAJBUtilityFunctionLibrary>()->GetCharacterInfoByCharaTag(GWorld.GetPointer(), SDK::FGameplayTag{FName::NAME_FindOrAdd("CharaParam.DBI")}, &Out);
		LogA(Out.CharaTag.TagName.ToString(), std::format("[bSelectable]: {} | [bShipping]: {} | [CharaIndex]: {} | [CharaSelectIndex]: {}", Out.bSelectable, Out.bShipping, Out.CharaIndex, Out.CharaSelectIndex));
	}
	else if (StrCommand == "AJBExecInternal Skin")
	{

	}
	else if (StrCommand == "AJBExecInternal Konami")
	{
		AJB::bIsLemonPossessioned = true;
		AJB::CreateCallbackTimer(AJB::Callbacks::LemonPossession, 0.7f);
	}
	else if (StrCommand == "AJBExecInternal GoldShower")
	{
		if (AJB::IsServer() || AJB::IsOfflineMode())
		{
			SDK::APlayerController* Player = Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>();
			if (Player)
			{
				SDK::ABP_AJBInGameCharacter_C* Character = static_cast<SDK::ABP_AJBInGameCharacter_C*>(Pointers::Player()->Character);
				if (Character) Character->SprinkleSP();
			}
			
		}
	}
	else if (StrCommand.find("AJBExecInternal SkipMatchmaking") == 0)
	{
		if (AJB::IsServer() || AJB::IsOfflineMode())
		{
			SDK::ABP_AJBOutGamePlayerController_C* Player = Pointers::Player<SDK::ABP_AJBOutGamePlayerController_C>();
			if (Player)
			{
				// Player->OnFinishedStartPointSelectEndSequencer(); // Initiates servertravel IMMEDIATELY
				//Player->OnFinishedSequencer(); // Does nothing
				//Player->OnFinishedSkipSequencerWithWaitForOuter1(); // Does nothing
				//Player->OnFinishedWaitPlayingDBIVoiceForOuter1(); // OKAY! OPEN THE- GAME (then servertravels after cutscene)
				//Player->OnStartIntroSequnecer(); // Plays the character select screen but doesn't have the character select appear
				Player->OnStartPointSelectSequnecer(); // OKAY! OPEN THE- GAME (also servertravels after cutscene)


				// Idk this stupid crap appears as tiny Japanese text at the bottom of the right screen and then fades away, does absolutely nothing
				/*Player->WB_DBISequncerSkipper = (SDK::UWB_DBISequencerSkipper_C*)AJB::GetBlueprintClass<SDK::UGameplayStatics>()->SpawnObject(SDK::UWB_DBISequencerSkipper_C::StaticClass(), GEngine->GameViewport);
				Player->WB_DBISequncerSkipper->AddToViewport(112);*/
			}

		}
	}
	else if (StrCommand.find("AJBExecInternal SetName") == 0)
	{
		static SDK::FString Username{};
		AJB::StrInGameUserName = &Username;
		
		SDK::FString NewUser = SDK::FString(std::wstring(Command->CStr()).substr(24).c_str());
		AJB::CopyString(&Username, &NewUser);
	}
	else if (StrCommand.find("AJBExecInternal SpawnActor") == 0 && StrCommand.size() > 27)
	{
		Pointers::FActorSpawnParameters Parm{SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn};
		LogA("Spawning this", StrCommand.substr(27));
		Pointers::SpawnActorInternal(GWorld.GetPointer(), SDK::UClass::FindClass(StrCommand.substr(27).c_str()), SDK::FVector{}, SDK::FRotator{}, Parm);
	}
	else if (StrCommand == "mute")
	{
		Pointers::GetBlueprintClass<SDK::UBPF_AJBWwiseFunctionLibrary_C>()->RequestWwiseBGM_StopEvent(GWorld.GetPointer());
		UConsole::ConsoleOutput::Text("SHUTUP! SHUTUP CHUMLEE");
	}
	else if (StrCommand == "hidemouse")
	{
		Pointers::Player()->bShowMouseCursor = false;
		UConsole::ConsoleOutput::Text("Hiding mouse.");
	}
	else if (StrCommand == "showmouse")
	{
		Pointers::Player()->bShowMouseCursor = true;
		UConsole::ConsoleOutput::Text("Showing mouse.");
	}
	else if (StrCommand == "lockmouse")
	{
		SDK::APlayerController* Player = Pointers::Player();
		OFF::SetInputGameOnly.Call<SetInputModeGameOnly>()(Player);
		UConsole::ConsoleOutput::Text("Locking mouse.");
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
	else if (StrCommand == "filter")
	{
		SDK::ABP_PPV_VSFilter_C* Filter = AJB::GetPostProcessFilter(Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>());

		if (!IsNull(Filter))
		{
			UConsole::ConsoleOutput::Text(std::format("Using shader {}", (uint8)Filter->CurrentType).c_str());
		}
	}
	else if (StrCommand.find("AJBExecInternal Filter") == 0 && StrCommand.size() >= 23)
	{
		const int FilterIndex = std::stoi(StrCommand.substr(23));

		SDK::ABP_PPV_VSFilter_C* Filter = AJB::GetPostProcessFilter(Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>());

		if (Filter)
		{
			Filter->CurrentType = (SDK::E_VSFilterType)FilterIndex;
			Filter->SetFilter(Filter->CurrentType); // Sometimes there's a STUPID PIECE OF MODULO BY ZERO I HATE YOU I FECKING HATE YOU UNREAL ENGINE OR STUPID PIECE OF TRASH COMPILER>. HATE LET ME TELL YOU HOW MUCH IVE COME TO HATE YEOU SINCE I BEGAN TO LIVE
			
			UConsole::ConsoleOutput::Text(std::format("Using shader {}", (uint8)Filter->CurrentType).c_str());
		}
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
	else if (StrCommand.find("AJBExecInternal OptionsMenu Toggle") == 0)
	{		
		if (AJB::MOD_OptionsMenu)
		{
			//if (AJB::bDebugModeFromCMLA) LogA(AJB::MOD_OptionsMenu->GetFullName(), std::format("[bPauseMenuIsVisible]: {} | [Visibility]: {}", AJB::MOD_OptionsMenu->bPauseMenuIsVisible, AJB::MOD_OptionsMenu->Visibility == SDK::ESlateVisibility::Visible ? "Visible" : "Collapsed"));

			SDK::APlayerController* Player = Pointers::Player();
			if (Player)
			{
				// Seems redundant but it's not, the stupid widget doesn't show up on clients connected to the server, I'm not sure if it's due to replication which I don't see any flags for or if Login doesn't get called (which it should be either way)
				if (!AJB::MOD_OptionsMenu->IsInViewport()) AJB::MOD_OptionsMenu->AddToViewport(111);

				SDK::EOnlineStatus NewStatus = AJB::IsServer() ? SDK::EOnlineStatus::Hosting : AJB::IsInSession() ? SDK::EOnlineStatus::Online : SDK::EOnlineStatus::Offline;
				AJB::MOD_OptionsMenu->OnlineStatus->UpdateStatus(NewStatus);
				
				//const float CurrentMaxFPS = OFFSET::VFTable<float(__fastcall*)(SDK::UEngine*, float, bool)>(GEngine.GetPointer())[0x50](GEngine.GetPointer(), AJB::MOD_OptionsMenu->InternalTickCount, true);
				
				// Calls UEngine::GetMaxFPS from  the VFTable.
				const float CurrentMaxFPS = OFFSET::VFTable<float(__fastcall*)(SDK::UEngine*)>(GEngine.GetPointer())[OFF::VFT_GetMaxFPS](GEngine.GetPointer());

				// Dynamic polling for different framecaps ensuring no delay, even if you have your game uncapped the game framerate will not actually be uncapped because of a limit Namco placed (I wrote a patch for it and it's still in the codebase but it's not really useful)
				if (CurrentMaxFPS != 0) AJB::MOD_OptionsMenu->InternalTickRate = CurrentMaxFPS;
				else AJB::MOD_OptionsMenu->InternalTickRate = AJB::bIsFrameRateUncapped ? 240 : 62;
				//else AJB::MOD_OptionsMenu->InternalTickRate = AJB::bIsFrameRateUncapped ? 240 : 62;

				// I'd rather put this in the actual blueprint logic but then ID HAVE TO REDUMP THE SDK AND GET THE NEW STRUCTURE and I don't feel like it until it's actually a proper menu.

				// Temporary toggle switch for proper mouse visibility
				/*static bool bWasShowingMouse{false};

				bool bMenuCurrentlyVisible = AJB::MOD_OptionsMenu->bPauseMenuIsVisible;

				if (bMenuCurrentlyVisible)
				{
					bWasShowingMouse = Player->bShowMouseCursor;
					Player->bShowMouseCursor = true;
				}
				else
				{
					Player->bShowMouseCursor = bWasShowingMouse;
				}

				SDK::UWorld* CurrentWorld = GWorld.GetPointer();
				if (CurrentWorld && !CurrentWorld->NetDriver)
				{
					Player->Pause();
				}
				
				if (Player->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
				{
					SDK::AAJBInGameHUD* HUD = static_cast<SDK::AAJBInGameHUD*>(Player->GetHUD());
					HUD->SetupForceInvisibleAllWidgetsFlag(AJB::MOD_OptionsMenu->bPauseMenuIsVisible);
				}

				AJB::MOD_OptionsMenu->bPauseMenuIsVisible ? OFF::SetInputMode_GameAndUIEx.Call<SetInputModeGameAndUI>()(Player, AJB::MOD_OptionsMenu, SDK::EMouseLockMode::LockAlways, false) :  OFF::SetInputGameOnly.Call<SetInputModeGameOnly>()(Player);*/

				UConsole::ConsoleOutput::Text(std::format("[bPauseMenuIsVisible]: {} | [Visibility]: {} | [InternalTickRate]: {}", AJB::MOD_OptionsMenu->bIsOptionsMenuVisible, AJB::MOD_OptionsMenu->Visibility == SDK::ESlateVisibility::Visible ? "Visible" : "Collapsed", AJB::MOD_OptionsMenu->InternalTickRate).c_str());
			}
		}
	}
	else if (StrCommand.find("AJBExecInternal AppendOp") == 0 && StrCommand.size() > 25)
	{
		AJB::NAME_ClientJoinOptions = FName::NAME_FindOrAdd(StrCommand.substr(25).c_str());
		/*AJB::CLIENT_JoinOptions.clear();
		SDK::FName Option{FName::NAME_FindOrAdd(StrCommand.substr(25).c_str())};
		AJB::CLIENT_JoinOptions.push_back(Option);*/
		/*StrCommand = StrCommand.substr(25);

		size OptionIdx = 0;

		while ((OptionIdx = StrCommand.find('?', OptionIdx)) != std::string::npos)
		{
			size NextOptionIdx = StrCommand.find('?', OptionIdx + 1);

			std::string PushBack = StrCommand.substr(OptionIdx, NextOptionIdx == std::string::npos ? std::string::npos : NextOptionIdx - OptionIdx);
			SDK::FString PushBackF = SDK::FString{std::wstring(PushBack.begin(), PushBack.end()).c_str()};
			LogA("CLIENT JOIN OPTION", PushBackF.ToString());
			AJB::CLIENT_JoinOptions.push_back(PushBackF);

			if (NextOptionIdx == std::string::npos)
				break;

			OptionIdx = NextOptionIdx;
		}

		for (SDK::FString& String : AJB::CLIENT_JoinOptions)
		{
			LogA("CLIENT JOIN OPTIONS", String.ToString());
		}*/
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
	else if (StrCommand.find("setverbosity") == 0 && StrCommand.size() > 13)
	{
		*reinterpret_cast<byte*>(PB(OFF::LogVerbosity)) = std::stoi(StrCommand.substr(13));
		*reinterpret_cast<byte*>(PB(0x3051520)) = std::stoi(StrCommand.substr(13));
	}
	else if (StrCommand == "showhud")
	{
		static bool bOne{0};
		SDK::APlayerController* Player = Pointers::Player();
		if (Player && Player->MyHUD && Player->MyHUD->IsA(SDK::AAJBHUDBase::StaticClass()))
		{
			bOne = !bOne;
			static_cast<SDK::AAJBHUDBase*>(Player->MyHUD)->SetupForceInvisibleAllWidgetsFlag(bOne);

			UConsole::ConsoleOutput::Text(bOne ? "HUD is hidden." : "HUD is visible.");
		}
		else UConsole::ConsoleOutput::Text("Unable to toggle HUD.");
	}
	else if (StrCommand == "toggledebugmenu")
	{
		static bool bToggle{false};

		if (SDK::APlayerController* PC = Pointers::Player())
		{
			if (PC->MyHUD)
			{
				if (PC->MyHUD->IsA(SDK::ABP_AJBInGameHUD_C::StaticClass()))
				{
					bToggle = !bToggle;
					UConsole::ConsoleOutput::Text("Toggling InGame debug menu.");
					SDK::ABP_AJBInGameHUD_C* HUD = static_cast<SDK::ABP_AJBInGameHUD_C*>(PC->MyHUD);

					HUD->OnShowDebugMenu();
				}
				else if (PC->MyHUD->IsA(SDK::ABP_AJBOutGameHUD_C::StaticClass()))
				{
					bToggle = !bToggle;
					UConsole::ConsoleOutput::Text("Toggling OutGame debug menu.");
					SDK::ABP_AJBOutGameHUD_C* HUD = static_cast<SDK::ABP_AJBOutGameHUD_C*>(PC->MyHUD);					
				}
				else UConsole::ConsoleOutput::Text("Unable to debug menu.");

				if (!bToggle)
				{
					for (SDK::UWB_TestModeMenuBase_C* Page : Pointers::FindObjects<SDK::UWB_TestModeMenuBase_C>(false))
					{
						if (Page && Page->Visibility == SDK::ESlateVisibility::Visible && !(Page->Flags & EObjectFlags::ArchetypeObject))
						{
							LogA("Page", Page->GetFullName());
							Page->CloseWindow();
							break;
						}
					}
				}
			}
		}

		/*
		static SDK::UClass* Classes[4]{nullptr};
		static SDK::UUserWidget* Menus[4]{nullptr};

		constexpr const wchar_t* WidgetsToLoad[] =
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
					Menus[i] = (SDK::UUserWidget*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(Classes[i], static_cast<SDK::UGameViewportClient*>(GEngine->GameViewport), FName::NAME_FindOrAdd(Name), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
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
					}* /
				}

				++i;
			}
		}

		constexpr byte MenuIndex{2};

		if (Menus[MenuIndex])
		{
			SDK::UUserWidget* MenuObj = Menus[MenuIndex];

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
				Pointers::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, GWorld.GetPointer(), 0, &HUD);
				if (HUD) HUD->OnShowDebugMenu();
			}
			else
			{
				OFF::SetInputGameOnly.Call<SetInputModeGameOnly>()(Pointers::Player());
				MenuObj->SetVisibility(SDK::ESlateVisibility::Collapsed);

				reinterpret_cast<SDK::UWB_TestModeMenuBase_C*>(Menus[MenuIndex])->CloseWindow();
			}

			UConsole::ConsoleOutput::Text(bToggled ? "Showing debug menu" : "Hiding debug menu");
		}*/
	}	
	else if (StrCommand == "host")
	{
		AJB::Instance->bIsLocalSessionMode = true;
		AJB::Instance->CreateSession();
		AJB::Instance->PlayMode = SDK::EPlayMode::Shop;
	}
	else if (StrCommand == "join")
	{
		AJB::Instance->PlayMode = SDK::EPlayMode::Shop;
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
		Pointers::GameMode<SDK::ABP_AJBBattleGameMode_C>()->Say(L"WELL FECK");
	}
	else if (StrCommand == "gnm")
	{
		ENetMode WorldNetMode = GetWorldNetMode(GWorld);
		ENetMode ActorNetMode = GetActorNetMode(Pointers::Player());

		LogA("GetNetMode", std::format("[WorldNetMode]: {} | [ActorNetMode]: {}", WorldNetMode.ToString(), ActorNetMode.ToString()));
	}
	else if (StrCommand == "firstperson")
	{
		static bool bToggle{false};
		
		SDK::APlayerController* Player = Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>();
		if (Player)
		{
			bToggle = !bToggle;

			SDK::ABP_AJBInGameCharacter_C* Character = static_cast<SDK::ABP_AJBInGameCharacter_C*>(Pointers::Player()->Character);
			if (Character) Character->bFindCameraComponentWhenViewTarget = bToggle;
		}
		

	}
	/*else if (StrCommand == "fix")
	{
		AJB::TEMP_FixMatchingPlayers();
	}
	*/else if (StrCommand.find("rce") != std::string::npos && StrCommand.size() > 5)
	{
		SDK::AAJBInGamePlayerController* Player = (SDK::AAJBInGamePlayerController*)Pointers::Player();
		if (Player)
		{
			std::wstring RemoteCommand{ Command->CStr() };
			RemoteCommand = RemoteCommand.substr(4);
			Player->ServerCmd(RemoteCommand.c_str());
		}
	}
	else if (StrCommand == "endgame")
	{
		SDK::ABP_AJBInGamePlayerController_C* Player = Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>();
		if (Player)
		{
			UConsole::ConsoleOutput::Text("Ending game..");
			Player->ROS_DebugLastSurvivor();
		}
	}
	else if (StrCommand == "ajbdebug")
	{
		SDK::ABP_AJBInGameHUD_C* HUD = reinterpret_cast<SDK::ABP_AJBInGameHUD_C*>(Pointers::Player()->MyHUD);
		if (HUD)
		{
			static bool bToggle{false};
			bToggle = !bToggle;
	
			HUD->bIsDebugHUD = bToggle;
		}
	}
	else if (StrCommand == "god")
	{
		static bool bOne{false};
		if (bOne)
		{
			for (TickHook::FTimerHandlerEntry& Entry : TickHook::CallbackTimers)
			{
				if (Entry.pFunctionAddress == (ull)GodMode)
				{
					Entry.bInfiniteLoop = false;
					UConsole::ConsoleOutput::Text("God mode deactivated.");
					if (auto Char = Pointers::Character<SDK::ABP_AJBInGameCharacter_C>()) Char->DebugForceFireSkill_Off(); 
					bOne = false;
					break;
				}
			}
		}
		else
		{
			bOne = true;
			
			TickHook::FTimerHandlerEntry Entry{(ull)GodMode, 0.25f, 0, 0, true, 0};
			TickHook::CallbackTimers.push_back(Entry);

			UConsole::ConsoleOutput::Text("God mode activated.");
		}
		
	}
	/*else if (StrCommand == "trymenu")
	{
		SDK::ABP_AJBInGameHUD_C* HUD = reinterpret_cast<SDK::ABP_AJBInGameHUD_C*>(Pointers::Player()->MyHUD);
		if (HUD)
		{
			HUD->TryCreateDebugOnlyMenu();
			HUD->OnShowDebugMenu();
		}
	}
	else if (StrCommand == "camera")
	{
		SDK::ABP_AJBInGameCharacter_C* Character = static_cast<SDK::ABP_AJBInGameCharacter_C*>(Pointers::Player()->Character);
		if (Character)
		{
			struct FST_CameraParam
			{
				SDK::FVector	SpringArmOffset;
				float			TargetArmLength;
				float			InterpSpeed;
				float			FOV;
			};

			FST_CameraParam NewParms{SDK::FVector(0.0f, 0.0f, 50.0f), 300.0f, 10.0f, 90.0f};

			Character->DesiredCameraParam = *(SDK::FST_CameraParam*)&NewParms;
		}
	}*/
	else if (StrCommand == "fly")
	{
		SDK::ABP_AJBInGamePlayerController_C* Player = reinterpret_cast<SDK::ABP_AJBInGamePlayerController_C*>(Pointers::Player());
		if (Player)
		{
			//Player->ROS_DebugEnableAirJump(bToggle);
			bool& bIsFlying = Player->CharacterBPRef->bDebugSuperJump;
			Player->CharacterBPRef->bCallMCJumpAll = Player->CharacterBPRef->bIsFlyingMode = (bIsFlying = !bIsFlying);

			bIsFlying ? UConsole::ConsoleOutput::Text("Flying activated") : UConsole::ConsoleOutput::Text("Flying deactivated.");
		}
	}
	else if (StrCommand == "trydedicated")
	{
		AJB::DedicatedServerLoop();
		//AJB::CreateCallbackTimer(AJB::DedicatedServerLoop, 0.0f);
	}
	else if (StrCommand == "partner")
	{
		//((SDK::AAJBInGameCharacter*)(Pointers::Player()->Player))->SetPairID(AJB::IsServer() ? AJB::Instance->MatchingPlayers[1].First : AJB::Instance->MatchingPlayers[0].First);
	}
	else if (StrCommand == "connections")
	{
		for (AJB::FAJBNetConnection& Connection : AJB::ClientConnections)
		{
			LogA("Connections", std::format("[Connection]: {} | [CharacterID]: {} | [CharacterSkin]:{} | [bIsAdmin]: {} ", Connection.Connection->GetFullName(), Connection.CharacterID, Connection.CharacterSkin, Connection.GetFlag(AJB::bIsAdmin)));
		}
	}
	else if (StrCommand == "ghost")
	{
		static bool bToggle{false};
		bToggle = !bToggle;

		SDK::ACharacter* Character = Pointers::Character<SDK::ACharacter>();
		if (Character)
		{
			Character->CharacterMovement->MovementMode = bToggle ? SDK::EMovementMode::MOVE_Flying : SDK::EMovementMode::MOVE_Walking;
			Character->bActorEnableCollision = !bToggle;
		}
	}
	else if (StrCommand.find("AJBExecInternal PostAkEventByName") == 0 && StrCommand.size() > 34)
	{
		SDK::UAkComponent* Component = Pointers::GetLastOf<SDK::UAkComponent>();
		if (Component) Component->PostAkEventByName(SDK::FString(std::wstring(Command->CStr()).substr(34).c_str()));
	}
	else if (StrCommand == "skin")
	{
		AJB::Instance->RequestLoadSkinData(FName::NAME_FindOrAdd(L"C28_7"));
	}
	else if (StrCommand == "invisible")
	{
		SDK::ABP_AJBInGameCharacter_C* Character = Pointers::Character<SDK::ABP_AJBInGameCharacter_C>();
		if (Character && Character->BP_AJBInteractSkill)
		{
			static bool bToggle{false};
			bToggle = !bToggle;
			if (bToggle)
			{
				Character->BP_AJBInteractSkill->ROS_OnStartHiding();
				Character->BP_AJBInteractSkill->ChangeCharaStateToStartHiding(true);
			}
			else
			{
				Character->BP_AJBInteractSkill->ROS_OnFinishHiding();
				Character->BP_AJBInteractSkill->ChangeCharaStateToFinishHiding(true);
			}
		}
	}
	else if (StrCommand.find("AJBExecInternal LemonPlayerPlay") == 0 && StrCommand.size() > 32)
	{
		SDK::FName MovieName = FName::NAME_FindOrAdd(StrCommand.substr(32).c_str());

		if (AJB::LemonPlayer)
		{
			for (SDK::UMediaSource* MediaSource : Pointers::FindObjects<SDK::UMediaSource>())
			{
				if (MediaSource->Name == MovieName)
				{
					AJB::LemonPlayer->Close();
					AJB::LemonPlayer->OpenSource(MediaSource);
					MediaSource->AddToRootSet();
					break;
				}
			}
			for (SDK::UMediaSoundComponent* Sound : Pointers::FindObjects<SDK::UMediaSoundComponent>(0))
			{
				Sound->SetMediaPlayer(AJB::LemonPlayer);
			}
			/*std::vector<SDK::UMediaSoundComponent*> Sounds = Pointers::FindObjects<SDK::UMediaSoundComponent>(0);
			if (Sounds.empty())
			{
				SDK::UMediaSoundComponent* NewSound = Pointers::SpawnActor<SDK::UMediaSoundComponent>();
				if (NewSound) NewSound->SetMediaPlayer(AJB::LemonPlayer);
			}
			else for (SDK::UMediaSoundComponent* Sound : Sounds)
			{
				LogA("Sound", Sound->GetFullName());
				Sound->SetMediaPlayer(AJB::LemonPlayer);
			}*/
		}
	}
	else if (StrCommand == "cap")
	{
		static bool bToggle{true};
		bToggle = !bToggle;
		AJB::SetFrameRateCap(bToggle);
	}
	else if (StrCommand == "little")
	{
		if (auto Character = Pointers::Character<SDK::ABP_AJBInGameCharacter_CSR_C>())
		{
			for (auto Skill : Character->AllSkillComponents)
			{
				LogA("Skill", std::format("[Name]: {} | [Skill Tag]: {} | [Type]: {} | [Current State]: {}", Skill->GetFullName(), Skill->SkillTag.TagName.ToString(), (byte)Skill->SkillType, Skill->SkillState));
			}
		}
	}
	/*else if (StrCommand == "screenshot")
	{
		Pointers::GetBlueprintClass<SDK::UAJBUtilityFunctionLibrary>()->Screenshot(L"Screenshot", 0);
	}
	else if (StrCommand == "pissingmeoff")
	{
		AJB::FlowUtilChangeState(&Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>()->BP_GameFlowStateManager->FlowStateHander, SDK::FGameplayTag{FName::NAME_FindOrAdd("InGame.VictoryShot.Finish")});
	}*/
	else if (StrCommand == "sprint")
	{
		Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>()->DebugAddPassiveSkill(SDK::FGameplayTag{FName::NAME_FindOrAdd("CharaCondition.Passive.RunAwayBuff")});
	}
	else if (StrCommand == "noway")
	{
		Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>()->CharacterNo = 26;
		Pointers::Player<SDK::ABP_AJBInGamePlayerController_C>()->OnRep_CharacterNo();
	}

	LogA("ConsoleCommand", std::format("[Owning PlayerController]: {} | [Command]: {}", This->GetFullName(), StrCommand));

	return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, bWriteToLog);
}

UFunctions::BrowseReturnVal UFunctions::Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
{
	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = Pointers::ConstructUConsole(FName::NAME_FindOrAdd(CMLA::ConsoleKey.GetArgumentAsString()));
		LogA("Browse", "Constructed UConsole early.");
	}

	if (AJB::MOD_OptionsMenu && AJB::MOD_OptionsMenu->bIsOptionsMenuVisible)
	{
		AJB::MOD_OptionsMenu->ToggleMenu();
	}

	AJB::MOD_Global_Synchronizer = nullptr;

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

void A8CL::UFunctions::SetClientTravel(SDK::UEngine* This, SDK::UWorld* InWorld, const wchar_t* NextURL, unsigned char TravelType)
{
	std::wstring TheURL(NextURL);
	LogA(OFF::SetClientTravel.GetName(), std::format("[This]: {} | [InWorld]: {} | [NextURL]: {} | [ETravelType]: {}", This->GetFullName(), InWorld->GetFullName(), std::string(TheURL.begin(), TheURL.end()), (*reinterpret_cast<ETravelType*>(&TravelType)).ToString()));

	if (!AJB::IsServer() && wcscmp(NextURL, L"/Game/Aeyth8/Maps/DedicatedServer/DedicatedServerRestart") == 0)
	{
		LogA(OFF::SetClientTravel.GetName(), "Preparing to reconnect...");
		return OFF::SetClientTravel.VerifyFC<Decl::SetClientTravel>()(This, InWorld, L"/Game/Aeyth8/Maps/DedicatedServer/PendingReconnect", TravelType);
	}

	OFF::SetClientTravel.VerifyFC<Decl::SetClientTravel>()(This, InWorld, NextURL, TravelType);
}

void A8CL::UFunctions::ClientTravelInternal(SDK::APlayerController* This, SDK::FString* URL, unsigned char TravelType, bool bSeamless, void* MapPackageGuid)
{
	LogA(OFF::ClientTravelInternal.GetName(), std::format("[This]: {} | [URL]: {} | [TravelType]: {} | [bSeamless]: {}", This->GetFullName(), URL->ToString(), (*reinterpret_cast<ETravelType*>(&TravelType)).ToString(), bSeamless));

	OFF::ClientTravelInternal.VerifyFC<Decl::ClientTravel>()(This, URL, TravelType, bSeamless, MapPackageGuid);
}

void A8CL::UFunctions::StartLoadingDestination(FSeamlessTravelHandler* This)
{
	LogA(OFF::StartLoadingDestination.GetName(), std::format("[FURL]: {}", Helpers::FURLParser(This->PendingTravelURL)));

	if (!AJB::IsServer() && AJB::IsInSession())
	{
		constexpr const wchar_t* CatchMe{L"/Game/Aeyth8/Maps/DedicatedServer/DedicatedServerRestart"};
		//static SDK::FString Redirector{L"/Game/Aeyth8/Maps/DedicatedServer/PendingReconnect"};
		static SDK::FString Redirector{L"open /Game/Aeyth8/Maps/DedicatedServer/PendingReconnect"};
		if (wcscmp(CatchMe, This->PendingTravelURL.Map.Data) == 0)
		{
			//AJB::CopyString(&This->PendingTravelURL.Map, &Redirector);
			LogA(OFF::StartLoadingDestination.GetName(), "Redirecting to PendingReconnect...");
			UFunctions::UConsole(GEngine->GameViewport->ViewportConsole, Redirector);
			return;
		}
	}

	OFF::StartLoadingDestination.VerifyFC<Decl::StartLoadingDestination>()(This);
}

bool UFunctions::InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
{
	LogA("InitListen", This->GetFullName() + " | " + Helpers::FURLParser(LocalURL));
	LocalURL.Port = wcstol(CMLA::ServerPort.GetArgumentAsString(), 0, 10);

	FName::NAME_FindOrAdd(&AJB::NAME_PreJoinParameters, std::to_string(AJB::Instance->PlayMode).c_str());

	return OFF::InitListen.VerifyFC<Decl::InitListen>()(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
}

void UFunctions::NotifyControlMessage(SDK::UPendingNetGame* This, SDK::UNetConnection* Connection, unsigned char MessageType, void* InBunch)
{
	LogA(OFF::NotifyControlMessage.GetName(), std::format("[UPendingNetGame]: {} | [Connection]: {} | [MessageType]: {}", This->GetFullName(), Connection->GetFullName(), MessageType));
	
	

	if (!AJB::IsServer() && MessageType == 1)
	{
		constexpr qword SIZE = 0x400;
		struct KillMe
		{
			byte* Data;
			qword Size;
		};
		KillMe DeathRow{};
		DeathRow.Size = SIZE;
		DeathRow.Data = new byte[SIZE]{0};
		memcpy(DeathRow.Data, InBunch, DeathRow.Size);

		SDK::FString AllocatedBunch{};
		Call<qword(__fastcall*)(qword, qword)>(PB(0x5802E0))((qword)DeathRow.Data, (qword)&This->URL);
		//LogA("ALlocatedBunch REEEEEEEETAAAAAAAAAARRRRDDDDDDDD", AllocatedBunch.ToString());
		Call<qword(__fastcall*)(qword, qword)>(PB(0x5802E0))((qword)DeathRow.Data, (qword)&AllocatedBunch);
		//LogA("ALlocatedBunch REEEEEEEETAAAAAAAAAARRRRDDDDDDDD", AllocatedBunch.ToString());
		Call<qword(__fastcall*)(qword, qword)>(PB(0x5802E0))((qword)DeathRow.Data, (qword)&AllocatedBunch);
		const int NewPlayMode = std::stoi(AllocatedBunch.ToString());

		switch (NewPlayMode)
		{
		case 3:
		case 4:
		case 7:
		case 8:
			AJB::Instance->bIsLocalSessionMode = true;
			break;

		default:
			AJB::Instance->bIsLocalSessionMode = false;
		}

		AJB::Instance->PlayMode = (SDK::EPlayMode)NewPlayMode;
		/*std::wstring Bulllllll = L"AJBExecInternal Mode ";
		Bulllllll += std::to_wstring(NewPlayMode);
		SDK::FString Commando(Bulllllll.c_str());
		UConsole(GEngine->GameViewport->ViewportConsole, Commando);*/
		LogA("ALlocatedBunch REEEEEEEETAAAAAAAAAARRRRDDDDDDDD", AllocatedBunch.ToString());
		
		delete[] DeathRow.Data;
	}
	
	OFF::NotifyControlMessage.VerifyFC<Decl::NotifyControlMessage>()(This, Connection, MessageType, InBunch);
	
}

void UFunctions::PeekNetworkFailureMessages(SDK::UGameViewportClient* This, SDK::UWorld* InWorld, SDK::UNetDriver* NetDriver, SDK::ENetworkFailure FailureType, SDK::FString& ErrorString)
{
	OFF::PeekNetworkFailureMessages.VerifyFC<Decl::PeekNetworkFailureMessages>()(This, InWorld, NetDriver, FailureType, ErrorString);

	LogA(OFF::PeekNetworkFailureMessages.GetName(), std::format("[This]: {} | [InWorld]: {} | [NetDriver]: {} | [FailureType]: {} | [ErrorString]: {}", This->GetFullName(), InWorld->GetFullName(), NetDriver->GetFullName(), (byte)FailureType, ErrorString.ToString()));

	if (AJB::MOD_OptionsMenu && !AJB::IsServer())
	{
		AJB::CopyString(&AJB::Callbacks::CacheErrorPopupString, &ErrorString);
		AJB::CreateCallbackTimer(AJB::Callbacks::CallbackErrorPopup, 1.0f);
	}
}

void UFunctions::InitLocalConnection(SDK::UNetConnection* This, SDK::UNetDriver* InDriver, void* InSocket, SDK::FURL& InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead)
{
	if (!AJB::IsServer())
	{
		bool bAppend{true};

		for (SDK::FString& String : InURL.Op)
		{
			if (String.ToString().find("listen") != std::string::npos)
			{
				bAppend = false;
			}			
		}
		if (bAppend && AJB::MOD_GlobalPatcher)
		{
			AJB::MOD_GlobalPatcher->AppendToFStringArray(InURL.Op, AJB::DLLCommitVersion);

			static SDK::FName None{FName::NAME_FindOrAdd(L"None", FName::FNAME_Find)};
			if (AJB::NAME_ClientJoinOptions != None)
			{
				//Call<SDK::FString(__thiscall*)(SDK::FName*, SDK::FString&)>(PB(0x6837F0))(&AJB::NAME_ClientJoinOptions, Temp);
				SDK::FString Temp{};
				OFF::FNameTS.Call<void(__thiscall*)(SDK::FName*, SDK::FString&)>()(&AJB::NAME_ClientJoinOptions, Temp);
				
				AJB::MOD_GlobalPatcher->AppendToFStringArray(InURL.Op, Temp);
				AJB::NAME_ClientJoinOptions.Clear();
			}

			/*if (AJB::NAME_ClientJoinOptions.IsValid())
			{
				std::string BS{AJB::NAME_ClientJoinOptions.ToString()};
				SDK::FString Temp{std::wstring(BS.begin(), BS.end()).c_str()};
				AJB::MOD_GlobalPatcher->AppendToFStringArray(InURL.Op, Temp);		
				AJB::NAME_ClientJoinOptions.Clear();
			}*/

			// Needs to be here for server reconnection to a password protected server since the connection is lost completely and is only gained via reconnect.
			// Actually thinking about that, reconnect should be caching all options so I'll leave this commented for now.
			/*if (!AJB::CLIENT_JoinOptions.empty())
			{
				for (SDK::FString& OpEntry : AJB::CLIENT_JoinOptions)
				{
					AJB::MOD_GlobalPatcher->AppendToFStringArray(InURL.Op, OpEntry);
				}
			}*/
		}
	}

	LogA(OFF::InitLocalConnection.GetName(), std::format("[This]: {} | [InDriver]: {} | [InURL]: {} | [InState]: {} | [InMaxPacket]: {} | [InPacketOverhead]: {}", This->GetFullName(), InDriver->GetFullName(), Helpers::FURLParser(InURL), (*(A8CL::EConnectionState*)(&InState)).ToString(), InMaxPacket, InPacketOverhead));

	OFF::InitLocalConnection.VerifyFC<Decl::InitLocalConnection>()(This, InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead);
}

void UFunctions::PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage)
{
	LogA("PreLogin", std::format("[AGameModeBase]: {} | [Options]: {} | [Address]: {} | [ErrorMessage]: {}", This->GetFullName(), Options->ToString(), Address->ToString(), ErrorMessage->ToString()));

	if (AJB::IsServer()) 
	{
		AJB::Server::PreLogin(This, Options, Address, UniqueId, ErrorMessage);
	}
}

SDK::APlayerController* UFunctions::Login(SDK::AGameModeBase* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage)
{
	LogA(OFF::Login.GetName(), std::format("[AGameModeBase]: {} | [NewPlayer]: {} | [InRemoteRole]: {} | [Options]: {} | [ErrorMessage]: {}", This->GetFullName(), NewPlayer->GetFullName(), std::string((*reinterpret_cast<ENetRole*>(&InRemoteRole)).ToString()), Options.ToString(), ErrorMessage.ToString()));

	/*if (Options.ToString().rfind("?Name") != std::string::npos)
	{
		static SDK::FString NewUser(CMLA::Username.GetArgumentAsString());
		Call<Decl::CopyString>(OFF::CopyString.PlusBase())(&Options, &NewUser);
	}*/
	
	SDK::AGameModeBase* CurrentGameMode = Pointers::GameMode();

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

	

	if (AJB::IsServer())
	{
		AJB::Server::Login(This, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);		
	}
	
	// Has to be reloaded per session because the class kills itself since no objects are created with RootSet.
	//AJB::MOD_CallbackTimerClass = UFunctions::StaticLoadClass(AJB::CoreUObject, GEngine, L"/Game/Aeyth8/Blueprints/Global/WBP_CallbackTimerHandler.WBP_CallbackTimerHandler_C", nullptr, 0, nullptr);
	
	//AGM_AJBTitleScreen_C
	/*UFunctions::StaticLoadObject(SDK::UObject::FindClass("Class CoreUObject.Object"), nullptr, L"/Game/Aeyth8/UI/CustomUIManager.CustomUIManager_C", nullptr, 0, nullptr, true);
	UFunctions::StaticLoadObject(SDK::UGameInstance::StaticClass(), nullptr, L"/Game/Aeyth8/UI/CustomMenuManager.CustomMenuManager_C", nullptr, 0, nullptr, true);*/
	static bool ONE{0};
	if (!ONE)
	{
		constexpr const wchar_t* GlobalPatchObjectBlueprintPath{L"/Game/Aeyth8/Blueprints/Global/BP_GlobalPatcher.BP_GlobalPatcher_C"};
		constexpr const wchar_t* OptionsMenuBlueprintPath{L"/Game/Aeyth8/Blueprints/UI/OptionsMenuV2/WBP_OptionsMenu.WBP_OptionsMenu_C"};
		constexpr const wchar_t* SynchronizerPath{L"/Game/Aeyth8/Blueprints/Global/ServerReplicated/BP_Synchronizer.BP_Synchronizer_C"};

		AJB::MOD_GlobalPatcherClass = UFunctions::StaticLoadClass(AJB::CoreUObject, GEngine, GlobalPatchObjectBlueprintPath, nullptr, 0, nullptr);
		if (AJB::MOD_GlobalPatcherClass)
		{
			AJB::MOD_GlobalPatcher = (SDK::UBP_GlobalPatcher_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_GlobalPatcherClass, GEngine, FName::NAME_FindOrAdd(GlobalPatchObjectBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
			if (AJB::MOD_GlobalPatcher)
			{
				LogA("Global Patcher", std::format("[ProofOfExistenceSignature]: {} | [Object]: {}", AJB::MOD_GlobalPatcher->ProofOfExistenceSignature, AJB::MOD_GlobalPatcher->GetFullName()));
			}
		}

		AJB::MOD_SynchronizerClass = UFunctions::StaticLoadClass(SDK::AActor::StaticClass(), GEngine, SynchronizerPath, nullptr, 0, nullptr);
		if (AJB::MOD_SynchronizerClass)
		{
			//LogA("Synchronizer Class", AJB::MOD_SynchronizerClass->GetFullName());
			AJB::MOD_PROXY_Synchronizer = (SDK::ABP_Synchronizer_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_SynchronizerClass, GEngine, FName::NAME_FindOrAdd(SynchronizerPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
			if (AJB::MOD_PROXY_Synchronizer)
			{
				LogA("Synchronizer", AJB::MOD_PROXY_Synchronizer->GetFullName());
			}
		}

		if (!AJB::bIsDedicatedServer)
		{
			AJB::MOD_OptionsMenuClass = UFunctions::StaticLoadClass(SDK::UUserWidget::StaticClass(), GEngine, OptionsMenuBlueprintPath, nullptr, 0, nullptr);
			if (AJB::MOD_OptionsMenuClass)
			{
				AJB::MOD_OptionsMenu = (SDK::UWBP_OptionsMenu_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_OptionsMenuClass, static_cast<SDK::UGameViewportClient*>(GEngine->GameViewport), FName::NAME_FindOrAdd(OptionsMenuBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
				//	OptionsMenu = static_cast<SDK::UWBP_OptionsMenu_C*>(AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->Create(AJB::GWorld(), PrototypeMenu, Pointers::Player()));
				if (AJB::MOD_OptionsMenu)
				{
					LogA("OptionsMenu Success", AJB::MOD_OptionsMenu->GetFullName());

					AJB::MOD_OptionsMenu->AddToViewport(1170);
					AJB::MOD_OptionsMenu->SetVisibility(SDK::ESlateVisibility::Collapsed);

					if (AJB::StrDLLCommitVersion)
					{
						AJB::MOD_OptionsMenu->VersionInfo->SetDLLCommitVersion(*AJB::StrDLLCommitVersion);
					}

				}
			}
		}


		if (AJB::MOD_GlobalPatcher && AJB::MOD_PROXY_Synchronizer && (AJB::bIsDedicatedServer ? true : AJB::MOD_OptionsMenu != nullptr))
		{
			LogA("Login", "All mod object singletons have been successfully spawned.");
			ONE = 1;
		}
		else LogA("WARNING!", "MOD OBJECTS FAILED TO FULLY SPAWN!");

		if (AJB::AM_LemonPossession = SDK::UObject::FindObject<SDK::UMaterial>("Material AM_LemonPossession.AM_LemonPossession"))
		{
			AJB::AM_LemonPossession->AddToRootSet();
		}
		if (AJB::M_LemonPossession = SDK::UObject::FindObject<SDK::UMaterial>("Material M_LemonPossession.M_LemonPossession"))
		{
			AJB::M_LemonPossession->AddToRootSet();
		}

		// Sort of redundant since I add this to the lemon possession mode, however not loading this into root by launch and then attempting to lemon possess in a world where the video isn't loaded will result in all materials becoming blank white.
		// And while the callback rootset may be redundant the actual finding of the object isn't since the video isn't global, I could easily solve this issue by making it global but I'm unsure if it's a good idea, also loading this tiny video into memory doesn't affect performance or usage.
		SDK::FName LemonPossessionGrayscale = FName::NAME_FindOrAdd(L"LemonPossessionGrayscale");
		for (SDK::UMediaSource* Source : Pointers::FindObjects<SDK::UMediaSource>())
		{			
			if (Source->Name == LemonPossessionGrayscale)
			{
				Source->AddToRootSet();
				break;
			}
		}
	}

	if (CurrentGameMode)
	{
		if (CurrentGameMode->IsA(SDK::AGM_AJBUserInterface_C::StaticClass()))
		{
			if (AJB::StrDLLCommitVersion) static_cast<SDK::AGM_AJBUserInterface_C*>(CurrentGameMode)->SetGlobalGameModeScopeVersioningInfo(AJB::StrDLLCommitVersion);
		}
		/*else if (CurrentGameMode->IsA(SDK::ABP_AJBSimpleMatchGameMode_C::StaticClass()) && AJB::MOD_GlobalPatcher)
		{
			
		}
		}*/
	}

	return OFF::Login.VerifyFC<Decl::Login>()(This, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void UFunctions::PostLogin(SDK::AGameModeBase* This, SDK::APlayerController* Player)
{
	LogA(OFF::PostLogin.GetName(), std::format("[AGameModeBase]: {} | [Player]: {}", This->GetFullName(), Player->GetFullName()));

	if (AJB::IsServer())
	{
		AJB::Server::PostLogin(This, Player);
	}

	OFF::PostLogin.VerifyFC<Decl::PostLogin>()(This, Player);	
}

//void UFunctions::Logout(SDK::AGameModeBase* This, SDK::AController* ExitingController)
//{
//	LogA("Logout", std::format("[AGameModeBase]: {} | [Player]: {}", This->GetFullName(), ExitingController->GetFullName()));
//
//	OFF::Logout.VerifyFC<Decl::Logout>()(This, ExitingController);
//
//	// Clears the entry for the player who left
//	if (AJB::IsServer())
//	{
//		AJB::TEMP_OnPlayerLeave();
//		AJB::TEMP_FixMatchingPlayers();
//	}
//}

void UFunctions::HandleStartingNewPlayer(SDK::AGameModeBase* This, SDK::APlayerController* Player)
{
	LogA(OFF::HandleStartingNewPlayer.GetName(), std::format("[AGameModeBase]: {} | [Player]: {}", This->GetFullName(), Player->GetFullName()));

	if (AJB::bIsLemonPossessioned)
	{
		static const float WaitTimer = AJB::NUM_CPUCores >= 4 ? (16.0f / AJB::NUM_CPUCores) * 0.7f : 5.0f;
		AJB::CreateCallbackTimer(AJB::Callbacks::LemonPossession, WaitTimer);
	}

	OFF::HandleStartingNewPlayer.VerifyFC<Decl::HandleStartingNewPlayer>()(This, Player);
}

void UFunctions::BeginPlay(SDK::UWorld* This)
{	
	LogA(OFF::BeginPlay.GetName(), This->GetFullName());

	OFF::BeginPlay.VerifyFC<Decl::BeginPlay>()(This);	
}

//void UFunctions::HandleClientPlayer(SDK::UNetConnection* This, SDK::APlayerController* PC, SDK::UNetConnection* NetConnection)
//{
//	LogA(OFF::HandleClientPlayer.GetName(), std::format("[This]: | [PlayerController]: {} | [NetConnection]: {}", This->GetFullName(), PC->GetFullName(), NetConnection->GetFullName()));
//
//	if (AJB::IsServer()) AJB::Server::HandleClientPlayer(This, PC, NetConnection);
//
//	OFF::HandleClientPlayer.VerifyFC<Decl::HandleClientPlayer>()(This, PC, NetConnection);
//}

void UFunctions::AddClientConnection(SDK::UNetDriver* This, SDK::UNetConnection* Connection)
{
	LogA(OFF::AddClientConnection.GetName(), std::format("[This]: {} | [Connection]: {}", This->GetFullName(), Connection->GetFullName()));
	if (AJB::IsServer()) AJB::Server::AddClientConnection(This, Connection);

	OFF::AddClientConnection.VerifyFC<void(__thiscall*)(SDK::UNetDriver*, SDK::UNetConnection*)>()(This, Connection);
}

void UFunctions::CloseConnection(SDK::UNetConnection* This)
{
	if (AJB::IsServer()) AJB::Server::CloseConnection(This);

	LogA(OFF::Close.GetName(), This->GetFullName());
	OFF::Close.VerifyFC<void(__fastcall*)(SDK::UNetConnection*)>()(This);
}

void UFunctions::AppPreExit()
{
	Global::ConstructThread(Helpers::ProcessEnd);
	OFF::AppPreExit.VerifyFC<Decl::AppPreExit>()();
}

__int64* UFunctions::SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters& SpawnParameters)
{
	constexpr const char* SDT_SpawnCollision[6] = { "Undefined", "AlwaysSpawn", "AdjustIfPossibleButAlwaysSpawn", "AdjustIfPossibleButDontSpawnIfColliding", "DontSpawnIfColliding", "ESpawnActorCollisionHandlingMethod_MAX" };
	const SDK::UKismetStringLibrary* Kismet = Pointers::GetBlueprintClass<SDK::UKismetStringLibrary>();

	std::string SpawnParms = std::format("[Name]: {} | [Template]: {} | [Owner]: {} | [Instigator]: {} | [OverrideLevel]: {} | [SpawnCollisionHandlingOverride]: {}",
		SpawnParameters.Name.ToString(),
		SpawnParameters.Template ? SpawnParameters.Template->GetFullName() : "NULL",
		SpawnParameters.Owner ? SpawnParameters.Owner->GetFullName() : "NULL",
		SpawnParameters.Instigator ? SpawnParameters.Instigator->GetFullName() : "NULL",
		SpawnParameters.OverrideLevel ? SpawnParameters.OverrideLevel->GetFullName() : "NULL",
		SDT_SpawnCollision[SpawnParameters.SpawnCollisionHandlingOverride]);

	LogA("SpawnActor", std::format("[World]: {} | [Class]: {} | [Location]: {} | [Rotation]: {} | [SpawnParameters]: {} ",
		This ? This->GetFullName() : "NULL", 
		Class ? Class->GetFullName() : "NULL",
		Kismet && Location ? Kismet->Conv_VectorToString(*Location).ToString() : "NULL",
		Kismet && Rotation ? Kismet->Conv_RotatorToString(*Rotation).ToString() : "NULL",
		SpawnParms));

	return OFF::SpawnActor.VerifyFC<Decl::SpawnActor>()(This, Class, Location, Rotation, SpawnParameters);
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
		static constexpr const wchar_t* StrFunctionNameBlacklist[] =
		{
			L"Activate",
			L"AddComponentByClass",
			L"AddToViewport",
			L"Array_Clear",
			L"Array_Get",
			L"Array_Length",
			L"Array_Add",
			L"Array_IsValidIndex",
			L"Map_Add",
			L"Map_Keys",
			L"AddChildToCanvas",

			L"BeginDeferredActorSpawnFromClass",
			
			L"ExecuteUbergraph_WBP_ServerBrowser", 			
			L"ExecuteUbergraph_AJBFrontEnd",
			L"ExecuteUbergraph_WBP_CallbackTimerHandler",
			L"ExecuteUbergraph_WBP_ServerBrowser",
			L"ExecuteUbergraph_WBP_OptionsMenu",

			L"EqualEqual_GameplayTag",

			L"Create",
			L"Concat_StrStr",
			L"Conv_IntToText",
			L"Conv_FloatToString",
			L"Conv_StringToText",
			L"Conv_StringToInt",
			L"Conv_TextToString",
			L"Conv_IntToString",
			L"Conv_StringToName",
			L"Conv_SoftObjectReferenceToString",
			L"ClearChildren",
			L"NotEqual_StrStr",
			L"Construct",
			L"Delay",
			
			L"FindSessions",
			L"Format",
			L"FinishSpawningActor",
			L"FlushNetDormancy",

			L"IsEditor",
			L"IsShipping",
			L"IsDedicatedServer",
			L"IsFreePlay",
			L"IsVisible",
			L"IsValid",
			L"IsValidClass",
			L"IsInViewport",			
			L"IsPlayingReplay",
			L"IsValidSoftClassReference",
			L"IsValidSoftObjectReference",
			L"InitializeLoadingScreen",

			L"GetCreaditNum",
			L"GetCacheInteger",
			L"GetComponentByClass",
			L"GetDataTableRowFromName",
			L"GetDataTableRowNames",
			L"GetDisplayName",
			L"GetDebugStringFromGameplayContainer",
			L"GetDynamicMaterial",
			L"GetGameInstance",
			L"GetGameMode",
			L"GetHUD",
			L"GetOwner",
			L"GetPlayerController",
			L"GetRenderOpacity",			
			L"GetWorldDeltaSeconds",
			L"GetViewportSize",
			L"GetTagName",
			L"GetTextBlock",
			L"GetShopEventSettings",
			L"GetButton",
			L"GetOutputLevelIndexHeadphone",
			L"GetMaxOutputLevelIndex",
			L"GetMaxSoundVolumeValue",
			L"GetDefaultSoundVolumeValue",
			L"GetVolumeGame",
			L"GetEffectMaterial",
			L"GetAvailableAllStages",
			L"Handled",
			L"HasTag",						
			L"ReceiveTick",
			L"ReceiveBeginPlay",
			
			L"LoadAsset",
			L"MakeLiteralByte",
			
			L"ClientUpdateLevelStreamingStatus",
			L"CurveAnimationFinishDelegate",
			L"RegisterCurve_Scale",
			
			L"FindAJBWidgetOfClass",
			L"EndManualLoadingScreen",

			L"SetBrushFromTexture",
			L"SetBrushFromMaterial",
			L"SetBrushTintColor",
			L"SetCipherMode",
			L"SetColorAndOpacity",
			L"SetInputMode_GameAndUIEx",
			L"SetRenderOpacity",
			L"SetVisibility",
			L"SetWidthOverride",
			L"SetStructurePropertyByName",
			L"SetIntPropertyByName",
			L"SlotAsCanvasSlot",
			L"SetZOrder",
			L"SetAutoSize",
			L"SetText",
			L"SetUseTickReceive",
			L"SetRenderTransform",
			L"SetRenderTransformPivot",
			L"SetFloatPropertyByName",
			L"SetValue",
			L"SetRTPCValue",
			L"SetScalarParameterValue",
			L"SetRenderScale",
			L"SetFont",
			
			L"ServerUpdateLevelVisibility",

			L"Tick",

			L"PreConstruct",
			L"PrintString",
			L"UserConstructionScript",
						
			L"WasInputKeyJustPressed",
			L"OnSuccess_FE90A7E041FD831919A89B9B2A54A74B",
			L"OnAnimationStarted",
			L"OnMouseMove",
			L"OnStartFadeOut",
			L"ResetAnimation",
		};

		static constexpr const wchar_t* StrObjectNameBlacklist[] =
		{
			L"Default__KismetSystemLibrary",
			L"Default__FlowStateUtil",
			L"Default__AJBUtilityFunctionLibrary",
			L"Default__AJBAMSystemSettings ",
			L"Default__WidgetLayoutLibrary",
			L"Default__WidgetBlueprintLibrary",
			L"Default__GameplayStatics",
			L"Default__KismetArrayLibrary",
			L"Default__AJBAMSystemObject",
			
			L"AJBHighlightManager_0",
			L"BP_AJBGameInstance_C_0",
			L"BP_AJBSimpleMatchPlayerController_C_0",
			L"Button_PPBuy",

			L"WB_AJBInGameGionScreen_C_0",
			L"WB_CharacterSelect_C_0",
			L"WB_ModeSelect_Button_RewardPercent",
			L"WB_ModeSelect_Button_Reward",
			L"WB_ModeSelect_Button_PAIR",
		};

		/*
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		L"",
		*/

		constexpr int32 FNBLSize = sizeof(StrFunctionNameBlacklist) / sizeof(StrFunctionNameBlacklist[0]);
		constexpr int32 ONBLSize = sizeof(StrObjectNameBlacklist) / sizeof(StrObjectNameBlacklist[0]);

		static SDK::FName FunctionNameBlacklist[FNBLSize]{0};
		static SDK::FName ObjectNameBlacklist[ONBLSize]{0};

		static bool bOne{0};
		static bool bFailed{false};

		if (!bOne)
		{
			bOne = true;
			bool bFailed{false};

			int32 i{0};
			while (i < FNBLSize)
			{
				FunctionNameBlacklist[i] = FName::NAME_FindOrAdd(StrFunctionNameBlacklist[i], FName::FNAME_Find);
				if (FunctionNameBlacklist[i].ComparisonIndex == 0 || FunctionNameBlacklist[i].Number == 0)
				{
					bFailed = true;
				}
				++i;
			}
			i = 0;
			while (i < ONBLSize)
			{
				ObjectNameBlacklist[i] = FName::NAME_FindOrAdd(StrObjectNameBlacklist[i], FName::FNAME_Find);
				if (ObjectNameBlacklist[i].ComparisonIndex == 0 || ObjectNameBlacklist[i].Number == 0)
				{
					bFailed = true;
				}
				++i;
			}
		}
		else if (bFailed)
		{
			bFailed = false;
			bOne = false;
		}
		
		bool bLogInvoke{true};

		for (const SDK::FName& FunctionNameIndex : FunctionNameBlacklist)
		{
			if (This->Name == FunctionNameIndex)
			{
				bLogInvoke = false;
				break;
			}
		}
		for (const SDK::FName& ObjectNameIndex : ObjectNameBlacklist)
		{
			if (Obj->Name == ObjectNameIndex)
			{
				bLogInvoke = false;
				break;
			}
		}

		if (bLogInvoke)
		{
			LogA(OFF::Invoke.GetName(), std::format("[UFunction]: {} | [ComparisonIndex]: {} | [UObject]: {} | [ComparisonIndex]: {}", This->GetName(), This->Name.ComparisonIndex, Obj->GetName(), Obj->Name.ComparisonIndex));
		}
	}


	// A structure I made allowing me to pass the object obtained here to external functions.
	struct TExternFunction 
	{ 
		void(*Function)(SDK::UObject*);
		const wchar_t*	FunctionStrName;
		SDK::FName		FunctionName;
	};
	static TExternFunction ExternFunctionList[] = 
	{
		{AJB::OnToggleFullMapVisibility, L"OnToggleFullMapVisibility", {}}, // Function BP_AJBInGameHUD.BP_AJBInGameHUD_C.OnToggleFullMapVisibility
		//{AJB::OnVictoryShot, L"TakeShot", {}},							// Function BP_AJBInGameVictoryShotCamera.BP_AJBInGameVictoryShotCamera_C.TakeShot
 		//{AJB::OnVictoryShot, L"PlayFlash", {}},								// Function WB_VictoryShotCameraflash.WB_VictoryShotCameraFlash_C.PlayFlash

		// Currently neither of these work for some stupid reason
		// More will be added later.
	};

	for (TExternFunction& Entry : ExternFunctionList)
	{
		if (Entry.FunctionName.ComparisonIndex == 0 || Entry.FunctionName.Number == 0)
		{
			FName::NAME_FindOrAdd(&Entry.FunctionName, Entry.FunctionStrName, FName::FNAME_Find);
		}
		if (This->Name == Entry.FunctionName)
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

	
	// HAHAHA THIS WORKED FIRST TRY NO WAY

	if (AJB::IsServer())
	{
		if (!AJB::Server::Invoke(This, Obj, FFrame_Stack, Result)) return;
	}
	OFF::Invoke.VerifyFC<Decl::Invoke>()(This, Obj, FFrame_Stack, Result);
}

bool UFunctions::IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename)
{
	if (!InFilename) return false;

	if (Helpers::CheckForLocalDirectory(InFilename.Data) && GetFileAttributesW(InFilename.Data) != INVALID_FILE_ATTRIBUTES)
	{
		//LogA("IsNonPakFilenameAllowed OVERRIDE", InFilename.ToString());
		return true;
	}

	return OFF::IsNonPakFileNameAllowed.VerifyFC<Decl::IsNonPakFilenameAllowed>()(This, InFilename);
}

bool UFunctions::FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry)
{
	if (Helpers::CheckForLocalDirectory(Filename) && GetFileAttributesW(Filename) != INVALID_FILE_ATTRIBUTES)
	{
		/*std::wstring WFile(Filename);
		LogA("FindFileInPakFiles OVERRIDE", std::string(WFile.begin(), WFile.end()));*/
		return false;
	}
	return OFF::FindFileInPakFiles.VerifyFC<Decl::FindFileInPakFiles>()(This, Filename, OutPakFile, OutEntry);
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

	LogA("StaticLoadObject", std::format("[ObjectClass]: {} {} | [InOuter]: {} | [Name]: {} | [Filename]: {} | [LoadFlags]: {} | [Sandbox]: {}", ObjectClass->GetFullName(), HexToString((uintptr_t)ObjectClass), InOuter->GetFullName(), AName.ToString(), AFilename.ToString(), LoadFlags, Sandbox->GetFullName()));
	return OFF::StaticLoadObject.VerifyFC<Decl::StaticLoadObject>()(ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation);
}

SDK::UObject* __fastcall A8CL::UFunctions::StaticConstructObject_Internal(SDK::UClass* InClass, SDK::UObject* InOuter, SDK::FName InName, unsigned int InFlags, EInternalObjectFlags InternalSetFlags, SDK::UObject* InTemplate, bool bCopyTransientsFromClassDefaults, void** InInstanceGraph, bool bAssumeTemplateIsArchetype)
{	
	return OFF::StaticConstructObject.VerifyFC<Decl::StaticConstructObject_Internal>()(InClass, InOuter, InName, InFlags, InternalSetFlags, InTemplate, bCopyTransientsFromClassDefaults, InInstanceGraph, bAssumeTemplateIsArchetype);
}

void UFunctions::Tick(SDK::UGameEngine* This, float DeltaSeconds, bool bIdleMode)
{
	return OFF::Tick.VerifyFC<Decl::Tick>()(This, DeltaSeconds, bIdleMode);
}