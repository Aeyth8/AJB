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

// An all-in-one object for storing and utilizing static offsets.
class OFFSET
{
private:

#if B64
	typedef unsigned long long uintptr;
#elif !B64
	typedef unsigned long uintptr;
#endif

	const char* OffsetName;
	const uintptr Offset;
	void* FunctionCall{nullptr}; // Either a pointer to the function after hooking (the trampoline) or a pointer to the function.

public:

	constexpr OFFSET(const char* Name, const uintptr Offset) :
		OffsetName(Name), Offset(Offset) {};

	const static uintptr GetImageBase()
	{
		/*
		Would work if the image wasn't the DLL (oops)
		uintptr Base = (uintptr_t)&__ImageBase;

		Base &= ~0xFFF;

		for (;; Base -= 0x1000)
		{
			if (*(short*)Base == 0x5A4D && *reinterpret_cast<int*>(Base + (*reinterpret_cast<int*>(Base + 0x3C))) == 0x4550)
			{
				return Base;
			}
		}

		return (uintptr)&__ImageBase;
		*/

		return *reinterpret_cast<uintptr*>(*reinterpret_cast<uintptr*>(*reinterpret_cast<uintptr*>(__readgsqword(wordoffset) + 0x18) + 0x10) + 0x30);
	}

	const char* GetName() const
	{
		return this->OffsetName;
	}

	// IOBuffer [In-Out Buffer]
	template <uintptr Size>
	void GetNameW(wchar_t (&IOBuffer)[Size])
	{	
		for (uintptr i{0}; i < Size; ++i)
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

	uintptr PlusBase() const
	{
		return Offset + GetImageBase();
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