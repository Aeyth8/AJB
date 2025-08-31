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
	CommandLineParameter<wchar_t> GameDefaultMap(L"GameDefaultMap", L"/Game/Aeyth8/Maps/TitleScreen/PlaceholderTitleScreen.PlaceholderTitleScreen");
	CommandLineParameter<wchar_t> TransitionMap(L"TransitionMap", L"/Game/Aeyth8/Maps/LoadingWorld.LoadingWorld");
	CommandLineParameter<wchar_t> GlobalDefaultGameMode(L"GlobalDefaultGameMode", L"/Game/AJB/InGame/Core/BP_AJBBattleGameMode.BP_AJBBattleGameMode_C");
	CommandLineParameter<wchar_t> ServerPort(L"ServerPort", L"1170");
	CommandLineParameter<wchar_t> bDebugInputMode(L"bDebugInputMode");
	CommandLineParameter<wchar_t> HookAndLogProcessEvent(L"HookPE");

	// -- Global array for automated parsing, not generally needed for manual usage.
	CommandLineParameter<wchar_t>* InternalGlobalArray[] =
	{
		&GameDefaultMap,
		&TransitionMap,
		&GlobalDefaultGameMode,
		&ServerPort,
		&bDebugInputMode,
		&HookAndLogProcessEvent
	};

	// I would rather have this be the entire array instead of creating a second array, but I somehow managed to get this far I'm not pushing my mental strain any further for now.
	CArray<CommandLineParameter<wchar_t>*> GlobalCommandLineArgs(sizeof(InternalGlobalArray)/sizeof(InternalGlobalArray[0]), InternalGlobalArray);

	// -- Global array for command line arguments retrieved from the WinAPI, not used but good for reference/ease of access.
	CArray<wchar_t*>* GlobalCommandLine{nullptr};
}
}