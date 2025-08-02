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

// 8 bit to AL register
constexpr BYTE MOV{0xB0};
constexpr BYTE RETN{0xC3};
constexpr BYTE NOP{0x90};
constexpr BYTE Replacement[] = { RETN, NOP };

std::vector<Hooks::HookStructure> StandaloneHooks =
{
	//{OFF::ProcessEvent, UFunctions::ProcessEvent},
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
typedef void(__fastcall* TRASH)(__int64* WorldContextObject, int* OutMinute);
A8CL::OFFSET SHUTUP("PIECE OF TRASH", 0x5198A0);
static void NOBODYLIKESYOU(__int64* a1, int* a2)
{
	*a2 = 111;
}

void AJB::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(StandaloneHooks);
		//Hooks::CreateAndEnableHooks(AJBHooks);

		BytePatcher::ReplaceBytes(OFF::ResetPP.PlusBase(), Replacement);
		BytePatcher::ReplaceBytes(OFF::StartConsumePP.PlusBase(), Replacement);
		Hooks::CreateAndEnableHook(SHUTUP, NOBODYLIKESYOU);
		/*OFFSET TimeGarbage("CloseTime", 0x472B20);
		BYTE TimeYourself[912]{0xB0, 00, RETN};
		memset(&TimeYourself[3], NOP, 909);
		BytePatcher::ReplaceBytes(TimeGarbage.PlusBase(), TimeYourself);

		OFFSET TimeGarbageMini("StarchKolaEnforcer", 0x4E4110);
		BYTE TakeSomeLifeOutOfIt[367]{0xB0, 01, RETN};
		memset(&TakeSomeLifeOutOfIt[3], NOP, 364);
		BytePatcher::ReplaceBytes(TimeGarbageMini.PlusBase(), TakeSomeLifeOutOfIt);

		OFFSET MOREGARBAGE("MOREGARBAGE", 0x21E4A0);
		Hooks::CreateAndEnableHook(MOREGARBAGE, Idiot);

		uintptr_t FINALLY = 0x515EFB + GBA;
		BYTE TimeToDIE[5]{ 0xEB, 0x2E, NOP, NOP, NOP};
		LogA("DIE", "POS");
		BytePatcher::ReplaceBytes(FINALLY, TimeToDIE);*/

		/*uintptr_t DIE = GBA + 0x515D20;
		BYTE DIEYOU[5]{ RETN, NOP, NOP, NOP, NOP };
		BytePatcher::ReplaceBytes(DIE, DIEYOU);*/

		uintptr_t YOURLIFEISNOTHING = GBA + 0x472F60;
		BYTE YOUSERVEZEROPURPOSE[190]{MOV, 00, RETN};
		memset(&YOUSERVEZEROPURPOSE[3], NOP, 187);

		uintptr_t TIMEOUT = GBA + 0x472EC0;
		BYTE IHATEYOUWITHALLMYHEART[95]{ RETN };
		memset(&IHATEYOUWITHALLMYHEART[1], NOP, 94);
		BytePatcher::ReplaceBytes(TIMEOUT, IHATEYOUWITHALLMYHEART);

		// Completely wipes out the HideCursorFunction and any trace (to be safe)
		BYTE AntiAntiCursor[100]{RETN};
		memset(&AntiAntiCursor[1], NOP, 99);

		BytePatcher::ReplaceBytes(OFF::HideCursorCaller.PlusBase(), AntiAntiCursor);


		//ABP_AJBStartupPlayerController_C

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
			bool* Freeplay = (&Settings->CoinOptions.FreePlay);
			*Freeplay = true;
			//*Debug = true;
			LogA("bDebugInputMode", HexToString((uintptr_t)Debug));
			//Settings->CloseTimeSettings.EveryDayCloseTime.Houre = -1170;
			LogA("Closetime", std::to_string(Settings->CloseTimeSettings.EveryDayCloseTime.Houre));
			Settings->CloseTimeSettings.EveryDayCloseTime.Houre = 0;
			Instance->SetCloseScheduleType(SDK::ECloseScheduleType::OFF);
			Settings->CloseTimeSettings.CloseScheduleType = SDK::ECloseScheduleType::OFF;
			for (SDK::FAJBClosedAlertArcadeTimeSchedule& Schedule : Instance->ArcadeTimeManager->ClosedAlertArcadeTimeSchedule)
			{
				LogA("Schedule", HexToString((uintptr_t)(int32*)&Schedule.Start));
				//Schedule.Start = 0;
				//Schedule.End = 0;
			}
		}

		
		//reinterpret_cast<SDK::UBPF_AJBGameInstance_C*>(SDK::UKismetSystemLibrary::GetDefaultObj())->SetPlayMode(SDK::EPlayMode::Pair, GWorld);
	}


}