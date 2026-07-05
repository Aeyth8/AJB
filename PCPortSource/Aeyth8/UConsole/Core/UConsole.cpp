#include "UConsole.h"

#include "../../Global.hpp"
#include "../../Offsets.h"

using namespace A8CL; using namespace Global;

void UConsole::OutputText(SDK::UConsole* This, SDK::FString* Text)
{
	if (ConsoleOutput::bShouldOutput)
	{
		ConsoleOutput::bShouldOutput = false;
		SDK::FString TempString(ConsoleOutput::TextCache);

		OFF::CopyString.Call<SDK::FString*(__thiscall*)(SDK::FString*, SDK::FString*)>()(Text, &TempString);
	}

	LogA(OFF::OutputText.GetName(), Text->ToString());

	OFF::OutputText.VerifyFC<Decl::OutputText>()(This, Text);
}

void UConsole::UConsole(SDK::UConsole* This, SDK::FString& Command)
{
	OFF::UConsole.VerifyFC<Decl::UConsole>()(This, Command);
}

SDK::FString* UConsole::ConsoleCommand(SDK::APlayerController* This, SDK::FString* Result, SDK::FString* Command, bool bWriteToLog)
{
	return OFF::ConsoleCommand.VerifyFC<Decl::ConsoleCommand>()(This, Result, Command, bWriteToLog);
}
