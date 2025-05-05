#pragma once
#include "Hooks/Hooks.hpp"

namespace A8CL
{

namespace OFF
{

	// Basic UE Functions

	inline OFFSET UConsole("UConsole::ConsoleCommand", 0x178A450);
	inline OFFSET PreLogin("AGameModeBase::PreLogin", 0x13CB710);
	inline OFFSET AJBPreLogin("AJBPreLogin", 0x049E570);						// Used in the AJB GameMode(s)
	inline OFFSET Login("AGameModeBase::Login", 0x13C6A20);
	inline OFFSET Browse("UEngine::Browse", 0x1750750);
	inline OFFSET SpawnActor("UWorld::SpawnActor", 0x1488440);
	inline OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x17B8A40);
	inline OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x11AE3A0);
	inline OFFSET GetMaxFPS("UEngine::GetMaxFPS", 0x175E440);
	inline OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x01E24F0);
	inline OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x1913760);
	inline OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x1910650);
	inline OFFSET FileExists("FPakPlatformFile::FileExists", 0x190FAB0);

	// Native Game Functions

	inline OFFSET StartConsumePP("UAJBGameInstance::StartConsumePP", 0x0518BC0);
	inline OFFSET ResetPP("UAJBGameInstance::ResetPP", 0x0481370);
	inline OFFSET Response_UserLogout("UAJBNetAPI_Logout::Response_UserLogout", 0x04DD160);				// (May be incorrect) 
	inline OFFSET LoadSettingsIni("UAJBAMSystemSettings::LoadSettingsIni", 0x0519FB0);
	inline OFFSET SetAJBCoinLock("UAJBAMSystemObject::SetAJBCoinLock", 0x0518AB0);

























}


}