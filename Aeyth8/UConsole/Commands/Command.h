#pragma once
#include "../Core/ConsoleCommands.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{


template <typename Array, unsigned long long Size> 
class Commands
{
public:

	// This makes me want to reinterpret cast myself off a cliff
	const Array (&ValidCommands)[Size];

	// Constructor
	constexpr Commands(const Array (&Commands)[Size]) :
		ValidCommands(Commands){};

	constexpr unsigned long long Num() const
	{
		return Size;
	}

	constexpr const Array* Begin() const
	{
		return &ValidCommands[0];
	}

	constexpr const Array* End() const
	{
		return this->Begin() + Size;
	}
};


//class Command
//{
//private:
//
//	static const ConsoleCommands::CommandStructure ValidCommands[];
//
//public:
//
//	friend class ConsoleCommands;
//
//};
}