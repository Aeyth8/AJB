#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

typedef unsigned __int8  uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef __int8  int8;
typedef __int16 int16;
typedef __int32 int32;

namespace A8CL
{

// Wrap an array of C-Strings into something usable 
// (Originally CStr changed to CArray, I did not realize I essentially wrote a unchangable TArray)
template <class Type>
struct CArray
{
	CArray(const int& Count, Type* Array) : Count(Count), Array(Array) {}

	Type* Array;
	int Count;

	constexpr Type const* begin() { return Array; }
	constexpr Type const* end()   { return Array + Count; }
};

template <class Encoding>
class alignas(0x8)CommandLineParameter
{
private:

	const Encoding* ParameterName;
	const Encoding* ParameterArgument;

	uint32 bRequiresArgument : 1;
	uint32 CharacterCount	 : 16;		// Max is 65,536 characters / uint16
	// Add other bitflag bools later (maybe)

	// lstrlenW ripoff
	inline static constexpr uint16 CharacterLength(const Encoding* String)
	{
		if (!String) return 0;

		uint16 Length{0};

		while (*String++)
		{
			if (Length == 0x10000) break;

			++Length;
		}

		return Length;
	}

public:

	// Default constructor
	CommandLineParameter(const Encoding* ParameterName, const Encoding* ParameterArgument, uint16 CharacterCount)
	: ParameterName(ParameterName), ParameterArgument(ParameterArgument), bRequiresArgument(0), CharacterCount(CharacterCount) {}

	// Default constructor without manual count
	CommandLineParameter(const Encoding* ParameterName, const Encoding* ParameterArgument)
	: ParameterName(ParameterName), ParameterArgument(ParameterArgument), bRequiresArgument(0), CharacterCount(CharacterLength(ParameterArgument)) {}

	// For booleans, null = false | !null = true
	CommandLineParameter(const Encoding* ParameterName)
	: ParameterName(ParameterName), ParameterArgument(nullptr), bRequiresArgument(1), CharacterCount(0) {}

	uint16 const GetCharacterCount() const
	{
		return this->CharacterCount;
	}

	constexpr bool GetAsBool() const
	{
		return this->bRequiresArgument && ParameterArgument != nullptr;
	}

	const Encoding* GetNameAsString() const
	{
		return this->ParameterName;
	}

	const Encoding* GetArgumentAsString() const
	{
		return this->ParameterArgument;
	}

	void SetArgument(const Encoding* NewArgument)
	{
		this->ParameterArgument = NewArgument;
		this->CharacterCount = CharacterLength(NewArgument);
	}	
};

// Base core class, any game specific configs should be used in a separate file. 
class CommandLineArguments
{
public:

	static void ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>>& GlobalCommands);



};

}