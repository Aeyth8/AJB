#include "UnrealTypes.h"
#include "../Offsets.h"
#include "../../Dumper-7/SDK/Basic.hpp"
using namespace A8CL;

// -- FMemory

void* FMemory::Malloc(unsigned long long Count, unsigned int Alignment)
{
	return OFF::FMalloc.VerifyFC<Decl::Malloc>()(Count, Alignment);
}

void* FMemory::Realloc(void* Original, unsigned long long Count, unsigned int Alignment)
{
	return OFF::FRealloc.VerifyFC<Decl::Realloc>()(Original, Count, Alignment);
}

void FMemory::Free(void* Original)
{
	OFF::FFree.VerifyFC<Decl::Free>()(Original);
}

// -- FName

SDK::FName A8CL::FName::NAME_FindOrAdd(SDK::FName* Obj, const char* StringName, EFindName FindNameRule)
{
	return *OFF::FNameA.VerifyFC<SDK::FName*(__fastcall*)(SDK::FName*, const char*, EFindName)>()(Obj, StringName, FindNameRule);
}

SDK::FName A8CL::FName::NAME_FindOrAdd(const char* StringName, EFindName FindNameRule)
{
	SDK::FName Return{};
	OFF::FNameA.VerifyFC<SDK::FName*(__fastcall*)(SDK::FName*, const char*, EFindName)>()(&Return, StringName, FindNameRule);
	return Return;
}

SDK::FName A8CL::FName::NAME_FindOrAdd(SDK::FName* Obj, const wchar_t* StringName, EFindName FindNameRule)
{
	return *OFF::FNameW.VerifyFC<SDK::FName*(__fastcall*)(SDK::FName*, const wchar_t*, EFindName)>()(Obj, StringName, FindNameRule);
}

SDK::FName A8CL::FName::NAME_FindOrAdd(const wchar_t* StringName, EFindName FindNameRule)
{
	SDK::FName Return{};
	OFF::FNameW.VerifyFC<SDK::FName*(__fastcall*)(SDK::FName*, const wchar_t*, EFindName)>()(&Return, StringName, FindNameRule);
	return Return;
}