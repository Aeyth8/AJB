#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameCharacter_GRN

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBInGameCharacter_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameCharacter_GRN.BP_AJBInGameCharacter_GRN_C
// 0x0040 (0x1670 - 0x1630)
class ABP_AJBInGameCharacter_GRN_C final : public ABP_AJBInGameCharacter_C
{
public:
	uint8                                         Pad_1621[0x7];                                     // 0x1621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBInGameCharacter_GRN_C;        // 0x1628(0x0008)(Transient, DuplicateTransient)
	class UCapsuleComponent*                      RerquiemCapsule;                                   // 0x1630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBPartsMaker_C*                    BP_AJBPartsMaker;                                  // 0x1638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBGEXRequiemSkill_C*               BP_AJBGEXRequiemSkill;                             // 0x1640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBOverGrowSkill_C*                 BP_AJBOverGrowSkill;                               // 0x1648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBMudaRushGEXSkill_C*              BP_AJBMudaRushGEXSill;                             // 0x1650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBAccompanyGEXSkill_C*             BP_AJBAccompanyGEXSkill;                           // 0x1658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bContinuedAccompany;                               // 0x1660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1661[0x7];                                     // 0x1661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        PairOverGrow;                                      // 0x1668(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBInGameCharacter_GRN(int32 EntryPoint);
	void NotifyTheWorldOnEventGraph(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void ROS_AddGameplayTag_InvincibleGEXRequiem();
	void AddGameplayTag_InvincibleGEXRequiem();
	void InactiveContinuedAccompany();
	void ActiveContinuedAccompany();
	void OnBlocking(const struct FVector& BlockingLocation, bool Reflect, bool bIsPairAttack, bool bImpulseDamage, class AActor* DamageOwner, bool bSeparateStandAttack);
	void CheckBlockingValid(class AActor* DamageActor, bool* bBlockingValid);
	void CheckBlockingComponent(class UPrimitiveComponent* Component, bool* bBlockingComponent);
	void IgnoreGivePassive(class UPrimitiveComponent* Component, bool* bIgnore);
	void BlockPenetrate(class AActor* CauserActor, bool* bBlock);
	void ReceiveBeginPlay();
	void PressedButton_ActiveBase();
	void PressedButton_Ultimate();
	void ReleasedButton_ActiveSpecial();
	void PressedButton_ActiveSpecial();
	void ReleasedButton_Basic();
	void PressedButton_Basic();
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void UserConstructionScript();
	void ConsumeGrowup(const struct FGameplayTag& Growup, float Value);
	void SkillInactivated(class UBP_AJBSkillBase_C* InactivatedSkill);
	void CanEmote(struct FGameplayTagContainer* FailureFactor, struct FGameplayTagContainer* FailureSkills, bool* bCanEmote);
	void CheckAnySkillActiveOnTiltOneDash(bool* bAnySkillActive);
	void CheckSidlingOnTiltOnce(bool* bSidling);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameCharacter_GRN_C">();
	}
	static class ABP_AJBInGameCharacter_GRN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameCharacter_GRN_C>();
	}
};
static_assert(alignof(ABP_AJBInGameCharacter_GRN_C) == 0x000010, "Wrong alignment on ABP_AJBInGameCharacter_GRN_C");
static_assert(sizeof(ABP_AJBInGameCharacter_GRN_C) == 0x001670, "Wrong size on ABP_AJBInGameCharacter_GRN_C");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, UberGraphFrame_BP_AJBInGameCharacter_GRN_C) == 0x001628, "Member 'ABP_AJBInGameCharacter_GRN_C::UberGraphFrame_BP_AJBInGameCharacter_GRN_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, RerquiemCapsule) == 0x001630, "Member 'ABP_AJBInGameCharacter_GRN_C::RerquiemCapsule' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, BP_AJBPartsMaker) == 0x001638, "Member 'ABP_AJBInGameCharacter_GRN_C::BP_AJBPartsMaker' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, BP_AJBGEXRequiemSkill) == 0x001640, "Member 'ABP_AJBInGameCharacter_GRN_C::BP_AJBGEXRequiemSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, BP_AJBOverGrowSkill) == 0x001648, "Member 'ABP_AJBInGameCharacter_GRN_C::BP_AJBOverGrowSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, BP_AJBMudaRushGEXSill) == 0x001650, "Member 'ABP_AJBInGameCharacter_GRN_C::BP_AJBMudaRushGEXSill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, BP_AJBAccompanyGEXSkill) == 0x001658, "Member 'ABP_AJBInGameCharacter_GRN_C::BP_AJBAccompanyGEXSkill' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, bContinuedAccompany) == 0x001660, "Member 'ABP_AJBInGameCharacter_GRN_C::bContinuedAccompany' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameCharacter_GRN_C, PairOverGrow) == 0x001668, "Member 'ABP_AJBInGameCharacter_GRN_C::PairOverGrow' has a wrong offset!");

}

