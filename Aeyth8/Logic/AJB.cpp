#include "AJB.h"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../Global.hpp"
#include "../Tools/UFunctions.hpp"
#include "../Tools/Pointers.h"
#include "../Tools/BytePatch.h"
#include "../Tools/BytePatcher.h"
#include "../../SDK/BPF_AJBGameInstance_classes.hpp"

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
	{OFF::Login, UFunctions::Login},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::AJBPreLogin, UFunctions::PreLogin},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::IsNonPakFileNameAllowed, UFunctions::IsNonPakFilenameAllowed},
	{OFF::FindFileInPakFiles, UFunctions::FindFileInPakFiles},
};

typedef __int64(__fastcall* ShowDebugInputMode1_T)(__int64* This);
typedef char(__fastcall* ShowDebugInputMode2_T)(__int64* This);

__int64 ShowDebugInputMode1(__int64* This)
{
	LogA(OFF::ShowDebugInputMode1.GetName(), "Called.");
	return OFF::ShowDebugInputMode1.VerifyFC<ShowDebugInputMode1_T>()(This);
}

char ShowDebugInputMode2(__int64* This)
{
	char Result = OFF::ShowDebugInputMode2.VerifyFC<ShowDebugInputMode2_T>()(This);
	LogA(OFF::ShowDebugInputMode2.GetName(), "Called, " + std::to_string(Result));
	return Result;
}


std::vector<Hooks::HookStructure> AJBHooks =
{
	{OFF::ShowDebugInputMode1, ShowDebugInputMode1},
	{OFF::ShowDebugInputMode2, ShowDebugInputMode2},
};

void AJB::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(StandaloneHooks);
		//Hooks::CreateAndEnableHooks(AJBHooks);
		//Hooks::CreateAndEnableHook(OFF::Browse, UFunctions::Browse);

		BYTE* StartConsumePP = (BYTE*)OFF::StartConsumePP.PlusBase();
		LogA("Protection Status", BytePatcher::sGetProtectionStatus(OFF::StartConsumePP.PlusBase()));
		/*BytePatch NoPP(OFF::StartConsumePP.PlusBase());
		BytePatch ResetPP(OFF::ResetPP.PlusBase());

		NoPP.Replace(Replacement);
		ResetPP.Replace(Replacement);*/

		BytePatcher::ReplaceBytes(OFF::ResetPP.PlusBase(), Replacement);
		BytePatcher::ReplaceBytes(OFF::StartConsumePP.PlusBase(), Replacement);
		
		LogA("Byte", HexToString(*StartConsumePP));
		LogA("Byte", HexToString(*(StartConsumePP + 1)));

		LogA("Protection Status", BytePatcher::sGetProtectionStatus(OFF::StartConsumePP.PlusBase()));





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

		if (Settings)
		{
			bool* Debug = (&Settings->bDebugInputMode);
			//*Debug = true;
			LogA("bDebugInputMode", HexToString((uintptr_t)Debug));
		}

		//SDK::ULevelStreamingKismet::GetDefaultObj()->LoadLevelInstance(GWorld, L"/Game/Aeyth8/UI/InGame/LVL_KeyListener", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);
		//reinterpret_cast<SDK::UBPF_AJBGameInstance_C*>(SDK::UKismetSystemLibrary::GetDefaultObj())->SetPlayMode(SDK::EPlayMode::Pair, GWorld);
	}


}