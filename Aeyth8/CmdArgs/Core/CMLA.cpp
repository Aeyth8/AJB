#include <Windows.h>
#include "CMLA.h"
#include "../../Global.hpp"
#include "../../../Dumper-7/UnrealContainers.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

using namespace A8CL;

void CommandLineArguments::ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands, CArray<wchar_t*>*& OutCommandLine)
{
	int ArgC{0};

	// I've learned that if you don't make this static once the function ends it immediately gets destroyed, you can also use it externally (idk the lifespan) if you use the variable inside this function.
	static CArray<wchar_t*> Arguments(ArgC, CommandLineToArgvW(CommandLineW, &ArgC));

	if (OutCommandLine != OutCommandLineCache) OutCommandLineCache = &Arguments;
	OutCommandLine = &Arguments;	

	for (wchar_t* const& Arg : Arguments)
	{
		if (Arg[0] != '-') continue;

		wchar_t* EqualSign = FindChar(Arg, L'=');
		const uint16 Size = CharacterLength(Arg);

		for (CommandLineParameter<wchar_t>* const& Param : GlobalCommands)
		{
			if (EqualSign && Param->IsBool() || !EqualSign && !Param->IsBool()) continue;

			wchar_t LowercaseName[260]{0};
			wchar_t LowercaseArgName[260]{0};
			LowercaseStr(Param->GetNameAsString(), LowercaseName);
			LowercaseStr(Arg, LowercaseArgName);

			uint16 Len = (EqualSign - Arg) - 1;
			wchar_t buffer[260]{0};
			Substring(LowercaseArgName, buffer, (uint16)1, Len);

//			if (!StringCompare(buffer, LowercaseName)) continue;

			/*
			Debug Test 1
			
			char PName[260]{0};
			char AName[260]{0};
			wcstombs_s(0, PName, ParamName->GetNameAsString(), lstrlenW(ParamName->GetNameAsString()));
			wcstombs_s(0, AName, ParamName->GetArgumentAsString(), lstrlenW(ParamName->GetArgumentAsString()));			
			Global::LogA(std::string(PName), std::string(AName));*/
			//std::to_string(CharacterLength(ParamName->GetNameAsString()))


			
			char AName[260]{0};
			wcstombs_s(0, AName, LowercaseName, Size);
			Global::LogA("HELP ME", std::to_string((uint16)Len));



		}

		/*std::string Help;
		int Count = lstrlenW(Arg);
		for (int i{0}; i < Count; ++i) Help+= Lowercase(Arg[i]);

		Global::LogA(std::to_string(ArgC), Help);*/
	}
}

/*void CommandLineArguments::ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands)
{

	CommandLineArguments::ParseCommandLine(CommandLineW, GlobalCommands, )
}*/