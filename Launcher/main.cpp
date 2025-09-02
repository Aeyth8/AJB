#include <Windows.h>
#include "CStrLib.h"


struct TEMP_HLP
{
	const char* Parm;
	mutable bool Duplicate;
};
TEMP_HLP TEMP_HardcodedLaunchParms[] =
{
	{"-bDebugInputMode", 0}
};

int main(int ArgC, const char** ArgV)
{
	CStr CommandLine(ArgC, ArgV);

	for (const char*& Arg : CommandLine)
	{
		for (TEMP_HLP& Parm : TEMP_HardcodedLaunchParms)
		{
			if (StringCompare(Arg, Parm.Parm, false))
			{
				Parm.Duplicate = true;
			}
		}
	}


	char FullPath[260]{0};

	GetModuleFileNameA(0, FullPath, _countof(FullPath));

	const char* GamePath = strrchr(FullPath, '\\');
	int Modify = GamePath - (char*)FullPath;

	for (; Modify < CharacterLength(FullPath); ++Modify)
	{
		FullPath[Modify] = 0;
	}

	strcat_s(FullPath, "\\AJB\\Binaries\\Win64\\AJB-Win64-Shipping.exe");

	char FakePath[280]{0};
	strcat_s(FakePath, "\"");
	strcat_s(FakePath, FullPath);
	strcat_s(FakePath, "\"");
	CommandLine.Array[0] = FakePath;

    /*AllocConsole();

	FILE* Window;
	freopen_s(&Window, "CONOUT$", "w", stdout); 
	freopen_s(&Window, "CONIN$", "r", stdin);*/

	char CommandLineOutput[1024]{0};
	
	for (int i{0}; i < CommandLine.Count; ++i)
	{
		strcat_s(CommandLineOutput, " ");
		strcat_s(CommandLineOutput, CommandLine.Array[i]);
	}

	
	for (TEMP_HLP& Parm : TEMP_HardcodedLaunchParms)
	{
		if (!Parm.Duplicate) // only add if not already present
		{
			strcat_s(CommandLineOutput, " ");
			strcat_s(CommandLineOutput, Parm.Parm);
		}
	}


    if (GetFileAttributesA(FullPath) != INVALID_FILE_ATTRIBUTES) {
        STARTUPINFOA si{};
        PROCESS_INFORMATION pi;
        if (CreateProcessA(FullPath, CommandLineOutput, nullptr, nullptr, false, CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi)) {
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
    }
    return 0;
}