#pragma once

#if defined _M_X64
	#define B64 1
	#define wordoffset 0x60
#elif defined _M_IX86
	#define B64 0
	#define wordoffset 0x30
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

extern "C" char __ImageBase;

#if B64
	typedef unsigned long long ull;
#elif !B64
	typedef unsigned long ull;
#endif

extern "C" unsigned long long __readgsqword(unsigned long Offset);

namespace A8CL
{
// An all-in-one object for storing and utilizing static offsets.
class OFFSET
{
public:

	const char* OffsetName;
	const ull Offset;
	void* FunctionCall{nullptr}; // Either a pointer to the function after hooking (the trampoline) or a pointer to the function.

public:

	constexpr OFFSET(const char* Name, const ull Offset) :
		OffsetName(Name), Offset(Offset) {};

	// Finds the base address of an image/module by going up.
	const static ull GetBaseOfImage(ull ImageAddress)
	{
		ImageAddress &= ~0xFFF;

		for (;; ImageAddress -= 0x1000)
		{
			if (*(short*)ImageAddress == 0x5A4D && *reinterpret_cast<int*>(ImageAddress + (*reinterpret_cast<int*>(ImageAddress + 0x3C))) == 0x4550)
			{
				return ImageAddress;
			}
		}

		return ImageAddress;
	}

	// Gets the base address of the current module being run.
	const static ull GetImageBase()
	{
		return *reinterpret_cast<ull*>(*reinterpret_cast<ull*>(*reinterpret_cast<ull*>(__readgsqword(wordoffset) + 0x18) + 0x10) + 0x30);
	}

	const char* GetName() const
	{
		return this->OffsetName;
	}

	// IOBuffer [In-Out Buffer]
	template <ull Size>
	void GetNameW(wchar_t (&IOBuffer)[Size])
	{	
		for (ull i{0}; i < Size; ++i)
		{
			const char& ANSIChar = OffsetName[i];
			if (ANSIChar == '\0')
			{
				IOBuffer[i] = '\0';
				break;
			}
			IOBuffer[i] = ANSIChar;
		}
	}

	ull PlusBase() const
	{
		return Offset + GetImageBase();
	}

	ull PlusBase(ull BaseAddress) const
	{
		return Offset + BaseAddress;
	}

	template <class Decl>
	Decl Call()
	{
		return reinterpret_cast<Decl>(this->PlusBase());
	}

	template <class Decl>
	Decl VerifyFC()
	{
		return this->FunctionCall ? reinterpret_cast<Decl>(this->FunctionCall) : reinterpret_cast<Decl>(PlusBase());
	}


};
}