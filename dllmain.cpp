#include "pch.h"
#include "Aeyth8/Proxy/Proxy.hpp"
#include "Aeyth8/Hooks/Logic.hpp"

SDK::AGameMode* Game;
SDK::AHUD* HUD;
SDK::UBP_AJBGameInstance_C* Instance; // Originally SDK::UAJBGameInstance but this is a parent class. 
SDK::UAJBAMSystemSettings* Settings;
SDK::AAJBAMErrorObserverActor* Garbage;
SDK::UAJBAMSystemObject* System;
SDK::AAJBOutGameProxy* AProxy;



static void Init() {

	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("AJB-Win64-Shipping.exe");

	LogWin();

	A8CL::AJB::InitHooks();
	
	if (!(!CheckNull(UWorld()) && !CheckNull(Player0()))) Sleep(10000);

	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	// Allocates local pointers
	Engine = UEngine(); World = UWorld(); KismetSys = UKismetSys();

	// These pointers should remain the same across the entirety of an instance's runtime.
	Game = static_cast<SDK::AGameMode*>(World->AuthorityGameMode);
	HUD = Player0()->GetHUD();
	Instance = static_cast<SDK::UBP_AJBGameInstance_C*>(World->OwningGameInstance);
	Settings = Instance->AMSystemSettings;
	System = Instance->AMSystemObject;
	Garbage = GetLastOf<SDK::AAJBAMErrorObserverActor>();

	// Assigning a pointer to PP
	A8CL::AJB::PP = (&System->PP);
	Log("PP Pointer = " + HexToString((uintptr_t)(A8CL::AJB::PP)));
	*A8CL::AJB::PP = 1170;

	A8CL::Debug::KillPP();

	// Disabling proprietary arcade garbage.
	//if (!CheckNull(Settings, "UAJBAMSystemSettings", " :: Enabled CoinOptions.FreePlay")) Settings->CoinOptions.FreePlay = true;
	//if (!CheckNull(Instance, "SDK::UAJBGameInstance", " :: Set ECloseScheduleType::OFF")) Instance->SetCloseScheduleType(SDK::ECloseScheduleType::OFF);
	//if (!CheckNull(System, "SDK::UAJBAMSystemObject", " :: Set PP and disabled consumption.")) { System->PP = 1170; Instance->SetMaxConsumePP(0); }


	if (!Global::bConstructedUConsole)
	{	Global::bConstructedUConsole = true;
		ConstructUConsole();
	}

	// This should not be within the game, I deleted the literal object from the files in my patch. The default object will still remain but can't/won't be used.
	if (!Garbage->IsDefaultObject() && !CheckNull(Garbage, "SDK::AAJBAMErrorObserverActor", " :: Detected!")) ErrorBox(L"CRITICAL ALERT", L"An instance of [AAJBAMErrorObserverActor] has been found within your game!\nThis implicates that your current game is not properly patched, you will likely face issues and softlocks.\nIf you are not familiar with development in this game, I highly recommend you download the patched build.\n", MB_OK);

	
//	Hooks::CreateProxyHook((GBA + Offsets::StartConsumePP), "StartConsumePP");
//	Hooks::EnableProxyHook((GBA + Offsets::StartConsumePP));
//	Hooks::CreateAndEnableHook((GBA + 0x0518BC0), no, 0, "StartConsumePP"); // this works*/
	//Hooks::CreateAndEnableHook((GBA + 0x0AF1AE0), "PakThing");

	

	
	//Hooks::CreateAndEnableHook((GBA + 0x047B220), GetAmwBuildType, &FC_GetAmwBuildType, "GetAmwBuildType");
	//Hooks::CreateAndEnableHook((GBA + 0x053BE00), StartConsume, &FC_Consume, "StartConsumePP");


	/*uintptr_t Process = GBA + 0x1A77CC0;
	uintptr_t OutputText = GBA + 0x0811C50;

	/*Hooks::CreateAndEnableHook(FOutputDevice::Calc(), FOutputDevice::LogfImpl, &FOutputDevice::FC_LogfImpl, "UELogger");											! Works but	needs fixing !		*/ 
	//Hooks::CreateAndEnableHook(FOutputDevice::Calc(1), FOutputDevice::LogfImpl1, &FOutputDevice::FC_LogfImpl1, "UELogger1");
	
	
	//GetLastOf<SDK::UAmwPluginFunctionLibrary>()->InitializeAmwLibrary(SDK::EAmwBuildType::Dev, SDK::FString(L"AETHER-8"), SDK::FString(L"1170-834537"));
	/*
			Perhaps you should delete the BP_ArcadeTimeManager / UAJBArcadeTimeManager 
	*/
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	Proxy::Attach(hModule);

	return 1;
}