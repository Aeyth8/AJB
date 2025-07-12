#pragma once

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{

typedef short int16;
typedef unsigned short uint16;

class ConsoleCommands
{
public:

	struct CommandStructure
	{
		const char* CommandPrefix;		
		void(*Function)();
		const char** Parameters = nullptr;
	};

	/*enum ECommandResult : unsigned char
	{
		INVALID = 0,
		VALID_NO_PARAMS = 1,
		VALID_WITH_PARAMS = 2
	};*/

private:

	

	
	static void ExecuteCommand(const int16& CommandIterator);
	static void ExecuteCommand(const int16& CommandIterator, const char**& Parameters);

	static int16 IsInternalCommand(const char*& Command);
	static int16 IsValidCommand(const char*& Command);

public:


	static bool ParseCommand(const char* Command);

	






};

}