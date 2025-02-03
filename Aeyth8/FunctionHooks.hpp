#pragma once
#include "../pch.h" // Make sure that MinHook.h is included in pch.h, or directly included here.

class UFunctions
{
public:

	// Typedefinition and Function Call [FC]
	class PTR
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* Var, SDK::FString* Command); 
		inline static UConsole FC_UConsole{0};

		typedef void(__thiscall* PreLogin)(SDK::AGameModeBase* Var, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);
		inline static UConsole FC_PreLogin{0};
		inline static PreLogin FC_AJBPreLogin{0}; // This PreLogin gets used when the gamemode is of any AJB type and not overridden to be custom.

		typedef void(__thiscall* Login)(SDK::UPlayer* NewPlayer, SDK::ENetRole* InRemoteRole, const SDK::FString& Portal, const SDK::FString& Options, const SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);
		inline static Login FC_Login{0};

		typedef bool(__thiscall* Browse)(SDK::UEngine* Engine, SDK::FWorldContext& WorldContext, SDK::FURL, SDK::FString&);
		inline static Browse FC_Browse{0};

		typedef void(__thiscall* SpawnActor)(SDK::UWorld* World, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, const FActorSpawnParameters* SpawnParameters);
		inline static SpawnActor FC_SpawnActor{0};


	};

	inline static void PreLogin(SDK::AGameModeBase* Var, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage) {
		LogA("Hooks::Functions::PreLogin()", "PreLogin has been called with Options =   " + Options->ToString());

		/* Authentication will be added later */
	}

	inline static SDK::APlayerController* Login(SDK::UPlayer* NewPlayer, SDK::ENetRole* InRemoteRole, const SDK::FString& Portal, const SDK::FString& Options, const SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage) {
		LogA("World", UWorld()->GetFullName());

		if (!CheckNull(Instance)) { Instance->SetMaxConsumePP(0); Instance->AMSystemObject->PP = 1170; }
		if (UWorld()->GetFullName() == "World AJBSimpleMatch_P.AJBSimpleMatch_P") LoadLevelInstance(L"/Game/Aeyth8/Blueprints/WB/ShowCursor");

		LogA("Hooks::Functions::Login()", "Login has been called.");

		/* Add custom logic here (not needed) */
		PTR::FC_Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
	}

	inline static void UConsole(SDK::UConsole* Var, SDK::FString* Command) {
		LogA("Hooks::Functions::UConsole", Command->ToString());
		//A8CL::CC::IsCustomCommand(*Command);
		// If the captured command matches our custom command it will call custom logic.
		for (size_t i{0}; i < A8CL::CustomCommands.size(); ++i) { 
			if (Command->ToString() == A8CL::CustomCommands[i]) { A8CL::ExecuteLogic(i, Command->ToString()); return; }
		} // NEEDS PROPER PARSE LOGIC FOR DYNAMIC COMMANDS WITH PARAMETERS.

		PTR::FC_UConsole(Var, Command);
	}

	inline static int Browse(SDK::UEngine* Engine, SDK::FWorldContext& WorldContext, SDK::FURL FURL, SDK::FString& Error) {
		std::string Info;
		Log("<FunctionHooks.hpp> / Hooks::Functions::Browse():: BEGIN");
		for (size_t i{0}; i < FURL.Op.Num(); ++i) Info += FURL.Op[i].ToString();
		Log("Host: " + FURL.Host.ToString() + " | Port: " + std::to_string(FURL.Port));
		Log("Protocol: " + FURL.Protocol.ToString() + " | Map: " + FURL.Map.ToString() + " | RedirectURL: " + FURL.RedirectURL.ToString() + " | Portal: " + FURL.Portal.ToString());
		if (!Info.empty()) Log("Op: " + Info);
		if (Error.IsValid()) Log("Error: " + Error.ToString());
		Log("<FunctionHooks.hpp> / Hooks::Functions::Browse():: END");
		return PTR::FC_Browse(Engine, WorldContext, FURL, Error);
	}

	inline static void SpawnActor(SDK::UWorld* World, SDK::UClass* Class, const SDK::FVector* Location, const SDK::FRotator* Rotation, FActorSpawnParameters* SpawnParameters) {
		SpawnParameters->SpawnCollisionHandlingOverride = static_cast<SDK::ESpawnActorCollisionHandlingMethod>(2);
		int Param = static_cast<int>(SpawnParameters->SpawnCollisionHandlingOverride);
		//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: " + Class->GetFullName() + " :: FActorSpawnParameters->SpawnCollisionHandlingOverride = " + std::to_string(Param));
		//Log("<FunctionHooks.hpp> / Hooks::Functions::SpawnActor():: Owner = " + SpawnParameters->Owner->GetFullName());
			
		PTR::FC_SpawnActor(World, Class, Location, Rotation, SpawnParameters);
	}


};

