#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_EffectVisibility

#include "Basic.hpp"

#include "ST_FXVisibilityInfo_structs.hpp"


namespace SDK::Params
{

// Function BI_EffectVisibility.BI_EffectVisibility_C.NotifyChangeFXVisibility
// 0x0004 (0x0004 - 0x0000)
struct BI_EffectVisibility_C_NotifyChangeFXVisibility final
{
public:
	struct FST_FXVisibilityInfo                   PrevFXVisibility;                                  // 0x0000(0x0002)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_FXVisibilityInfo                   FXVisibility;                                      // 0x0002(0x0002)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BI_EffectVisibility_C_NotifyChangeFXVisibility) == 0x000001, "Wrong alignment on BI_EffectVisibility_C_NotifyChangeFXVisibility");
static_assert(sizeof(BI_EffectVisibility_C_NotifyChangeFXVisibility) == 0x000004, "Wrong size on BI_EffectVisibility_C_NotifyChangeFXVisibility");
static_assert(offsetof(BI_EffectVisibility_C_NotifyChangeFXVisibility, PrevFXVisibility) == 0x000000, "Member 'BI_EffectVisibility_C_NotifyChangeFXVisibility::PrevFXVisibility' has a wrong offset!");
static_assert(offsetof(BI_EffectVisibility_C_NotifyChangeFXVisibility, FXVisibility) == 0x000002, "Member 'BI_EffectVisibility_C_NotifyChangeFXVisibility::FXVisibility' has a wrong offset!");

}

