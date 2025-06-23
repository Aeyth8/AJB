#include "BytePatch.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/




/*
		Private
*/




/*
		Public
*/




BytePatch::BytePatch(const uintptr_t& ByteAddress)
	: Address(ByteAddress), MemoryInfo{}, MemoryState{this->GetInfo().Protect, 0}
{};

BytePatch::~BytePatch()
{
	if (this->GetInfo().Protect != this->MemoryState.Original)
	{
		this->SetProtection(MemoryState.Original, sizeof(Address));
	}
}

MEMORY_BASIC_INFORMATION& BytePatch::GetInfo() 
{
	VirtualQuery((void*)this->Address, &this->MemoryInfo, sizeof(MemoryInfo));
	return this->MemoryInfo;
}

BytePatch::MemoryStates& BytePatch::GetState()
{
	return this->MemoryState;
}

bool BytePatch::Unprotect(size_t Length)
{
	return this->SetProtection(PAGE_EXECUTE_READWRITE, Length);
}

bool BytePatch::Protect(size_t Length)
{
	return this->SetProtection(PAGE_EXECUTE, Length);
}

bool BytePatch::SetOriginalProtection(size_t Length)
{
	return this->SetProtection(this->MemoryState.Original, 0);
}

bool BytePatch::SetProtection(const DWORD& NewRule, size_t Length)
{
	if (Length == 0) Length = sizeof(this->Address);
	return VirtualProtect((void*)this->Address, Length, NewRule, &this->MemoryState.Previous);
}

bool BytePatch::Replace(const unsigned char& ReplacementByte)
{
	if (!this->Unprotect(1)) return false;

	memcpy((void*)this->Address, &ReplacementByte, 1);

	if (!this->Protect(1)) return false;

	return true;
}
