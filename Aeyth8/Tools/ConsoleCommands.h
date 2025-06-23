#pragma once
#include <string>

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{

class ConsoleCommands
{
public:

	struct CommandStructure
	{
		const char* Command;
		void(*Function)();
	};

private:

	static const CommandStructure ValidCommands[];

public:


	

	static bool IsValidCommand(const std::string& Command);






};

}