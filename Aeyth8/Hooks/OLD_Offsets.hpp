#pragma once
#ifndef OFFSET
#define OFFSET const inline static uintptr_t
#endif 

#include <cstdint>

class Offsets
{
public:

	// Basic UE Functions

	OFFSET UConsole{0x178A450};							// UConsole::ConsoleCommand
	OFFSET PreLogin{0x13CB710};							// AGameModeBase::PreLogin
	OFFSET AJBPreLogin{0x049E570};						// AGameModeBase::PreLogin { Used in the AJB GameMode(s) }
	OFFSET Login{0x13C6A20};							// AGameModeBase::Login
	OFFSET Browse{0x1750750};							// UEngine::Browse
	OFFSET SpawnActor{0x1488440};						// UWorld::SpawnActor
	OFFSET WorldGetNetMode{0x17B8A40};					// UWorld::InternalGetNetMode
	OFFSET ActorGetNetMode{0x11AE3A0};					// AActor::InternalGetNetMode
	OFFSET GetMaxFPS{0x175E440};						// UEngine::GetMaxFPS
	OFFSET AppPreExit{0x01E24F0};						// FEngineLoop::AppPreExit
	OFFSET IsNonPakFileNameAllowed{0x1913760};			// FPakPlatformFile::IsNonPakFilenameAllowed
	OFFSET FindFileInPakFiles{0x1910650};				// FPakPlatformFile::FindFileInPakFiles
	OFFSET FileExists{0x190FAB0};						// FPakPlatformFile::FileExists

	// Native Game Functions

	OFFSET StartConsumePP{0x0518BC0};					// UAJBGameInstance::StartConsumePP
	OFFSET ResetPP{0x0481370};							// UAJBGameInstance::ResetPP
	OFFSET Response_UserLogout{0x04DD160};				// UAJBNetAPI_Logout::Response_UserLogout (May be incorrect) 
	OFFSET LoadSettingsIni{0x0519FB0};					// UAJBAMSystemSettings::LoadSettingsIni
	OFFSET SetAJBCoinLock{0x0518AB0};					// UAJBAMSystemObject::SetAJBCoinLock
};