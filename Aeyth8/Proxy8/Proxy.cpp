#include "ProxyTypes.h"
#include <Windows.h>


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/





/*
		Private
*/


HMODULE Proxy::RealModule{nullptr};

short Proxy::ProxyExists(const char*& Name)
{
	for (unsigned short i{0}; i < ProxyTypes::Proxies.size(); ++i)
	{
		if (strcmp(Name, ProxyTypes::Proxies[i].ModuleName) == 0) return i;
	}

	return -1;
}

void Proxy::LoadProxyPointers(const std::vector<Proxy::ProxyCallStructure>& Table)
{
	if (RealModule == nullptr) return;

	for (const Proxy::ProxyCallStructure& ProxyCall : Table)
	{
		*ProxyCall.FunctionPointer = (void*)GetProcAddress(RealModule, ProxyCall.FunctionName);
		//std::cout << Table[i].FunctionName << "|| " << std::hex << std::uppercase << Table[i].FunctionPointer << "\n";
	}
}

/*
		Public
*/

bool Proxy::Attach(HMODULE CurrentModule)
{
	char Path[260]{0};

	// Retrieves the name and relative path of 'this' DLL, the proxy.
	if (!GetModuleFileNameA(CurrentModule, Path, _countof(Path))) return false;

	// Extracts the name alone.
	const char* ProxyName = strrchr(Path, '\\') + 1;
	if (ProxyName == nullptr) return false;

	// If there are no matching proxies in this database we fail. 
	const short& ProxyIter = Proxy::ProxyExists(ProxyName);
	if (ProxyIter == -1) return false;

	// Checks to see if we're even on Windows
	if (GetWindowsDirectoryA(Path, _countof(Path)))
	{
		#if B64
			strcat_s(Path, "\\System32\\");
		#elif !B64
			strcat_s(Path, "\\SysWOW64\\");
		#endif

		strcat_s(Path, ProxyName);

		RealModule = LoadLibraryA(Path);
		if (RealModule != nullptr)
		{
			Proxy::LoadProxyPointers(ProxyTypes::Proxies[ProxyIter].ProxyTable);
			return true;
		}		
	}

	// If we are unable to locate System32/SysWOW64 OR if our proxied DLL isn't a system module
	// We will attempt to load the specified DLL within the relative path prefixed with "r_"
	// Example : ProxyName == "dxgi.dll" || We attempt to load "r_dxgi.dll"

	char Fallback[260]{0};
	_snprintf_s(Fallback, sizeof(Fallback), _TRUNCATE, "r_%s", ProxyName);

	RealModule = LoadLibraryA(Fallback);
	if (RealModule != nullptr)
	{
		Proxy::LoadProxyPointers(ProxyTypes::Proxies[ProxyIter].ProxyTable);
		return true;
	}

	return false;
}

bool Proxy::Detach()
{
	if (RealModule == nullptr) return false;
	return FreeLibrary(RealModule);
}