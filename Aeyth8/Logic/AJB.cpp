#include "AJB.h"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../Global.hpp"
#include "../Tools/UFunctions.hpp"
#include "../Tools/Pointers.h"
#include "../Tools/BytePatch.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL; using namespace Global; using namespace Pointers;

SDK::UBP_AJBGameInstance_C* AJB::Instance{nullptr};
SDK::UAJBAMSystemSettings* AJB::Settings{nullptr};
SDK::AAJBAMErrorObserverActor* AJB::Garbage{nullptr};
SDK::UAJBAMSystemObject* AJB::System{nullptr};
SDK::AAJBOutGameProxy* AJB::OutGameProxy{nullptr};
int32_t* AJB::PlayerPoints{nullptr};

constexpr BYTE RETN{0xC3};
constexpr BYTE NOP{0x90};
constexpr BYTE Replacement[] = { RETN, NOP };

std::vector<Hooks::HookStructure> StandaloneHooks =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::AppPreExit, UFunctions::AppPreExit},
};

std::vector<Hooks::HookStructure> AJBHooks =
{

};

void AJB::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(StandaloneHooks);
		//Hooks::CreateAndEnableHook(OFF::Browse, UFunctions::Browse);

		//BYTE* StartConsumePP = (BYTE*)OFF::StartConsumePP.PlusBase();

		BytePatch NoPP(OFF::StartConsumePP.PlusBase());
		BytePatch ResetPP(OFF::ResetPP.PlusBase());

		NoPP.Replace(Replacement);
		ResetPP.Replace(Replacement);

		//LogA("Byte", HexToString(*StartConsumePP));
		//LogA("Byte", HexToString(*(StartConsumePP + 1)));






	}

}

void AJB::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		Instance = static_cast<SDK::UBP_AJBGameInstance_C*>(GWorld->OwningGameInstance);
		Settings = static_cast<SDK::UAJBAMSystemSettings*>(Instance->AMSystemSettings);
		System = static_cast<SDK::UAJBAMSystemObject*>(Instance->AMSystemObject);
		PlayerPoints = (&System->PP);
		//OutGameProxy = static_cast<SDK::AAJBOutGameProxy*>() I forgot what this was for.

		if (!IsNull(PlayerPoints))
		{
			*PlayerPoints = 1170;
		}
		
	}


}