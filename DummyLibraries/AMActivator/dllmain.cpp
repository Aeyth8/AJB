#ifndef EXPORT
#define EXPORT extern "C" __declspec(dllexport)
#endif

#ifndef RETN
#define RETN return;
#endif
#ifndef RETNZ
#define RETNZ return 0;
#endif

EXPORT char __fastcall AMActivator_ActivateOneTimeKey(__int64 a1) { RETNZ }
EXPORT char __fastcall AMActivator_AllClear(__int64 a1) { RETNZ }
EXPORT char __fastcall AMActivator_BitLockerLock(__int64 a1) { RETNZ }
EXPORT char __fastcall AMActivator_BitLockerUnlock(__int64 a1) { RETNZ }
EXPORT __int64* AMActivator_Create() { RETNZ }
EXPORT void __fastcall AMActivator_Destroy(char* Block) { RETN }
EXPORT char __fastcall AMActivator_EnableSignatureReissue(__int64 a1) { RETNZ }
EXPORT __int64 __fastcall AMActivator_GetOneTimeKey(__int64 a1) { RETNZ }
EXPORT __int64 __fastcall AMActivator_GetOneTimeKeyExpiration(__int64 a1) { RETNZ }
EXPORT __int64 __fastcall AMActivator_GetOneTimeKeyLastStatus(__int64 a1) { RETNZ }
EXPORT __int64 __fastcall AMActivator_GetSignatureGeneration(__int64 a1) { RETNZ }
EXPORT __int64 __fastcall AMActivator_GetSignatureLastStatus(__int64 a1) { RETNZ }
EXPORT char __fastcall AMActivator_IsBusy(__int64 a1) { RETNZ }
EXPORT void __fastcall AMActivator_OverrideUSBReadFunction(__int64 a1, __int64 a2, __int64 a3) { RETN }
EXPORT void __fastcall AMActivator_OverrideUSBWriteFunction(__int64 a1, __int64 a2, __int64 a3) { RETN }
EXPORT char __fastcall AMActivator_RequestOneTimeKey(__int64 a1) { RETNZ }
EXPORT char __fastcall AMActivator_RequestSignature(__int64 a1) { RETNZ }
EXPORT char __fastcall AMActivator_Restore(__int64 a1) { RETNZ }
EXPORT void __fastcall AMActivator_SetDevelopmentMode(__int64 a1) { RETN }
EXPORT void** __fastcall AMActivator_SetUSBBitLockerPassword(__int64 a1, void* a2, unsigned long long a3) { RETNZ }
EXPORT void** __fastcall AMActivator_SetUSBProductID(__int64 a1, void* a2, unsigned long long a3) { RETNZ }
EXPORT void** __fastcall AMActivator_SetUSBSerialID(__int64 a1, void* a2, unsigned long long a3) { RETNZ }
EXPORT void** __fastcall AMActivator_SetUSBVendorID(__int64 a1, void* a2, unsigned long long a3) { RETNZ }
EXPORT void __fastcall AMActivator_Update(__int64 a1) { RETN }
EXPORT char __fastcall AMActivator_VerifySignature(__int64 a1) { RETNZ }

int __stdcall DllMain(void* hModule, unsigned long ulReasonForCall, void* lpReserved) {
	return 1;
}

