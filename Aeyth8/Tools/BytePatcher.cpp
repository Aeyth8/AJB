#include "BytePatcher.h"
#include <Windows.h>
#include "../Global.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

unsigned long long BytePatcher::GetProtectionStatus(unsigned long long& StartingAddress)
{
	MEMORY_BASIC_INFORMATION TempInfo;
	VirtualQuery((void*)StartingAddress, &TempInfo, sizeof(TempInfo));

	return TempInfo.Protect;
}

BytePatcher::EProtectionStatus BytePatcher::EGetProtectionStatus(unsigned long long& StartingAddress)
{
	return (EProtectionStatus)(BytePatcher::GetProtectionStatus(StartingAddress) & 0xFF);
}

const char* BytePatcher::sGetProtectionStatus(unsigned long long& StartingAddress)
{
	unsigned char Index{0};
	unsigned char Flag = BytePatcher::EGetProtectionStatus(StartingAddress);
	while (Flag >>= 1)
	{
		++Index;
	}
	return BytePatcher::ProtectionStatusString[Index];
}

BytePatcher::EResult BytePatcher::SetProtectionStatus(unsigned long long& StartingAddress, size_t Size, const unsigned long long& NewStatus)
{
	DWORD OldProtect{0};
	if (!VirtualProtect((void*)StartingAddress, Size, static_cast<DWORD>(NewStatus), &OldProtect))
	{
		return FAILED;
	}

	return BytePatcher::GetProtectionStatus(StartingAddress) != OldProtect ? CHANGED : UNCHANGED;
}

//BytePatcher::EResult BytePatcher::SetProtectionStatus(unsigned long long& StartingAddress, size_t Size, const EProtectionStatus& NewStatus)
//{
//	return BytePatcher::SetProtectionStatus(StartingAddress, Size, NewStatus);
//}

void* __cdecl BytePatcher::MemCopy(void* _Dst, void const* _Src, size_t _Size)
{
	return memcpy(_Dst, _Src, _Size);
}


bool BytePatcher::ReplaceByte(unsigned long long& StartingAddress, const unsigned char& ReplacementByte, bool bCheckProtection)
{

}

bool BytePatcher::ReplaceBytes(unsigned long long& StartingAddress, const unsigned char* ReplacementBytes, size_t Size, bool bRestoreProtection)
{
	unsigned long long OriginalProtection = GetProtectionStatus(StartingAddress);

	if (!bResult(SetProtectionStatus(StartingAddress, Size, EXECUTE_READWRITE)))
	{
		return false;
	}

	MemCopy((void*)StartingAddress, ReplacementBytes, Size);
	A8CL::Global::LogA("BytePatcher", sGetProtectionStatus(StartingAddress));
	if (bRestoreProtection)
	{
		return bResult(SetProtectionStatus(StartingAddress, Size, OriginalProtection));
	}

	return true;
}