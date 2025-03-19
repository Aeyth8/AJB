#pragma once
#include "../Logger.hpp"

#define EXPORT extern "C" inline __declspec(dllexport) 

extern void Init();

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace Proxy
{
	// An easy template to construct new threads.
	inline static DWORD WINAPI ConstructThread(LPVOID Function, LPVOID Parameter = 0) {
		void* Thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Function, Parameter, 0, 0);
		if (Thread != nullptr) CloseHandle(Thread);
		return 0;
	}

	// Convert narrow-string to wide-string.
	inline static std::wstring StringToW(const std::string& Str) {
		std::wstring Return;
		Return.assign(Str.begin(), Str.end());
		return Return;
	}

	// Convert wide-string to narrow-string.
	inline static std::string WStringToN(const std::wstring& Str) {
		std::string Return;
		Return.assign(Str.begin(), Str.end());
		return Return;
	}

	struct ProxyStructure { void** FunctionPointer; const char* FunctionName; };

	inline static void InitProxyPointers(const HMODULE& hModule, const std::vector<ProxyStructure>& Table)
	{
		for (int i{0}; i < Table.size(); ++i)
		{
			*Table[i].FunctionPointer = (void*)(GetProcAddress(hModule, Table[i].FunctionName));
			Logger::Log << "[Proxy] - POINTERS :: " << Table[i].FunctionName << " " << std::hex << std::uppercase << Table[i].FunctionPointer << "\n";
		}


	}
}

namespace Shell32
{
	typedef HINSTANCE(__stdcall* ShellExecute_)(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd);
	inline ShellExecute_ ShellExecute_P{0};

	EXPORT HINSTANCE ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)
	{ 
		return ShellExecute_P(hwnd, lpOperation, lpFile, lpParameters, lpDirectory, nShowCmd); 
	}

	const inline static std::vector<Proxy::ProxyStructure> Table =
	{
		{(void**)&ShellExecute_P, "ShellExecuteA"}
	};
}

namespace DXGI
{
	struct UNKNOWN { BYTE unknown[20]; };

	typedef HRESULT(__stdcall* DXGIDumpJournal_)(void* Unknown);
	inline DXGIDumpJournal_ DXGIDumpJournal_P{0};

	EXPORT HRESULT DXGIDumpJournal(void* Unknown) 
	{
		return DXGIDumpJournal_P(Unknown);
	}

	typedef HRESULT(__stdcall* CreateDXGIFactory_)(REFIID riid, void** ppFactory);
	inline CreateDXGIFactory_ CreateDXGIFactory_P{0};

	EXPORT HRESULT CreateDXGIFactory(REFIID riid, _Out_ void** ppFactory)
	{
		return CreateDXGIFactory_P(riid, ppFactory);
	}

	typedef HRESULT(__stdcall* CreateDXGIFactory1_)(REFIID riid, void** ppFactory);
	inline CreateDXGIFactory1_ CreateDXGIFactory1_P{0};

	EXPORT HRESULT CreateDXGIFactory1(REFIID riid, _Out_ void** ppFactory)
	{
		return CreateDXGIFactory1_P(riid, ppFactory);
	}

	typedef HRESULT(__stdcall* CreateDXGIFactory2_)(UINT flags, REFIID riid, void** ppFactory);
	inline CreateDXGIFactory2_ CreateDXGIFactory2_P{0};

	EXPORT HRESULT CreateDXGIFactory2(UINT flags, REFIID riid, _Out_ void** ppFactory)
	{
		return CreateDXGIFactory2_P(flags, riid, ppFactory);
	}

	typedef HRESULT(__stdcall* DXGID3D10CreateDevice_)(HMODULE hModule, void* pFactory, void* pAdapter, UINT Flags, void* unknown, void* ppDevice);
	inline DXGID3D10CreateDevice_ DXGID3D10CreateDevice_P{0};

	EXPORT HRESULT DXGID3D10CreateDevice(HMODULE hModule, void* pFactory, void* pAdapter, UINT Flags, void* unknown, void* ppDevice)
	{
		return DXGID3D10CreateDevice_P(hModule, pFactory, pAdapter, Flags, unknown, ppDevice);
	}

	typedef HRESULT(__stdcall* DXGID3D10CreateLayeredDevice_)(UNKNOWN Unknown);
	inline DXGID3D10CreateLayeredDevice_ DXGID3D10CreateLayeredDevice_P{0};

	EXPORT HRESULT DXGID3D10CreateLayeredDevice(UNKNOWN Unknown)
	{
		return DXGID3D10CreateLayeredDevice_P(Unknown);
	}

	typedef size_t(__stdcall* DXGID3D10GetLayeredDeviceSize_)(const void* pLayers, UINT NumLayers);
	inline DXGID3D10GetLayeredDeviceSize_ DXGID3D10GetLayeredDeviceSize_P{0};

	EXPORT size_t DXGID3D10GetLayeredDeviceSize(const void* pLayers, UINT NumLayers)
	{
		return DXGID3D10GetLayeredDeviceSize_P(pLayers, NumLayers);
	}

	typedef HRESULT(__stdcall* DXGID3D10RegisterLayers_)(const void* pLayers, UINT NumLayers);
	inline DXGID3D10RegisterLayers_ DXGID3D10RegisterLayers_P{0};

	EXPORT HRESULT DXGID3D10RegisterLayers(const void* pLayers, UINT NumLayers)
	{
		return DXGID3D10RegisterLayers_P(pLayers, NumLayers);
	}

