#pragma once
#include <Windows.h>


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/


// Dynamic memory byte-patching, prevents modification of the real binary.
//class BytePatch1
//{
//	// Designed so you can use a lazy if-statement. 
//	enum Status { FAILED, SUCCESSFUL , UNCHANGED};
//
//
//	/*
//			Virtual Protect Wrappers	
//	*/
//
//	// Remove memory protection at a certain region
//	static Status Unprotect(void* StartingAddress, size_t Length);
//
//	// Add memory protection at a certain region
//	static Status Protect(void* StartingAddress, size_t Length);
//
//
//
//
//
//
//	static Status SwapByte();
//
//
//
//
//
//
//
//
//
//
//
//};


// VERY VERY UNFINISHED PROTOTYPE

// Dynamic memory byte-patching, prevents modification of the real binary.
class BytePatch
{
public:

	struct MemoryStates
	{
		const DWORD Original;
		DWORD Previous;
	};

private:

	MemoryStates MemoryState;
	MEMORY_BASIC_INFORMATION MemoryInfo;
	
public:

	const uintptr_t Address;

	// Default constructor.
	BytePatch(const uintptr_t& ByteAddress);
	~BytePatch();

	MEMORY_BASIC_INFORMATION& GetInfo();
	MemoryStates& GetState();


	/*
			Virtual Protect Wrappers
	*/

	// Remove memory protection at a certain region
	bool Unprotect(size_t Length = 0);

	// Add memory protection at a certain region
	bool Protect(size_t Length = 0);

	bool SetOriginalProtection(size_t Length = 0);

	bool SetProtection(const DWORD& NewRule, size_t Length = 0);

	bool Replace(const unsigned char& ReplacementByte);

	template <size_t Size>
	bool Replace(const unsigned char (&ReplacementBytes)[Size])
	{
		if (!this->Unprotect(Size)) return false;

		memcpy((void*)this->Address, ReplacementBytes, Size);

		if (!this->Protect(Size)) return false;

		return true;
	}

};