#include "UFunctions.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"
#include "../Global.hpp"
#include "../Tools/Pointers.h"
#include "ConsoleCommands.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;

/*
		Helpers
*/



const std::string& UFunctions::Helpers::FURLParser(SDK::FURL& URL)
{
	FURLParseCache.clear();

	// Parses FStrings
	for (int i{0}; i < 5; ++i)
	{
		if (&URL->*FURLPointers[i])
		{
			FURLParseCache += ("[" + FURLPointerNames[i] + "]: " + (URL.*FURLPointers[i]).ToString());

			// Combines the host and port
			if (i == 1 && URL.Port) FURLParseCache += ":" + std::to_string(URL.Port);
			FURLParseCache += " | ";
		}
	}
	if (&URL.Valid) FURLParseCache += ("[Valid]:" + std::to_string(URL.Valid) + " | ");

	if (URL.Op.Num() > 0) {
		FURLParseCache += "[Options]: ";
		for (int i{0}; i < URL.Op.Num(); ++i) FURLParseCache += ("?" + URL.Op[i].ToString());
		FURLParseCache += " | ";
	}
	
	return FURLParseCache;
}

const std::string& UFunctions::Helpers::FLPIParser(SDK::FFullyLoadedPackagesInfo& Info)
{
	FLPIParseCache.clear();

	FLPIParseCache += "\n[FullyLoadType]: " + FullyLoadPackageType[(int)Info.FullyLoadType];
	FLPIParseCache += " | [Tag]: " + Info.Tag.ToString() + " | [PackagesToLoad]: { ";

	for (int i{0}; i < Info.PackagesToLoad.Num(); ++i) FLPIParseCache += Info.PackagesToLoad[i].ToString() + " | ";
	FLPIParseCache += " } | [LoadedObjects]: { ";

	for (int i{0}; i < Info.LoadedObjects.Num(); ++i) FLPIParseCache +=  Info.LoadedObjects[i]->GetFullName() + " | ";
	FLPIParseCache += " }\n";

	return FLPIParseCache;
}

const std::string& UFunctions::Helpers::FLPIParser_T(SDK::TArray<SDK::FFullyLoadedPackagesInfo>& Info)
{
	std::string Return;

	for (int i{0}; i < Info.Num(); ++i) Return += UFunctions::Helpers::FLPIParser(Info[i]) + "\n";

	return Return;
}

const std::string& UFunctions::Helpers::FWorldContextParser(SDK::FWorldContext& Context)
{
	FWorldContextParseCache.clear();

	FWorldContextParseCache += ("\n[LastURL]: " + FURLParser(Context.LastURL));
	FWorldContextParseCache += ("\n[LastRemoteURL]: " + FURLParser(Context.LastRemoteURL));
	FWorldContextParseCache += ("\n[PackagesToFullyLoad]: " + FLPIParser_T(Context.PackagesToFullyLoad) + "\n[LoadedLevelsForPendingMapChange]: { ");

	for (int i{0}; i < Context.LoadedLevelsForPendingMapChange.Num(); ++i) FWorldContextParseCache += (Context.LoadedLevelsForPendingMapChange[i]->GetFullName() + " | ");
	FWorldContextParseCache += " }\n";

	// I don't think the rest is very important..

	return FWorldContextParseCache;
}

void UFunctions::Helpers::ProcessEnd()
{
	Hooks::DisableAllHooks();
	Hooks::Uninit(); 
	Global::CloseLog();
}


/*template <typename T>
const T& TArrayParser(const SDK::TArray<T>& Array)
{
	for (int i{0}; i < Array.Num(); ++i)
	{
	
	
	}


}*/


using namespace Global;





/*
		UFunctions
*/

void UFunctions::UConsole(SDK::UConsole* This, SDK::FString& Command)
{
	std::string StrCommand = Command.ToString();

	LogA("UConsole", StrCommand);

	if (ConsoleCommands::IsValidCommand(StrCommand))
	{

	}

	OFF::UConsole.VerifyFC<Decl::UConsole>()(This, Command);
}

