#pragma once
#include "../pch.h"

class Internal
{
public:

	inline static std::vector<std::string> InternalCommands =
	{


	};

	// Very simple prefix
	inline static bool IsInternalCommand(const std::string& Command) { if (Command == "ajexecinternal") return true; }





};