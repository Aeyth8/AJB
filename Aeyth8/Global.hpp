#pragma once
#include <Windows.h>
#include <string>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{


// Global variables and functions used almost everywhere within the program.
namespace Global
{
	typedef int8_t  int8;
	typedef int16_t int16;
	typedef int32_t int32;
	typedef int64_t int64;

	typedef uint8_t  uint8;
	typedef uint16_t uint16;
	typedef uint32_t uint32;
	typedef uint64_t uint64;



	// Global Base Address [GBA]
	inline uintptr_t GBA{0};

	// Useful way to construct the console from hooking UEngine::Browse
	inline bool bConstructedUConsole{false};

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

	std::string HexToString(const uintptr_t& Hex); 

	DWORD __stdcall ConstructThread(LPVOID Function, LPVOID Parameter = 0);

	/*
		Define your custom logger here or in the cpp file, mine's just a wrapper to Logger.hpp 
	*/

	// The log will flush every call, use this for important debugging.
	void LogA(const std::string& Header, const std::string& Body);

	// The log will flush when needed, use this for casual logging.
	void Log(const std::string& Header, const std::string& Body);
	void Log(const std::string& Body);



};














}