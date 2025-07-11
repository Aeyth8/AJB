#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBCloseRangeSkill

#include "Basic.hpp"

#include "E_VoiceRushType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BP_AJBSkillBase_classes.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBCloseRangeSkill.BP_AJBCloseRangeSkill_C
// 0x01B0 (0x0388 - 0x01D8)
class UBP_AJBCloseRangeSkill_C : public UBP_AJBSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBCloseRangeSkill_C;            // 0x01D8(0x0008)(Transient, DuplicateTransient)
	int32                                         RepeatCount;                                       // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRetry;                                           // 0x01E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CloseRangeKindSkillNo;                             // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           HitGionTag;                                        // 0x01F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           DashParticleTag;                                   // 0x01F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           RushSETag;                                         // 0x0200(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DashParticleOffset;                                // 0x0208(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DashParticleRotation;                              // 0x0214(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         S__BP_AJBCloseRangeSkill_C;                        // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S__BP_AJBCloseRangeSkill_C_0;                      // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S__BP_AJBCloseRangeSkill_C_1;                      // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HitWaitTime;                                       // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttackRange_cm_;                                   // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccompanyWaitTimeMin;                              // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccompanyWaitTimeMax;                              // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccompanyWaitTime;                                 // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S__BP_AJBCloseRangeSkill_C_2;                      // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S__BP_AJBCloseRangeSkill_C_3;                      // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetDirection;                                   // 0x0248(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   AttackMontageList;                                 // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                 TargetActor;                                       // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                        TargetComponent;                                   // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x0278(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackDistanceThreshould;                            // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackDotProductThreshould;                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBDamageActor_C*                   DamageActor;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OraAudioComponent;                                 // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FixedLocationLastDashStarted;                      // 0x02A0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DamageActorInfoComponentTag;                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseImpactAnimation;                                // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseBackAnimation;                                  // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseSkillEndAnimation;                              // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BB[0x5];                                      // 0x02BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LastHitActor;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CauseHitWaitEvenIfSwingAir;                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldSnapHitLocation;                             // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldFaceHitLocation;                             // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bStandAlwaysRotate;                                // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameParticleEffect_C*          DashParticleEffect;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialAttackRange_cm_;                            // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           MissGionTag;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugShowStateOnTick;                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RushContinuousCount;                               // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StandAttackOffset_cm_;                             // 0x02F0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttackCollisionRadius;                             // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_VoiceRushType                               RushVoiceType;                                     // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugShowState;                                   // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAutoRedash;                                       // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReserveDestroyDashParticle;                       // 0x0303(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         StandAttackLimit;                                  // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TempStartLocation;                                 // 0x0308(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TempEndLocation;                                   // 0x0314(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TempTargetDirection;                               // 0x0320(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetHitLocation;                                 // 0x032C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedStandMeshAttach;                              // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCancelAtTheWorldOnSeparation;                     // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A[0x6];                                      // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           DashParticleDarkPlaceTag;                          // 0x0340(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bMultipleHit;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bValidDamageProcessOnPenetrate;                    // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnablePlayHitSECharacter;                         // 0x034A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnablePlayHitSENonCharacter;                      // 0x034B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         HeadShotTraceLength;                               // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableHeadShot;                                   // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_351[0x3];                                      // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DamageOnHeadShot;                                  // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadShotTraceRadius;                               // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPenetrateObject;                                  // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           PenetrateParticleTag;                              // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CollisionDetectorClass;                            // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnoreBreakWindow;                                // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           PenetrateCharacterParticleTag;                     // 0x0378(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHitWaitGionSpowned;                             // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBCloseRangeSkill(int32 EntryPoint);
	void OnMC_Penetrate(const struct FVector& Location, const struct FVector& Normal, bool bCharacter);
	void OnPenetrate(const struct FVector& Location, const struct FVector& Normal, bool bCharacter);
	void MC_Penetrate(const struct FVector& Location, const struct FVector& Normal, bool bCharacter);
	void ROS_Penetrate(const struct FVector& Location, const struct FVector& Normal, bool bCharacter);
	void OnBlocking(class AActor* BlockedActor, const struct FVector& HitLocation, float CuttingRate, bool bInvincible, bool bIsPenetration);
	void OnTargetHit(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, EPhysicalSurface SurfaceType, bool bDisableDamage, bool bIsPenetration);
	void OnDisconnected();
	void CancelSkillEndAnimation();
	void OnRedash();
	void InitializeVariablesOnRedash();
	void MC_EndState(bool bCancel, bool bRestore);
	void ROS_EndState(bool bCancel, bool bRestore);
	void EndState_Local(bool bCancel, bool bRestore);
	void OnCancel();
	void OnEndState(bool bCancel, bool bRestore);
	void MC_RequestHitWaitGion(bool Hit, const struct FVector& HitLocation);
	void ROS_RequestHitWaitGion(bool Hit, const struct FVector& HitLocation);
	void SpeakRushHitVoice(bool bHitCharacter);
	void ROS_DamageOverlap(class AActor* Target, class AActor* DamageCauser, const struct FVector& HitLocation);
	void OnDamageOverlap(class AActor* Target, class AActor* DamageCauser, const struct FVector& HitLocation);
	void OnRepeatCountChanged();
	void ReceiveBeginPlay();
	void OnBack();
	void OnReady();
	void ReceiveTick(float DeltaSeconds);
	void MC_BackToPlayer();
	void ROS_BackToPlayer();
	void PlayBackAnimation();
	void PlaySkillEndAnimation();
	void MC_AccompanyWait();
	void ROS_AccompanyWait();
	void PlayImpactAnimation();
	void PlaySkillBeginAnimation();
	void InitializeVariables();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnHit(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, float CuttingRate, EPhysicalSurface SurfaceType, bool bDisableDamage, bool bInvincible, bool bIsPenetration);
	void ChangeState(uint8 NextState);
	void OnDash(uint8 RepeatCount_0, bool bRedash);
	void MC_Dash(const struct FVector& TargetDirection_0, class AActor* TargetActor_0, class UActorComponent* TargetComponent_0, uint8 RepeatCount_0, bool bRedash);
	void ROS_Dash(const struct FVector& TargetDirection_0, class AActor* TargetActor_0, class UActorComponent* TargetComponent_0, uint8 RepeatCount_0, bool bRedash);
	void MC_HitWait(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, float CuttingRate, EPhysicalSurface SurfaceType, bool bDisableDamage, bool bInvincible, bool bIsPenetration, bool bBlockedByAAP, bool bHeadShot);
	void ROS_HitWait(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, float CuttingRate, EPhysicalSurface SurfaceType, bool bDisableDamage, bool bInvincible, int32 SerialNumber_0, bool bIsPenetration, bool bBlockedByAAP, bool bHeadShot);
	void Redash_Local();
	void AccompanyWait();
	void BackToPlayer();
	void HitWait(class AActor* HitActor, const struct FVector& HitLocation, const struct FVector& HitNormal, float CuttingRate, EPhysicalSurface SurfaceType, bool bDisableDamage, bool bInvincible, bool bIsPenetration, bool bBlockedByAAP, bool bHeadShot);
	void Dash(uint8 RepeatCount_0, bool bRedash);
	void OnInactive();
	void OnActive();
	void StateBeginPlay(bool bShouldRestore);
	void StateTick(float DeltaSeconds);
	void Update_Dash(float DeltaSeconds);
	void Update_AccompanyWait(float DeltaSeconds);
	void Update_BackToPlayer(float DeltaSeconds);
	void Update_HitWait(float DeltaSeconds);
	void InitializeSoundVariables();
	void StopRushVoice();
	void SpeakRushVoice();
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void OnCompleted_A3F1CD754137FA8BD996C6838AB7F546(class FName NotifyName);
	void OnBlendOut_A3F1CD754137FA8BD996C6838AB7F546(class FName NotifyName);
	void OnInterrupted_A3F1CD754137FA8BD996C6838AB7F546(class FName NotifyName);
	void OnNotifyBegin_A3F1CD754137FA8BD996C6838AB7F546(class FName NotifyName);
	void OnNotifyEnd_A3F1CD754137FA8BD996C6838AB7F546(class FName NotifyName);
	void OnCompleted_F3884152406B329A4C600188A0955544(class FName NotifyName);
	void OnBlendOut_F3884152406B329A4C600188A0955544(class FName NotifyName);
	void OnInterrupted_F3884152406B329A4C600188A0955544(class FName NotifyName);
	void OnNotifyBegin_F3884152406B329A4C600188A0955544(class FName NotifyName);
	void OnNotifyEnd_F3884152406B329A4C600188A0955544(class FName NotifyName);
	void SetRepeatCount(int32 RepeatCount_0, int32* Result);
	void DashToTarget(float Speed, float DeltaSeconds, bool* bReached);
	void TryRedash();
	void TryGetDamageActor(class ABP_AJBDamageActor_C** DamageActor_0);
	void BackToCharacter(float Speed, float DeltaSeconds, bool* bReached);
	void SetLaunchedActorLocationReliable(const struct FVector& NewLocation);
	void GetLaunchedActorLocation(struct FVector* ActorLocation);
	void UpdateStandRotation();
	void ChangeAttackRangeWithRate(float Rate);
	void PlayHitSE(class AActor* HitActor, const struct FVector& HitLocation, EPhysicalSurface SurfaceType, bool bBlockedByAAP, bool bHeadShot);
	void PlayRushSE(class USceneComponent* AttachComponent);
	void RequestHitWaitGion(bool bHit, const struct FVector& HitLocation);
	void GetPoliticDamage(bool bHeadShot, int32* Damage_0);
	void TryDestroyDashParticle();
	void GetDashParticleTag(struct FGameplayTag* DashParticleTag_0);
	void CheckHeadShot(class AActor* HitActor, class AActor* DamageActor_0, const struct FVector& HitLocation, bool* bHeadShot);
	float GetSkillAttackRange();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBCloseRangeSkill_C">();
	}
	static class UBP_AJBCloseRangeSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBCloseRangeSkill_C>();
	}
};
static_assert(alignof(UBP_AJBCloseRangeSkill_C) == 0x000008, "Wrong alignment on UBP_AJBCloseRangeSkill_C");
static_assert(sizeof(UBP_AJBCloseRangeSkill_C) == 0x000388, "Wrong size on UBP_AJBCloseRangeSkill_C");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, UberGraphFrame_BP_AJBCloseRangeSkill_C) == 0x0001D8, "Member 'UBP_AJBCloseRangeSkill_C::UberGraphFrame_BP_AJBCloseRangeSkill_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, RepeatCount) == 0x0001E0, "Member 'UBP_AJBCloseRangeSkill_C::RepeatCount' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, IsRetry) == 0x0001E4, "Member 'UBP_AJBCloseRangeSkill_C::IsRetry' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, CloseRangeKindSkillNo) == 0x0001E8, "Member 'UBP_AJBCloseRangeSkill_C::CloseRangeKindSkillNo' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, HitGionTag) == 0x0001F0, "Member 'UBP_AJBCloseRangeSkill_C::HitGionTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DashParticleTag) == 0x0001F8, "Member 'UBP_AJBCloseRangeSkill_C::DashParticleTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, RushSETag) == 0x000200, "Member 'UBP_AJBCloseRangeSkill_C::RushSETag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DashParticleOffset) == 0x000208, "Member 'UBP_AJBCloseRangeSkill_C::DashParticleOffset' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DashParticleRotation) == 0x000214, "Member 'UBP_AJBCloseRangeSkill_C::DashParticleRotation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, S__BP_AJBCloseRangeSkill_C) == 0x000220, "Member 'UBP_AJBCloseRangeSkill_C::S__BP_AJBCloseRangeSkill_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, S__BP_AJBCloseRangeSkill_C_0) == 0x000224, "Member 'UBP_AJBCloseRangeSkill_C::S__BP_AJBCloseRangeSkill_C_0' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, S__BP_AJBCloseRangeSkill_C_1) == 0x000228, "Member 'UBP_AJBCloseRangeSkill_C::S__BP_AJBCloseRangeSkill_C_1' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, HitWaitTime) == 0x00022C, "Member 'UBP_AJBCloseRangeSkill_C::HitWaitTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, AttackRange_cm_) == 0x000230, "Member 'UBP_AJBCloseRangeSkill_C::AttackRange_cm_' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, AccompanyWaitTimeMin) == 0x000234, "Member 'UBP_AJBCloseRangeSkill_C::AccompanyWaitTimeMin' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, AccompanyWaitTimeMax) == 0x000238, "Member 'UBP_AJBCloseRangeSkill_C::AccompanyWaitTimeMax' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, AccompanyWaitTime) == 0x00023C, "Member 'UBP_AJBCloseRangeSkill_C::AccompanyWaitTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, S__BP_AJBCloseRangeSkill_C_2) == 0x000240, "Member 'UBP_AJBCloseRangeSkill_C::S__BP_AJBCloseRangeSkill_C_2' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, S__BP_AJBCloseRangeSkill_C_3) == 0x000244, "Member 'UBP_AJBCloseRangeSkill_C::S__BP_AJBCloseRangeSkill_C_3' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TargetDirection) == 0x000248, "Member 'UBP_AJBCloseRangeSkill_C::TargetDirection' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, AttackMontageList) == 0x000258, "Member 'UBP_AJBCloseRangeSkill_C::AttackMontageList' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TargetActor) == 0x000268, "Member 'UBP_AJBCloseRangeSkill_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TargetComponent) == 0x000270, "Member 'UBP_AJBCloseRangeSkill_C::TargetComponent' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TargetLocation) == 0x000278, "Member 'UBP_AJBCloseRangeSkill_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, BackDistanceThreshould) == 0x000284, "Member 'UBP_AJBCloseRangeSkill_C::BackDistanceThreshould' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, BackDotProductThreshould) == 0x000288, "Member 'UBP_AJBCloseRangeSkill_C::BackDotProductThreshould' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DamageActor) == 0x000290, "Member 'UBP_AJBCloseRangeSkill_C::DamageActor' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, OraAudioComponent) == 0x000298, "Member 'UBP_AJBCloseRangeSkill_C::OraAudioComponent' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, FixedLocationLastDashStarted) == 0x0002A0, "Member 'UBP_AJBCloseRangeSkill_C::FixedLocationLastDashStarted' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DamageActorInfoComponentTag) == 0x0002B0, "Member 'UBP_AJBCloseRangeSkill_C::DamageActorInfoComponentTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, UseImpactAnimation) == 0x0002B8, "Member 'UBP_AJBCloseRangeSkill_C::UseImpactAnimation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, UseBackAnimation) == 0x0002B9, "Member 'UBP_AJBCloseRangeSkill_C::UseBackAnimation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, UseSkillEndAnimation) == 0x0002BA, "Member 'UBP_AJBCloseRangeSkill_C::UseSkillEndAnimation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, LastHitActor) == 0x0002C0, "Member 'UBP_AJBCloseRangeSkill_C::LastHitActor' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, CauseHitWaitEvenIfSwingAir) == 0x0002C8, "Member 'UBP_AJBCloseRangeSkill_C::CauseHitWaitEvenIfSwingAir' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, ShouldSnapHitLocation) == 0x0002C9, "Member 'UBP_AJBCloseRangeSkill_C::ShouldSnapHitLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, ShouldFaceHitLocation) == 0x0002CA, "Member 'UBP_AJBCloseRangeSkill_C::ShouldFaceHitLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bStandAlwaysRotate) == 0x0002CB, "Member 'UBP_AJBCloseRangeSkill_C::bStandAlwaysRotate' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DashParticleEffect) == 0x0002D0, "Member 'UBP_AJBCloseRangeSkill_C::DashParticleEffect' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, InitialAttackRange_cm_) == 0x0002D8, "Member 'UBP_AJBCloseRangeSkill_C::InitialAttackRange_cm_' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, MissGionTag) == 0x0002E0, "Member 'UBP_AJBCloseRangeSkill_C::MissGionTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bDebugShowStateOnTick) == 0x0002E8, "Member 'UBP_AJBCloseRangeSkill_C::bDebugShowStateOnTick' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, RushContinuousCount) == 0x0002EC, "Member 'UBP_AJBCloseRangeSkill_C::RushContinuousCount' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, StandAttackOffset_cm_) == 0x0002F0, "Member 'UBP_AJBCloseRangeSkill_C::StandAttackOffset_cm_' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, AttackCollisionRadius) == 0x0002FC, "Member 'UBP_AJBCloseRangeSkill_C::AttackCollisionRadius' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, RushVoiceType) == 0x000300, "Member 'UBP_AJBCloseRangeSkill_C::RushVoiceType' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bDebugShowState) == 0x000301, "Member 'UBP_AJBCloseRangeSkill_C::bDebugShowState' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bAutoRedash) == 0x000302, "Member 'UBP_AJBCloseRangeSkill_C::bAutoRedash' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bReserveDestroyDashParticle) == 0x000303, "Member 'UBP_AJBCloseRangeSkill_C::bReserveDestroyDashParticle' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, StandAttackLimit) == 0x000304, "Member 'UBP_AJBCloseRangeSkill_C::StandAttackLimit' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TempStartLocation) == 0x000308, "Member 'UBP_AJBCloseRangeSkill_C::TempStartLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TempEndLocation) == 0x000314, "Member 'UBP_AJBCloseRangeSkill_C::TempEndLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TempTargetDirection) == 0x000320, "Member 'UBP_AJBCloseRangeSkill_C::TempTargetDirection' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, TargetHitLocation) == 0x00032C, "Member 'UBP_AJBCloseRangeSkill_C::TargetHitLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bNeedStandMeshAttach) == 0x000338, "Member 'UBP_AJBCloseRangeSkill_C::bNeedStandMeshAttach' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bCancelAtTheWorldOnSeparation) == 0x000339, "Member 'UBP_AJBCloseRangeSkill_C::bCancelAtTheWorldOnSeparation' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DashParticleDarkPlaceTag) == 0x000340, "Member 'UBP_AJBCloseRangeSkill_C::DashParticleDarkPlaceTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bMultipleHit) == 0x000348, "Member 'UBP_AJBCloseRangeSkill_C::bMultipleHit' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bValidDamageProcessOnPenetrate) == 0x000349, "Member 'UBP_AJBCloseRangeSkill_C::bValidDamageProcessOnPenetrate' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bEnablePlayHitSECharacter) == 0x00034A, "Member 'UBP_AJBCloseRangeSkill_C::bEnablePlayHitSECharacter' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bEnablePlayHitSENonCharacter) == 0x00034B, "Member 'UBP_AJBCloseRangeSkill_C::bEnablePlayHitSENonCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, HeadShotTraceLength) == 0x00034C, "Member 'UBP_AJBCloseRangeSkill_C::HeadShotTraceLength' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bEnableHeadShot) == 0x000350, "Member 'UBP_AJBCloseRangeSkill_C::bEnableHeadShot' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, DamageOnHeadShot) == 0x000354, "Member 'UBP_AJBCloseRangeSkill_C::DamageOnHeadShot' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, HeadShotTraceRadius) == 0x000358, "Member 'UBP_AJBCloseRangeSkill_C::HeadShotTraceRadius' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bPenetrateObject) == 0x00035C, "Member 'UBP_AJBCloseRangeSkill_C::bPenetrateObject' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, PenetrateParticleTag) == 0x000360, "Member 'UBP_AJBCloseRangeSkill_C::PenetrateParticleTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, CollisionDetectorClass) == 0x000368, "Member 'UBP_AJBCloseRangeSkill_C::CollisionDetectorClass' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bIgnoreBreakWindow) == 0x000370, "Member 'UBP_AJBCloseRangeSkill_C::bIgnoreBreakWindow' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, PenetrateCharacterParticleTag) == 0x000378, "Member 'UBP_AJBCloseRangeSkill_C::PenetrateCharacterParticleTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBCloseRangeSkill_C, bIsHitWaitGionSpowned) == 0x000380, "Member 'UBP_AJBCloseRangeSkill_C::bIsHitWaitGionSpowned' has a wrong offset!");

}

