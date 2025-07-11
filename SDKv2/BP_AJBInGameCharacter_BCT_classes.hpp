#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameCharacter_BCT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBInGameCharacter_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameCharacter_BCT.BP_AJBInGameCharacter_BCT_C
// 0x0020 (0x1650 - 0x1630)
class ABP_AJBInGameCharacter_BCT_C final : public ABP_AJBInGameCharacter_C
{
public:
	uint8                                         Pad_1621[0x7];                                     // 0x1621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBInGameCharacter_BCT_C;        // 0x1628(0x0008)(Transient, DuplicateTransient)
	class UBP_AJBAccompanySFGSkill_C*             BP_AJBAccompanySFGSkill;                           // 0x1630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBZipRushSkill_C*                  BP_AJBZipRushSkill;                                // 0x1638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBStickyDiveSkill_C*               BP_AJBStickyDiveSkill;                             // 0x1640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBZipperSkill_C*                   BP_AJBZipperSkill;                                 // 0x1648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBInGameCharacter_BCT(int32 EntryPoint);
	void ChangeStealth(bool bEnable);
	void PressedButton_ActiveBase();
	void ReleasedButton_ActiveSpecial();
	void PressedButton_ActiveSpecial();
	void PressedButton_Ultimate();
	void ReleasedButton_Basic();
	void PressedButton_Basic();
	void OnReleasedInteract();
	void OnReleasedCrouch();
	void OnPressedCrouch();
	void OnPressedJump();
	void OnReleasedJump();
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void UserConstructionScript();
	void ConsumeGrowup(const struct FGameplayTag& Growup, float Value);
	void EndCondition(const struct FGameplayTag& Condition);
	void BeginCondition(const struct FGameplayTag& Condition, class UObject* Causer, bool bTriggeredByStand, const struct FGameplayTag& CauserType, int32 SerialNumber);
	void GetGenerateParticleLocation(struct FVector* Location);
	void OnBeforeInteract(bool* bShouldInteract);
	void GetTargetLocation(struct FVector* Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameCharacter_BCT_C">();
	}
	static class ABP_AJBInGameCharacter_BCT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameCharacter_BCT_C>();
	}
};
static_assert(alignof(ABP_AJBInGameCharacter_BCT_C) == 0x000010, "Wrong alignment on ABP_AJBInGameCharacter_BCT_C");
static_assert(sizeof(ABP_AJBInGameCharacter_BCT_C) == 0x001650, "Wrong size on ABP_AJBInGameCharacter_BCT_C");
static_assert(offsetof(ABP_AJBInGameCharacter_BCT_C, UberGraphFrame_BP_AJBInGameCharacter_BCT_C) == 0x001628, "Member 'ABP_AJBInGameCharacter_BCT_C::UberGraphFrame_BP_AJBInGameCharacter_BCT_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_BCT_C, BP_AJBAccompanySFGSkill) == 0x001630, "Member 'ABP_AJBInGameCharacter_BCT_C::BP_AJBAccompanySFGSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_BCT_C, BP_AJBZipRushSkill) == 0x001638, "Member 'ABP_AJBInGameCharacter_BCT_C::BP_AJBZipRushSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_BCT_C, BP_AJBStickyDiveSkill) == 0x001640, "Member 'ABP_AJBInGameCharacter_BCT_C::BP_AJBStickyDiveSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_BCT_C, BP_AJBZipperSkill) == 0x001648, "Member 'ABP_AJBInGameCharacter_BCT_C::BP_AJBZipperSkill' has a wrong offset!");

}

