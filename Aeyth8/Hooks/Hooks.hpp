#pragma once
#include "../../pch.h" // Make sure that MinHook.h is included in pch.h, or directly included here.

extern "C" LPVOID GetReturnAddress();

class Hooks
{
public:
	struct HookStructure { const uintptr_t Offset; LPVOID DetourFunction; LPVOID FunctionCall{0}; const std::string HookName;  uintptr_t CalculatedAddress{0}; };
	struct ProxyStructure 
	{ 
		const LPVOID FunctionCall; 
		const std::string HookName; 
		ProxyStructure(LPVOID FunctionCall, const std::string& HookName) : FunctionCall(FunctionCall), HookName(HookName) {};
	};

private:

	// None of this currently works, the asm does work in the sense that it does something, I just don't have a clue what I'm looking at and I on the occasion end up drifting off to the point I don't even know what my idea was to begin with. 
	inline static std::vector<ProxyStructure> ProxyList{};
	inline static void ProxyHandler() {
		LPVOID Callee = GetReturnAddress();
		COUT << "Callee : " << HexToString((uintptr_t)Callee) << "\n";
		printf("Return Address %p\n", Callee);
		for (int i{0}; i < ProxyList.size(); ++i) if (Callee == ProxyList[i].FunctionCall) Log("[Proxy]: " + ProxyList[i].HookName + " has been called.");
		
	}

	// Handles the log messages and behavior for CreateAndEnableAllHooks()
	inline static bool HookStatus(const MH_STATUS& Status, const std::string& HookName, const int& Message, LPVOID FunctionCall = 0) { if (Status == MH_STATUS::MH_ERROR_NOT_INITIALIZED) { Log("MinHook not initialized!"); return false; }
		if (Status == MH_OK) {
			if (Message == 0) Log("Successfully created a hook for " + HookName + ".");
			else if (Message == 1) { Log("Successfully enabled a hook for " + HookName + ". Pointer = " + HexToString((uintptr_t)(FunctionCall))); }
			else if (Message == 2) { Log("Successfully disabled hook for " + HookName + "."); }
			else { Log("Sucessfully created a proxy hook for " + HookName + ". Pointer = " + HexToString((uintptr_t)FunctionCall)); }
			return true;
		}
		else { 
			if (Message == 0) Log("Failed to create a hook for " + HookName + ".");
			else if (Message == 1) { Log("Failed to enable a hook for " + HookName + "."); }
			else if (Message == 2) { Log("Failed to disable hook for " + HookName + "."); }
			else { Log("Failed to create a proxy hook for " + HookName + "."); }
			return false;
		}
	}

	// (Idiot proofing) If an offset is not calculated with the base address, it will make sure that it is.
	inline static uintptr_t Calculator(HookStructure& Instance) { return Instance.CalculatedAddress != 0 ? Instance.CalculatedAddress : Instance.CalculatedAddress = Instance.Offset + GBA; }

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
	inline static bool CreateAndEnableHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall, std::string HookName = "") {
		if (HookName == "") { HookName = "NO_NAME_" + std::to_string(NamelessIteration); NamelessIteration++; }
		
		MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), DetourFunction, reinterpret_cast<LPVOID*>(FunctionCall));
		if (!HookStatus(Status, HookName, 0)) return false;
		
		Status = MH_EnableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		
		return HookStatus(Status, HookName, 1, FunctionCall);
	}

	// Main hooking function which iterates through all hooks, creating and enabling them while handling errors.
	// > Contains an optional int vector to exclude certain hooks specified by the iterator within the HookStructure instance.
	// Example : CreateAndEnableAllHooks(HookList, {0, 5, 6});
	inline static void CreateAndEnableAllHooks(std::vector<HookStructure>& Instance, const std::vector<int>& ExceptFor = {}) {
		for (int i{0}; i < Instance.size(); ++i) {
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

	inline static bool CreateProxyHook(const uintptr_t TargetAddress, const std::string&HookName) { LPVOID Proxy{nullptr};		
		const MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), ProxyHandler, &Proxy);
		
		ProxyStructure NewEntry(Proxy, HookName);
		ProxyList.push_back(NewEntry);
		return HookStatus(Status, HookName, 3, Proxy);
	}

	inline static bool EnableProxyHook(const uintptr_t TargetAddress) {
		const MH_STATUS Status = MH_EnableHook((LPVOID*)(TargetAddress));
		return (Status == MH_STATUS::MH_OK);
	}

	// Manually create a new hook.
	inline static bool CreateHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall, const std::string& HookName) {
		const MH_STATUS Status = MH_CreateHook(reinterpret_cast<LPVOID*>(TargetAddress), DetourFunction, reinterpret_cast<LPVOID*>(FunctionCall));
		return HookStatus(Status, HookName, 0);
	}

	// Create all hooks passed in a vector.
	inline static void CreateHooks(std::vector<HookStructure>& Instance)
	{ for (int i{0}; i < Instance.size(); ++i) 
		CreateHook(Calculator(Instance[i]), Instance[i].DetourFunction, Instance[i].FunctionCall, Instance[i].HookName);
	}

	// Manually enable an already created hook.
	inline static bool EnableHook(const uintptr_t TargetAddress, LPVOID FunctionCall, const std::string& HookName) {
		const MH_STATUS Status = MH_EnableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		return HookStatus(Status, HookName, 1, FunctionCall);
	}

	// Enable all hooks passed in a vector. 
	inline static void EnableHooks(std::vector<HookStructure>& Instance) 
	{ for (int i{0}; i < Instance.size(); ++i) 
		EnableHook(Calculator(Instance[i]), Instance[i].FunctionCall, Instance[i].HookName);
	}

	// Manually disable certain hooks.
	inline static bool DisableHook(const uintptr_t TargetAddress, const std::string& HookName) {
		const MH_STATUS Status = MH_DisableHook(reinterpret_cast<LPVOID*>(TargetAddress));
		return HookStatus(Status, HookName, 2);
	}

	// Disable certain hooks by passing in a list, parallel function to EnableHooks.
	inline static void DisableHooks(std::vector<HookStructure>& Instance) 
	{ for (int i{0}; i < Instance.size(); ++i) 
		DisableHook(Calculator(Instance[i]), Instance[i].HookName);
	}

	// Disable everything, for end of runtime.
	inline static void DisableAllHooks() { MH_DisableHook(MH_ALL_HOOKS); Log("Disabled all hooks."); }

};







