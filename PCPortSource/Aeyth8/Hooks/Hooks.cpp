#include "Hooks.hpp"
#include "../Global.hpp"

#ifndef A8CL_LOGGER_GLOBAL
#define Global MissingHeader
namespace MissingHeader { 
	static void LogA(...){} 
	static void FatalErrorBox(...){}
}
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;



void Hooks::HookLog(const bool& Status, const HookType& Type, class OFFSET& Obj)
{
	std::string Output = Status ? std::format("Successfully {}d a hook for {}", HookTypeS[Type], Obj.GetName()) : std::format("Failed to {} a hook for {}", HookTypeS[Type], Obj.GetName());

	if (Type == CREATE && Status) Output += " || Trampoline = " + Global::HexToString(reinterpret_cast<uintptr_t>(Obj.FunctionCall));
	Global::LogA("Hooks", Output);
}

void Hooks::HookLog(const bool& Status, const HookType& Type, uintptr_t TargetAddress, LPVOID FunctionCall)
{
	std::string Output = Status ? Output = std::format("Successfully {}d a hook for {}", HookTypeS[Type], Global::HexToString(TargetAddress)) : std::format("Failed to {} a hook for {}", HookTypeS[Type], Global::HexToString(TargetAddress));

	if (Type == CREATE && Status) Output += " || Trampoline = " + Global::HexToString(reinterpret_cast<uintptr_t>(FunctionCall));
	Global::LogA("Hooks", Output);
}


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
	bool Result = STAT(MH_CreateHook(reinterpret_cast<LPVOID>(TargetAddress), DetourFunction, &FunctionCall));
	Hooks::HookLog(Result, CREATE, TargetAddress, FunctionCall);

	return Result;
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
	bool Result = STAT(MH_EnableHook(reinterpret_cast<LPVOID>(TargetAddress)));
	Hooks::HookLog(Result, ENABLE, TargetAddress);

	return Result;
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
	bool Result = STAT(MH_DisableHook(reinterpret_cast<LPVOID>(TargetAddress)));
	Hooks::HookLog(Result, DISABLE, TargetAddress);

	return Result;
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

void Hooks::DisableAllHooks() 
{ 
	MH_DisableHook(MH_ALL_HOOKS); 
	Global::LogA("Hooks", "Disabled all hooks.");
}

bool Hooks::RemoveHook(const uintptr_t TargetAddress)
{
	bool Result = STAT(MH_RemoveHook(reinterpret_cast<LPVOID>(TargetAddress)));
	Hooks::HookLog(Result, REMOVE, TargetAddress);

	return Result;
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

// Originally these were designed to call the base function, but once I added the logging logic it would've overcomplicated it if I implemented it with the original system.

bool Hooks::CreateHook(class OFFSET& Obj, LPVOID DetourFunction) {  
	bool Result = STAT(MH_CreateHook(reinterpret_cast<LPVOID>(Obj.PlusBase()), DetourFunction, &Obj.FunctionCall));
	Hooks::HookLog(Result, CREATE, Obj);

	return Result;
}

bool Hooks::EnableHook(class OFFSET& Obj) {
	bool Result = STAT(MH_EnableHook(reinterpret_cast<LPVOID>(Obj.PlusBase())));
	Hooks::HookLog(Result, ENABLE, Obj);

	return Result;
}

bool Hooks::DisableHook(class OFFSET& Obj) { 
	bool Result = STAT(MH_DisableHook(reinterpret_cast<LPVOID>(Obj.PlusBase())));
	Hooks::HookLog(Result, DISABLE, Obj);

	return Result;
}

bool Hooks::RemoveHook(class OFFSET& Obj) { 
	bool Result = STAT(MH_RemoveHook(reinterpret_cast<LPVOID>(Obj.PlusBase())));
	Hooks::HookLog(Result, REMOVE, Obj);

	return Result;
}

bool Hooks::CreateAndEnableHook(class OFFSET& Obj, LPVOID DetourFunction) { 
	if (!CreateHook(Obj, DetourFunction)) return false;
	return EnableHook(Obj);
}


bool Hooks::If(const HookNum& Result)
{
	return Result == ALL_SUCCEEDED ? true : false;
}

