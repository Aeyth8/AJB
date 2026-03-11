#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
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

	// Half-baked last-minute implemented function to maintain a clean syntax (INCOMPLETE)
	void Assign(const int& NewCount, Type*& NewArray)
	{		
		Count = NewCount;
		Array = NewArray;
	}
};

// strlen / lstrlenW ripoff
template <class Integer = uint16, class Encoding>
constexpr Integer CharacterLength(const Encoding* String)
{
	if (!String) return 0;

	constexpr Integer Max = Integer(~0) >> (Integer(-1) < Integer(0) ? 1 : 0); // I don't even know what this does except that it grabs the max length the integer type can be
	Integer Length{0};

	while (*String++)
	{
		if (Length >= Max) break;

		++Length;
	}

	return Length;
}

// Poor man's std::tolower / Only works with char/wchar_t
template <class Encoding>
Encoding Lowercase(Encoding Char) 
{
	return Char >= 'A' && Char <= 'Z' ? Char + 32 : Char;
}

/*	Before I realized that the output dies immediately after return -
// Convert an entire C string into lowercase
template <class Integer = uint16, class Encoding, unsigned char MaxPath = 260>
Encoding* LowercaseStr(const Encoding* String)
{
	Integer Length = CharacterLength<Integer, Encoding>(String);
	Encoding StringBuffer[MaxPath]{0};
	for (Integer i{0}; i < Length; ++i)
	{
		StringBuffer[i] = Lowercase(String[i]);
	}
	return StringBuffer;
}
*/

// Convert an entire C string into lowercase
template <class Integer = uint16, class Encoding>
void LowercaseStr(const Encoding* String, Encoding* OutBuffer)
{
	Integer Length = CharacterLength<Integer, Encoding>(String);
	for (Integer i{0}; i < Length; ++i)
	{
		OutBuffer[i] = Lowercase(String[i]);
	}
}

// Compares two C-Strings, returns true if equal, false if not equal
// A homemade and templated version of strcmp / wcscmp 
template <class Integer = uint16, class Encoding>
constexpr bool StringCompare(Encoding* StringA, Encoding* StringB, bool CaseSensitive = true)
{
	Integer SizeA = CharacterLength<Integer, Encoding>(StringA);
	Integer SizeB = CharacterLength<Integer, Encoding>(StringB);

	if (SizeA != SizeB) return false;

	for (Integer i{0}; i < SizeA; ++i)
	{
		if (CaseSensitive)
		{
			if (Lowercase(StringA[i]) == Lowercase(StringB[i])) continue;
		}
		if (StringA[i] != StringB[i]) return false;
	}

	return true;
}

template <class Integer = uint16, class Encoding>
Encoding* FindChar(Encoding* String, Encoding Character, bool bReverse, Integer StringLen)
{
	if (bReverse)
	{
		for (Integer i{StringLen}; i-- > 0;) if (String[i] == Character) return &String[i];
	}
	else
	{
		for (Integer i{0}; i < StringLen; ++i) if (String[i] == Character) return &String[i];
	}
	return nullptr;
}

template <class Integer = uint16, class Encoding>
Encoding* FindChar(Encoding* String, Encoding Character, bool bReverse = false)
{
	return FindChar(String, Character, bReverse, CharacterLength<Integer, Encoding>(String));
}

/*template <class Integer = uint16, class Encoding>
Encoding* Substring(Encoding* InputString, Integer StartPos, Integer Size)
{
	Encoding* ReturnStr = new Encoding[Size + 1];

	for (Integer i{0}; i < Size; ++i)
	{
		ReturnStr[i] = InputString[StartPos + i];
	}
	ReturnStr[Size] = 0;

	return ReturnStr;
}*/

template <class Integer = uint16, class Encoding>
void Substring(Encoding* InputString, Encoding* InputBuffer, Integer StartPos, Integer Size)
{
	Integer SizeOfString = CharacterLength(InputString);
	for (Integer i{0}; SizeOfString > i && i < Size; ++i)
	{
		InputBuffer[i] = InputString[StartPos + i];
	}
	InputBuffer[SizeOfString] = '\0';
}

