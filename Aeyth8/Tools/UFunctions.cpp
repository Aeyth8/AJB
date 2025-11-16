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

#include "../../Dumper-7/CustomSDK/BP_GlobalPatcher_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_OptionsMenu_classes.hpp"		// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/WBP_AJBTitleScreen_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)
#include "../../Dumper-7/CustomSDK/GM_AJBTitleScreen_classes.hpp"	// Custom SDK header (NOT GAME NATIVE)


#include "BytePatcher.h"
#include "../../Dumper-7/SDK/WB_ModeSelect_Button_SOLO_classes.hpp"
#include "../../Dumper-7/SDK/WB_ModeSelect_Txt_Training_classes.hpp"

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
	else if (StrCommand == "host")
	{
		if (!AJB::OutGameProxy && !(AJB::OutGameProxy = Pointers::GetLastOf<SDK::ABP_AJBOutGameProxy_C>(false))) AJB::OutGameProxy = Pointers::SpawnActor<SDK::ABP_AJBOutGameProxy_C>();
		//AJB::OutGameProxy->DebugSetupLoginPlayerInfo(true);
		//AJB::OutGameProxy->StartTenpoHostServer();
		Pointers::GetLastOf<SDK::UAJBInGameServerInfo>()->InitializeConnection(AJB::GWorld());
	}
	else if (StrCommand == "text")
	{
		int Iterator{0};
		bool bCopyString = true;
		constexpr const int CrashBlacklist[] = // For no reason even with all of the validity checks THE STUPID GAME STILL CRASHES AT THESE INDEXES, I wasted more time than I EVER should need to for this stupidity.
		{
			1242, 2895, 2932, 2981, 2892, 2893, 2982, 2950, 3243, 3412, 3413, 3691, 3692
		};

		for (SDK::UAJBTextBlock*& Block : Pointers::FindObjects<SDK::UAJBTextBlock>())
		{
			Iterator++;

			for (const int& Num : CrashBlacklist) if (Num == Iterator) { bCopyString = false; break; }

			if (Block && Block->Text.TextData && Block->Text.TextData->TextSource && Block->Text.TextData->TextSource.IsValid() && Block->Text.GetStringRef() != nullptr)
			{
				SDK::FString AllocatedString{L"None"};

				std::string Name = "NULL";
				Name = Block->GetFullName();
				//if (bCopyString) OFF::CopyString.VerifyFC<Decl::CopyString>()(&AllocatedString, &Block->Text.TextData->TextSource); 
				void* String = &Block->Text.TextData->TextSource;
				if (String != nullptr)
				{
					BytePatcher::SetProtectionStatus(*(uintptr_t*)String, 0x1000, BytePatcher::EProtectionStatus::EXECUTE_READWRITE);
					LogA(Name + " | " + std::to_string(Iterator), HexToString(OffsetToByte(*reinterpret_cast<uintptr_t*>(&Block->Text.TextData->TextSource))));
				}
				
			}

			bCopyString = true;
		}
		
		

	}
	else if (StrCommand == "key")
	{
		LogA("Key??!!?", SDK::UClass::FindClass("WidgetBlueprintGeneratedClass WBP_OptionsMenu.WBP_OptionsMenu_C")->GetFullName());
		SDK::FString Chumlee(L"SHUTUP, SHUTUP CHUMLEE, YOU STUPID F*CK. GOD. RICK I WAS JUST TRYING TO- KNOW YOUR PLACE, STUPID F*CKING IDIOT, IDIOT-");
		if (AJB::MOD_OptionsMenu) AJB::MOD_OptionsMenu->SetDLLCommitVersion(Chumlee);

		SDK::ABP_AJBOutGameHUD_C* HUD{nullptr};

		AJB::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, AJB::GWorld(), 0, &HUD);
		if (HUD)
		{
			HUD->OnShowDebugMenu();
		}
	}
	else if (StrCommand == "menu")
	{		
		if (AJB::MOD_OptionsMenu)
		{
			LogA(AJB::MOD_OptionsMenu->GetFullName(), std::format("[bPauseMenuIsVisible]: {} | [Visibility]: {}", AJB::MOD_OptionsMenu->bPauseMenuIsVisible, AJB::MOD_OptionsMenu->Visibility == SDK::ESlateVisibility::Visible ? "Visible" : "Collapsed"));

			SDK::APlayerController* Player = Pointers::Player();
			if (Player)
			{
				if (!Player->bShowMouseCursor && AJB::MOD_OptionsMenu->bPauseMenuIsVisible) Player->bShowMouseCursor = true;

				if (Player->IsA(SDK::ABP_AJBInGamePlayerController_C::StaticClass()))
				{
					SDK::AAJBInGameHUD* HUD = static_cast<SDK::AAJBInGameHUD*>(Player->GetHUD());
					HUD->SetupForceInvisibleAllWidgetsFlag(AJB::MOD_OptionsMenu->bPauseMenuIsVisible);
				}

				//Opposite ? AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_UIOnly(Player, OptionsMenu, true) : /* if (!Opposite)*/ AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_GameOnly(Player);

				AJB::MOD_OptionsMenu->bPauseMenuIsVisible ? AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_GameAndUI(Player, AJB::MOD_OptionsMenu, true, false) : /* if (!Opposite)*/ AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_GameOnly(Player);
				//ToggleSwitchMenu ? AJB::MOD_OptionsMenu->SetVisibility(SDK::ESlateVisibility::Visible) : AJB::MOD_OptionsMenu->SetVisibility(SDK::ESlateVisibility::Collapsed);
				//if (OptionsMenu) OptionsMenu->SetOnlineStatus(Opposite);
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
			AJB::Instance->OperationParam->ResetOperationParam();
			/*AJB::Instance->ResetBattleSettings();
			AJB::Instance->AreaTypeID = 3;
			if (SDK::ABP_AJBBattleGameMode_C* Game = AJB::GetGameMode<SDK::ABP_AJBBattleGameMode_C>(); Game != nullptr)
			{
				Game->DebugReset();
			}*/
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

	else if (StrCommand == "POS")
	{
		if (AJB::MOD_OptionsMenu) LogA("Key", AJB::MOD_OptionsMenu->GetInputKey().KeyName.ToString());
		//Call<Decl::ActorDestroy>(OFF::ActorDestroy.PlusBase())(Pointers::GetLastOf<SDK::ABP_AJBOutGameProxy_C>(0), true, true);
		//LogA("POS", std::to_string(Pointers::GetLastOf<SDK::ABP_AJBOutGameProxy_C>()->CharacterSelectTimeoutSecond = 1));
	}
	else if (StrCommand == "toggledebugmenu")
	{
		static bool ONE{0};
		if (!ONE)
		{
			ONE = 1;

			constexpr static const wchar_t* WidgetsToLoad[] =
			{
				L"/Game/AJB/Debug/UI/WB_AJB_DebugMenuPage.WB_AJB_DebugMenuPage_C",
				L"/Game/AJB/Debug/UI/WB_DebugMenu.WB_DebugMenu_C",
				L"/Game/AJB/Debug/UI/WB_DebugMenu_OutGame.WB_DebugMenu_OutGame_C",
				L"/Game/AJB/Debug/UI/WB_DebugMenuPage_NetPlayerInfo.WB_DebugMenuPage_NetPlayerInfo_C"
			};

			static SDK::UClass* Classes[4]{nullptr};
			static SDK::UUserWidget* Menus[4]{nullptr};
			
			
			BYTE i{0};
			for (const wchar_t* const& Widgy : WidgetsToLoad)
			{
				i++;

				Classes[i] = UFunctions::StaticLoadClass(SDK::UUserWidget::StaticClass(), AJB::GEngine(), Widgy, nullptr, 0, nullptr);
				if (Classes[i])
				{
					Menus[i] = (SDK::UUserWidget*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(Classes[i], static_cast<SDK::UGameViewportClient*>(AJB::GEngine()->GameViewport), Pointers::FString2FName(Widgy), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);

					if (Menus[i])
					{
						Menus[i]->AddToViewport(112);
						Menus[i]->SetVisibility(SDK::ESlateVisibility::Visible);
					}
				}
			}
			
			SDK::ABP_AJBOutGameHUD_C* HUD{nullptr};

			AJB::GetBlueprintClass<SDK::UBPF_AJBOutGameHUD_C>()->GetAJBOutGameHUD_BP(0, AJB::GWorld(), 0, &HUD);
			if (HUD)
			{
				//HUD->DebugMenuOutGameClassPtr.WeakPtr.ObjectIndex = Classes[2]->Index;
				HUD->OnShowDebugMenu();

				AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->SetInputMode_GameAndUI(Pointers::Player(), Menus[2], true, false);
			}


		}
	}
	else if (StrCommand == "textmenu")
	{
		if (AJB::MOD_GlobalPatcher)
		{
			/*SDK::UWBP_AJBTitleScreen_C* TitleScreenWidget = Pointers::FindObjects<SDK::UWBP_AJBTitleScreen_C>()[0];
			if (TitleScreenWidget)
			{
				AJB::MOD_GlobalPatcher->SetWidgetText(TitleScreenWidget->TEXT_PressToStart, L"PULSE PARA INICIAR");
				AJB::MOD_GlobalPatcher->SetWidgetText(TitleScreenWidget->TEXT_ScamWarning, L"Este proyecto es gratuito y de código abierto.\nSi has pagado dinero por él,\n¡has sido víctima de una estafa!");
				AJB::MOD_GlobalPatcher->SetWidgetText(TitleScreenWidget->TEXT_DevelopedBy, L"Completamente desarrollado y modificado por");
			}*/
			SDK::UWB_ModeSelect_Txt_Training_C* Texter = Pointers::GetLastOf<SDK::UWB_ModeSelect_Txt_Training_C>();
			{
				SDK::UWidget* Child = Texter->RetainerBox_8->GetContent();
				if (Child && Child->IsA(SDK::UHorizontalBox::StaticClass()))
				{
					SDK::UHorizontalBox* Box = static_cast<SDK::UHorizontalBox*>(Child);
					const int Count = Box->GetChildrenCount();

					for (int i{0}; i < Count; ++i)
					{
						SDK::UWidget* Widget = Box->GetChildAt(i);

						LogA(Texter->GetFullName(), std::format("[ChildrenCount]: {} | [Index]: {} | {}", Count, i, Widget->GetFullName()));

						if (Widget->IsA(SDK::UTextBlock::StaticClass()))
						{
							if (i == 1)
							{
								LogA("Char", static_cast<SDK::UTextBlock*>(Widget)->Text.ToString());

								static SDK::FString NewChar{L"TRAINING"};
								
								if (AJB::MOD_GlobalPatcher) AJB::MOD_GlobalPatcher->SetWidgetText(static_cast<SDK::UTextBlock*>(Widget), NewChar);
							}
							else
							{
								static SDK::FString Blank{L" "};
								if (AJB::MOD_GlobalPatcher) AJB::MOD_GlobalPatcher->SetWidgetText(static_cast<SDK::UTextBlock*>(Widget), Blank);
							}
							
						}
					}
				}
				//LogA(PVE->GetFullName(), PVE->DisplayButtonText.ToString());
				//AJB::MOD_GlobalPatcher->SetWidgetText(PVE->AJBTextBlock_NeedPP, L"HELPPPP HELP ME HELPPPPPPPPPPPPPPPP");
			}
			
		}
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

/*
0x176A260 UEngine::GetMaxTickRate
0x176A220 UEngine::GetMaxFPS ? (idk for sure I got this offset from an AOB I made back when I sucked at decompilation and I dont feel like looking right now)
*/

SDK::APlayerController* UFunctions::Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage)
{
	LogA("Login", "Called.");

	const SDK::AGameModeBase* CurrentGameMode = AJB::GetGameMode();

	if (AJB::PlayerPoints) *AJB::PlayerPoints = 1170;
	if (AJB::Instance && AJB::Instance->ArcadeTimeManager) AJB::Instance->ArcadeTimeManager = nullptr;
	if (AJB::MOD_OptionsMenu)
	{
		//LogA(AJB::MOD_OptionsMenu->IsInViewport() ? "In Viewport" : "Not In Viewport", AJB::GEngine()->GameViewport->GetFullName());
		if (!AJB::MOD_OptionsMenu->IsInViewport()) AJB::MOD_OptionsMenu->AddToViewport(111);
	}
	if (CurrentGameMode && CurrentGameMode->IsA(SDK::AGM_AJBTitleScreen_C::StaticClass()))
	{
		SDK::UWBP_AJBTitleScreen_C* TitleScreenWidget = Pointers::GetLastOf<SDK::UWBP_AJBTitleScreen_C>(false);
		if (TitleScreenWidget && AJB::StrDLLCommitVersion)
		{
			TitleScreenWidget->SetDLLCommitVersion(*AJB::StrDLLCommitVersion);
		}
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

		AJB::MOD_GlobalPatcherClass = UFunctions::StaticLoadClass(AJB::CoreUObject, AJB::GEngine(), GlobalPatchObjectBlueprintPath, nullptr, 0, nullptr);
		if (AJB::MOD_GlobalPatcherClass)
		{
			AJB::MOD_GlobalPatcher = (SDK::UBP_GlobalPatcher_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_GlobalPatcherClass, AJB::GEngine(), Pointers::FString2FName(GlobalPatchObjectBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
			//AJB::MOD_GlobalPatcher = UFunctions::StaticLoadObject(BlueprintGeneratedClass, AJB::GEngine(), GlobalPatchObjectBlueprintPath, nullptr, 0, nullptr, true);
			if (AJB::MOD_GlobalPatcher) LogA("Global Patcher", std::format("[ProofOfExistenceSignature]: {} | [Object]: {}", AJB::MOD_GlobalPatcher->ProofOfExistenceSignature, AJB::MOD_GlobalPatcher->GetFullName()));
			//AJB::MOD_GlobalPatcher = Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(BlueprintGeneratedClass, AJB::GEngine(), Pointers::FString2FName(GlobalPatchObjectBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
		}		


		AJB::MOD_OptionsMenuClass = UFunctions::StaticLoadClass(SDK::UUserWidget::StaticClass(), AJB::GEngine(), OptionsMenuBlueprintPath, nullptr, 0, nullptr);
		if (AJB::MOD_OptionsMenuClass)
		{
			AJB::MOD_OptionsMenu = (SDK::UWBP_OptionsMenu_C*)Call<Decl::StaticConstructObject_Internal>(OFF::StaticConstructObject.PlusBase())(AJB::MOD_OptionsMenuClass, static_cast<SDK::UGameViewportClient*>(AJB::GEngine()->GameViewport), Pointers::FString2FName(OptionsMenuBlueprintPath), 0, EInternalObjectFlags::RootSet, 0, 0, 0, 0);
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
		else
		{
			ONE = 0;
		}
	}
	
	/*
	AJB::TAutoConsoleVariable<float>& CVarMaxFPS = reinterpret_cast<AJB::TAutoConsoleVariable<float>&>(PB(0x32557F0));
	float MaxFPS{ 1170.0f };
	MaxFPS = CVarMaxFPS.Ref->GetReferenceFromThread(1);

	LogA("MaxFPS", std::to_string(MaxFPS));
	*/
	
	/*static SDK::ULevelStreamingKismet* Stream = SDK::ULevelStreamingKismet::GetDefaultObj();
	SDK::ULevelStreamingKismet* KeyListener = Stream->LoadLevelInstance(AJB::GWorld(), L"/Game/Aeyth8/UI/InGame/LVL_SpawnOptions", SDK::FVector{}, SDK::FRotator{}, 0);
	KeyListener->bIsStatic = true;*/

	
	/*SDK::TSubclassOf<SDK::UUserWidget> KeyListener = 
	AJB::GetBlueprintClass<SDK::UWidgetBlueprintLibrary>()->Create(AJB::GWorld(), )*/
	
	

	
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

	int32 DynamicClassFunctionIndexArray[CFBL_Size]{-1};

	// GIANT NOTE I lost motivation and kinda forgot what I even was doing here but it doesn't work and crashes for (in my opinion) NO REASON.
	// Maybe I'll fix this one day, if not, just delete this block and the hook will work fine.

	/*static bool bInitClassFunctions{false};
	if (!bInitClassFunctions)
	{
		bInitClassFunctions = true;

		uint16 Iteration{0};
		for (const wchar_t* const* const & Entry : ClassFunctionBlacklist)
		{
			Iteration++;

			SDK::UClass* Class{nullptr};
			SDK::UFunction* Function{nullptr};

			SDK::FName ClassFName = Pointers::FString2FName(Entry[0]);
			SDK::FName FunctionFName = Pointers::FString2FName(Entry[1]);

			for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
			{
				SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

				if (Obj && Obj->HasTypeFlag(SDK::EClassCastFlags::Class) && Obj->Name == ClassFName)
				{
					Class = static_cast<SDK::UClass*>(Obj);
				}
			}

			//LogA("FoundClass", SDK::UObject::FindClass("WidgetBlueprintGeneratedClass WB_Credit.WB_Credit_C")->GetName());

			if (Class)
			{				
				bool bFinish{false};
				for (const SDK::UStruct* Inheritance = Class; Inheritance; Inheritance->Super)
				{
					if (bFinish) break;

					if (Inheritance->Name != ClassFName) continue;

					for (SDK::UField* Field = Inheritance->Children; Field; Field->Next)
					{
						if (Field->HasTypeFlag(SDK::EClassCastFlags::Function) && Field->Name == FunctionFName)
						{
							bFinish = true;

							Function = static_cast<SDK::UFunction*>(Field);

							break;
						}
					}

				}

				if (Function)
				{
					DynamicClassFunctionIndexArray[Iteration] = Function->Name.ComparisonIndex;
					LogA("GiantFunction", std::to_string(DynamicClassFunctionIndexArray[Iteration]));
				}
				else { bInitClassFunctions = false; }
			}
			else { bInitClassFunctions = false; }
		}
	}*/

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