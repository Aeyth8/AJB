#pragma once
#include "../SDK/Engine_classes.hpp"
#include "../../SDK/OnlineSubsystemUtils_classes.hpp"


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{



class UFunctions
{
public:

	class Helpers
	{
	private:

		const inline static SDK::FString SDK::FURL::* FURLPointers[] = {&SDK::FURL::Protocol, &SDK::FURL::Host, &SDK::FURL::Map, &SDK::FURL::RedirectURL, &SDK::FURL::Portal};
		const inline static std::string FURLPointerNames[] = { "Protocol", "Host", "Map", "RedirectURL", "Portal" };
		inline static std::string FURLParseCache{""};

		const inline static std::string FullyLoadPackageType[] = { "Map = 0", "Game_PreLoadClass = 1", "Game_PostLoadClass = 2", "Always = 3", "Mutator = 4", "MAX = 5" };
		inline static std::string FLPIParseCache{""};


		inline static std::string FWorldContextParseCache{""};

	public:

		const static std::string& FURLParser(SDK::FURL& URL);
		const static std::string& FLPIParser(SDK::FFullyLoadedPackagesInfo& Info);
		const static std::string& FLPIParser_T(SDK::TArray<SDK::FFullyLoadedPackagesInfo>& Info);
		const static std::string& FWorldContextParser(SDK::FWorldContext& Context);

	public:

		static void ProcessEnd();

	public:

		
		// TO DO : FWorldContext Parser :(
		


	};

	enum BrowseReturnVal
	{
		/** Successfully browsed to a new map. */
		Success,
		/** Immediately failed to browse. */
		Failure,
		/** A connection is pending. */
		Pending,
	};

	class Decl
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* This, SDK::FString& Command);

		typedef BrowseReturnVal(__thiscall* Browse)(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);

		typedef bool(__thiscall* InitListen)(SDK::UIpNetDriver*, SDK::UObject*, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);

		typedef void(__thiscall* PreLogin)(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

		typedef bool(__thiscall* CreateNamedNetDriver)(SDK::UEngine*, SDK::UWorld* InWorld, SDK::FName NetDriverName, SDK::FName NetDriverDefinition);

		typedef void(__thiscall* AppPreExit)();

		typedef void(__thiscall* ProcessEvent)(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);

		typedef bool(__thiscall* IsNonPakFilenameAllowed)(__int64* This, SDK::FString& InFilename);

		typedef bool(__thiscall* FindFileInPakFiles)(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry);
	};

	struct FActorSpawnParameters
	{
		SDK::FName Name;

		SDK::AActor* Template;

		SDK::AActor* Owner;

		SDK::APawn* Instigator;

		SDK::ULevel* OverrideLevel;

		SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
	};



	static void UConsole(SDK::UConsole* This, SDK::FString& Command);

	static BrowseReturnVal Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);

	static bool InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);

	static void PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

	static void AppPreExit();

	static void SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters* SpawnParameters);

	static void ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);

	static bool IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename);

	static bool FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry);




















};














}