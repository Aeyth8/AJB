#ifndef EXPORT
#define EXPORT extern "C" __declspec(dllexport)
#endif

#ifndef RETN
#define RETN return;
#endif
#ifndef RETNZ
#define RETNZ return 0;
#endif

EXPORT __int64 __fastcall nbamUsbFinderGetSerialNumber(int a1, __int64 a2) { RETNZ }
EXPORT __int64 nbamUsbFinderInitialize() { RETNZ }
EXPORT __int64 __fastcall nbamUsbFinderRead(unsigned char a1, unsigned long* a2) { RETNZ }
EXPORT __int64 nbamUsbFinderRelease() { RETNZ }
EXPORT __int64 __fastcall nbamUsbFinderWrite(unsigned char a1, int a2) { RETNZ }
EXPORT __int64* __fastcall nbamUsbFinder_GetInformation(int a1, int a2, __int64 a3, __int16 a4, void* a5) { RETNZ }

int __stdcall DllMain(void* hModule, unsigned long ulReasonForCall, void* lpReserved) {
	return 1;
}

