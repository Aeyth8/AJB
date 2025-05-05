#include "pch.h"

#include "Aeyth8/Global.hpp"
#include "Aeyth8/Proxy/Proxy.hpp"
#include "Aeyth8/Logic/AJB.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global;


typedef int32(__thiscall* GetCreaditNum)(SDK::UAJBGameInstance* This);
static GetCreaditNum FC_GetCreaditNum{0};

// I was hoping "Creadits" were equivalent to PP and that I could spoof the original value, but this is credits and or IRL money used to buy PP, so it's a halfway freeplay spoof which isn't needed I don't think.
// However after further consideration this hook will be useful as it gets called immediately when entering AJBSimpleMatch_P, therefore I can retrieve the UAJBGameInstance pointer directly from the hook.
// If that sounds stupid it's simply because I previously retrieved and set the PP after 10 seconds from launch, causing it to guaranteed crash if you were to switch levels right beforehand.  
/*static int32 GetCreaditNumHook(SDK::UAJBGameInstance* This)
{
	A8CL::AJB::PP = (&This->AMSystemObject->PP);
	*A8CL::AJB::PP = 1170;
	//Instance = (SDK::UBP_AJBGameInstance_C*)This;
	//int32 Num = (*FC_GetCreaditNum)(This);
	//LogA("GetCreaditNum", "Called :: " + std::to_string(Num));
	return 11;
}

// Checks to see if a pointer is valid before assigning its pointer-to member. 
template <class PointerT, class BaseT, class MemberT>
auto PointerCast(PointerT& Pointer, BaseT* Base, MemberT BaseT::*Member) 
{
	return (Base && Base->*Member) ? decltype(Pointer)(Base->*Member) : nullptr;
}*/

static void Init() {

	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("AJB-Win64-Shipping.exe");

	LogWin();

	A8CL::AJB::Init_Hooks();
	//A8CL::Debug::KillPP();

	/*Hooks::CreateAndEnableHook((GBA + Offsets::IsNonPakFileNameAllowed), UFunctions::Func::IsNonPakFilenameAllowed, &UFunctions::Decl::FC_IsNonPakFilenameAllowed, "IsNonPakFilenameAllowed");
	Hooks::CreateAndEnableHook((GBA + Offsets::FindFileInPakFiles), UFunctions::Func::FindFileInPakFiles, &UFunctions::Decl::FC_FindFileInPakFiles, "FindFileInPakFiles");
	Hooks::CreateAndEnableHook((GBA + 0x047B680), GetCreaditNumHook, &FC_GetCreaditNum, "GetCreaditNum");*/
	//Hooks::CreateAndEnableHook((GBA + 0x008174F0), UFunctions::Func::ProcessEvent, &UFunctions::Decl::FC_ProcessEvent, "PE");
	
	if (!(!CheckNull(UWorld()) && !CheckNull(Player0()))) Sleep(10000);

	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	// Allocates local pointers
	Engine = UEngine(); World = UWorld(); KismetSys = UKismetSys();

	// These pointers should remain the same across the entirety of an instance's runtime.
	/*Game = static_cast<SDK::AGameMode*>(World->AuthorityGameMode);
	Instance = static_cast<SDK::UBP_AJBGameInstance_C*>(World->OwningGameInstance);
	Settings = Instance->AMSystemSettings;
	System = Instance->AMSystemObject;
	Garbage = GetLastOf<SDK::AAJBAMErrorObserverActor>();
*/
	//Game = PointerCast(Game, World, &SDK::UWorld::AuthorityGameMode);
	//Instance = PointerCast(Instance, World, &SDK::UWorld::OwningGameInstance);
	//Settings = PointerCast(Settings, Instance, &SDK::UAJBGameInstance::AMSystemSettings);
	//System = PointerCast(System, Instance, &SDK::UAJBGameInstance::AMSystemObject);

	//Log(Game->GetFullName());

	// Assigning a pointer to PP
	A8CL::AJB::PP = (&System->PP);
	Log("PP Pointer = " + HexToString((uintptr_t)(A8CL::AJB::PP)));
	*A8CL::AJB::PP = 1170;

	//Instance->PlayerLoginInfo.ControllerSettings.KeyConfigType = SDK::EAJBKeyConfigType::TypeB;
	//LogA("KeyConfigType", std::to_string((int)Instance->PlayerLoginInfo.ControllerSettings.KeyConfigType));
	

	// Disabling proprietary arcade garbage.
	//if (!CheckNull(Settings, "UAJBAMSystemSettings", " :: Enabled CoinOptions.FreePlay")) Settings->CoinOptions.FreePlay = true;
	//if (!CheckNull(Instance, "SDK::UAJBGameInstance", " :: Set ECloseScheduleType::OFF")) Instance->SetCloseScheduleType(SDK::ECloseScheduleType::OFF);
	//if (!CheckNull(System, "SDK::UAJBAMSystemObject", " :: Set PP and disabled consumption.")) { System->PP = 1170; Instance->SetMaxConsumePP(0); }


	if (!Global::bConstructedUConsole)
	{	Global::bConstructedUConsole = true;
		ConstructUConsole();
	}

	// This should not be within the game, I deleted the literal object from the files in my patch. The default object will still remain but can't/won't be used.
	if (Garbage && !Garbage->IsDefaultObject() && !CheckNull(Garbage, "SDK::AAJBAMErrorObserverActor", " :: Detected!")) ErrorBox(L"CRITICAL ALERT", L"An instance of [AAJBAMErrorObserverActor] has been found within your game!\nThis implicates that your current game is not properly patched, you will likely face issues and softlocks.\nIf you are not familiar with development in this game, I highly recommend you download the patched build.\n", MB_OK);


	/*uintptr_t Process = GBA + 0x1A77CC0;
	uintptr_t OutputText = GBA + 0x0811C50;

	/*Hooks::CreateAndEnableHook(FOutputDevice::Calc(), FOutputDevice::LogfImpl, &FOutputDevice::FC_LogfImpl, "UELogger");											! Works but	needs fixing !		*/ 
	//Hooks::CreateAndEnableHook(FOutputDevice::Calc(1), FOutputDevice::LogfImpl1, &FOutputDevice::FC_LogfImpl1, "UELogger1");
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	Proxy::Attach(hModule);

	return 1;
}