#include "AJB.hpp"
#include "../Offsets.hpp"
#include "../Tools/UFunctions.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

/*std::vector<Hooks::HookStructure> StandaloneHooks =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::AppPreExit, UFunctions::AppPreExit},
};*/

using namespace A8CL;

void AJB::Init_Hooks()
{
	if (Hooks::Init())
	{
		//Hooks::CreateAndEnableHooks(StandaloneHooks);
		Hooks::CreateAndEnableHook(OFF::Browse, UFunctions::Browse);








	}

}

void AJB::Init_Vars()
{





}