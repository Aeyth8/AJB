#pragma once
#include "../pch.h"

namespace A8CL
{
	inline static int ToInt(const std::string& String) { return std::stoi(String); }


	struct ConsoleCommandStructure { const std::string CommandName; std::vector<std::string> Parameters; };

	inline static bool IsCustomCommand(const std::string& ParsedCommandName)
	{
		

	}

	inline static void PrintCommand(const std::string& ParsedCommandName, const std::vector<std::string>& ParsedParameters)
	{
		std::string Params;
		for (int i{0}; i < ParsedParameters.size(); ++i) 
		{
			Params += ("|" + ParsedParameters[i] + "|");

		}
		LogA(ParsedCommandName, Params);
	}
















}