#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBThreeFreezeSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BP_AJBCloseRangeSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBThreeFreezeSkill.BP_AJBThreeFreezeSkill_C
// 0x0038 (0x03C0 - 0x0388)
class UBP_AJBThreeFreezeSkill_C final : public UBP_AJBCloseRangeSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBThreeFreezeSkill_C;           // 0x0388(0x0008)(Transient, DuplicateTransient)
	class UAnimMontage*                           AttackBeginMontage;                                // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttackBeginMontageStartingSection;                 // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           BackMontage;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BackMontageStartingSection;                        // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           HitSETag;                                          // 0x03B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           HitParticleTag;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBThreeFreezeSkill(int32 EntryPoint);
	void MC_Cancel();
	void ROS_Cancel();
	void CancelStandMontage();
	void OnBlendOut_BEFA2923414DC224A9BD78B7DA62B905(class FName NotifyName);
	void OnBlendOut_DDCE22314B77AFC2C84AE5A308F84050(class FName NotifyName);
	void OnBlendOut_F0562D6F493783D93EF277AF73E0EB61(class FName NotifyName);
	void OnCompleted_BEFA2923414DC224A9BD78B7DA62B905(class FName NotifyName);
	void OnCompleted_DDCE22314B77AFC2C84AE5A308F84050(class FName NotifyName);
	void OnCompleted_F0562D6F493783D93EF277AF73E0EB61(class FName NotifyName);
	void OnInterrupted_BEFA2923414DC224A9BD78B7DA62B905(class FName NotifyName);
	void OnInterrupted_DDCE22314B77AFC2C84AE5A308F84050(class FName NotifyName);
	void OnInterrupted_F0562D6F493783D93EF277AF73E0EB61(class FName NotifyName);
	void OnNotifyBegin_BEFA2923414DC224A9BD78B7DA62B905(class FName NotifyName);
	void OnNotifyBegin_DDCE22314B77AFC2C84AE5A308F84050(class FName NotifyName);
	void OnNotifyBegin_F0562D6F493783D93EF277AF73E0EB61(class FName NotifyName);
	void OnNotifyEnd_BEFA2923414DC224A9BD78B7DA62B905(class FName NotifyName);
	void OnNotifyEnd_DDCE22314B77AFC2C84AE5A308F84050(class FName NotifyName);
	void OnNotifyEnd_F0562D6F493783D93EF277AF73E0EB61(class FName NotifyName);
	void SpeakRushHitVoice(bool bHitCharacter);
	void OnCancel();
	void OnReady();
	void PlayBackAnimation();
	void PlaySkillBeginAnimation();
	void HitWait(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, float CuttingRate, EPhysicalSurface SurfaceType, bool bDisableDamage, bool bInvincible, bool bIsPenetration, bool bBlockedByAAP, bool bHeadShot);
	void SpeakRushVoice();
	void PlayHitSE(class AActor* HitActor, const struct FVector& HitLocation, EPhysicalSurface SurfaceType, bool bBlockedByAAP, bool bHeadShot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBThreeFreezeSkill_C">();
	}
	static class UBP_AJBThreeFreezeSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBThreeFreezeSkill_C>();
	}
};
static_assert(alignof(UBP_AJBThreeFreezeSkill_C) == 0x000008, "Wrong alignment on UBP_AJBThreeFreezeSkill_C");
static_assert(sizeof(UBP_AJBThreeFreezeSkill_C) == 0x0003C0, "Wrong size on UBP_AJBThreeFreezeSkill_C");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, UberGraphFrame_BP_AJBThreeFreezeSkill_C) == 0x000388, "Member 'UBP_AJBThreeFreezeSkill_C::UberGraphFrame_BP_AJBThreeFreezeSkill_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, AttackBeginMontage) == 0x000390, "Member 'UBP_AJBThreeFreezeSkill_C::AttackBeginMontage' has a wrong offset!");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, AttackBeginMontageStartingSection) == 0x000398, "Member 'UBP_AJBThreeFreezeSkill_C::AttackBeginMontageStartingSection' has a wrong offset!");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, BackMontage) == 0x0003A0, "Member 'UBP_AJBThreeFreezeSkill_C::BackMontage' has a wrong offset!");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, BackMontageStartingSection) == 0x0003A8, "Member 'UBP_AJBThreeFreezeSkill_C::BackMontageStartingSection' has a wrong offset!");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, HitSETag) == 0x0003B0, "Member 'UBP_AJBThreeFreezeSkill_C::HitSETag' has a wrong offset!");
static_assert(offsetof(UBP_AJBThreeFreezeSkill_C, HitParticleTag) == 0x0003B8, "Member 'UBP_AJBThreeFreezeSkill_C::HitParticleTag' has a wrong offset!");

}

