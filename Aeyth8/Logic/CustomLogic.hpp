#pragma once
#include "../../pch.h"

extern SDK::UBP_AJBGameInstance_C* Instance;

// Aeyth8 Custom Logic (A8CL)
class A8CL
{
private:

	inline static std::wstring FullLevelName{L""};

	inline static void ExecStartBR() {

	}

	inline static void StreamLevels() {
		Sleep(500);
		SDK::ULevelStreaming* Levels;
		for (int i{0}; i < Stage01.size(); ++i) {
			Levels = UKismetStream()->LoadLevelInstance(UWorld(), (L"AJBStage01_" + Stage01[i]).c_str(), SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
			Levels->SetShouldBeLoaded(true);
			Levels->SetLevelLODIndex(4);
			Levels->bShouldBeVisible = true;
			Levels->bDisableDistanceStreaming = true;
		}

		/*Sleep(1000);
		for (int i{0}; i < Stages3.size(); ++i) {
			FullLevelName = L"AJBStage03_" + Stages3[i];
			LoadLevelInstance(FullLevelName.c_str());
		}
		Sleep(3 * 1000);
		UKismetStream()->LoadLevelInstance(UWorld(), L"AJBStage01_StartPoint", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
		UKismetStream()->LoadLevelInstance(UWorld(), L"AJBStage01_Env", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
		for (int i{ 0 }; i < 6; ++i) {
			FullLevelName = L"AJBStage01_" + Stages[i];
			LoadLevelInstance(FullLevelName.c_str());
		}
		for (int i{ 0 }; i < 8; ++i) {
			FullLevelName = L"AJBStage01_ENV0" + std::to_wstring(i + 2);
			LoadLevelInstance(FullLevelName.c_str());
		}
		UKismetStream()->LoadLevelInstance(UWorld(), L"AJBStage01_ENV10", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
		Log("Loaded Stage1.");*/
	}

	inline static std::vector<std::wstring> Stage01 = { L"StartPoint", L"Env", L"Cars", L"Station", L"Light", L"RoadDecals", L"Audio", L"Effect", L"ENV02", L"ENV03", L"ENV04", L"ENV05", L"ENV06", L"ENV07", L"ENV08", L"ENV09" };

	inline static std::vector<std::wstring> Stages3 = { L"ENV01", L"ENV02", L"Landscape", L"Light", L"P", L"StartPoint", L"Audio"};
	inline static std::vector<std::wstring> Stages = { L"Audio", L"Cars", L"Effect", L"Light", L"RoadDecals", L"Station"};

public:

	// Custom Commands (CC)
	class CC
	{
	private:
		const inline static std::string Whitespace{" "};
		inline static std::string CommandArray{""};
		inline static std::string Converted{""}; // String that gets reused to store and compare entered commands.
		inline static int CharacterCount{0}; // Debug counter to allow my brain to visualize it.

		struct Command { const char* Command; void* FunctionToCall; };
		const inline static Command CList[] =
		{
			{"execstartbr", &ExecStartBR}
		};

		struct ExecStartBR_Params { const int GameMode; const int StageNumOverride; const bool StartListen; const int BotAmountOverride; };


	public:
		
		inline static bool IsCustomCommand(const SDK::FString& Input) {
			if (!Converted.empty()) Converted.clear(); // Empty the string for reuse.
			CharacterCount = 0; // Same thing.

			// Parses through each character (letter/column) and reconstructs it into a lowercase string.
			/*for (wchar_t Column : Input) { Column = std::tolower(Column); Converted.push_back(Column); CharacterCount++; }

			bool TrimStart{0}; int TrimEnd{0};

			// If there are any whitespaces before or after the command it will be flagged for removal.
			int CStart = Converted.find_first_not_of(Whitespace); //int CEnd = Converted.find_last_not_of(Whitespace);
			if (CStart != std::string::npos) TrimStart = true; //if (CEnd != std::string::npos) TrimEnd = true;
			
			// Remove any whitespaces from the beginning (if applicable)
			Converted = Converted.substr((TrimStart ? CStart : 0), Converted.size() - (TrimStart ? CStart : 0));
			//Log(std::to_string(Converted.size()));
			for (size_t i{Converted.size() - 3}; i > 0; --i) {
				//Log(std::to_string(i));
				//COUT << "{" << Converted[i] << "}\n";
				if (Converted[i] != ' ') break;
				++TrimEnd;
			}

			Converted = Converted.substr(0, Converted.size() - TrimEnd);
			
			Log("<CustomLogic.hpp> / A8CL::CC::IsCustomCommand():: Trimmed result = " + Converted);

			
				Create vector with all words separated.
			*/

			std::vector<std::string> Parameters{};
			bool FirstWord{0};
			for (wchar_t Column : Input) {
				Column = std::tolower(Column);
				if (Column == ' ') {
					if (!FirstWord) continue;
					else { FirstWord = true; Converted.push_back(Column); }
				}

			}

			for (int i{0}; i < std::size(CList); ++i) {
				CommandArray = CList[i].Command;
				if (Converted == CommandArray) {

				}
			}

		}

		inline static bool CommandParser(const std::string& Command) {

		}




	};

	inline static std::vector<std::string> CustomCommands = { "ExecStartBR", "LoadStage1", "LoadStage2", "LoadStage3", "LoadTest", "ghost"};

	/*
	
		Stage01 = Morioh || Stage02 = Cairo || Stage03 = Everglades

		Custom command ideas
	
		Load <string_MapName> <bool_or_int_Listen> <?game_bool_OptionalOverride>
		example - Load Everglades 1 ?game=/Game/ThirdPersonGameMode.ThirdPersonGameMode_C 

		ExecStartTutorial (undecided)

		ExecStartBR <int_GameModeType/required> <int_StageNum/default=1(Morioh)> <bool_Listen/default=false> <int_BotAmount/default=40/max=120/0=disabled> 
	
		LoadHighlight = finds UAJBHighlightManager and calls BP_PlayHighlight(), which transfers you to a demonetdriver instance of your last game and plays whatever it automatically recorded.
	
	*/
	inline static bool NoClipEnabled{0};
	

	inline static void ExecuteLogic(const int& VectorIteration, const std::string& Command) {
		Log("<CustomLogic.hpp> / A8CL::ExecuteLogic():: Command = " + Command);
		if (VectorIteration == 0) ExecStartBR();
		switch (VectorIteration)
		{
		case 1:
			CMD(L"open /Game/Aeyth8/Sandbox/Sandbox?game=/Game/AJB/InGame/Core/BP_AJBBattleGameMode.BP_AJBBattleGameMode_C");
			ConstructThread(StreamLevels);
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:
			CMD(L"open /Game/Aeyth8/Maps/TestMap/Emanate?game=/Game/AJB/InGame/Core/BP_AJBBattleGameMode.BP_AJBBattleGameMode_C");
			Log("Opened Emanate.");
			break;
		case 5:
			NoClipEnabled = !NoClipEnabled;
			if (NoClipEnabled) {
				Player0()->Character->CharacterMovement->GravityScale = 0.0f;
				Player0()->Pawn->bActorEnableCollision = false;
				Player0()->Character->CharacterMovement->SnapUpdatedComponentToPlane();
				Log("Activated Ghost");
			}
			else {
				Player0()->Pawn->bActorEnableCollision = true;
				Player0()->Character->CharacterMovement->GravityScale = 2.0f;
				Log("Deactivated Ghost");
			}
			break;
		}


	}





};