class Hooks
{
private:
	struct HookStructure { uintptr_t Offset; LPVOID DetourFunction; LPVOID FunctionCall{0}; const std::string& HookName;  uintptr_t CalculatedAddress{0}; };
	inline static HookStructure Instance[] =
	{
		{0x178A450, UFunctions::UConsole, &UFunctions::PTR::FC_UConsole, "UConsole"},
		{0x13CB710, UFunctions::PreLogin, &UFunctions::PTR::FC_PreLogin, "PreLogin"},
		{0x049E570, UFunctions::PreLogin, &UFunctions::PTR::FC_AJBPreLogin, "AJBPreLogin"},
		{0x13C6A20, UFunctions::Login, &UFunctions::PTR::FC_Login, "Login"},
		{0x1750750, UFunctions::Browse, &UFunctions::PTR::FC_Browse, "Browse"},
		{0x1488440, UFunctions::SpawnActor, &UFunctions::PTR::FC_SpawnActor, "SpawnActor"},
	};

	// Handles the log messages and behavior for CreateAndEnableAllHooks()
	inline static bool HookStatus(MH_STATUS& Status, std::string HookName, int Message, LPVOID FunctionCall = 0) { if (Status == MH_STATUS::MH_ERROR_NOT_INITIALIZED) { Log("MinHook not initialized!"); return false; }
		if (Status == MH_OK) {
			if (Message == 0) Log("Successfully created a hook for " + HookName + ".");
			else if (Message == 1) { Log("Successfully enabled a hook for " + HookName + ". Pointer = " + HexToString(reinterpret_cast<uintptr_t>(FunctionCall))); }
			else { Log("Successfully disabled hook for" + HookName + "."); }
			return true;
		}
		else { 
			if (Message == 0) Log("Failed to create a hook for " + HookName + ".");
			else if (Message == 1) { Log("Failed to enable a hook for " + HookName + "."); }
			else { Log("Failed to disable hook for" + HookName + "."); }
			return false;
		}
	}

	// Idiot proofing.
	inline static bool MH_INIT{false};

	// Used in CreateAndEnableHook()
	inline static int NamelessIteration{0};
	
public:

	// Must be called only once before any hooks are initiated.
	inline static void Init() {
		if (MH_INIT) return;
		MH_STATUS Status = MH_Initialize();

		if (Status != MH_STATUS::MH_OK && Status != MH_STATUS::MH_ERROR_ALREADY_INITIALIZED) {
			ErrorBox(L"! FATAL ERROR !", L"MinHook has failed to initialize! Please restart the game and try again.\nIf the problem persists, try restarting your computer, refer to the source code, or ask me by filing an issue on my GitHub (Aeyth8)", MB_OK);
		}

		Log("MinHook has been initialized.");
		MH_INIT = true;
	}

	// "Must" be called only once at the end of the program after all hooks are disabled. I haven't been doing this for a long time so I doubt it truly matters.
	inline static void Uninit() {
		if (!MH_INIT) return;
		MH_STATUS Status = MH_Uninitialize();

		if (Status != MH_STATUS::MH_OK && Status != MH_STATUS::MH_ERROR_NOT_INITIALIZED) { Log("Failed to uninitialize MinHook, this isn't too important so don't worry about it."); return; }
		Log("MinHook has been uninitialized.");
		MH_INIT = false;
	}

