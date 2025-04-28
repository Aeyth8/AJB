#pragma once
#include "../MinHook/MinHook.h"


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{



class Hooks
{
private:







	// Useful for retrieving verbose information while still using a yes/no system 
	// These flags represent if all hooks in a list failed or succeeded.
	// Anything else means that only some of them succeeded.
	enum HookNum { ALL_FAILED = -1, ALL_SUCCEEDED = -2 };


	const static int& Calculator(class OFFSET& Obj);
	inline static bool STAT(const MH_STATUS& Status) { return (Status == MH_OK); }

	// Idiot proofing.
	inline static bool MH_INIT{false};

public:

	//struct HookStructure { const uintptr_t Offset; LPVOID DetourFunction; LPVOID FunctionCall{0}; const std::string HookName;  uintptr_t CalculatedAddress{0}; };

	static bool Init();
	static bool Uninit();

	static bool CreateAndEnableHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall);
	static bool CreateAndEnableHook(class OFFSET& Obj, LPVOID DetourFunction);
	static HookNum CreateAndEnableHooks();

	static bool CreateHook();
	static HookNum CreateHooks();

	static bool EnableHook();
	static HookNum EnableHooks();
	static void EnableAllHooks();

	static bool DisableHook();
	static HookNum DisableHooks();
	static void DisableAllHooks();

	static bool If(const HookNum& Result);





};





}