#pragma once
#include "../../MinHook/MinHook.h"
#include <string>
#include <vector>
#include <format>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{

// An all-in-one object for storing and utilizing static offsets.
// @param [std::string] Name
// @param [uintptr_t] Offset
class OFFSET
{
private:

	inline static std::vector<std::string> StringIndexArray{};
	uint32_t StringIndex;

public:

	OFFSET(const std::string& Name, const uintptr_t& Offset) : 
		StringIndex(StringIndexArray.size()), Offset(Offset)
	{
		StringIndexArray.push_back(Name);
	};

	~OFFSET()
	{
		StringIndexArray[StringIndex].erase();
	}

	// Uncalculated
	const uintptr_t Offset;

	// Calculated 
	uintptr_t Address{0};

	// A pointer to the function after hooking, the trampoline.
	LPVOID FunctionCall;

	std::string& GetName() const { return StringIndexArray[StringIndex]; }
	std::wstring GetNameW() const { return std::wstring(StringIndexArray[StringIndex].begin(), StringIndexArray[StringIndex].end()); }
	uintptr_t& PlusBase() { return Address == 0 ? Address = Offset + (uintptr_t)GetModuleHandle(0) : Address; }

	template <typename T>
	T VerifyFC()
	{
		if (!this->FunctionCall) return reinterpret_cast<T>(PlusBase());
		return reinterpret_cast<T>(this->FunctionCall);
	}

};

// A MinHook wrapper
class Hooks
{
private:

	// Useful for retrieving verbose information while still using a yes/no system 
	// These flags represent if all hooks in a list failed or succeeded.
	// Anything else means that only some of them succeeded.
	enum HookNum { ALL_FAILED = -1, ALL_SUCCEEDED = -2 };

	// Used for logging the action type. 
	enum HookType { CREATE = 0, ENABLE = 1, DISABLE = 2, REMOVE = 3 };

	constexpr static const char* HookTypeS[] = { "create", "enable", "disable", "remove" };

	// Used to decide/output the flags.
	// A is the amount succeeded | B is the total amount.
	const inline static HookNum ENUM(const int& A, const int& B)
	{
		if (A == B) return ALL_SUCCEEDED;
		return A == 0 ? ALL_FAILED : (HookNum)A;
	}


	// Converts the enum into a bool
	inline static bool STAT(const MH_STATUS& Status) { return (Status == MH_OK); }

	static void HookLog(const bool& Status, const HookType& Type, class OFFSET& Obj);
	static void HookLog(const bool& Status, const HookType& Type, uintptr_t TargetAddress, LPVOID FunctionCall = 0);

	// Idiot proofing.
	inline static bool MH_INIT{false};

public:

	//struct HookStructure { const uintptr_t Offset; LPVOID DetourFunction; LPVOID FunctionCall{0}; const std::string HookName;  uintptr_t CalculatedAddress{0}; };

	struct HookStructure { class OFFSET& Obj; LPVOID DetourFunction; };

	// Must be called before hooking anything.
	static bool Init();
	static bool Uninit();

	static bool CreateHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall);
	static bool CreateHook(class OFFSET& Obj, LPVOID DetourFunction);
	static HookNum CreateHooks(std::vector<HookStructure>& Table);

	static bool EnableHook(const uintptr_t TargetAddress);
	static bool EnableHook(class OFFSET& Obj);
	static HookNum EnableHooks(std::vector<OFFSET>& Table);
	static void EnableAllHooks();

	static bool CreateAndEnableHook(const uintptr_t TargetAddress, LPVOID DetourFunction, LPVOID FunctionCall);
	static bool CreateAndEnableHook(class OFFSET& Obj, LPVOID DetourFunction);
	static HookNum CreateAndEnableHooks(std::vector<HookStructure>& Table);

	static bool DisableHook(const uintptr_t TargetAddress);
	static bool DisableHook(class OFFSET& Obj);
	static HookNum DisableHooks(std::vector<OFFSET>& Table);
	static void DisableAllHooks();

	static bool RemoveHook(const uintptr_t TargetAddress);
	static bool RemoveHook(class OFFSET& Obj);
	static HookNum RemoveHooks(std::vector<OFFSET>& Table);

	static bool If(const HookNum& Result);





};





}