	// Manually create and enable any hook. 
	inline static bool CreateAndEnableHook(uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID OriginalFunction, std::string HookName = "") {
		if (HookName == "") { HookName = "NO_NAME_" + std::to_string(NamelessIteration); NamelessIteration++; }
		
		MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), DetourFunction, reinterpret_cast<LPVOID*>(OriginalFunction));
		if (!HookStatus(Status, HookName, 0)) return false;
		
		Status = MH_EnableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		
		if (HookStatus(Status, HookName, 1, OriginalFunction)) return true;
	}

	// Main hooking function which iterates through all hooks, creating and enabling them while handling errors.
	// > Contains an optional int vector to exclude certain hooks specified by the iterator within HookStructure Instance[] 
	inline static void CreateAndEnableAllHooks(const std::vector<int>& ExceptFor = {}) {
		for (int i{0}; i < std::size(Instance); ++i) {
			// If an exception list was provided, it will make sure to skip it.
			if (!ExceptFor.empty() && std::find(ExceptFor.begin(), ExceptFor.end(), i) != ExceptFor.end()) continue;

			// Calculate all addresses to be dynamically used. 
			Instance[i].CalculatedAddress = (GBA + Instance[i].Offset);

			MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID>(Instance[i].CalculatedAddress), Instance[i].DetourFunction, reinterpret_cast<LPVOID*>(Instance[i].FunctionCall));

			if (!HookStatus(Status, Instance[i].HookName, 0, Instance[i].FunctionCall)) continue;

			Status = MH_EnableHook(reinterpret_cast<LPVOID>(Instance[i].CalculatedAddress));

			HookStatus(Status, Instance[i].HookName, 1, Instance[i].FunctionCall);
		}
	}

	// Manually disable certain hooks.
	inline static bool DisableHook(uintptr_t TargetAddress, std::string HookName) {
		MH_STATUS Status = MH_DisableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		if (HookStatus(Status, HookName, 2)) return true;
		return false;
	}

	// Disable everything, for end of runtime.
	inline static void DisableAllHooks() { MH_DisableHook(MH_ALL_HOOKS); Log("Disabled all hooks."); }

};

// Custom hooks and function calls for engine debugging.
class Debug
{
private:
	/*
		UEngine::GetMaxFPS = 0x175E440
		UEngine::GetMaxTickRate = 0x175E480
		FEngineLoop::AppPreExit = 0x01E24F0
		<Engine\Source\Runtime\Launch\Private> EngineExit = 0x124D4E0
	*/
	class Engine
	{
	public:
		typedef void(__thiscall* Launch)(void);
		inline static Launch FC_EngineExit{0};

		inline static void ProcessEnd() {
			Hooks::DisableAllHooks();
			Hooks::Uninit();
			Logger::Close();
		}

		inline static void EngineExit(void) {
			ConstructThread(ProcessEnd);
			FC_EngineExit();
		}

	};

	typedef float(__thiscall* TGetMaxFPS)(); inline static TGetMaxFPS BS{0};
	//inline static float(*TGetMaxFPS)();

	class Tick
	{
	public:
		typedef void(__thiscall* UGameEngineTick)(SDK::UGameEngine* Instance, float DeltaSeconds, bool bIdleMode);
		inline static UGameEngineTick FC_UGameEngineTick{0};

		inline static int TickCount{0}; 
		inline static bool UsingTickIterator{false};

		inline static void GameEngineTick(SDK::UGameEngine* Instance, float DeltaSeconds, bool bIdleMode) { TickManager(); FC_UGameEngineTick(Instance, DeltaSeconds, bIdleMode); }
		inline static void TickManager() { if (!UsingTickIterator) if (GetMaxFPS() <= TickCount) { COUT << "TickCount = 0\n"; TickCount = 0; }
			++TickCount;
			COUT << "TickCount = " << TickCount << "\n";
		}
		inline static void TickIterator() { while (true) { Sleep(1000); TickCount = 0; } }

		
	};

	struct FFunction { const std::string FunctionName; uintptr_t StaticOffset; LPVOID FC_Pointer; };
	inline static FFunction FunctionList[] = {
		{"GetMaxFPS", 0x175E440, reinterpret_cast<LPVOID>(&BS)}
	};

	class PE
	{
	public:
		typedef void(__thiscall* UProcessEvent)(SDK::UObject*, SDK::UFunction*, LPVOID Params);
		inline static UProcessEvent FC_ProcessEvent{0};

