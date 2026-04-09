#include "NTSurfer.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

Library to access the WinAPI without using the WinAPI library. | C++14

*/

maxword NTS::NTSurfer::FindExportAddress(const maxword ImageBase, const char* FunctionName, bool bReturnPlusBase)
{
	IMAGE_EXPORT_DIRECTORY* Directory = GetExportDirectory(ImageBase);
    dword* AddressOfNames = reinterpret_cast<dword*>(ImageBase + Directory->AddressOfNames);
    dword* AddressOfFunctions = reinterpret_cast<dword*>(ImageBase + Directory->AddressOfFunctions);
    word* AddressOfNameOrdinals = reinterpret_cast<word*>(ImageBase + Directory->AddressOfNameOrdinals);
        
    dword NameStringSize{0};        
    while (FunctionName[NameStringSize]) NameStringSize++;

    for (dword i{0}; i < Directory->NumberOfNames; ++i)
    {
        const char* Name = reinterpret_cast<const char*>(ImageBase + AddressOfNames[i]);

        bool bMatches{true};

        dword EntryNameStringSize{0};            
        while (Name[EntryNameStringSize])
        {
            if (Name[EntryNameStringSize] != FunctionName[EntryNameStringSize])
            {
                bMatches = false;
                break;
            }

            EntryNameStringSize++;
        }

        if (!bMatches || EntryNameStringSize != NameStringSize) continue;

        return bReturnPlusBase ? ImageBase + AddressOfFunctions[AddressOfNameOrdinals[i]] : AddressOfFunctions[AddressOfNameOrdinals[i]];
    }

    return 0;
}

template <class Integer = word, class Encoding>
constexpr Integer CharacterLength(const Encoding* String)
{
	if (!String) return 0;

	constexpr Integer Max = Integer(~0) >> (Integer(-1) < Integer(0) ? 1 : 0); // I don't even know what this does except that it grabs the max length the integer type can be
	Integer Length{0};

	while (*String++)
	{
		if (Length >= Max) break;

		++Length;
	}

	return Length;
}

template <class Integer = word, class Encoding>
const Encoding* FindChar(const Encoding* String, const Encoding Character, bool bReverse, Integer StringLen)
{
	if (bReverse)
	{
		for (Integer i{StringLen}; i-- > 0;) if (String[i] == Character) return &String[i];
	}
	else
	{
		for (Integer i{0}; i < StringLen; ++i) if (String[i] == Character) return &String[i];
	}
	return nullptr;
}

template <class Integer = word, class Encoding>
const Encoding* FindChar(const Encoding* String, const Encoding Character, bool bReverse = false)
{
	return FindChar(String, Character, bReverse, CharacterLength<Integer, Encoding>(String));
}

/*template <class Integer = word, class Encoding>
const Encoding* FindString(const Encoding* String, const Encoding* StringToFind, bool bReverse = false)
{
    const Integer StrLen = CharacterLength<Integer, Encoding>(String);

    Integer i = bReverse ? StrLen : 0;
    while (i < StrLen)
    {
        bReverse ? ++i : --i;
        if (!FindChar(String, StringToFind[i], bReverse)) return nullptr;
    }

    return &String[i];
}*/

template <class Integer = word, class Encoding>
const Encoding* FindString(const Encoding* String, const Encoding* StringToFind, bool bReverse = false)
{
    while (*String)
    {
        const Encoding* TempString = String;
        const Encoding* TempFind = StringToFind;

        while (*TempString && *TempFind && *TempString == *TempFind)
        {
            bReverse ? --TempString, --TempFind : ++TempString, ++TempFind;
            if (*TempFind == 0) return TempString;
        }
        
        bReverse ? --String : ++String;
    }

    return nullptr;
}

