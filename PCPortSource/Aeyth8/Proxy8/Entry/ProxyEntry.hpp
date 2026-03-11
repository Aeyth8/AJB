#pragma once
#if defined _M_X64
typedef unsigned long long maxword;
#elif defined _M_IX86
typedef unsigned long maxword;
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

/*

	This is an optional but highly recommended entrypoint, allowing you to easily extract additional information about the program without making any function calls.
	Simply include Entry.asm and this header into your project, then set the linker to use the custom entrypoint. (In Proxy8 this is configured by default)

	**** If you are using MSVC, you MUST enable MASM ****
	* Right click your project name on the Solution Explorer
	* Move your mouse down until you find Build Dependencies -> Build Customizations
	* Check the box that reads ".masm(.targets, .props)" and press OK.

	* Entry.asm heavily utilizes macros to allow one-file compatibility for x86 and x64.
	
	* If you have any issues compiling the entrypoint, make sure that you define the macro "B64" when compiling for x64.
	* You may need to set additional command line options for the assembly file, just add "/D B64" without quotes. (right click Entry.asm, Properties -> Configuration Properties -> Microsoft Macro Assembler -> Command Line -> Additional Options "/D B64" (NO QUOTES)
	* I had to do this for compiling Proxy8 on MSVC 2022
	
	* When compiling for x86, if you get the /SAFESEH error, simply go to Linker -> Advanced -> Image Has Safe Exception Handlers = /SAFESEH:NO

*/

namespace Proxy8
{
	extern "C" maxword NTDLL;	// Base address of NTDLL.
	extern "C" maxword HOST;	// Base address of the DLL we are running.
	extern "C" maxword GBA;		// [Global Base Address] The main executable we are latched onto.	
	extern "C" maxword PEB;		// Process Environment Block.

	__forceinline bool IsInitialized()
	{
		return NTDLL != 0 && GBA != 0 && PEB != 0;
	}
}