#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{
class ConsoleCommands
{
private:

	// Determines how the hook will behave from the command. [WILL BE USED WITHIN THE CUSTOM CONSOLE COMMAND OBJECT ITSELF, NOT THE PARSER]
	enum Interference : unsigned char
	{
		EXECUTE_RETURN = 1, // Executes command logic, returns in-hook early.
		EXECUTE_CONTINUE = 2, // Executes command logic and proceeds with the original function call.
		EXECUTE_MODIFY_RETURN = 3, // Executes command logic, modifies the input, returns in-hook early (why? any input references/pointers can be modified still)
		EXECUTE_MODIFY_CONTINUE = 4 // Executes command logic, modifies the input, and proceeds with the original function call.

	};

public:

	// too tired to write the thing so here's what the visual idea is, very similar to CMLA
	// void Parse(const wchar_t*& InputCommand, const int& StringSize, PlaceholderObj*& GlobalCustomCommands); 
	// wchar_t* Parse(const wchar_t*& InputCommand, const int& StringSize, PlaceholderObj*& GlobalCustomCommands);

};

class CCommand // Just a last minute concept/idea that I will have to figure out on how I could possibly create it but I'm sick of having to MANUALLY add my custom arguments to the pointer array and I usually forget.
{
private:

	static CCommand** GlobalCommandObjects;
	inline static int GlobalCommandMax = 4;
	static int GlobalCommandCount;

	static void ResizeArray()
	{
		if (GlobalCommandMax < GlobalCommandCount)
		{
			int NewSize = GlobalCommandMax * 2;
			CCommand** NewArray = new CCommand*[NewSize];

			for (int i{0}; i < GlobalCommandCount; ++i)
			{
				NewArray[i] = GlobalCommandObjects[i];
			}

			delete[] GlobalCommandObjects;

			GlobalCommandObjects = NewArray;
			GlobalCommandMax = NewSize;
		}
	}

public:

	CCommand() 
	{ 
		if (!GlobalCommandObjects)
		{
			GlobalCommandObjects = new CCommand*[GlobalCommandMax];
		}

		ResizeArray();
		
		GlobalCommandObjects[GlobalCommandCount++] = this;
	}

	/*~CCommand()
	{
		delete[] GlobalCommandObjects;
		GlobalCommandMax = 0;
		GlobalCommandCount = 0;
	}*/

};

}