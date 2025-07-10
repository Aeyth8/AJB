#pragma once
#include "../SDK/Engine_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{





namespace Pointers
{
	SDK::UEngine* const& UEngine();
	SDK::UWorld* UWorld();
	
	// Returns Player0 by default.
	// * * A replicated client only has access to their PlayerController. 
	SDK::APlayerController* Player(const int Index = 0);

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








};

	


















}