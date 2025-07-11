#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AJBInGameHUD

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_AJBInGameHUD.BI_AJBInGameHUD_C.GetUIMapManager
// 0x0008 (0x0008 - 0x0000)
struct BI_AJBInGameHUD_C_GetUIMapManager final
{
public:
	class ABP_AJBUIMapManager_C*                  Manager;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_AJBInGameHUD_C_GetUIMapManager) == 0x000008, "Wrong alignment on BI_AJBInGameHUD_C_GetUIMapManager");
static_assert(sizeof(BI_AJBInGameHUD_C_GetUIMapManager) == 0x000008, "Wrong size on BI_AJBInGameHUD_C_GetUIMapManager");
static_assert(offsetof(BI_AJBInGameHUD_C_GetUIMapManager, Manager) == 0x000000, "Member 'BI_AJBInGameHUD_C_GetUIMapManager::Manager' has a wrong offset!");

// Function BI_AJBInGameHUD.BI_AJBInGameHUD_C.RegisterNewPassiveSkill
// 0x0010 (0x0010 - 0x0000)
struct BI_AJBInGameHUD_C_RegisterNewPassiveSkill final
{
public:
	class UBP_AJBPassiveSkillBase_C*              NewPassiveSkill;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_AJBInGameHUD_C_RegisterNewPassiveSkill) == 0x000008, "Wrong alignment on BI_AJBInGameHUD_C_RegisterNewPassiveSkill");
static_assert(sizeof(BI_AJBInGameHUD_C_RegisterNewPassiveSkill) == 0x000010, "Wrong size on BI_AJBInGameHUD_C_RegisterNewPassiveSkill");
static_assert(offsetof(BI_AJBInGameHUD_C_RegisterNewPassiveSkill, NewPassiveSkill) == 0x000000, "Member 'BI_AJBInGameHUD_C_RegisterNewPassiveSkill::NewPassiveSkill' has a wrong offset!");
static_assert(offsetof(BI_AJBInGameHUD_C_RegisterNewPassiveSkill, bSuccess) == 0x000008, "Member 'BI_AJBInGameHUD_C_RegisterNewPassiveSkill::bSuccess' has a wrong offset!");

}

