#include  "../Commands/Command.h"
#include <cstring>
#include <cctype>

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/



using namespace A8CL;

/*
		Private
*/

// I don't have time to constantly change things and make them complex and dynamic, for now it sits here, it just needs to work.

const ConsoleCommands::CommandStructure InternalCommands[] =
{
	{"AJBExecInternal", 0},


};

const ConsoleCommands::CommandStructure ValidCommands[] =
{
	{"Help", 0},


};


/*
		Private
*/



void ConsoleCommands::ExecuteCommand(const int16& CommandIterator)
{

}

void ConsoleCommands::ExecuteCommand(const int16& CommandIterator, const char**& Parameters)
{

}

int16 ConsoleCommands::IsInternalCommand(const char*& Command)
{


}

// Checks the command prefix to determine if it is a valid command.
int16 ConsoleCommands::IsValidCommand(const char*& Command)
{
	const char* FirstWhitespace = strchr(Command, ' ');
	uint16 Prefix{0};
	
	FirstWhitespace ? Prefix = FirstWhitespace - Command : Prefix = strlen(Command);

	uint16 CommandIterator{0};
	bool bIsCommandValid{false};

	for (const CommandStructure& ExistingCommands : ValidCommands)
	{
		const uint16 CommandLength = strlen(ExistingCommands.CommandPrefix);

		// Skip the logic if the prefix sizes mismatch.
		if (CommandLength != Prefix)
		{
			continue;
		}

		uint16 Iterator{0};

		for (;Iterator < Prefix; ++Iterator)
		{
			if (std::tolower(Command[Iterator]) != std::tolower(ExistingCommands.CommandPrefix[Iterator]))
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

	return bIsCommandValid ? CommandIterator : -1;
}



/*
		Public
*/



bool ConsoleCommands::ParseCommand(const char* Command)
{
	const int16 Result = ConsoleCommands::IsInternalCommand(Command);

	if (Result != -1)
	{
		// Size of the prefix, we start right after the iterator of the matching command's string.
		uint16 ParamStart = strlen(InternalCommands[Result].CommandPrefix);

		// We subtract the entire command size to the size of when it starts.
		uint16 ParamEnd = strlen(Command) - ParamStart;

		if (ParamStart != ParamEnd)
		{
			for (uint16 i{ParamStart}; i < ParamEnd; ++i)
			{
				uint16 WhitespaceIndex{0};
				if (Command[i] != ' ')
				{

				}
			
			}
		}
		
	}

	return false;

	// I just need internal commands to work for now.

	/*const int16 Result = ConsoleCommands::IsValidCommand(Command);
	
	if (Result == -1)
	{
		return false;
	}

	// If there are no parameters, execute the command.
	if (!ValidCommands[Result].Parameters)
	{
		ConsoleCommands::ExecuteCommand(Result);
		return true;
	}*/

}


// Unused comment I may reuse.

// We check that the iterator has surpassed the CommandLength but we also make sure that FirstWhitespace is valid;
// If it isn't valid then there is an unnecessary whitespace with no parameters afterwards.