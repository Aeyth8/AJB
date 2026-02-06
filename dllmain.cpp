#include "Aeyth8/Global.hpp"
#include "Aeyth8/Logic/AJB.h"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/CmdArgs/CommandLineArgs.h"

#ifdef PROXY
#include "Aeyth8/Proxy8/ProxyTypes.h"
#endif

#include "Aeyth8/Offsets.h"
#include "Aeyth8/Proxy8/Entry/ProxyEntry.hpp"

#include <intrin.h>
#include <format>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;


static long __stdcall VEH_Filter(PEXCEPTION_POINTERS Error)
{
	LogA("VEH", std::format("Error: {} | Error Address: {} | Caller Address: {} ", HexToString(Error->ExceptionRecord->ExceptionCode), Error->ExceptionRecord->ExceptionAddress, HexToString((ull)_ReturnAddress())));
	
	return 0;
}

// Called immediately before WinMainCRTStartup (entry), runs in-thread of entry to execute code before anything else begins.
// 0x20773C4
static void PreInit()
{
	// Implementing a new system with an old one is going to take some time...
	GBA = Proxy8::GBA;

	CommandLineArguments::ParseCommandLine(GetCommandLineW(), CMLA::GlobalCommandLineArgs, CMLA::GlobalCommandLine);

	if (CMLA::WinCSOut.GetAsBool()) LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	AJB::Init_Hooks();
}

static void Init() {

	AJB::Init_Engine();
	
	while (!GWorld)
	{
		Sleep(100);
	}

	AJB::Init_Vars();

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole(SDK::FString(CMLA::ConsoleKey.GetArgumentAsString()));
}


// The first entry point called within this DLL is in Aeyth8/Proxy8/Entry/Entry.asm
// ProxyEntrypoint() -> DllMain() -> ConstructThread(Init) -> Return To Game Thread
//							    \		    			 \
//							   PreInit()				Init() -> DLL Thread
int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH) 
	{
		AJB::PCPortLib = hModule;
		//AddVectoredExceptionHandler(1, VEH_Filter);

		Global::InitLog();
		PreInit();

#ifdef PROXY
		if (!CMLA::InjectDLL.GetAsBool()) if (Proxy::Attach(hModule))
#endif
			ConstructThread(Init);
	}
	return 1;
}