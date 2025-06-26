#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/


// Dynamic memory byte-patching, prevents modification of the real binary.
class BytePatcher
{

public:

	// Windows memory protection bit flags.
	enum EProtectionStatus : unsigned char
	{
		NOACCESS = 0x01,
		READONLY = 0x02,
		READWRITE = 0x04,
		WRITECOPY = 0x08,
		EXECUTE = 0x10,
		EXECUTE_READ = 0x20,
		EXECUTE_READWRITE = 0x40,
		EXECUTE_WRITECOPY = 0x80
	};

	constexpr static const char* ProtectionStatusString[] = {"NOACCESS", "READONLY", "READWRITE",  "WRITECOPY", "EXECUTE", "EXECUTE_READ", "EXECUTE_READWRITE", "EXECUTE_WRITECOPY"};

	enum EResult : unsigned char
	{
		FAILED, 
		UNCHANGED, 
		CHANGED
	};

	inline static bool bResult(const EResult& Result)
	{
		return Result != FAILED;
	}


	/*
			Virtual Protect Wrappers
	*/

	static unsigned long GetProtectionStatus(unsigned long long& StartingAddress);
	static EProtectionStatus EGetProtectionStatus(unsigned long long& StartingAddress);
	static const char* sGetProtectionStatus(unsigned long long& StartingAddress);

	static EResult SetProtectionStatus(unsigned long long& StartingAddress, size_t Size, const unsigned long& NewStatus);

	static void* __cdecl MemCopy(void* _Dst, void const* _Src, size_t _Size);

	/*
			Byte Patching
	*/

	static bool ReplaceByte(unsigned long long& StartingAddress, const unsigned char& ReplacementByte, bool bRestoreProtection = true);

	static bool ReplaceBytes(unsigned long long& StartingAddress, const unsigned char* ReplacementBytes, size_t Size, bool bRestoreProtection = true);

	template <size_t Size>
	inline static bool ReplaceBytes(unsigned long long& StartingAddress, const unsigned char(&ReplacementBytes)[Size], bool bRestoreProtection = true)
	{
		return (ReplaceBytes(StartingAddress, ReplacementBytes, Size, bRestoreProtection));
	}

};