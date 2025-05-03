#include "Hooks.hpp"
#include "../Global.hpp"
//#include "../Tools/Offsets.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;



/*
		Public
*/

bool Hooks::Init()
{	if (MH_INIT) return true;
	MH_STATUS Status = MH_Initialize();

	if (Status != MH_OK && Status != MH_ERROR_ALREADY_INITIALIZED) 
		Global::FatalErrorBox("MinHook has failed to initialize! Please restart the game and try again.\nIf the problem persists, try restarting your computer, refer to the source code, or ask me by filing an issue on my GitHub (Aeyth8)");

	Global::LogA("MinHook", "MinHook has been initialized.");
	return MH_INIT = true;
}

bool Hooks::Uninit()
{	if (!MH_INIT) return true;
	MH_STATUS Status = MH_Uninitialize();

	if (Status != MH_OK && Status != MH_ERROR_NOT_INITIALIZED)
	{
		Global::LogA("MinHook", "Failed to uninitialize MinHook, this isn't too important so don't worry about it.");
		return false;
	}

	Global::LogA("MinHook", "MinHook has been uninitialized.");
	return MH_INIT = false;
}



bool Hooks::CreateHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall)
{
	return STAT(MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), DetourFunction, reinterpret_cast<LPVOID*>(FunctionCall)));
}



Hooks::HookNum Hooks::CreateHooks(std::vector<HookStructure>& Table)
{
	int Amount{0};

	for (int i{0}; i < Table.size(); ++i)
	{
		if (Hooks::CreateHook(Table[i].Obj, Table[i].DetourFunction)) Amount++;
	}

	return ENUM(Amount, Table.size());
}


bool Hooks::EnableHook(const uintptr_t TargetAddress)
{
	return STAT(MH_EnableHook(reinterpret_cast<LPVOID*>(TargetAddress)));
}


Hooks::HookNum Hooks::EnableHooks(std::vector<OFFSET>& Table)
{
	int Amount{0};

	for (int i{0}; i < Table.size(); ++i)
	{
		if (Hooks::EnableHook(Table[i])) Amount++;
	}

	return ENUM(Amount, Table.size());
}

void Hooks::EnableAllHooks() { MH_EnableHook(MH_ALL_HOOKS); }

bool Hooks::CreateAndEnableHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall)
{
	if (!CreateHook(TargetAddress, DetourFunction, FunctionCall)) return false;
	return EnableHook(TargetAddress);
}

bool Hooks::CreateAndEnableHook(class OFFSET& Obj, LPVOID DetourFunction) 
{
	return Hooks::CreateAndEnableHook((Global::GBA + Obj.Offset), DetourFunction, Obj.FunctionCall);
}

Hooks::HookNum Hooks::CreateAndEnableHooks(std::vector<HookStructure>& Table)
{
	int Amount{0};

	for (int i{0}; i < Table.size(); ++i)
	{
		if (Hooks::CreateAndEnableHook(Table[i].Obj, Table[i].DetourFunction)) Amount++;
	}

	return ENUM(Amount, Table.size());
}

bool Hooks::DisableHook(const uintptr_t TargetAddress)
{
	return STAT(MH_DisableHook(reinterpret_cast<LPVOID*>(TargetAddress)));
}


Hooks::HookNum Hooks::DisableHooks(std::vector<OFFSET>& Table)
{
	int Amount{0};

	for (int i{0}; i < Table.size(); ++i)
	{
		if (Hooks::DisableHook(Table[i])) Amount++;
	}

	return ENUM(Amount, Table.size());
}

void Hooks::DisableAllHooks() { MH_DisableHook(MH_ALL_HOOKS); }

bool Hooks::RemoveHook(const uintptr_t TargetAddress)
{
	return STAT(MH_RemoveHook(reinterpret_cast<LPVOID*>(TargetAddress)));
}

Hooks::HookNum Hooks::RemoveHooks(std::vector<OFFSET>& Table)
{
	int Amount{0};

	for (int i{0}; i < Table.size(); ++i)
	{
		if (Hooks::RemoveHook(Table[i])) Amount++;
	}

	return ENUM(Amount, Table.size());
}

// Object-wrapped overloads

bool Hooks::CreateHook(class OFFSET& Obj, LPVOID DetourFunction) { return Hooks::CreateHook((Obj.PlusBase()), DetourFunction, &Obj.FunctionCall); }
bool Hooks::EnableHook(class OFFSET& Obj) { return Hooks::EnableHook(Obj.PlusBase()); }
bool Hooks::DisableHook(class OFFSET& Obj) { return Hooks::DisableHook(Obj.PlusBase()); }
bool Hooks::RemoveHook(class OFFSET& Obj) { return Hooks::RemoveHook(Obj.PlusBase()); }


bool Hooks::If(const HookNum& Result)
{
	return Result == ALL_SUCCEEDED ? true : false;
}

