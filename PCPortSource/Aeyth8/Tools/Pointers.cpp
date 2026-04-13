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

SDK::UEngine* Pointers::UEngine()
{
	static SDK::UEngine* Engine{nullptr};

	return Engine ? Engine : Engine = SDK::UEngine::GetEngine();
}

SDK::UWorld* Pointers::UWorld()
{
	if constexpr (SDK::Offsets::GWorld != 0)
	{
		static uintptr_t GWorld = SDK::Offsets::GWorld + GBA;

		return *reinterpret_cast<SDK::UWorld**>(GWorld);
	}
	else
	{
		SDK::UEngine* Engine = UEngine();
		if (Engine && Engine->GameViewport)
		{
			return Engine->GameViewport->World;
		}
	}	
}

SDK::AGameModeBase* Pointers::GameMode(SDK::UWorld* InWorld)
{
	return InWorld && InWorld->AuthorityGameMode ? InWorld->AuthorityGameMode : nullptr;
}

SDK::APlayerController* Pointers::Player(const int Index)
{
	SDK::UWorld* World = UWorld();
	if (World && World->OwningGameInstance && World->OwningGameInstance->LocalPlayers.IsValid())
	{
		return World->OwningGameInstance->LocalPlayers[Index]->PlayerController;
	}

	return nullptr;
}

SDK::FName Pointers::FString2FName(const SDK::FString& String)
{
	return SDK::UKismetStringLibrary::Conv_StringToName(String);
}

SDK::UBlueprintFunctionLibrary* A8CL::Pointers::BlueprintFunctionLibrary()
{
	static SDK::UBlueprintFunctionLibrary* Library{nullptr};
	if (!Library) Library = SDK::UBlueprintFunctionLibrary::GetDefaultObj();

	return Library;
}

bool Pointers::ConstructUConsole(const SDK::FName& ConsoleKey)
{
	if (GEngine)
	{
		SDK::UInputSettings* InputSettings = SDK::UInputSettings::GetDefaultObj();
		if (InputSettings)
		{
			InputSettings->ConsoleKeys[0].KeyName = ConsoleKey;

			SDK::UConsole* ConsoleObj = (SDK::UConsole*)SDK::UGameplayStatics::SpawnObject(GEngine->ConsoleClass, GEngine->GameViewport);

			if (ConsoleObj)
			{
				return (GEngine->GameViewport->ViewportConsole = ConsoleObj) != nullptr;
			}
		}
	}
	
	return false;
}

bool Pointers::ObjectHasFlag(SDK::UObject* Object, EObjectFlags Flag)
{
	return (EObjectFlags)Object->Flags & Flag;
}

__int64* Pointers::SpawnActorInternal(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters)
{
	return OFF::SpawnActor.Call<__int64*(__fastcall*)(SDK::UWorld*, SDK::UClass*, const SDK::FVector&, const SDK::FRotator&, FActorSpawnParameters&)>()(This, Class, Location, Rotation, SpawnParameters);
}