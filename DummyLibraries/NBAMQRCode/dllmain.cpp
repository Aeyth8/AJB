#ifndef EXPORT
#define EXPORT extern "C" __declspec(dllexport)
#endif

#ifndef RETN
#define RETN return;
#endif
#ifndef RETNZ
#define RETNZ return 0;
#endif

EXPORT __int64 __fastcall nbamQrConvertYUVtoRGB(char* a1, __int64 a2, int a3, int a4, int a5, __int64 a6) { RETNZ }
EXPORT __int64 __fastcall nbamQrDecode(__int64 a1, __int64 a2, __int64 a3) { RETNZ }
EXPORT __int64 __fastcall nbamQrEncode(__int64 a1, __int64 a2) { RETNZ }
EXPORT __int64 __fastcall nbamQrGetConvertedRGBBytes(int a1, int a2) { RETNZ }
EXPORT __int64 __fastcall nbamQrGetQrImageSize(__int64 a1, __int64 a2) { RETNZ }
EXPORT __int64 __fastcall nbamQrInitialize(__int64* a1) { RETNZ }
EXPORT __int64 __fastcall nbamQrTerminate(void* a1) { RETNZ }


int __stdcall DllMain(void* hModule, unsigned long ulReasonForCall, void* lpReserved) {
	return 1;
}

