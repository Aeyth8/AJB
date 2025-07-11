#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AJBInGameHUD

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_AJBInGameHUD.BI_AJBInGameHUD_C
// 0x0000 (0x0028 - 0x0028)
class IBI_AJBInGameHUD_C final : public IInterface
{
public:
	void GetUIMapManager(class ABP_AJBUIMapManager_C** Manager);
	void RegisterNewPassiveSkill(class UBP_AJBPassiveSkillBase_C* NewPassiveSkill, bool* bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_AJBInGameHUD_C">();
	}
	static class IBI_AJBInGameHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_AJBInGameHUD_C>();
	}
};
static_assert(alignof(IBI_AJBInGameHUD_C) == 0x000008, "Wrong alignment on IBI_AJBInGameHUD_C");
static_assert(sizeof(IBI_AJBInGameHUD_C) == 0x000028, "Wrong size on IBI_AJBInGameHUD_C");

}

