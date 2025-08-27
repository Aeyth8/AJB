#include <Windows.h>
#include "../Global.hpp"
#include "CMLA.h"
#include "../../Dumper-7/UnrealContainers.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

using namespace A8CL;

void CommandLineArguments::ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>>& GlobalCommands)
{
	int ArgC{0};

	CArray<wchar_t*> Arguments(ArgC, CommandLineToArgvW(CommandLineW, &ArgC));

	for (wchar_t* const& arg : Arguments)
	{
		A8CL::Global::LogA(std::to_string(ArgC), UC::FString(arg).ToString());
	}
}

CommandLineParameter<wchar_t> Help(L"GameDefaultMap", L"/Game/Aeyth8/Maps/TitleScreen/PlaceholderTitleScreen.PlaceholderTitleScreen");