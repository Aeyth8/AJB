#include "ProxyTypes.h"
#include <Windows.h>

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/


namespace DXGI
{
	struct UNKNOWN { BYTE unknown[20]; };

	typedef int(__stdcall* ApplyCompatResolutionQuirking_)(int* a1, int* a2);
	ApplyCompatResolutionQuirking_ ApplyCompatResolutionQuirking_P{0};

	EXPORT int ApplyCompatResolutionQuirking(int* a1, int* a2)
	{
		return ApplyCompatResolutionQuirking_P(a1, a2);
	}

	typedef int(__stdcall* CompatString_)(int a1, int a2, BYTE* a3, int a4);
	CompatString_ CompatString_P{0};

	EXPORT int CompatString(int a1, int a2, BYTE* a3, int a4)
	{
		return CompatString_P(a1, a2, a3, a4);
	}

	typedef int(__stdcall* CompatValue_)(int a1, int32_t* a2);
	CompatValue_ CompatValue_P{0};

	EXPORT int CompatValue(int a1, int32_t* a2)
	{
		return CompatValue_P(a1, a2);
	}

	typedef HRESULT(__stdcall* DXGIDumpJournal_)(void* Unknown);
	DXGIDumpJournal_ DXGIDumpJournal_P{0};

	EXPORT HRESULT DXGIDumpJournal(void* Unknown) 
	{
		return DXGIDumpJournal_P(Unknown);
	}

	typedef HRESULT(__stdcall* CreateDXGIFactory_)(REFIID riid, void** ppFactory);
	CreateDXGIFactory_ CreateDXGIFactory_P{0};

	EXPORT HRESULT CreateDXGIFactory(REFIID riid, _Out_ void** ppFactory)
	{
		return CreateDXGIFactory_P(riid, ppFactory);
	}

	typedef HRESULT(__stdcall* CreateDXGIFactory1_)(REFIID riid, void** ppFactory);
	CreateDXGIFactory1_ CreateDXGIFactory1_P{0};

	EXPORT HRESULT CreateDXGIFactory1(REFIID riid, _Out_ void** ppFactory)
	{
		return CreateDXGIFactory1_P(riid, ppFactory);
	}

	typedef HRESULT(__stdcall* CreateDXGIFactory2_)(UINT flags, REFIID riid, void** ppFactory);
	CreateDXGIFactory2_ CreateDXGIFactory2_P{0};

	EXPORT HRESULT CreateDXGIFactory2(UINT flags, REFIID riid, _Out_ void** ppFactory)
	{
		return CreateDXGIFactory2_P(flags, riid, ppFactory);
	}

	typedef HRESULT(__stdcall* DXGID3D10CreateDevice_)(HMODULE hModule, void* pFactory, void* pAdapter, UINT Flags, void* unknown, void* ppDevice);
	DXGID3D10CreateDevice_ DXGID3D10CreateDevice_P{0};

	EXPORT HRESULT DXGID3D10CreateDevice(HMODULE hModule, void* pFactory, void* pAdapter, UINT Flags, void* unknown, void* ppDevice)
	{
		return DXGID3D10CreateDevice_P(hModule, pFactory, pAdapter, Flags, unknown, ppDevice);
	}

	typedef HRESULT(__stdcall* DXGID3D10CreateLayeredDevice_)(UNKNOWN Unknown);
	DXGID3D10CreateLayeredDevice_ DXGID3D10CreateLayeredDevice_P{0};

	EXPORT HRESULT DXGID3D10CreateLayeredDevice(UNKNOWN Unknown)
	{
		return DXGID3D10CreateLayeredDevice_P(Unknown);
	}

	typedef size_t(__stdcall* DXGID3D10GetLayeredDeviceSize_)(const void* pLayers, UINT NumLayers);
	DXGID3D10GetLayeredDeviceSize_ DXGID3D10GetLayeredDeviceSize_P{0};

	EXPORT size_t DXGID3D10GetLayeredDeviceSize(const void* pLayers, UINT NumLayers)
	{
		return DXGID3D10GetLayeredDeviceSize_P(pLayers, NumLayers);
	}

	typedef HRESULT(__stdcall* DXGID3D10RegisterLayers_)(const void* pLayers, UINT NumLayers);
	DXGID3D10RegisterLayers_ DXGID3D10RegisterLayers_P{0};

	EXPORT HRESULT DXGID3D10RegisterLayers(const void* pLayers, UINT NumLayers)
	{
		return DXGID3D10RegisterLayers_P(pLayers, NumLayers);
	}

	typedef HRESULT(__stdcall* DXGIDeclareAdapterRemovalSupport_)();
	DXGIDeclareAdapterRemovalSupport_ DXGIDeclareAdapterRemovalSupport_P{0};

	EXPORT HRESULT DXGIDeclareAdapterRemovalSupport()
	{
		return DXGIDeclareAdapterRemovalSupport_P();
	}

	typedef HRESULT(__stdcall* DXGIGetDebugInterface1_)(UINT Flags, REFIID riid, void** pDebug);
	DXGIGetDebugInterface1_ DXGIGetDebugInterface1_P{0};

	EXPORT HRESULT DXGIGetDebugInterface1(UINT Flags, REFIID riid, void** pDebug)
	{
		return DXGIGetDebugInterface1_P(Flags, riid, pDebug);
	}

	typedef HRESULT(__stdcall* DXGIReportAdapterConfiguration_)(DWORD Unknown);
	DXGIReportAdapterConfiguration_ DXGIReportAdapterConfiguration_P{0};

