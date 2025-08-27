#include "Aeyth8/Global.hpp"
#include "Aeyth8/Logic/AJB.h"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/CommandLine/CMLA.h"

#ifdef PROXY
#include "Aeyth8/Proxy8/ProxyTypes.h"
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;


// Called immediately before WinMainCRTStartup (entry), runs in-thread of entry to execute code before anything else begins.
// 0x20773C4
static void PreInit()
{
	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("AJB-Win64-Shipping.exe");

	LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	//CommandLineArguments::ParseCommandLine(GetCommandLineW());

	AJB::Init_Hooks();
}

static void Init() {

	AJB::Init_Engine();
	
	while (UWorld() == nullptr)
	{
		Sleep(2000);
	}

	AJB::Init_Vars(UWorld());

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole();
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH) 
	{
		AJB::PCPortLib = hModule;

		Global::InitLog();
		PreInit();

#ifdef PROXY
		if (Proxy::Attach(hModule))
#endif
			ConstructThread(Init);
	}
	return 1;
}