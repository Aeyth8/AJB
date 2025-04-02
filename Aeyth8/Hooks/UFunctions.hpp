#pragma once
#include "../../pch.h"
#include "Commands.hpp"
#include "../InternalCommands.hpp"

class UFunctions
{
public:

	class Helpers
	{
	private:

		inline static std::string FURLParseCache{""};
		inline static SDK::FString FURLParseCacheW{L""};
		inline static SDK::FString SDK::FURL::* FURLPointers[] = {&SDK::FURL::Protocol, &SDK::FURL::Host, &SDK::FURL::Map, &SDK::FURL::RedirectURL, &SDK::FURL::Portal};
		const inline static std::string FURLPointerNames[] = { "Protocol", "Host", "Map", "RedirectURL", "Portal" };

	public:

		inline static std::string FURLParser(SDK::FURL &URL)
		{
			FURLParseCache.clear();
			for (int i{0}; i < 5; ++i)
			{
				if (&URL->*FURLPointers[i]) {
					FURLParseCacheW = &URL->*FURLPointers[i];
					FURLParseCache += ("[" + FURLPointerNames[i] + "]: " + FURLParseCacheW.ToString());
					if (i == 1 && &URL.Port) FURLParseCache += (":" + std::to_string(URL.Port));
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
	public:

		inline static void ProcessEnd() { Hooks::DisableAllHooks(); Hooks::Uninit(); Logger::Close(); }

	private:

		inline static std::string CommandParsingCache{""};
		inline static int CommandName{0};

		inline static int ParameterIte{0}; // Used to substring the size for parsing.
		inline static bool WhitespaceReset{false};
		inline static int ParameterIteSize{0};

		inline static std::string ParameterCache{""};
		inline static std::vector<std::string> Parameters;

	public:

		inline static bool CommandParser(const std::string& Command)
		{
			CommandParsingCache.clear();
			Parameters.clear();
			CommandName = Command.find_first_of(" ");
			
			for (char Character : Command) {
				Character = std::tolower(Character);
				CommandParsingCache.push_back(Character);
			}

			if (Internal::IsInternalCommand(CommandParsingCache.substr(0, (CommandName - 1)))) return true;

			//if (!A8CL::IsCustomCommand(CommandParsingCache.substr(0, CommandName))) return false;

			/*for (char Parameter : CommandParsingCache.substr(CommandName + 1)) {
				if (Parameter != ' ')
				{
					if (WhitespaceReset) { ParameterIte = Parameter;
						WhitespaceReset = false;
					}

					ParameterIteSize++;
					continue;
				}
				Parameters.push_back(CommandParsingCache.substr(ParameterIte, ParameterIteSize));

				ParameterIteSize = 0;
				WhitespaceReset = true;
				//Parameters.push_back(CommandParsingCache.substr(ParameterIte)
			}*/

			for (char Parameter : CommandParsingCache.substr(CommandName + 1)) {
				if (Parameter != ' ')
				{
					ParameterCache.push_back(Parameter);
					continue;
				}
				Parameters.push_back(ParameterCache);
				ParameterCache.clear();
			}

			A8CL::PrintCommand(CommandParsingCache.substr(0, CommandName), Parameters);
			// WIP
		}

	};


	class Decl
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* This, SDK::FString& Command);
		inline static UConsole FC_UConsole{0};

		typedef void(__thiscall* Browse)(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);
		inline static Browse FC_Browse{0};

		typedef bool(__thiscall* InitListen)(SDK::UIpNetDriver*, SDK::UObject*, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);
		inline static InitListen FC_InitListen{0};

		typedef bool(__thiscall* CreateNamedNetDriver)(SDK::UEngine*, SDK::UWorld* InWorld, SDK::FName NetDriverName, SDK::FName NetDriverDefinition);
		inline static CreateNamedNetDriver FC_CreateNamedNetDriver{0};

		typedef void(__thiscall* AppPreExit)();
		inline static AppPreExit FC_AppPreExit{0};

		typedef void(__thiscall* ProcessEvent)(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);
		inline static ProcessEvent FC_ProcessEvent{0};

		typedef bool(__thiscall* IsNonPakFilenameAllowed)(__int64* This, SDK::FString& InFilename);
		inline static IsNonPakFilenameAllowed FC_IsNonPakFilenameAllowed{0};

		typedef bool(__thiscall* FindFileInPakFiles)(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry);
		inline static FindFileInPakFiles FC_FindFileInPakFiles{0};
	};

	class Func
	{
	public:

		inline static std::string UConsoleTemp{""};
		inline static void UConsole(SDK::UConsole* This, SDK::FString& Command)
		{
			UConsoleTemp = Command.ToString();
			LogA("UConsole", UConsoleTemp);

			//if (Helpers::CommandParser(UConsoleTemp)) return;

			Decl::FC_UConsole(This, Command);
		}

		inline static void Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
		{
			++Global::BrowseCount;

			if (!Global::bConstructedUConsole) 
			{ Global::bConstructedUConsole = true; 
				ConstructUConsole(); 
				LogA("Browse","Constructing UConsole early");
			}

			LogA("Browse", Helpers::FURLParser(URL));

			Decl::FC_Browse(This, WorldContext, URL, Error);
		}

