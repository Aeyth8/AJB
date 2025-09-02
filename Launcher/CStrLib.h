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

// The origin of CArray and my CMLA library
struct CStr
{
	CStr(const int& Count, const char** Array) : Count(Count), Array(Array) {}

	const char** Array;
	int Count;

	constexpr const char** begin() const { return Array; }
	constexpr const char** end()   const { return Array + Count; }
};