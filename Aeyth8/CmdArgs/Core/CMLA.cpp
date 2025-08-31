#include <Windows.h>
#include "CMLA.h"

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

	// Loop through every argument received from command line.
	for (wchar_t* const& Arg : Arguments)
	{
		if (Arg[0] != '-') continue;

		wchar_t* EqualSign = FindChar(Arg, L'=');
		const uint16 Size = CharacterLength(Arg);

		// Index through every valid name to see if they match
		for (CommandLineParameter<wchar_t>* const& Param : GlobalCommands)
		{
			// Ends early if the argument type fails to line up with the parameter.
			// Basically if an argument is a "boolean" then it will require the name to be invoked, but it expects no parameters.
			// This is useful for passing arguments such as '-skipmovies', I don't need a parameter, I just want to invoke movies to be skipped.
			// And if I were to pass '-skipmovies=true', this would be invalid and fail, the same goes for if I passed '-GlobalDefaultMap' and it required a parameter.
			if (EqualSign && Param->IsBool() || !EqualSign && !Param->IsBool()) continue;

			uint16 ArgNameLength{0};
			EqualSign ? ArgNameLength = (EqualSign - Arg) - 1 : ArgNameLength = CharacterLength(Arg) - 1;

			wchar_t LowercaseName[260]{0};
			wchar_t LowercaseArgName[260]{0};

			Substring(Arg, LowercaseArgName, (uint16)1, ArgNameLength);

			LowercaseStr(Param->GetNameAsString(), LowercaseName);
			LowercaseStr(LowercaseArgName, LowercaseArgName);

			if (!StringCompare(LowercaseArgName, LowercaseName)) continue;

			if (Param->IsBool())
			{
				Param->SetBool(true);
				break;
			}

			wchar_t ArgumentBuffer[260]{0};
			Substring(Arg, ArgumentBuffer, ArgNameLength + 2, Size - (ArgNameLength + 1));
			
			Param->SetArgument(Arg + ArgNameLength + 2);

			break;
		}
	}
}

/*void CommandLineArguments::ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands)
{

	CommandLineArguments::ParseCommandLine(CommandLineW, GlobalCommands, )
}*/