		inline static bool InitListen(SDK::UIpNetDriver* This, SDK::UObject* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
		{
			LogA("InitListen", "[UIpNetDriver]: " + This->GetFullName());
			LogA("InitListen", Helpers::FURLParser(LocalURL));

			return (*Decl::FC_InitListen)(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
		}

		inline static void AppPreExit()
		{
			ConstructThread(Helpers::ProcessEnd);
			Decl::FC_AppPreExit();
		}


		inline static void SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters* SpawnParameters)
		{
			//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: " + Class->GetFullName() + " :: FActorSpawnParameters->SpawnCollisionHandlingOverride = " + std::to_string(Param));
			//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: Owner = " + SpawnParameters->Owner->GetFullName());

			//PTR::FC_SpawnActor(World, Class, Location, Rotation, SpawnParameters);
		}

		inline static std::string PESpamCache{""};
		inline static void ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms)
		{
			//static int (*ShowCursor)() = decltype (ShowCursor)(GBA + Offsets::ShowCursor);
			//ShowCursor();
			/*LogA("PE", Function->GetFullName());
			Logger::Log << Parms << "\n";
			Logger::Log.flush();*/
			Decl::FC_ProcessEvent(This, Function, Parms);
		}

		inline static bool IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename)
		{
			return (*Decl::FC_IsNonPakFilenameAllowed)(This, InFilename);
			//bool Result = Decl::FC_IsNonPakFilenameAllowed(This, InFilename);

			//LogA(Result ? "IsNonPakFilenameAllowed [TRUE" : "IsNonPakFilenameAllowed [FALSE", InFilename.ToString());
		}

		inline static bool FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry)
		{
			if (wcscmp(Filename, L"../../../AJB/..//SettingsClient.ini") == 0)
			{
				LogA("FindFileInPakFiles", "Overriding to use loose file...");
				return false;
			}

			return (*Decl::FC_FindFileInPakFiles)(This, Filename, OutPakFile, OutEntry);
		}

	};

};

class Net
{
public:
	enum ENetMode {
		NM_Standalone,
		NM_DedicatedServer,
		NM_ListenServer,
		NM_Client,
		NM_MAX,
		Passthrough // Custom mode
	};
	enum ENetRole
	{
		ROLE_None,
		ROLE_SimulatedProxy, // Default client role
		ROLE_AutonomousProxy,
		ROLE_Authority,
		ROLE_MAX
	};

	const inline static std::string DT_NetMode[] = {"Standalone", "DedicatedServer", "ListenServer", "Client", "MAX"};
	const inline static std::string DT_RemoteRole[] = {"None", "SimulatedProxy", "AutonomousProxy", "Authority", "MAX"};

	typedef ENetMode(__thiscall* UWorldInternalGetNetMode)(SDK::UWorld* World);
	inline static UWorldInternalGetNetMode FC_WorldGetNetMode{0};

	typedef ENetMode(__thiscall* AActorInternalGetNetMode)(SDK::AActor* Actor);
	inline static AActorInternalGetNetMode FC_ActorGetNetMode{0};

	typedef ENetRole(__thiscall* RemoteRole)(__int64, __int64, BYTE*);
	inline static RemoteRole FC_RemoteRole{0};

	typedef ENetRole(__thiscall* LocalRole)(__int64, __int64, BYTE*);
	inline static LocalRole FC_LocalRole{0};

	inline static ENetMode WorldHookMode{ENetMode::NM_ListenServer};
	inline static ENetMode ActorHookMode{ENetMode::NM_ListenServer};

	inline static ENetMode WorldGetNetMode(SDK::UWorld* World) {
		if (WorldHookMode == ENetMode::Passthrough) return FC_WorldGetNetMode(World);
		return WorldHookMode;
	}

	inline static ENetMode ActorGetNetMode(SDK::AActor* Actor) {
		if (ActorHookMode == ENetMode::Passthrough) return FC_ActorGetNetMode(Actor);
		return ActorHookMode;
	}

	inline static void LogWorldNetMode(SDK::UWorld* WorldOverride = World) {
		if (WorldOverride != nullptr && WorldOverride->IsA(SDK::UWorld::StaticClass())) {
			FC_WorldGetNetMode = (UWorldInternalGetNetMode)(GBA + Offsets::WorldGetNetMode);
			int i = FC_WorldGetNetMode(WorldOverride);

			LogA("UWorld::InternalGetNetMode", DT_NetMode[i]);
		}
		else { LogA("LogWorldNetMode", "Failed due to nullptr."); }
	}

	inline static void LogActorNetMode(SDK::AActor* ActorOverride = 0) {
		// This if-chain must exist or it will crash when switching levels.
		if (World) if (World->OwningGameInstance) if (World->OwningGameInstance->LocalPlayers) ActorOverride = World->OwningGameInstance->LocalPlayers[0]->PlayerController;
		if (ActorOverride != nullptr && ActorOverride->IsA(SDK::AActor::StaticClass())) {
			FC_ActorGetNetMode = (AActorInternalGetNetMode)(GBA + Offsets::ActorGetNetMode);
			int i = FC_ActorGetNetMode(ActorOverride);

			LogA("AActor::InternalGetNetMode", DT_NetMode[i]);
		}
		else { LogA("LogActorNetMode", "Failed due to nullptr."); }
	}

	inline static void LogRemoteRole() {

	}

	inline static void LogLocalRole() {

	}
};
