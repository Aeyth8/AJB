#include <Windows.h>
#include "CMLA.h"
/*#include "../../Global.hpp"
#include "../../../Dumper-7/UnrealContainers.hpp"*/

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

using namespace A8CL;

void CommandLineArguments::ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands, CArray<wchar_t*>* OutCommandLine)
{
	int ArgC{0};

	CArray<wchar_t*> Arguments(ArgC, CommandLineToArgvW(CommandLineW, &ArgC));

	if (OutCommandLine)
	{
		OutCommandLine = &Arguments;
	}

	for (wchar_t* const& arg : Arguments)
	{
		//Global::LogA(std::to_string(ArgC), UC::FString(arg).ToString());
	}
}