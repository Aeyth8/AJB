#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBIronsandCamouflageSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BP_AJBSkillBase_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBIronsandCamouflageSkill.BP_AJBIronsandCamouflageSkill_C
// 0x0030 (0x0208 - 0x01D8)
class UBP_AJBIronsandCamouflageSkill_C final : public UBP_AJBSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBIronsandCamouflageSkill_C;    // 0x01D8(0x0008)(Transient, DuplicateTransient)
	float                                         StateTimeReady;                                    // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAlreadyCompletedTickStateReady;                   // 0x01E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           BeginGionTag;                                      // 0x01E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnCanceledCamouflageByReceiveDamageLocal;          // 0x01F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_AJBInGameParticleEffect_C*          ParticleStart;                                     // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCanceledCamouflageByReceiveDamageLocal__DelegateSignature(const struct FGameplayTag& DamageType);
	void ExecuteUbergraph_BP_AJBIronsandCamouflageSkill(int32 EntryPoint);
	void MC_ReceiveDamage(bool bShouldRemovePassive);
	void ROS_ReceiveDamage();
	void OnReceiveDamageLocalCore(const struct FGameplayTag& DamageType);
	void OnReceiveDamageLocal(int32 Damage_0, const struct FGameplayTag& DamageType, class AActor* DamageCauser, bool bRemainHP, bool bDamageIsCutByStatus, bool bDamageIsCutByAAP);
	void UnbindOnReceiveDamage();
	void BindOnReceiveDamage();
	void ChangeGuideUIVisibility(bool bNewVisibility);
	void MC_BeginStateAction();
	void ROS_BeginStateAction();
	void BeginStateActionLocal();
	void OnBeginStateAction();
	void StateTick();
	void TickStateReady();
	void OnBeginStateReady();
	void OnInactive();
	void ReceiveTick(float DeltaSeconds);
	void OnActive();
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void InitializeVariables();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBIronsandCamouflageSkill_C">();
	}
	static class UBP_AJBIronsandCamouflageSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBIronsandCamouflageSkill_C>();
	}
};
static_assert(alignof(UBP_AJBIronsandCamouflageSkill_C) == 0x000008, "Wrong alignment on UBP_AJBIronsandCamouflageSkill_C");
static_assert(sizeof(UBP_AJBIronsandCamouflageSkill_C) == 0x000208, "Wrong size on UBP_AJBIronsandCamouflageSkill_C");
static_assert(offsetof(UBP_AJBIronsandCamouflageSkill_C, UberGraphFrame_BP_AJBIronsandCamouflageSkill_C) == 0x0001D8, "Member 'UBP_AJBIronsandCamouflageSkill_C::UberGraphFrame_BP_AJBIronsandCamouflageSkill_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBIronsandCamouflageSkill_C, StateTimeReady) == 0x0001E0, "Member 'UBP_AJBIronsandCamouflageSkill_C::StateTimeReady' has a wrong offset!");
static_assert(offsetof(UBP_AJBIronsandCamouflageSkill_C, bAlreadyCompletedTickStateReady) == 0x0001E4, "Member 'UBP_AJBIronsandCamouflageSkill_C::bAlreadyCompletedTickStateReady' has a wrong offset!");
static_assert(offsetof(UBP_AJBIronsandCamouflageSkill_C, BeginGionTag) == 0x0001E8, "Member 'UBP_AJBIronsandCamouflageSkill_C::BeginGionTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBIronsandCamouflageSkill_C, OnCanceledCamouflageByReceiveDamageLocal) == 0x0001F0, "Member 'UBP_AJBIronsandCamouflageSkill_C::OnCanceledCamouflageByReceiveDamageLocal' has a wrong offset!");
static_assert(offsetof(UBP_AJBIronsandCamouflageSkill_C, ParticleStart) == 0x000200, "Member 'UBP_AJBIronsandCamouflageSkill_C::ParticleStart' has a wrong offset!");

}

