#include "ProxyTypes.h"
#include "../Global.hpp"
#include <format>


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/





/*
		Private
*/


HMODULE Proxy::RealModule{nullptr};

int Proxy::ProxyExists(const std::string& Name)
{
	for (int i{0}; i < ProxyTypes::Proxies.size(); ++i)
	{
		if (Name == ProxyTypes::Proxies[i].ModuleName) return i;
	}

	return -1;
}

void Proxy::LoadProxyPointers(const std::vector<Proxy::ProxyCallStructure>& Table)
{
	if (RealModule == nullptr) return;

	for (int i{0}; i < Table.size(); ++i)
	{
		*Table[i].FunctionPointer = (void*)GetProcAddress(RealModule, Table[i].FunctionName);
		A8CL::Global::LogA("Proxy", std::format("{} = {}", Table[i].FunctionName, A8CL::Global::HexToString((uintptr_t)Table[i].FunctionPointer)));
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
	std::string ProxyName(Path);

	// Extracts the name alone.
	ProxyName = ProxyName.substr(ProxyName.find_last_of("\\") + 1);

	// If there are no matching proxies in this database we fail. 
	int ProxyIter = Proxy::ProxyExists(ProxyName);
	if (ProxyIter == -1) return false;

	// Checks to see if we're even on Windows
	if (GetWindowsDirectoryA(Path, _countof(Path)))
	{
		std::string RealModulePath(Path);

		#if B64
			RealModulePath += "\\System32\\";
		#elif !B64
			RealModulePath += "\\SysWOW64\\";
		#endif

		RealModulePath += ProxyName;

		RealModule = LoadLibraryA(RealModulePath.c_str());
		if (RealModule != nullptr)
		{
			Proxy::LoadProxyPointers(ProxyTypes::Proxies[ProxyIter].ProxyTable);
			return true;
		}		
	}

	// If we are unable to locate System32/SysWOW64 OR if our proxied DLL isn't a system module
	// We will attempt to load the specified DLL within the relative path prefixed with "r_"
	// Example : ProxyName == "dxgi.dll" || We attempt to load "r_dxgi.dll"

	ProxyName = "r_" + ProxyName;

	RealModule = LoadLibraryA(ProxyName.c_str());
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