	typedef HRESULT(__stdcall* DXGIGetDebugInterface1_)(UINT Flags, REFIID riid, void** pDebug);
	inline DXGIGetDebugInterface1_ DXGIGetDebugInterface1_P{0};

	EXPORT HRESULT DXGIGetDebugInterface1(UINT Flags, REFIID riid, void** pDebug)
	{
		return DXGIGetDebugInterface1_P(Flags, riid, pDebug);
	}

	typedef HRESULT(__stdcall* DXGIReportAdapterConfiguration_)(DWORD Unknown);
	inline DXGIReportAdapterConfiguration_ DXGIReportAdapterConfiguration_P{0};

	EXPORT HRESULT DXGIReportAdapterConfiguration(DWORD Unknown)
	{
		return DXGIReportAdapterConfiguration_P(Unknown);
	}

	const inline static std::vector<Proxy::ProxyStructure> Table =
	{
		{(void**)&DXGIDumpJournal_P, "DXGIDumpJournal"},
		{(void**)&CreateDXGIFactory_P, "CreateDXGIFactory"},
		{(void**)&CreateDXGIFactory1_P, "CreateDXGIFactory1"},
		{(void**)&CreateDXGIFactory2_P, "CreateDXGIFactory2"},
		{(void**)&DXGID3D10CreateDevice_P, "DXGID3D10CreateDevice"},
		{(void**)&DXGID3D10CreateLayeredDevice_P, "DXGID3D10CreateLayeredDevice"},
		{(void**)&DXGID3D10GetLayeredDeviceSize_P, "DXGID3D10GetLayeredDeviceSize"},
		{(void**)&DXGID3D10RegisterLayers_P, "DXGID3D10RegisterLayers"},
		{(void**)&DXGIGetDebugInterface1_P, "DXGIGetDebugInterface1"},
		{(void**)&DXGIReportAdapterConfiguration_P, "DXGIReportAdapterConfiguration"},
	};
}

namespace XAPOFX1_5
{
	typedef HRESULT(__stdcall* CreateFX_)(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize);
	inline CreateFX_ CreateFX_P{0};

	EXPORT HRESULT CreateFX(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize)
	{
		return CreateFX_P(clsid, pEffect, pInitDat, InitDataByteSize);
	}

	const inline static std::vector<Proxy::ProxyStructure> Table =
	{
		{(void**)&CreateFX_P, "CreateFX"}
	};
}

namespace UXTheme
{
	typedef HRESULT(__stdcall* SetWindowTheme_)(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList);
	inline SetWindowTheme_ SetWindowTheme_P{0};

	EXPORT HRESULT SetWindowTheme(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList)
	{
		return SetWindowTheme_P(hwnd, pszSubAppName, pszSubIdList);
	}

	const inline static std::vector<Proxy::ProxyStructure> Table =
	{
		{(void**)&SetWindowTheme_P, "SetWindowTheme"}
	};
}


namespace Proxy
{
	inline static HMODULE hModule{0};
	inline static int AttachCounter{0};
	inline static bool IsInitialized{false};

	// A dynamic variable declared with the default DLL name, it can be changed to allow this proxy to be used for any other DLL (if that proxy is written of course)
	inline static std::wstring ModuleName{ L"\\dxgi.dll" };

	inline static bool Attach(HMODULE CurrentModule) {
		WCHAR Path[260]{0}; // Current path of this dll during runtime.

		++AttachCounter;
		if (AttachCounter == 1) Logger::Init();

		Logger::Log << "[Proxy] - ATTACH :: Count = " << AttachCounter << "\n";

		// Grabs the path of the proxy dll, if unsuccessful it will fallback to the default proxy name.
		if (GetModuleFileName(CurrentModule, Path, _countof(Path))) {
			std::wstring RetrievedModule(Path);
			ModuleName = RetrievedModule; // Moves the constructed string to the namespace-scoped "global" variable. 
			size_t ExtractName = ModuleName.find_last_of(L"\\"); // Gets the last backslash in the path
			if (ExtractName != std::wstring::npos) ModuleName = L"\\" + ModuleName.substr(ExtractName + 1); // Substrings the path to only contain the name of the proxy dll
		}

		if (!GetSystemDirectory(Path, _countof(Path))) return false; // Attempts to find System32, or fails doing so.
		std::wstring Sys32(Path); // Turns that path into a wide string

		Logger::Log << "[Proxy] - ATTACH :: Verifying that the proxy isn't already loaded (somehow) -> Pointer = " << std::hex << std::uppercase << (uintptr_t)GetModuleHandle((ModuleName).substr(1, ModuleName.size()).c_str()) << "\n";
		Logger::Log << "[Proxy] - ATTACH :: Loading module [" << Proxy::WStringToN(ModuleName.substr(1, ModuleName.size())) << "] from " << Proxy::WStringToN(Sys32) << "\n";
		Logger::Log << "[Proxy] - ATTACH :: CurrentModule = " << std::hex << std::uppercase << CurrentModule << "\n";
		ModuleName = Sys32 + ModuleName; // Constructs a path combining System32 with the current module name. 

		hModule = LoadLibrary(ModuleName.c_str()); // hModule is a pointer to the real dll located in System32
		if (!hModule) return false;

		// Loop to assign all the proxy functions to point to the real DLL functions in System32.
		InitProxyPointers(hModule, DXGI::Table);
		
		if (!IsInitialized && AttachCounter > 0) { IsInitialized = true;
			Logger::Log << "[Proxy] - Starting up AJB...\n";
			Proxy::ConstructThread(Init);
		}

		

		return true;
	}

	inline static void Detach(HMODULE CurrentModule) { if (hModule != nullptr) FreeLibrary(CurrentModule); }
}