#include "Hooks.hpp"
#include "../Global.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;

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
		Global::LogA("Failed to uninitialize MinHook, this isn't too important so don't worry about it.");
		return false;
	}

	Global::LogA("MinHook", "MinHook has been uninitialized.");
	return MH_INIT = false;
}


bool Hooks::CreateAndEnableHook()
{

}

bool Hooks::CreateAndEnableHooks()
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