maxword NTS::NTSurfer::FindDLLAddress(const maxword ProcessEnvironmentBlock, const wchar_t* DLLName, bool bReturnPlusBase)
{
    NTS::PPEB PEB = UsePEB(ProcessEnvironmentBlock);

	NTS::PPEB_LDR_DATA DataTable = PEB->Ldr;
	NTS::PLIST_ENTRY Entry = DataTable->InMemoryOrderModuleList.Flink;

	while (Entry != &DataTable->InMemoryOrderModuleList)
	{
		NTS::LDR_DATA_TABLE_ENTRY* Module = CONTAINING_RECORD(Entry, NTS::LDR_DATA_TABLE_ENTRY, InMemoryOrderLinks);

		if (FindString(Module->FullDllName.Buffer, DLLName))
		{
			return (maxword)Module->DllBase;
		}

		Entry = Entry->Flink;
	}

	return 0;
}

template <typename Name> 
struct GExport
{
    static maxword LibraryBase;

    // You MUST initialize this manually
    static void Init(maxword DLLBase) { if (LibraryBase == 0) LibraryBase = DLLBase; }

    GExport(const char* ExportName)
        : FunctionName(ExportName), FunctionAddress(0)
    {}

    maxword FunctionAddress;
    const char* FunctionName;

    operator maxword ()
    {
        return FunctionAddress == 0 ? FunctionAddress = NTS::NTSurfer::FindExportAddress(LibraryBase, FunctionName) : FunctionAddress;
    }
};

// Dumb way to separate types so that DLL functions can share the same base.
#define GEXPORT(Name) \
struct Name : GExport<Name> { \
    using GExport<Name>::GExport; \
    using GExport<Name>::Init; \
}; \
template <> maxword GExport<Name>::LibraryBase = 0;

GEXPORT(NTExport);
static NTExport NtOpenKey{"NtOpenKey"};
static NTExport NtQueryValueKey{"NtQueryValueKey"};
static NTExport NtCreateKey{"NtCreateKey"};
static NTExport NtSetValueKey{"NtSetValueKey"};
static NTExport NtClose{"NtClose"};
static NTExport NtOpenProcessToken{"NtOpenProcessToken"};
static NTExport NtQueryInformationToken{"NtQueryInformationToken"};
static NTExport RtlConvertSidToUnicodeString{"RtlConvertSidToUnicodeString"};
static NTExport NtCreateFile{"NtCreateFile"};

void* NTS::NTSurfer::GetRegistryKeyUG(maxword NTDLL, const wchar_t* KeyPath, const wchar_t* Key, wchar_t* IOBuffer, maxword IOBufferSize, NTSTATUS& Status, NTS::KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass)
{
    NTExport::Init(NTDLL);

    // Compile time constructors
    NTS::NTSurfer::UNICODE_STRING uKeyPath{KeyPath};
    NTS::NTSurfer::UNICODE_STRING uKey{Key};

    OBJECT_ATTRIBUTES InputObject{(NTS::PUNICODE_STRING)&uKeyPath, 0x00000040L};

    void* OutputKey{0};

    Status = Call<NTS::TD::T_NtOpenKey>(NtOpenKey)(&OutputKey, KEY_READ, &InputObject);
    if (Status < 0) return nullptr;

    byte IOKeyBuffer[520]{0};
    dword ResultLength{0};

    Status = Call<NTS::TD::T_NtQueryValueKey>(NtQueryValueKey)(OutputKey, (NTS::PUNICODE_STRING)&uKey, KeyValueInformationClass, &IOKeyBuffer, sizeof(IOKeyBuffer), &ResultLength);
    if (Status < 0) return nullptr;

    wchar_t* TempPointer = reinterpret_cast<wchar_t*>(reinterpret_cast<PKEY_VALUE_PARTIAL_INFORMATION>(IOKeyBuffer)->Data);

    dword Counter{0};
    while (TempPointer[Counter] && Counter < IOBufferSize)
    {
        IOBuffer[Counter] = TempPointer[Counter];
        Counter++;
    }

    return OutputKey;
}