UFunctions::BrowseReturnVal UFunctions::Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
{
	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = Pointers::ConstructUConsole();
		LogA("Browse", "Constructed UConsole early.");
	}

	LogA("Browse", Helpers::FURLParser(URL));
	//LogA("Browse", Helpers::FWorldContextParser(WorldContext));

	return OFF::Browse.VerifyFC<Decl::Browse>()(This, WorldContext, URL, Error);
	
}

bool UFunctions::InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
{
	//return VerifyFC<Decl::InitListen>(OFF::InitListen)(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
}

SDK::APlayerController* UFunctions::Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage)
{
	LogA("Login", "Called.");

	//SDK::ULevelStreamingKismet::GetDefaultObj()->LoadLevelInstance(Pointers::UWorld(), L"/Game/Aeyth8/UI/InGame/LVL_KeyListener", SDK::FVector(0, 0, 0), SDK::FRotator(0, 0, 0), 0);

	return OFF::Login.VerifyFC<Decl::Login>()(This, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void UFunctions::PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage)
{
	LogA("PreLogin", "Options: " + Options->ToString() + " Address: " + Address->ToString());
}

void UFunctions::AppPreExit()
{
	Global::ConstructThread(Helpers::ProcessEnd);
	OFF::AppPreExit.VerifyFC<Decl::AppPreExit>()();
}

void UFunctions::SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters* SpawnParameters)
{



}

void UFunctions::ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms)
{



}

bool UFunctions::IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename)
{



}

bool UFunctions::FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry)
{
	// "../../../"
	//static constexpr const wchar_t LocalDirectory[]{L'.',L'.',L'/',L'.',L'.',L'/',L'.',L'.',L'/'};
	//static constexpr const wchar_t LocalDirectoryi[]{ L'.','/',L'\\' };


	// (0 * 2) , 1 || 2 
	// x3  

	// We need to do bitwise operations (for most efficiency) and my brain hurts trying to think of it
	// 0 0 0 0 | 0 0 0 0 

	BYTE X{0};

	while ((X & 0b11) < 3)
	{
		// 1,3,6					// 2,4,7
		if (Filename[((X & 0b11) * 3) + 0] != '.' || Filename[((X & 0b11) * 3) + 1] != '.')
		{
			break;
		}

		// 0,5,8 (due to iterators and arrays this is technically 1,6,9)
		if (Filename[((X & 0b11) * 3) + 2] != '/' && Filename[((X & 0b11) * 3) + 2] != '\\')
		{
			break;
		}

		X |= (1 << ((X & 0b11) + 2));

		X = (X & ~0b11) | ((X & 0b11) + 1);
	}

	

	// This logic ensures that we are only allowing file overrides from within the game directory, and disallowing from externals such as AppData\Local
	if ((X & 0b00011100) == 0b00011100)
	{
		std::wstring WFile(Filename);
		LogA("FindFileInPakFiles", std::string(WFile.begin(), WFile.end()));
	}

	/*for (BYTE x{0}; x < 3; ++x)
	{
		// 1,3,6					// 2,4,7
		if (Filename[x * 3] != '.' || Filename[x * 3 + 1] != '.')
		{
			break;
		}

		// 0,5,8 (due to iterators and arrays this is technically 1,6,9)
		if (Filename[x * 3 + 2] != '/' && Filename[x * 3 + 2] != '\\')
		{
			break;
		}
		++X;
	}

	// This logic ensures that we are only allowing file overrides from within the game directory, and disallowing from externals such as AppData\Local
	if (X == 3)
	{
		std::wstring WFile(Filename);
		LogA("FindFileInPakFiles", std::string(WFile.begin(), WFile.end()));
	}*/

	return OFF::FindFileInPakFiles.VerifyFC<Decl::FindFileInPakFiles>()(This, Filename, OutPakFile, OutEntry);
	

}