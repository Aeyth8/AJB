#ifndef EXPORT
#define EXPORT extern "C" __declspec(dllexport)
#endif

#ifndef RETN
#define RETN return;
#endif
#ifndef RETNZ
#define RETNZ return 0;
#endif

EXPORT __int64 ThincaPaymentGetVersion() { return 17042176LL; } // No clue what this number represents but this is literally the whole function raw, stupid...
EXPORT __int64 __fastcall ThincaPaymentGetInstance(int a1) { RETNZ }

int __stdcall DllMain(void* hModule, unsigned long ulReasonForCall, void* lpReserved) {
	return 1;
}

