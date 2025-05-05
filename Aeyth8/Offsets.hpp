#pragma once
#include "Hooks/Hooks.hpp"

namespace A8CL
{

namespace OFF
{

	// Basic UE Functions

	OFFSET UConsole("UConsole::ConsoleCommand", 0x178A450);
	OFFSET PreLogin("AGameModeBase::PreLogin", 0x13CB710);
	OFFSET AJBPreLogin("AJBPreLogin", 0x049E570);						// Used in the AJB GameMode(s)
	OFFSET Login("AGameModeBase::Login", 0x13C6A20);
	OFFSET Browse("UEngine::Browse", 0x1750750);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x1488440);
	OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x17B8A40);
	OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x11AE3A0);
	OFFSET GetMaxFPS("UEngine::GetMaxFPS", 0x175E440);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x01E24F0);
	OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x1913760);
	OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x1910650);
	OFFSET FileExists("FPakPlatformFile::FileExists", 0x190FAB0);

	// Native Game Functions

	OFFSET StartConsumePP("UAJBGameInstance::StartConsumePP", 0x0518BC0);
	OFFSET ResetPP("UAJBGameInstance::ResetPP", 0x0481370);
	OFFSET Response_UserLogout("UAJBNetAPI_Logout::Response_UserLogout", 0x04DD160);				// (May be incorrect) 
	OFFSET LoadSettingsIni("UAJBAMSystemSettings::LoadSettingsIni", 0x0519FB0);
	OFFSET SetAJBCoinLock("UAJBAMSystemObject::SetAJBCoinLock", 0x0518AB0);

























}


}