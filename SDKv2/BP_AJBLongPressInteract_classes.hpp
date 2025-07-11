#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBLongPressInteract

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "BP_AJBSupportSkillBase_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBLongPressInteract.BP_AJBLongPressInteract_C
// 0x00A8 (0x0200 - 0x0158)
class UBP_AJBLongPressInteract_C : public UBP_AJBSupportSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBLongPressInteract_C;          // 0x0158(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           InteractParticleTag;                               // 0x0160(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameParticleEffect_C*          InteractParticle;                                  // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayEndSection;                                   // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           InteractMontageStand;                              // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReadyTime;                                         // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteractDownedCharacter;                          // 0x0184(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInteractFootLocation;                             // 0x0185(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInteractOwnerCharacterSpecifiedBone;              // 0x0186(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_187[0x1];                                      // 0x0187(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InteractOwnerCharacterSpecifiedBoneName;           // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StandMontageBlendOutTime;                          // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStandRotateToTarget;                              // 0x0194(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InteractActor;                                     // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YawToPlayer_deg_;                                  // 0x01A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceToPlayer_cm_;                              // 0x01A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetZToPlayer_cm_;                               // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           LongPressInteractSETag;                            // 0x01B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           LongPressInteractSE;                               // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InteractMontageStand_EndSectionName;               // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          InteractMontageStand_EndSectionAnim;               // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCompPlayStandMontage_EndSection;                  // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TraceLength;                                       // 0x01D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtensionTimeToChangeNormalWalkingMode;            // 0x01D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           InteractMontageCharacter;                          // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InteractMontageCharacter_EndSectionName;           // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          InteractMontageCharacter_EndSectionAnim;           // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCompPlayCharacterMontage_EndSection;              // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldInputDisableDuringLongPress;                // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCustomSpawnInteractParticle;                      // 0x01FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInteractedForMovedCharacter;                      // 0x01FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBLongPressInteract(int32 EntryPoint);
	void StopLongInteractSe();
	void PlayLongInteractSE();
	void UpdateErrorTypeUI(uint8 ErrorType);
	void OnLongPressInteractEnded(bool bSuccess, bool bForceCancel, class AActor* InteractActor_0);
	void OnLongPressInteractBegan(class AActor* InteractActor_0);
	void OnEndInteract(class AActor* TargetActor, bool bSuccess, bool bForceCancel);
	void OnBeginInteract(class AActor* TargetActor);
	void OnCompleted_C5A469DF48C56780B0E2F69F99F682E3(class FName NotifyName);
	void OnBlendOut_C5A469DF48C56780B0E2F69F99F682E3(class FName NotifyName);
	void OnInterrupted_C5A469DF48C56780B0E2F69F99F682E3(class FName NotifyName);
	void OnNotifyBegin_C5A469DF48C56780B0E2F69F99F682E3(class FName NotifyName);
	void OnNotifyEnd_C5A469DF48C56780B0E2F69F99F682E3(class FName NotifyName);
	void OnCompleted_6D9C0F5845C72D1FE2E944AE6F9DEF66(class FName NotifyName);
	void OnBlendOut_6D9C0F5845C72D1FE2E944AE6F9DEF66(class FName NotifyName);
	void OnInterrupted_6D9C0F5845C72D1FE2E944AE6F9DEF66(class FName NotifyName);
	void OnNotifyBegin_6D9C0F5845C72D1FE2E944AE6F9DEF66(class FName NotifyName);
	void OnNotifyEnd_6D9C0F5845C72D1FE2E944AE6F9DEF66(class FName NotifyName);
	void OnCompleted_6D9C0F5845C72D1FE2E944AEA42BE1E1(class FName NotifyName);
	void OnBlendOut_6D9C0F5845C72D1FE2E944AEA42BE1E1(class FName NotifyName);
	void OnInterrupted_6D9C0F5845C72D1FE2E944AEA42BE1E1(class FName NotifyName);
	void OnNotifyBegin_6D9C0F5845C72D1FE2E944AEA42BE1E1(class FName NotifyName);
	void OnNotifyEnd_6D9C0F5845C72D1FE2E944AEA42BE1E1(class FName NotifyName);
	void OnCompleted_C5A469DF48C56780B0E2F69FCC377909(class FName NotifyName);
	void OnBlendOut_C5A469DF48C56780B0E2F69FCC377909(class FName NotifyName);
	void OnInterrupted_C5A469DF48C56780B0E2F69FCC377909(class FName NotifyName);
	void OnNotifyBegin_C5A469DF48C56780B0E2F69FCC377909(class FName NotifyName);
	void OnNotifyEnd_C5A469DF48C56780B0E2F69FCC377909(class FName NotifyName);
	void GetTraceLength(float* TraceLength_0);
	void DecideSpawnParticleInfo(struct FVector* Location, struct FRotator* Rotation, class USceneComponent** SceneComponent, class FName* SocketName);
	void TrySpawnInteractParticle();
	void BeginInteract(bool* bSuccess);
	void GetPriority(int32* Priority);
	void GetText(bool* bSuccess, class FText* Text);
	void CheckInteractable(class ABP_AJBInGameCharacter_C* OperatorCharacter, class AActor* TargetActor, float BaseTraceLength, bool* bInteractable);
	void ReceiveTick(float DeltaSeconds);
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void CheckActive(bool* bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBLongPressInteract_C">();
	}
	static class UBP_AJBLongPressInteract_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBLongPressInteract_C>();
	}
};
static_assert(alignof(UBP_AJBLongPressInteract_C) == 0x000008, "Wrong alignment on UBP_AJBLongPressInteract_C");
static_assert(sizeof(UBP_AJBLongPressInteract_C) == 0x000200, "Wrong size on UBP_AJBLongPressInteract_C");
static_assert(offsetof(UBP_AJBLongPressInteract_C, UberGraphFrame_BP_AJBLongPressInteract_C) == 0x000158, "Member 'UBP_AJBLongPressInteract_C::UberGraphFrame_BP_AJBLongPressInteract_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractParticleTag) == 0x000160, "Member 'UBP_AJBLongPressInteract_C::InteractParticleTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractParticle) == 0x000168, "Member 'UBP_AJBLongPressInteract_C::InteractParticle' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bPlayEndSection) == 0x000170, "Member 'UBP_AJBLongPressInteract_C::bPlayEndSection' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractMontageStand) == 0x000178, "Member 'UBP_AJBLongPressInteract_C::InteractMontageStand' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, ReadyTime) == 0x000180, "Member 'UBP_AJBLongPressInteract_C::ReadyTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bInteractDownedCharacter) == 0x000184, "Member 'UBP_AJBLongPressInteract_C::bInteractDownedCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bInteractFootLocation) == 0x000185, "Member 'UBP_AJBLongPressInteract_C::bInteractFootLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bInteractOwnerCharacterSpecifiedBone) == 0x000186, "Member 'UBP_AJBLongPressInteract_C::bInteractOwnerCharacterSpecifiedBone' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractOwnerCharacterSpecifiedBoneName) == 0x000188, "Member 'UBP_AJBLongPressInteract_C::InteractOwnerCharacterSpecifiedBoneName' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, StandMontageBlendOutTime) == 0x000190, "Member 'UBP_AJBLongPressInteract_C::StandMontageBlendOutTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bStandRotateToTarget) == 0x000194, "Member 'UBP_AJBLongPressInteract_C::bStandRotateToTarget' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractActor) == 0x000198, "Member 'UBP_AJBLongPressInteract_C::InteractActor' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, YawToPlayer_deg_) == 0x0001A0, "Member 'UBP_AJBLongPressInteract_C::YawToPlayer_deg_' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, DistanceToPlayer_cm_) == 0x0001A4, "Member 'UBP_AJBLongPressInteract_C::DistanceToPlayer_cm_' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, OffsetZToPlayer_cm_) == 0x0001A8, "Member 'UBP_AJBLongPressInteract_C::OffsetZToPlayer_cm_' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, LongPressInteractSETag) == 0x0001B0, "Member 'UBP_AJBLongPressInteract_C::LongPressInteractSETag' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, LongPressInteractSE) == 0x0001B8, "Member 'UBP_AJBLongPressInteract_C::LongPressInteractSE' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractMontageStand_EndSectionName) == 0x0001C0, "Member 'UBP_AJBLongPressInteract_C::InteractMontageStand_EndSectionName' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractMontageStand_EndSectionAnim) == 0x0001C8, "Member 'UBP_AJBLongPressInteract_C::InteractMontageStand_EndSectionAnim' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bCompPlayStandMontage_EndSection) == 0x0001D0, "Member 'UBP_AJBLongPressInteract_C::bCompPlayStandMontage_EndSection' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, TraceLength) == 0x0001D4, "Member 'UBP_AJBLongPressInteract_C::TraceLength' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, ExtensionTimeToChangeNormalWalkingMode) == 0x0001D8, "Member 'UBP_AJBLongPressInteract_C::ExtensionTimeToChangeNormalWalkingMode' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractMontageCharacter) == 0x0001E0, "Member 'UBP_AJBLongPressInteract_C::InteractMontageCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractMontageCharacter_EndSectionName) == 0x0001E8, "Member 'UBP_AJBLongPressInteract_C::InteractMontageCharacter_EndSectionName' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, InteractMontageCharacter_EndSectionAnim) == 0x0001F0, "Member 'UBP_AJBLongPressInteract_C::InteractMontageCharacter_EndSectionAnim' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bCompPlayCharacterMontage_EndSection) == 0x0001F8, "Member 'UBP_AJBLongPressInteract_C::bCompPlayCharacterMontage_EndSection' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bShouldInputDisableDuringLongPress) == 0x0001F9, "Member 'UBP_AJBLongPressInteract_C::bShouldInputDisableDuringLongPress' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bCustomSpawnInteractParticle) == 0x0001FA, "Member 'UBP_AJBLongPressInteract_C::bCustomSpawnInteractParticle' has a wrong offset!");
static_assert(offsetof(UBP_AJBLongPressInteract_C, bInteractedForMovedCharacter) == 0x0001FB, "Member 'UBP_AJBLongPressInteract_C::bInteractedForMovedCharacter' has a wrong offset!");

}

