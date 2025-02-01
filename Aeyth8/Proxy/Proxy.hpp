#pragma once
#include "../../pch.h"
#define EXPORT __declspec(dllexport)
#define C_EXPORT extern "C" inline EXPORT 

/*

		Currently unused and probably not needed.

*/

class Proxy
{
public:
		class USB_Device_Finder_Library // The official copyrighted name.
		{
		public:
			inline EXPORT DWORD nbamUsbFinderGetSerialNumber();
		};













};

/*

	Class and function declarations above

	Function definitions below (To prevent name mangling)

*/

C_EXPORT DWORD Proxy::USB_Device_Finder_Library::nbamUsbFinderGetSerialNumber() { COUT << "PROXY WAS CALLED"; return 85146374; }
C_EXPORT __int64 __fastcall nbamUsbFinderGetSerialNumber(int Parm1, __int64 Parm2) { return 1; }
C_EXPORT __int64 nbamUsbFinderInitialize() { return 0; }
C_EXPORT __int64 nbamUsbFinderRead() { return 0; }
C_EXPORT __int64 nbamUsbFinderRelease() { return 0; }
C_EXPORT __int64 nbamUsbFinderWrite() { return 0; }
C_EXPORT __int64 nbamUsbFinder_GetInformation() { return 0; }