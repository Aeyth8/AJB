#pragma once


namespace SDK
{
	class FName;
}
namespace A8CL
{
// -- FMemory

struct FMemory
{
	class Decl
	{
	public:
		typedef void*(__fastcall* Malloc)(unsigned long long Count, unsigned int Alignment);
		typedef void*(__fastcall* Realloc)(void* Original, unsigned long long Count, unsigned int Alignment);
		typedef void(__fastcall* Free)(void* Original);
		typedef void(__fastcall* Trim)(bool bTrimThreadCaches);
	};

	enum AllocationHints
	{
		None = -1,
		Default,
		Temporary,
		SmallPool,
		Max
	};

	enum
	{
		// Default allocator alignment. If the default is specified, the allocator applies to engine rules.
		// Blocks >= 16 bytes will be 16-byte-aligned, Blocks < 16 will be 8-byte aligned. 
		// If the allocator does not support allocation alignment, the alignment will be ignored.
		DEFAULT_ALIGNMENT = 0,

		// Minimum allocator alignment
		MIN_ALIGNMENT = 8,
	};

	// C-Style Memory Allocation (The most important part)

	static void* Malloc(unsigned long long Count, unsigned int Alignment = DEFAULT_ALIGNMENT);
	static void* Realloc(void* Original, unsigned long long Count, unsigned int Alignment = DEFAULT_ALIGNMENT);
	static void Free(void* Original);
};
struct FName
{
	enum EFindName
	{
		FNAME_Find,	// Find a name, returns 0 if it doesn't exist.
		FNAME_Add,	// Find a name or add it if it doesn't exist.

		/** Finds a name and replaces it. Adds it if missing. This is only used by UHT and is generally not safe for threading.
			* All this really is used for is correcting the case of names. In MT conditions you might get a half-changed name.
			*/
		FNAME_Replace_Not_Safe_For_Threading,
	};

	static SDK::FName NAME_FindOrAdd(SDK::FName* Obj, const char* StringName, EFindName FindNameRule = FNAME_Add);
	static SDK::FName NAME_FindOrAdd(const char* StringName, EFindName FindNameRule = FNAME_Add);

	static SDK::FName NAME_FindOrAdd(SDK::FName* Obj, const wchar_t* StringName, EFindName FindNameRule = FNAME_Add);
	static SDK::FName NAME_FindOrAdd(const wchar_t* StringName, EFindName FindNameRule = FNAME_Add);
};
}