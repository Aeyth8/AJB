#include "Aeyth8/Global.hpp"
#include "Aeyth8/Logic/AJB.h"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/CmdArgs/CommandLineArgs.h"

#ifdef PROXY
#include "Aeyth8/Proxy8/ProxyTypes.h"
#endif

#include "Aeyth8/OffsetBase.h"
#include "Aeyth8/A8CL/CPUReg/CPUReg.h"
#include <format>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

extern "C" int __stdcall _DllMainCRTStartup(HMODULE, DWORD, LPVOID);


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;

static ull GBA_NtDll{0};


static long __stdcall VEH_Filter(PEXCEPTION_POINTERS Error)
{
	LogA("VEH", std::format("Error: {} | Error Address: {} | Caller Address: {} ", HexToString(Error->ExceptionRecord->ExceptionCode), Error->ExceptionRecord->ExceptionAddress, HexToString(CPUReg::GetRegisterValue(rax))));
	
	return 0;
}

// The first entry point called within this DLL.
// DllEntryPoint() -> DllMain()			ConstructThread(Init) -> Return To Game Thread
//							  \		   /					\
//							   PreInit()					Init() -> DLL Thread
int __stdcall DllEntryPoint(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	GBA_NtDll = OFFSET::GetBaseOfImage(*reinterpret_cast<ull*>(reinterpret_cast<BYTE*>(CPUReg::GetRegisterValue(rsp)) + 48));
	return _DllMainCRTStartup(hModule, ulReasonForCall, lpReserved);
}

// Called immediately before WinMainCRTStartup (entry), runs in-thread of entry to execute code before anything else begins.
// 0x20773C4
static void PreInit()
{
	LogA("rax", HexToString(CPUReg::GetRegisterValue(rax)));
	LogA("deref rbx", HexToString(CPUReg::GetDereferencedValue(rbx)));
	LogA("ntdll", HexToString(GBA_NtDll));

	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("AJB-Win64-Shipping.exe");

	CommandLineArguments::ParseCommandLine(GetCommandLineW(), CMLA::GlobalCommandLineArgs, CMLA::GlobalCommandLine);

	if (CMLA::WinCSOut.GetAsBool()) LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	AJB::Init_Hooks();
}

static void Init() {

	AJB::Init_Engine();
	
	SDK::UWorld* GWorld{nullptr};
	while ((GWorld = AJB::GWorld()) == nullptr)
	{
		Sleep(100);
	}

	AJB::Init_Vars(GWorld);

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole(SDK::FString(CMLA::ConsoleKey.GetArgumentAsString()));
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH) 
	{
		AJB::PCPortLib = hModule;
		//AddVectoredExceptionHandler(1, VEH_Filter);

		Global::InitLog();
		PreInit();

#ifdef PROXY
		if (Proxy::Attach(hModule))
#endif
			ConstructThread(Init);
	}
	return 1;
}