#pragma once

class OFFSET;

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	extern OFFSET ProcessEvent;
	extern OFFSET UConsole;
	extern OFFSET PreLogin;
	extern OFFSET AJBPreLogin;
	extern OFFSET Login;
	extern OFFSET Browse;
	extern OFFSET SpawnActor;
	extern OFFSET WorldGetNetMode;
	extern OFFSET ActorGetNetMode;
	extern OFFSET GetMaxFPS;
	extern OFFSET AppPreExit;
	extern OFFSET IsNonPakFileNameAllowed;
	extern OFFSET FindFileInPakFiles;
	extern OFFSET FileExists;

	// Native Game Functions

	extern OFFSET StartConsumePP;
	extern OFFSET ResetPP;
	extern OFFSET Response_UserLogout;
	extern OFFSET LoadSettingsIni;
	extern OFFSET SetAJBCoinLock;
	extern OFFSET HideCursorCaller;
	
	extern OFFSET ShowDebugInputMode1;
	extern OFFSET ShowDebugInputMode2;
}
}