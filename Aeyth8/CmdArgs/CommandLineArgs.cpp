#include "CommandLineArgs.h"


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{
namespace CMLA
{
	// -- Individual args for manual use 
	CommandLineParameter<wchar_t> GameDefaultMap(L"GameDefaultMap", L"/Game/Aeyth8/Maps/TitleScreen/AJBTitleScreen.AJBTitleScreen");
	CommandLineParameter<wchar_t> TransitionMap(L"TransitionMap", L"/Game/Aeyth8/Maps/LoadingWorld.LoadingWorld");
	CommandLineParameter<wchar_t> GlobalDefaultGameMode(L"GlobalDefaultGameMode", L"/Game/AJB/InGame/Core/BP_AJBBattleGameMode.BP_AJBBattleGameMode_C");
	CommandLineParameter<wchar_t> ServerPort(L"ServerPort", L"1170");
	CommandLineParameter<wchar_t> bDebugInputMode(L"bDebugInputMode");
	CommandLineParameter<wchar_t> HookAndLogProcessEvent(L"HookPE");
	CommandLineParameter<wchar_t> HookAndLogInvoke(L"HookInvoke");
	CommandLineParameter<wchar_t> HookAndLogLoader(L"HookLoader");
	CommandLineParameter<wchar_t> WinCSOut(L"log");
	CommandLineParameter<wchar_t> ConsoleKey(L"ConsoleKey", L"Tilde");
	CommandLineParameter<wchar_t> MouseCursor(L"MouseCursor", L"/Game/Aeyth8/Blueprints/WBP_Cursor.WBP_Cursor_C");
	CommandLineParameter<wchar_t> Username(L"Username", L"Aeyth8");

	// -- Global array for automated parsing, not generally needed for manual usage.
	CArray<CommandLineParameter<wchar_t>*> GlobalCommandLineArgs = CommandLineParameter<wchar_t>::GCommands();

	// -- Global array for command line arguments retrieved from the WinAPI, not used but good for reference/ease of access.
	CArray<wchar_t*>* GlobalCommandLine{nullptr};
}
}