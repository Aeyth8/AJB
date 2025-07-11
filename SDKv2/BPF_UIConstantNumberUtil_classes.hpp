#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_UIConstantNumberUtil

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPF_UIConstantNumberUtil.BPF_UIConstantNumberUtil_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_UIConstantNumberUtil_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsAJBBattleResultGood_Rank(int32 Rank, class UObject* __WorldContext, bool* bReturnValue);
	static void IsAJBBattleResultVeryGood_Rank(int32 Rank, class UObject* __WorldContext, bool* bReturnValue);
	static void IsAJBBattleResultGood_LivingTime(int32 Second, class UObject* __WorldContext, bool* bReturnValue);
	static void IsAJBBattleResultGood_Skill(int32 SkillCount, class UObject* __WorldContext, bool* bReturnValue);
	static void IsAJBBattleResultGood_Kill(int32 KillCount, class UObject* __WorldContext, bool* bReturnValue);
	static void IsAJBBattleResultGood_GivedDamage(int32 Damage, class UObject* __WorldContext, bool* bReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPF_UIConstantNumberUtil_C">();
	}
	static class UBPF_UIConstantNumberUtil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPF_UIConstantNumberUtil_C>();
	}
};
static_assert(alignof(UBPF_UIConstantNumberUtil_C) == 0x000008, "Wrong alignment on UBPF_UIConstantNumberUtil_C");
static_assert(sizeof(UBPF_UIConstantNumberUtil_C) == 0x000028, "Wrong size on UBPF_UIConstantNumberUtil_C");

}

