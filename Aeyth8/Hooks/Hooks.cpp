#include "Hooks.hpp"
#include "../Global.hpp"
#include "../Tools/Offsets.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;


const int& Hooks::Calculator(class OFFSET& Obj)
{

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


bool Hooks::CreateAndEnableHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall)
{
	MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), DetourFunction, reinterpret_cast<LPVOID*>(FunctionCall));
	if (!STAT(Status)) return false;

	Status = MH_EnableHook(reinterpret_cast<LPVOID*>(TargetAddress));
	return STAT(Status);
}

bool Hooks::CreateAndEnableHook(class OFFSET& Obj, LPVOID DetourFunction) // I don't like how this is written at all, I'm tired so fix this when you wake up, I want to fix my OFFSET class to prevent GBA + each time, I somehow forgot that function call is different from the function call.
// As in one of them is a pointer to the trampoline and the other is a direct pointer to the function, which would jump to the trampoline.
{
	return Hooks::CreateAndEnableHook((Global::GBA + Obj.Offset), DetourFunction, Obj.FunctionCall);
}

Hooks::HookNum Hooks::CreateAndEnableHooks()
{

}


bool Hooks::CreateHook()
{

}

Hooks::HookNum Hooks::CreateHooks()
{

}


bool Hooks::EnableHook()
{

}

Hooks::HookNum Hooks::EnableHooks()
{

}

void Hooks::EnableAllHooks()
{

}


bool Hooks::DisableHook()
{

}

Hooks::HookNum Hooks::DisableHooks()
{

}

void Hooks::DisableAllHooks()
{

}


bool Hooks::If(const HookNum& Result)
{

}
