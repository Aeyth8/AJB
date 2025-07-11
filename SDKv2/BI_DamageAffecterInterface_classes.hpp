#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_DamageAffecterInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_DamageAffecterInterface.BI_DamageAffecterInterface_C
// 0x0000 (0x0028 - 0x0028)
class IBI_DamageAffecterInterface_C final : public IInterface
{
public:
	void CheckAreaIn(const struct FVector& Location, const struct FRotator& Rotation, float Radius, float Length, int32 PartitionNum, bool bCheckUnder, float ValidGroundOffsetZ, bool* bTarget);
	void OnAreaIn(class ABP_AJBInGameCharacter_C* OperatorCharacter, const struct FGameplayTag& EffectTag, const struct FGameplayTag& SETag, bool bNoDamage);
	void OnAreaOut(class ABP_AJBInGameCharacter_C* OperatorCharacter, const struct FGameplayTag& EffectTag, const struct FGameplayTag& SETag);
	void OnNoDamageChanged(class ABP_AJBInGameCharacter_C* OperaatorCharacter, bool bNewFlag, const struct FGameplayTag& EffectTag, const struct FGameplayTag& SETag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_DamageAffecterInterface_C">();
	}
	static class IBI_DamageAffecterInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_DamageAffecterInterface_C>();
	}
};
static_assert(alignof(IBI_DamageAffecterInterface_C) == 0x000008, "Wrong alignment on IBI_DamageAffecterInterface_C");
static_assert(sizeof(IBI_DamageAffecterInterface_C) == 0x000028, "Wrong size on IBI_DamageAffecterInterface_C");

}

