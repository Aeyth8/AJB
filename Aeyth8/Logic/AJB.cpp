#include "AJB.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../Tools/UFunctions.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;

std::vector<Hooks::HookStructure> StandaloneHooks =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::AppPreExit, UFunctions::AppPreExit},
};

void AJB::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(StandaloneHooks);
		//Hooks::CreateAndEnableHook(OFF::Browse, UFunctions::Browse);








	}

}

void AJB::Init_Vars()
{





}