		inline static void ProcessEvent(SDK::UObject* Obj, SDK::UFunction* Function, LPVOID Params) {
			//LogA("PE", Function->GetFullName()); // Uncomment to log every single function called (tens to hundreds of strings per second)

			/*if (Function->GetFullName().find("Function AJB.AJBGameInstance.StartConsumePP") != std::string::npos) {
				LogA("PP", "StartConsumePP has been called, deactivating..");
				Instance->StopConsumePP();
			}
				Doesn't work due to other reasons, but this example code should work as a template aslong as you properly fill in the gaps. 
			*/


			/*
			
				Literally any function call can be put in here but make sure you choose wisely, and only when you have no other option. 
				Performance will suffer greatly with one simple modification.

			*/

			FC_ProcessEvent(Obj, Function, Params);
		}
	};
	
public:
	inline static bool HookEngineExit() { return Hooks::CreateAndEnableHook((GBA + 0x01E24F0), Engine::EngineExit, &Engine::FC_EngineExit, "EngineExit"); }
	inline static bool HookProcessEvent() { return Hooks::CreateAndEnableHook((GBA + 0x8174F0), PE::ProcessEvent, &PE::FC_ProcessEvent, "ProcessEvent"); }
	inline static bool HookGameEngineTick(bool UseTickIterator = false) { if (UseTickIterator) { ConstructThread(Tick::TickIterator); Tick::UsingTickIterator = true; } return Hooks::CreateAndEnableHook((GBA + 0x13D5E30), Tick::GameEngineTick, &Tick::FC_UGameEngineTick, "UGameEngineTick"); }
	

	// These are raw function calls, retrieved from static offsets within the game decompilation and initialized for easy calling here.
	inline static void InitFunctions() { 
		for (int i{0}; i < std::size(FunctionList); ++i) {
			FunctionList[i].FC_Pointer = reinterpret_cast<LPVOID*>(GBA + FunctionList[i].StaticOffset);
			FunctionList[i].FC_Pointer != nullptr ? Log("Successfully retrieved pointer to function " + FunctionList[i].FunctionName + " : " + HexToString(reinterpret_cast<uintptr_t>(FunctionList[i].FC_Pointer))) : Log("Failed to retrieve pointer to Function " + FunctionList[i].FunctionName);
		}
		
	}
	inline static float GetMaxFPS() { 
		static float (*TGetMaxFPS)() = decltype(TGetMaxFPS)(GBA + 0x175E440);
		return TGetMaxFPS();
		//return BS();
	}//return FC_GetMaxFPS(); }
};


class Net
{
private:
	/* 
		0x17B8A40 UWorld:: InternalGetNetMode() | AOB = 48 8B BC 24 ? ? ? ? B8 ? ? ? ? 48 81 C4 ? ? ? ? 5B C3
		0x11AE3A0 AActor::InternalGetNetMode()  | AOB = 48 85 FF 74 0C 48 8B 8F ? ? ? ? 48 85 C9 75 E0
		0x17CB1D0 AActor::execGetRemoteRole() | AOB for both = 48 8B 42 20 45 33 C9 48 85 C0 41 0F 95 C1 4C 03 C8 4C 89 4A 20 0F B6 81 ? ? ? ? 41 88 00 C3 (RemoteRole is second to last function and LocalRole is third to last)
		0x17CAF90 AActor::execGetLocalRole()
	*/
	inline static uintptr_t UWorldGetNetMode = 0x17B8A40;
	inline static uintptr_t AActorGetNetMode = 0x11AE3A0;

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

	typedef ENetMode(__thiscall* UWorldGNM)(SDK::UWorld* World);
	typedef ENetMode(__thiscall* AActorGNM)(SDK::AActor* Actor);
	typedef ENetRole(__thiscall* RemoteRole)(__int64, __int64, BYTE*);
	typedef ENetRole(__thiscall* LocalRole)(__int64, __int64, BYTE*);

	inline static ENetMode WorldHookMode{ENetMode::Passthrough};
	inline static ENetMode ActorHookMode{ENetMode::Passthrough};
	inline static bool WGNM_IsServer{0};
	inline static bool AGNM_IsServer{0};

public:

	class PTR
	{
	public:
		inline static UWorldGNM UWorldGNM{0};
		inline static AActorGNM AActorGNM{0};
		inline static RemoteRole execGetRemoteRole{0};
		inline static LocalRole execGetLocalRole{0};

		std::vector<LPVOID> Function_Calls = { &UWorldGNM, &AActorGNM, &execGetLocalRole, &execGetRemoteRole };
	};

