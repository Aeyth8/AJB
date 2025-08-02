#pragma once
#include <Windows.h>
#include <string>

#define A8CL_LOGGER_GLOBAL

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{

	typedef int8_t  int8;
	typedef int16_t int16;
	typedef int32_t int32;
	typedef int64_t int64;

	typedef uint8_t  uint8;
	typedef uint16_t uint16;
	typedef uint32_t uint32;
	typedef uint64_t uint64;

	typedef uintptr_t uintptr;
	typedef unsigned long long size_t;
	typedef size_t size;


// Global variables and functions used almost everywhere within the program.
namespace Global
{

	// Global Base Address [GBA]
	extern uintptr_t GBA;

	// Plus Base [PB]
	inline uintptr_t PB(const uintptr_t& Offset)
	{
		return Offset + GBA;
	}

	// Useful way to construct the console from hooking UEngine::Browse
	extern bool bConstructedUConsole;

	// Directly call a function at a memory address
	template <typename T>
	T Call(const uintptr_t& Address)
	{
		return reinterpret_cast<T>(Address);
	}

	// Return value is true if null.
	template <typename T>
	bool IsNull(T* Pointer)
	{
		return Pointer == nullptr;
	}

	// Easily cast a type-variable to a memory address.
	template <typename T>
	void Declare(T& Type, const uintptr_t& Offset)
	{
		Type = (T)(Global::GBA + Offset);
	}

	// Makes a message box to warn you of your impending doom...
	void FatalErrorBox(const std::string& Message);

	// Allocates the Windows console for output.
	void LogWin();

	const inline BYTE& OffsetToByte(const uintptr_t& Offset)
	{
		return *reinterpret_cast<BYTE*>(Offset);
	}

	std::string HexToString(const uintptr_t& Hex); 

	DWORD __stdcall ConstructThread(LPVOID Function, LPVOID Parameter = 0);

	/*
		Define your custom logger here or in the cpp file, mine's just a wrapper to Logger.hpp 
	*/

	void InitLog();

	// The log will flush every call, use this for important debugging.
	void LogA(const std::string& Header, const std::string& Body);

	// The log will flush when needed, use this for casual logging.
	void Log(const std::string& Header, const std::string& Body);
	void Log(const std::string& Body);

	void CloseLog();

};














}