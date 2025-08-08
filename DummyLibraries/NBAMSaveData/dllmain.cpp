#ifndef EXPORT
#define EXPORT extern "C" __declspec(dllexport)
#endif

#ifndef RETN
#define RETN return;
#endif
#ifndef RETNZ
#define RETNZ return 0;
#endif

EXPORT __int64 __fastcall nbamSavdatDelete(void *Block) { RETNZ }
EXPORT __int64 __fastcall nbamSavdatExit(__int64 a1) { RETNZ }
EXPORT __int64 nbamSavdatGetAPIVersion() { return 258LL; }
EXPORT __int64 nbamSavdatGetCtrlSize() { return 480LL; }
EXPORT __int64 nbamSavdatGetLibVersion() { return 261LL; }
EXPORT __int64 __fastcall nbamSavdatInit(char *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7,  __int64 a8, int a9, int a10) { RETNZ }
EXPORT char *__fastcall nbamSavdatNew(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, int a8, int a9) { RETNZ }
EXPORT char *__fastcall nbamSavdatNewA(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6) { RETNZ }
EXPORT char *__fastcall nbamSavdatNewW(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6) { RETNZ }
EXPORT __int64 __fastcall nbamSavdatRead(char *a1, __int64 a2, unsigned __int64 a3, __int64 *a4, long *a5) { RETNZ }
EXPORT __int64 __fastcall nbamSavdatSetLogFunc(__int64 a1, __int64 a2, __int64 a3, int a4) { RETNZ }
EXPORT __int64 __fastcall nbamSavdatSetLogLevel(long *a1, int a2) { RETNZ }
EXPORT __int64 __fastcall nbamSavdatUnlink(__int64 a1) { RETNZ }
EXPORT __int64 __fastcall nbamSavdatWrite(__int64 a1, void *a2, unsigned __int64 a3, int *a4) { RETNZ }

int __stdcall DllMain(void* hModule, unsigned long ulReasonForCall, void* lpReserved) {
	return 1;
}

