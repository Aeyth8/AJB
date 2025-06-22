#pragma once
#include <Windows.h>
#include <string>
#include <vector>


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

#ifndef EXPORT
#define EXPORT extern "C" __declspec(dllexport)
#endif

#if defined _M_X64
	#define B64 1
#elif defined _M_IX86
	#define B64 0
#endif

class Proxy
{
public:

	struct ProxyCallStructure { void** FunctionPointer; const char* FunctionName; };
	struct ProxyStructure { const char* ModuleName; const std::vector<ProxyCallStructure>& ProxyTable; };
	
private:

	static HMODULE RealModule;

	static int ProxyExists(const std::string& Name);
	static void LoadProxyPointers(const std::vector<ProxyCallStructure>& Table);
	
	
public:

	static bool Attach(HMODULE CurrentModule);
	static bool Detach();



};