#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{


// Global variables and functions used almost everywhere within the program.
namespace Global
{

	// Global Base Address [GBA]
	inline static uintptr_t GBA{0};

	// Useful way to construct the console from hooking UEngine::Browse
	inline static bool bConstructedUConsole{false};

	// Return value is true if null.
	static bool IsNull(void* Pointer)
	{
		return Pointer == nullptr;
	}
	static bool IsNull(auto Pointer)
	{
		return Pointer == nullptr;
	}

	// Easily cast a type-variable to a memory address.
	template <typename T>
	static void Declare(T& Type, const uintptr_t& Offset)
	{
		Type = (T)(Global::GBA + Offset);
	}

	static void FatalErrorBox(const std::string& Message)
	{
		const int Box = MessageBoxA(0, "Fatal Error!", Message.c_str(), MB_OK);
	}

	/*
		Define your custom logger here or in the cpp file, mine's just a wrapper to Logger.hpp 
	*/

	// The log will flush every call, use this for important debugging.
	static void LogA(const std::string& Header, const std::string& Body);

	// The log will flush when needed, use this for casual logging.
	static void Log(const std::string& Header, const std::string& Body);
	static void Log(const std::string& Body);



}














}