	EXPORT HRESULT DXGIReportAdapterConfiguration(DWORD Unknown)
	{
		return DXGIReportAdapterConfiguration_P(Unknown);
	}

	const static std::vector<Proxy::ProxyCallStructure> Table =
	{
		{(void**)&ApplyCompatResolutionQuirking_P, "ApplyCompatResolutionQuirking"},
		{(void**)&CompatString_P, "CompatString"},
		{(void**)&CompatValue_P, "CompatValue"},
		{(void**)&DXGIDumpJournal_P, "DXGIDumpJournal"},
		{(void**)&CreateDXGIFactory_P, "CreateDXGIFactory"},
		{(void**)&CreateDXGIFactory1_P, "CreateDXGIFactory1"},
		{(void**)&CreateDXGIFactory2_P, "CreateDXGIFactory2"},
		{(void**)&DXGID3D10CreateDevice_P, "DXGID3D10CreateDevice"},
		{(void**)&DXGID3D10CreateLayeredDevice_P, "DXGID3D10CreateLayeredDevice"},
		{(void**)&DXGID3D10GetLayeredDeviceSize_P, "DXGID3D10GetLayeredDeviceSize"},
		{(void**)&DXGID3D10RegisterLayers_P, "DXGID3D10RegisterLayers"},	
		{(void**)&DXGIDeclareAdapterRemovalSupport_P, "DXGIDeclareAdapterRemovalSupport"},
		{(void**)&DXGIGetDebugInterface1_P, "DXGIGetDebugInterface1"},
		{(void**)&DXGIReportAdapterConfiguration_P, "DXGIReportAdapterConfiguration"},
	};
}

Proxy::ProxyStructure P_DXGI{"dxgi.dll", DXGI::Table};

namespace XAPOFX1_5
{
	typedef HRESULT(__stdcall* CreateFX_)(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize);
	CreateFX_ CreateFX_P{0};

	EXPORT HRESULT CreateFX(REFCLSID clsid, IUnknown** pEffect, const void* pInitDat, UINT32 InitDataByteSize)
	{
		return CreateFX_P(clsid, pEffect, pInitDat, InitDataByteSize);
	}

	const static std::vector<Proxy::ProxyCallStructure> Table =
	{
		{(void**)&CreateFX_P, "CreateFX"}
	};
}

Proxy::ProxyStructure P_XAPOFX1_5{"XAPOFX1_5.dll", XAPOFX1_5::Table};

namespace UxTheme
{
	typedef HRESULT(__stdcall* SetWindowTheme_)(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList);
	SetWindowTheme_ SetWindowTheme_P{0};

	EXPORT HRESULT SetWindowTheme(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList)
	{
		return SetWindowTheme_P(hwnd, pszSubAppName, pszSubIdList);
	}

	const static std::vector<Proxy::ProxyCallStructure> Table =
	{
		{(void**)&SetWindowTheme_P, "SetWindowTheme"}
	};
}

Proxy::ProxyStructure P_UxTheme{"UxTheme.dll", UxTheme::Table};

namespace Shell32
{
	typedef HINSTANCE(__stdcall* ShellExecute_)(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd);
	ShellExecute_ ShellExecute_P{0};

	EXPORT HINSTANCE __stdcall ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)
	{ 
		return ShellExecute_P(hwnd, lpOperation, lpFile, lpParameters, lpDirectory, nShowCmd); 
	}

	const static std::vector<Proxy::ProxyCallStructure> Table =
	{
		{(void**)&ShellExecute_P, "ShellExecuteA"}
	};
}

Proxy::ProxyStructure P_Shell32{"shell32.dll", Shell32::Table};

namespace SHLWAPI
{
	typedef LPCWSTR(__stdcall* PathFindFileNameW_)(__in LPCWSTR pszPath);
	PathFindFileNameW_ PathFindFileNameW_P{0};

	EXPORT LPCWSTR PathFindFileNameW(__in LPCWSTR pszPath)
	{
		return PathFindFileNameW_P(pszPath);
	}

	const static std::vector<Proxy::ProxyCallStructure> Table =
	{
		{(void**)&PathFindFileNameW_P, "PathFindFileNameW"}
	};
}

Proxy::ProxyStructure P_SHLWAPI{"shlwapi.dll", SHLWAPI::Table};

namespace JVMVerify
{
    typedef char(__stdcall* VerifyClassForMajorVersion_)(__int64 env, __int64 cb, __int64 message_buffer, int buffer_length, int major_version);
    VerifyClassForMajorVersion_ VerifyClassForMajorVersion_P{0};

    EXPORT char VerifyClassForMajorVersion(__int64 env, __int64 cb, __int64 message_buffer, int buffer_length, int major_version)
    {
        return VerifyClassForMajorVersion_P(env, cb, message_buffer, buffer_length, major_version);
    }

    const static std::vector<Proxy::ProxyCallStructure> Table =
    {
        {(void**)&VerifyClassForMajorVersion_P, "VerifyClassForMajorVersion"}
    };
}

Proxy::ProxyStructure P_JVMVerify{"verify.dll", JVMVerify::Table};

std::vector<Proxy::ProxyStructure> ProxyTypes::Proxies =
{
	P_DXGI,
	P_XAPOFX1_5,
	P_UxTheme,
	P_Shell32,
	P_SHLWAPI,
	P_JVMVerify,
};