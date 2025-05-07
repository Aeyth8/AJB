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
	SDK::UEngine* UEngine();
	SDK::UWorld* UWorld();
	
	// Returns Player0 by default.
	// * * A replicated client only has access to their PlayerController. 
	SDK::APlayerController* Player(const int Index = 0);

	const SDK::FName& FString2FName(const SDK::FString& String);

	bool ConstructUConsole(SDK::UEngine* EngineOverride, const SDK::FString ConsoleKey = L"Tilde");
	bool ConstructUConsole(const SDK::FString ConsoleKey = L"Tilde");

	template <typename UClass>
	std::vector<UClass>& FindObjects(bool IncludeDefaultObjects = true);

	template <typename UClass>
	UClass* GetLastOf(bool IncludeDefaultObjects = true);








};

	


















}