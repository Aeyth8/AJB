#include "Pointers.h"
#include "../Global.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL; using namespace Global;


/*
		Public
*/

SDK::UEngine* Pointers::UEngine()
{
	SDK::UEngine* Engine = SDK::UEngine::GetEngine();
	if (IsNull(Engine)) LogA("Pointers", "UEngine is a null pointer!");

	return Engine;
}

SDK::UWorld* Pointers::UWorld()
{
	SDK::UWorld* World = SDK::UWorld::GetWorld();
	if (IsNull(World)) LogA("Pointers", "UWorld is a null pointer!");

	return World;
}

SDK::APlayerController* Pointers::Player(const int Index)
{
	SDK::APlayerController* Player = UWorld()->OwningGameInstance->LocalPlayers[Index]->PlayerController;
	if (IsNull(Player)) LogA("Pointers", "Player " + std::to_string(Index) + " is a null pointer!");

	return Player;
}

const SDK::FName& Pointers::FString2FName(const SDK::FString& String)
{
	return SDK::UKismetStringLibrary::Conv_StringToName(String);
}

bool Pointers::ConstructUConsole(SDK::UEngine* EngineOverride, const SDK::FString ConsoleKey)
{
	SDK::UEngine* Engine = EngineOverride;

	if (!EngineOverride) Engine = Pointers::UEngine();
	if (IsNull(Engine)) return false;

	if (!IsNull(SDK::UInputSettings::GetDefaultObj()))
	{
		SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = Pointers::FString2FName(ConsoleKey);

		SDK::UObject* ConsoleObj = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);

		if (IsNull(ConsoleObj)) return false;

		return (!IsNull(Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(ConsoleObj)));
	}

	return false;
}


bool Pointers::ConstructUConsole(const SDK::FString ConsoleKey)
{
	return Pointers::ConstructUConsole(nullptr, ConsoleKey);
}