bool NTS::NTSurfer::GetRegistryKey(maxword NTDLL, const wchar_t* KeyPath, const wchar_t* Key, wchar_t* IOBuffer, maxword IOBufferSize, NTSTATUS& Status, NTS::KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass)
{
    void* OutputKey = GetRegistryKeyUG(NTDLL, KeyPath, Key, IOBuffer, IOBufferSize, Status, KeyValueInformationClass);

    if (OutputKey) {
        Status = Call<NTS::TD::T_NtClose>(NtClose)(OutputKey);
    }
    
    return (Status >= 0);
}

void* NTS::NTSurfer::CreateRegistryKeyUG(maxword NTDLL, const wchar_t* KeyPath, NTSTATUS& Status)
{
    NTExport::Init(NTDLL);

    NTS::NTSurfer::UNICODE_STRING uKeyPath{KeyPath};

    OBJECT_ATTRIBUTES InputObject{(NTS::PUNICODE_STRING)&uKeyPath, 0x00000040L};

    void* OutputKey{0};

    Status = Call<NTS::TD::T_NtCreateKey>(NtCreateKey)(&OutputKey, GENERIC_WRITE, &InputObject, 0, nullptr, REG_OPTION_NON_VOLATILE, nullptr);
    if (Status < 0) return nullptr;

    return OutputKey;
}

bool NTS::NTSurfer::CreateRegistryKey(maxword NTDLL, const wchar_t* KeyPath, NTSTATUS& Status)
{
    void* OutputKey = CreateRegistryKeyUG(NTDLL, KeyPath, Status);

    if (OutputKey) {
        Status = Call<NTS::TD::T_NtClose>(NtClose)(OutputKey);
    }

    return (Status >= 0);
}

void* NTS::NTSurfer::OpenProcessTokenUG(maxword NTDLL, maxword ProcessHandle, ACCESS_MASK DesiredAccess, NTSTATUS& Status)
{
    NTExport::Init(NTDLL);

    void* OutputToken{0};

    Status = Call<TD::T_NtOpenProcessToken>(NtOpenProcessToken)((void*)ProcessHandle, DesiredAccess, &OutputToken);
    if (Status < 0) return nullptr;

    return OutputToken;
}

dword NTS::NTSurfer::QueryInformationTokenUG(maxword NTDLL, void* TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, byte* IOTokenBuffer, dword IOTokenBufferLength, NTSTATUS& Status)
{
    NTExport::Init(NTDLL);

    dword OutReturnLength{0};

    Status = Call<TD::T_NtQueryInformationToken>(NtQueryInformationToken)(TokenHandle, TokenInformationClass, IOTokenBuffer, IOTokenBufferLength, &OutReturnLength);
    
    return OutReturnLength;
}

bool NTS::NTSurfer::CreateFile(maxword NTDLL, void** FileHandle, dword DesiredAccess, NTS::OBJECT_ATTRIBUTES* ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, PLARGE_INTEGER AllocationSize, dword FileAttributes, dword ShareAccess, dword CreateDisposition, dword CreateOptions, void* EaBuffer, dword EaLength, NTSTATUS& Status)
{
    NTExport::Init(NTDLL);

    Status = Call<TD::T_NtCreateFile>(NtCreateFile)(FileHandle, DesiredAccess, ObjectAttributes, IoStatusBlock, AllocationSize, FileAttributes, ShareAccess, CreateDisposition, CreateOptions, EaBuffer, EaLength);

    return (Status >= 0);
}

NTS::NTSTATUS NTS::NTSurfer::ConvertSidToUnicode(maxword NTDLL, PUNICODE_STRING UnicodeString, PSID Sid, dword AllocateDestinationString)
{
    NTExport::Init(NTDLL);

    return Call<TD::T_RtlConvertSidToUnicodeString>(RtlConvertSidToUnicodeString)(UnicodeString, Sid, AllocateDestinationString);
}