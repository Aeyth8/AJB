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

// My brain is not able to perceive the logic right now but it works on other days
bool ConsoleCommands::IsValidCommand(const std::string& Command)
{
	for (const CommandStructure& ExistingCommands : ConsoleCommands::ValidCommands)
	{
		for (const char& Character : Command)
		{
			if (std::tolower(Character) != std::tolower(ExistingCommands.Command[Character]))
			{
				// Skips to the next existing command.
				break;
			}
		}
	}
	
	return false;
}