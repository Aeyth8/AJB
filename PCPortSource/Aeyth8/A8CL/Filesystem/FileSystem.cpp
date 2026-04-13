#include "FileSystem.h"
#include "../NTSurfer/NTSurfer.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2026 Aeyth8

*/

/*
		FSHandle
*/

maxword A8CL::FSHandle::NT_CLOSE{0};
maxword A8CL::FSHandle::NT_CREATE_FILE{0};

A8CL::NT_STATUS A8CL::FSHandle::LAST_STATUS{0};

constexpr A8CL::FSHandle::FSHandle(class FileSystem& FS) : NTHandle(0)
{
	if (NT_CLOSE == 0) NT_CLOSE = NTS::NTSurfer::FindExportAddress(FS.Offsets.NTDLL, "NtClose", true);
	if (NT_CREATE_FILE == 0) NT_CREATE_FILE = NTS::NTSurfer::FindExportAddress(FS.Offsets.NTDLL, "NtCreateFile", true);
}

A8CL::NT_STATUS A8CL::FSHandle::INTERNAL_Close(void* Handle)
{
	if (NT_CLOSE != 0) return NTS::Call<NT_STATUS(__stdcall*)(void*)>(NT_CLOSE)(Handle);
}


void A8CL::FileSystem::InitializeHostPath(maxword NTDLL, maxword GBA, maxword ProcessEnvironmentBlock)
{
	// Just converts the address into a usable C++ struct, this will be compiler inlined with raw address indexing.
	NTS::PPEB PEB = reinterpret_cast<NTS::PPEB>(ProcessEnvironmentBlock);

	NTS::PLIST_ENTRY Entry = PEB->Ldr->InMemoryOrderModuleList.Flink;
	NTS::PLDR_DATA_TABLE_ENTRY Module = nullptr;

	// Scrolls through the loader linked list to find our DLL's path.
	while (Entry != &PEB->Ldr->InMemoryOrderModuleList)
	{
		Module = CONTAINING_RECORD(Entry, NTS::LDR_DATA_TABLE_ENTRY, InMemoryOrderLinks);

		if (!Module)
		{
			return;
		}

		if ((maxword)Module->DllBase == GBA)
		{
			CopyToBuffer<wchar_t>(this->HostPathRaw, Module->FullDllName.Buffer);
			this->bIsHostPathInitialized = true;
			break;
		}

		Entry = Entry->Flink;
	}

	__assume(Module != nullptr); // SHUTUP

	// Finds the last backslash in the path to extract both the raw path and name of the host.
	for (dword i = Module->FullDllName.Length / sizeof(wchar_t); i > 0; --i)
	{
		if (this->HostPathRaw[i] == L'\\')
		{
			this->HostName = ++i;
			break;
		}
	}
}

namespace TD
{
    typedef A8CL::NT_STATUS(__stdcall* T_NtClose)(void* Handle);
    typedef A8CL::NT_STATUS(__stdcall* T_NtOpenFile)(void** FileHandle, dword DesiredAccess, NTS::OBJECT_ATTRIBUTES* ObjectAttributes, NTS::PIO_STATUS_BLOCK IoStatusBlock, dword ShareAccess, dword OpenOptions);
    typedef A8CL::NT_STATUS(__stdcall* T_NtCreateFile)(void** FileHandle, dword DesiredAccess, NTS::OBJECT_ATTRIBUTES* ObjectAttributes, NTS::PIO_STATUS_BLOCK IoStatusBlock, NTS::LARGE_INTEGER* AllocationSize, dword FileAttributes, dword ShareAccess, dword CreateDisposition, dword CreateOptions, void* EaBuffer, dword EaLength);
}

A8CL::FSHandle A8CL::FileSystem::CreateDirectory(FSHandle* Handle, const wchar_t* FolderName, bool bUseIfAlreadyExists)
{
	const bool bHasParent = Handle != nullptr;
	FSHandle Return{*this};

	NTS::IO_STATUS_BLOCK FileStatus{};
	NTS::OBJECT_ATTRIBUTES FileAttributePath{};
	FileAttributePath.Attributes = 64L;
	
	wchar_t FinalFilePath[260]{L"\\??\\"};

	if (bHasParent)
	{
		CStr::CopyString(FinalFilePath, FolderName);
		FileAttributePath.RootDirectory = Handle->NTHandle;
	}
	else
	{
		CStr::AppendString(FinalFilePath, 260, this->HostPathRaw, this->HostName);
		CStr::AppendString(FinalFilePath, FolderName);
	}

	NTS::NTSurfer::UNICODE_STRING U_FinalFilePath(FinalFilePath);
	FileAttributePath.ObjectName = (NTS::PUNICODE_STRING)&U_FinalFilePath;

	FSHandle::LAST_STATUS = NTS::Call<TD::T_NtCreateFile>(FSHandle::NT_CREATE_FILE)(&Return.NTHandle, NTS::GENERIC_READ | NTS::GENERIC_WRITE | NTS::SYNCHRONIZE, &FileAttributePath, &FileStatus, 0, 0x10, (0x1 | 0x2), (bUseIfAlreadyExists ? 0x3 : 0x2), (0x1 | 0x20), 0, 0);

	return Return;
}

A8CL::FSHandle A8CL::FileSystem::CreateFile(FSHandle* Handle, const wchar_t* FileName, bool bOverwriteExisting)
{


	FSHandle::LAST_STATUS;
}

A8CL::FSHandle A8CL::FileSystem::CreateFile(const wchar_t* FileName, bool bOverwriteExisting)
{
	FSHandle Return{*this};
}