	// Custom function to manage server and client roles. 
	// (Intended for debugging)
	inline static int NetManager() {
		// Scrapped but may be used in the future
		// The idea was to call this function from Browse if the Op was parsed and contained an IP and Port. If so, it would dynamically hook the NetMode functions to return as client, otherwise it would be unhooked.
	}
	
	inline static ENetMode WorldGetNetMode(SDK::UWorld* World) {
		//Log("<CustomLogic.hpp> / Net::WorldGetNetMode():: Called");
		if (WorldHookMode == ENetMode::Passthrough) return PTR::UWorldGNM(World);
		return WorldHookMode;
	}

	inline static ENetMode ActorGetNetMode(SDK::AActor* Actor) {
		//Log("<CustomLogic.hpp> / Net::ActorGetNetMode():: Called");
		if (ActorHookMode == ENetMode::Passthrough) return PTR::AActorGNM(Actor);
		return ActorHookMode;
	}

	inline static bool HookWorldGetNetMode(ENetMode HookMode = ENetMode::Passthrough, uintptr_t OverrideOffset = UWorldGetNetMode) {
		WorldHookMode = HookMode;
		return Hooks::CreateAndEnableHook((GBA + OverrideOffset), WorldGetNetMode, &PTR::UWorldGNM, "WorldGetNetMode");
	}

	inline static bool HookActorGetNetMode(ENetMode HookMode = ENetMode::Passthrough, uintptr_t OverrideOffset = AActorGetNetMode) {
		ActorHookMode = HookMode;
		return Hooks::CreateAndEnableHook((GBA + OverrideOffset), ActorGetNetMode, &PTR::AActorGNM, "ActorGetNetMode");
	}


};


#include <cstdarg>

class FOutputDevice
{
public:
	inline static enum Type {
		NoLogging = 0,
		Fatal,
		Error,
		Warning,
		Display,
		Log,
		Verbose,
		VeryVerbose,
		All = VeryVerbose,
		NumVerbosity,
		VerbosityMask = 0xf,
		SetColor = 0x40,
		BreakOnLog = 0x80
	};

	typedef void(__cdecl* Logf)(const TCHAR* Fmt, ...);
	typedef void(__cdecl* Logf1)(Type, const TCHAR* Fmt, ...);
	typedef void(__cdecl* CategorizedLogf)(const SDK::FName& Category, Type, const TCHAR* Fmt, ...); // Unused for now.

	// --> Hook Variables 
	const inline static uintptr_t Offset{0x0640F50};
	const inline static uintptr_t Offset1{0x06410A0};

	inline static uintptr_t Pointer{0};
	inline static uintptr_t Pointer1{0};

	inline static Logf FC_LogfImpl{0};
	inline static Logf1 FC_LogfImpl1{0};
	// --> Hook Variables

	// I am currently half asleep writing this, it is currently 7:04am.
	inline static uintptr_t Calc(int i = 0) { if (i == 0) { Pointer = GBA + Offset; return Pointer; } else { Pointer1 = GBA + Offset1; return Pointer1; } }

	inline static void __cdecl LogfImpl(const TCHAR* Fmt, ...) {
		Logger::Log << "CalledLogfImpl\n"; 
		va_list Vars;
		va_start(Vars, Fmt);
		FC_LogfImpl(Fmt, Vars);
		va_end(Vars);
	}

	inline static void __cdecl LogfImpl1(Type Verbosity, const TCHAR* Fmt, ...) { Logger::Log << "CalledLogfImpl1\n"; FC_LogfImpl1(Verbosity, Fmt); }

	// Unused for now.
	inline static void __cdecl CategorizedLogfImpl(const SDK::FName& Category, Type Verbosity, const TCHAR* Fmt, ...) { }

	
	

	/*template <typename FmtType, typename... Types>
	void Logf(const FmtType& Fmt, Types... Args) { LogfImpl(Fmt, Args...); }
	
	inline static void LogfImpl(const SDK::FName& Category, SDK::FString* Param, const TCHAR* Fmt) {
		Logger::Log << "<CustomLogic.hpp> / FOutputDevice::LogfImpl():: Category [" << Category.ToString() << "] Param [" << Param->ToString() << "]\n";
		//FC_LogfImpl(Category, Param, Fmt);
	}*/

	
};