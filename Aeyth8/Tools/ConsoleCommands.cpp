#include "ConsoleCommands.h"
#include "../Global.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/



using namespace A8CL;

/*
		Private
*/

void Help()
{

}
const ConsoleCommands::CommandStructure ConsoleCommands::ValidCommands[] =
{
	{"AJBExecInternal", Help}


};



/*
		Public
*/

// Checks the command prefix to determine if it is a valid command, and if it is internal.
bool ConsoleCommands::IsValidCommand(const char* Command)
{
	const char* FirstWhitespace = strchr(Command, ' ');
	uint16 Prefix{0};
	
	FirstWhitespace ? Prefix = FirstWhitespace - Command : Prefix = strlen(Command);


	uint16 CommandIterator{0};
	bool bIsCommandValid{false};

	for (const CommandStructure& ExistingCommands : ConsoleCommands::ValidCommands)
	{
		const uint16 CommandLength = strlen(ExistingCommands.Command);

		// Skip the logic if the prefix sizes mismatch.
		if (CommandLength != Prefix)
		{
			continue;
		}

		uint16 Iterator{0};

		for (;Iterator < Prefix; ++Iterator)
		{
			if (std::tolower(Command[Iterator]) != std::tolower(ExistingCommands.Command[Iterator]))
			{
				break;
			}	
		}

		
		if (Iterator == CommandLength)
		{
			bIsCommandValid = true;
			break;
		}

		CommandIterator++;
	}

	return bIsCommandValid;
}






// Unused comment I may reuse.

// We check that the iterator has surpassed the CommandLength but we also make sure that FirstWhitespace is valid;
// If it isn't valid then there is an unnecessary whitespace with no parameters afterwards.