template <class Encoding>
class alignas(0x8)CommandLineParameter
{
private:

	inline static CommandLineParameter<Encoding>** GlobalCommandObjects{nullptr};
	inline static int GlobalCommandMax{4};
	inline static int GlobalCommandCount{0};

	static void ResizeArray()
	{
		if (GlobalCommandCount >= GlobalCommandMax)
		{
			int NewSize = GlobalCommandMax * 2;
			CommandLineParameter** NewArray = new CommandLineParameter<Encoding>*[NewSize];

			for (int i{0}; i < GlobalCommandCount; ++i)
			{
				NewArray[i] = GlobalCommandObjects[i];
			}

			delete[] GlobalCommandObjects;

			GlobalCommandObjects = NewArray;
			GlobalCommandMax = NewSize;
		}
	}

	void Constructor()
	{
		if (!GlobalCommandObjects)
		{
			GlobalCommandObjects = new CommandLineParameter<Encoding>*[GlobalCommandMax];
		}

		ResizeArray();

		GlobalCommandObjects[GlobalCommandCount++] = this;
	}

	const Encoding* ParameterName;
	const Encoding* ParameterArgument;

	uint32 bRequiresArgument : 1;		// If there is no argument required then it is a bool.
	uint32 bBoolToggled		 : 1;		// This flag is only for booleans and it determines if the name has been invoked.
	uint32 bHasChanged		 : 1;		// Determines if the current value is default or has been modified in runtime.
	uint32 CharacterCount	 : 16;		// Max is 65,536 characters / uint16
	// Add other bitflag bools later (maybe)

public:

	static CArray<CommandLineParameter<Encoding>*> GCommands()
	{
		return CArray<CommandLineParameter<Encoding>*>(GlobalCommandCount, GlobalCommandObjects);
	}

	// Default constructor
	CommandLineParameter(const Encoding* ParameterName, const Encoding* ParameterArgument, uint16 CharacterCount)
	: ParameterName(ParameterName), ParameterArgument(ParameterArgument), bRequiresArgument(1), bBoolToggled(0), bHasChanged(0), CharacterCount(CharacterCount) 
	{
		Constructor();
	}

	// Default constructor without manual count
	CommandLineParameter(const Encoding* ParameterName, const Encoding* ParameterArgument)
	: ParameterName(ParameterName), ParameterArgument(ParameterArgument), bRequiresArgument(1), bBoolToggled(0), bHasChanged(0), CharacterCount(CharacterLength(ParameterArgument))
	{
		Constructor();
	}

	// For booleans, null = false | !null = true
	CommandLineParameter(const Encoding* ParameterName)
	: ParameterName(ParameterName), ParameterArgument(nullptr), bRequiresArgument(0), bBoolToggled(0), bHasChanged(0), CharacterCount(0)
	{
		Constructor();
	}

	uint16 const GetCharacterCount() const
	{
		return this->CharacterCount;
	}

	constexpr bool IsBool() const
	{
		return !this->bRequiresArgument;
	}

	bool GetAsBool() const
	{
		return this->IsBool() && bBoolToggled;
	}

	bool HasChanged() const
	{
		return !this->IsBool() && this->bHasChanged;
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
		this->bHasChanged = true;
	}

	void SetBool(const bool NewValue)
	{
		this->bBoolToggled = NewValue;
	}
};

// Base core class, any game specific configs should be used in a separate file. 
class CommandLineArguments
{
public:

	// I made this because I am too stubborn to make an overloaded function
	inline static CArray<wchar_t*>* OutCommandLineCache{nullptr};

	//static void ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands, CArray<wchar_t*>*& OutCommandLine = OutCommandLineCache);
	static void ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands, CArray<wchar_t*>*& OutCommandLine = OutCommandLineCache);
	//static void ParseCommandLine(wchar_t* CommandLineW, CArray<CommandLineParameter<wchar_t>*>& GlobalCommands);


};

}