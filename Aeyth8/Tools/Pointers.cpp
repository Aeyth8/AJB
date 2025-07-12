#include "Pointers.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL; using namespace Global;


/*
		Public
*/

SDK::UEngine* const& Pointers::UEngine()
{
	static SDK::UEngine* Engine{nullptr};

	if (!IsNull(Engine)) return Engine;

	Engine = SDK::UEngine::GetEngine();

	if (IsNull(Engine)) LogA("Pointers", "UEngine is a null pointer!");

	return Engine;
}

SDK::UWorld* Pointers::UWorld()
{
	if (SDK::Offsets::GWorld != 0)
	{
		static uintptr_t GWorld = SDK::Offsets::GWorld + GBA;

		if (!IsNull(*reinterpret_cast<SDK::UWorld**>(GWorld)))
		{
			return *reinterpret_cast<SDK::UWorld**>(GWorld);
		}

		LogA("Pointers", "GWorld is a null pointer!");
	}

	SDK::UEngine* Engine = UEngine();

	if (!IsNull(Engine) && !IsNull(Engine->GameViewport) && !IsNull(Engine->GameViewport->World))
	{
		return Engine->GameViewport->World;
	}
	

	LogA("Pointers", "UWorld is a null pointer!");

	return nullptr;
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


__int64* Pointers::SpawnActorInternal(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters)
{
	return OFF::SpawnActor.VerifyFC<SpawnActor_T>()(This, Class, Location, Rotation, SpawnParameters);
}