#pragma once
#include <string>

namespace SDK { class UObject; class UFunction; class UClass; }

// One-menu frontend: routes the mod FrontEnd straight into the original visual character select.
namespace OneMenu
{
	SDK::UObject*	FindLive(const char* ClassName);
	SDK::UFunction*	FindFn(SDK::UObject* Obj, const char* FuncName);
	void*			PropPtr(SDK::UObject* Obj, const char* PropName);
	bool			Call(SDK::UObject* Obj, const char* FuncName, void* Parms = nullptr);
	void			Dump(SDK::UObject* Obj);

	// 0 = not ours, 1 = handled (original still runs), 2 = swallow.
	int				Console(const std::string& Cmd);

	inline bool		bQuickHost{false};
	void			Tick(float DeltaSeconds);
	void			PostTick();	// after UGameEngine::Tick: deferred map travel
	inline int		BotSetting{4};	// saved "Bot difficulty" menu setting (1 Easy .. 4 Very Hard)
	inline int		BotLevel{4};	// AI level forced into every offline/hosted bot (1-4)
	// True swallows the state change.
	bool			OnFlow(const std::string& Tag);
	// True while the Quick Match hold keeps this state change back.
	bool			HoldsFlow(const std::string& Tag);
	// Returns a replacement map path or nullptr.
	const wchar_t*	OnBrowse(const wchar_t* Map, bool bListen);

	// ProcessEvent observer; false blocks the call.
	bool			OnPE(SDK::UObject* This, SDK::UFunction* Function, void* Parms);
	// After the original ProcessEvent.
	void			OnPEPost(SDK::UObject* This, SDK::UFunction* Function);
	// Steam/IP connection failure: shows an English notice.
	void			NetFailure(int Type, const std::string& Error);
}
