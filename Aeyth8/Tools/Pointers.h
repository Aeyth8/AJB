#pragma once
#include "../../Dumper-7/SDK/Engine_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

// This doesn't belong here but I don't have time to bother rearranging everything right now.

struct FActorSpawnParameters
{
	SDK::FName Name;

	SDK::AActor* Template;

	SDK::AActor* Owner;

	SDK::APawn* Instigator;

	SDK::ULevel* OverrideLevel;

	SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
};

typedef __int64*(__fastcall* SpawnActor_T)(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters);

namespace A8CL
{





namespace Pointers
{
	SDK::UEngine* const& UEngine(const bool bLog = true);
	SDK::UWorld* UWorld(const bool bLog = true);
	
	// Returns Player0 by default.
	// * * A replicated client only has access to their PlayerController. 
	SDK::APlayerController* Player(const int Index = 0);

	// Much more convenient class casted template for custom controller classes.  
	template <typename UClass>
	UClass* const& Player(const int& Index = 0)
	{
		SDK::APlayerController* PlayerController = Player(Index);

		if (PlayerController && PlayerController->IsA(UClass::StaticClass()))
		{
			return static_cast<UClass*>(PlayerController);
		}

		return nullptr;
	}

	const SDK::FName& FString2FName(const SDK::FString& String);

	bool ConstructUConsole(SDK::UEngine* EngineOverride, const SDK::FString ConsoleKey = L"Tilde");
	bool ConstructUConsole(const SDK::FString ConsoleKey = L"Tilde");

	template <typename UClass>
	std::vector<UClass*> FindObjects(bool IncludeDefaultObjects = true)
	{
		// Iterates through all of the GObjects array and returns a vector containing all found objects that match types.

		SDK::UObject* CurrentObject;
		std::vector<UClass*> ObjectsList;

		for (int i{0}; i < SDK::UObject::GObjects->Num(); ++i)
		{
			CurrentObject = SDK::UObject::GObjects->GetByIndex(i);

			if (!CurrentObject) continue;

			if (CurrentObject->IsA(UClass::StaticClass()))
			{
				if (!IncludeDefaultObjects && CurrentObject->IsDefaultObject()) continue;
				ObjectsList.push_back((UClass*)CurrentObject);
			}
		}

		return ObjectsList;
	}

	template <typename UClass>
	UClass* GetLastOf(bool IncludeDefaultObjects = true)
	{
		return Pointers::FindObjects<UClass>(IncludeDefaultObjects).back();
	}

	__int64* SpawnActorInternal(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, struct FActorSpawnParameters& SpawnParameters);

	template <typename UClass>
	UClass* SpawnActor(SDK::UWorld* World = UWorld(), SDK::UClass* Class = UClass::StaticClass(), SDK::FVector Location = SDK::FVector(), SDK::FRotator Rotation = SDK::FRotator(), FActorSpawnParameters SpawnParameters = FActorSpawnParameters{})
	{
		return reinterpret_cast<UClass*>(SpawnActorInternal(World, Class, Location, Rotation, SpawnParameters));
	}

	template <typename UClass>
	UClass* SpawnActor(struct FActorSpawnParameters& SpawnParameters)
	{
		return SpawnActor<UClass>(UWorld(), UClass::StaticClass(), SDK::FVector(), SDK::FRotator(), SpawnParameters);
	}




};

	


















}