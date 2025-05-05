#pragma once
#include "../SDK/Engine_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{





class Pointers
{
public:

	static SDK::UEngine* UEngine();
	static SDK::UWorld* UWorld();
	
	// Returns Player0 by default.
	// * * A replicated client only has access to their PlayerController. 
	static SDK::APlayerController* Player(const int Index = 0);

	static const SDK::FName& FString2FName(const SDK::FString& String);

	static bool ConstructUConsole(SDK::UEngine* EngineOverride, const SDK::FString ConsoleKey = L"Tilde");
	static bool ConstructUConsole(const SDK::FString ConsoleKey = L"Tilde");

	template <typename UClass>
	std::vector<UClass>& FindObjects(bool IncludeDefaultObjects = true);

	template <typename UClass>
	UClass* GetLastOf(bool IncludeDefaultObjects = true);








};

	


















}