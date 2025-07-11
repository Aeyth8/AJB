#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBWallClimb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "BP_AJBSupportSkillBase_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBWallClimb.BP_AJBWallClimb_C
// 0x0188 (0x02E0 - 0x0158)
class UBP_AJBWallClimb_C final : public UBP_AJBSupportSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBWallClimb_C;                  // 0x0158(0x0008)(Transient, DuplicateTransient)
	bool                                          bIsPressedJump;                                    // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WallAngleThreshold;                                // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ToleranceEdgeLength;                               // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CanClimbMinHeight;                                 // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WallNormal;                                        // 0x0170(0x000C)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanClimb;                                         // 0x017C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17D[0x3];                                      // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EffectiveHeight;                                   // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetPoint;                                       // 0x0184(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AscensionSpeed;                                    // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CacheActorLocation;                                // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bCheckWallAsAction;                                // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDontTreatEntranceAsWall;                          // 0x01A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSideMoveFree;                                     // 0x01AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bClimbFree;                                        // 0x01AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCheckIfCacheIsFull;                               // 0x01AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AD[0x3];                                      // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CheckRestCacheNum;                                 // 0x01B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TouchWallLength;                                   // 0x01B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EdgeCheckLengthFactor;                             // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldUpdateAction;                               // 0x01BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BD[0x3];                                      // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LaunchVelocityPower;                               // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRequestActionGion;                                // 0x01C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActionGionRepeatInterval;                          // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandleActionGionRepeat;                       // 0x01D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ABP_AJBInGameParticleEffect_C*          AJBParticleLegMoving;                              // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnoreVisualProcess;                              // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      WallTraceObjectTypes;                              // 0x01E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         TraceForwardToleranceDot;                          // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           WildcardList;                                      // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         TopTraceLength;                                    // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           LegAppearSETag;                                    // 0x0218(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           MovingSETag;                                       // 0x0220(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           MovingSE;                                          // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketNameDDWLeg;                                  // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConsumptionMP;                                     // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         S_;                                                // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldConsumeMP;                                  // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x3];                                      // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SkillEndTraceHeightOffset;                         // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActionStartTime;                                   // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           StartVoiceTag;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bCountUseSkill;                                    // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldChangeCharacterSpeedByStand;                // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A[0x2];                                      // 0x025A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CharacterMoveSpeedScaleByStand;                    // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StandLaunchVelocityScale;                          // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EdgeCheckDepthOffset;                              // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EdgeCheckHeightOffset;                             // 0x0268(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EdgeCheckRadius;                                   // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WallCheckRadius;                                   // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActorCenterWallAngleCheck;                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WallAngleThresholdMoat;                            // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 MoatClassWallAngleCheck;                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EndBlockerTag;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastVelocity;                                      // 0x0298(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRestoreVelocity;                                  // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            WB_WallClimb;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAJBSkillGuideInfo                     GuideInfo;                                         // 0x02B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShowGuide;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ClimbTimeLimit;                                    // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBWallClimb(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnStandDestroyed(class AActor* DestroyedActor);
	void ChangeStandLaunchVelocityScale(float Value);
	void ChangeCharacterMoveSpeedByStand(float Value);
	void RetryRequestGionRainLoop();
	void RequestActionGion();
	void Stop();
	void OnJump();
	void CharacterBind();
	void OnReleasedJump();
	void OnPressedJump();
	void ROS_Adjust(const struct FVector& Location);
	void OnBeginState_End(bool bCancel, bool bRestore, const struct FRotator& Rotation);
	void MC_BeginState_End(bool bCancel, const struct FRotator& Rotation);
	void ROS_BeginState_End(bool bCancel, const struct FRotator& Rotation);
	void BeginState_End_OneShot(bool bCancel, const struct FRotator& Rotation);
	void MC_BeginState_Action(const struct FRotator& Rotation);
	void ROS_BeginState_Action(const struct FRotator& Rotation);
	void BeginState_End(bool bCancel);
	void StateTick_Action(float DeltaSeconds);
	void OnBeginState_Action(bool bRestore, const struct FRotator& Rotation);
	void BeginStateActionOneShot(const struct FRotator& Rotation);
	void BeginState_Action();
	void StateTickNone();
	void StateTick(float DeltaSeconds);
	void ChangeStandMovementDistanceScale(float Value);
	void ChangeMovementDistanceScale(float Value);
	void OnCompleted_6D9C0F5845C72D1FE2E944AEDA339B26(class FName NotifyName);
	void OnBlendOut_6D9C0F5845C72D1FE2E944AEDA339B26(class FName NotifyName);
	void OnInterrupted_6D9C0F5845C72D1FE2E944AEDA339B26(class FName NotifyName);
	void OnNotifyBegin_6D9C0F5845C72D1FE2E944AEDA339B26(class FName NotifyName);
	void OnNotifyEnd_6D9C0F5845C72D1FE2E944AEDA339B26(class FName NotifyName);
	void CheckWall(bool* bCanClimb_0, struct FHitResult* WallHitResult, float* EffectiveHeight_0);
	struct FVector CalcAccensionDirection(const struct FVector& WallNormal_0, bool* bAscensionContinue, bool* bIsTouchWall, bool* bIsAvoidanceEdge);
	void OnTouchWall();
	void CheckRest(bool* bIsRest);
	void SetEnableDDWLeg(bool bIsEnable, bool bAnimation, bool bUseSpecifiedRotation, const struct FRotator& Rotation);
	bool CheckWallTraceForward(const struct FVector& TraceStartPointOffset, struct FHitResult* OutHit);
	void CheckEntrance(const struct FHitResult& HitResult, bool* bEntrance);
	void GetHitResultConsiderEntrance(TArray<struct FHitResult>& HitResults, struct FHitResult* HitResult);
	void CheckWallTraceHeight1(const struct FHitResult& HitResult, struct FHitResult* OutHit, bool* bReturnValue);
	bool CheckWallTraceHeight2(const struct FHitResult& HitResult, struct FHitResult* OutHit);
	bool CheckWallTraceHeight3(const struct FHitResult& HitResult, float DimpleCheckSampleLength, struct FHitResult* OutHit);
	void CheckWallTraceRouteDetect1(int32 NumOfTrace, const struct FVector& SensorPoint, struct FHitResult* OutHit, bool* bReturnValue);
	void CheckWallTraceRouteDetect2(const struct FVector& StartLocation, const struct FVector& EndLocation, struct FHitResult* OutHit, bool* bReturnValue);
	void CheckWallTraceRouteDetect3(const struct FVector& StartLocation, const struct FVector& EndLocation, struct FHitResult* OutHit, bool* bReturnValue);
	void RequestLegParticle(const struct FGameplayTag& ParticleTag, bool bAttach, bool bUseSpecifiedRotation, const struct FRotator& Rotation, class ABP_AJBInGameParticleEffect_C** Particle);
	void TraceForwardCheck(const struct FHitResult& HitResultCenter, const struct FHitResult& HitResultRight, const struct FHitResult& HitResultLeft, bool* bSucceed);
	void CheckSameWildcardObject(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, bool* bMatch);
	void UpdateMP(float DeltaSeconds);
	void CalcAscensionSpeed(float* AscensionSpeed_0);
	void CalcLaunchVelocityPower(float* LaunchPower);
	void GetWallAngleThreshold(float* WallAngleThreshold_0);
	void PossibleActive(bool* bPossibleActive);
	void PossibleActiveCheckWallAsAction(bool* bPossibleActive);
	void ChangeEnableShowGuide(bool bEnable);
	void StateBeginPlay(bool bShouldRestore, bool bUseNextState, uint8 NextState);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBWallClimb_C">();
	}
	static class UBP_AJBWallClimb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBWallClimb_C>();
	}
};
static_assert(alignof(UBP_AJBWallClimb_C) == 0x000008, "Wrong alignment on UBP_AJBWallClimb_C");
static_assert(sizeof(UBP_AJBWallClimb_C) == 0x0002E0, "Wrong size on UBP_AJBWallClimb_C");
static_assert(offsetof(UBP_AJBWallClimb_C, UberGraphFrame_BP_AJBWallClimb_C) == 0x000158, "Member 'UBP_AJBWallClimb_C::UberGraphFrame_BP_AJBWallClimb_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bIsPressedJump) == 0x000160, "Member 'UBP_AJBWallClimb_C::bIsPressedJump' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WallAngleThreshold) == 0x000164, "Member 'UBP_AJBWallClimb_C::WallAngleThreshold' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, ToleranceEdgeLength) == 0x000168, "Member 'UBP_AJBWallClimb_C::ToleranceEdgeLength' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, CanClimbMinHeight) == 0x00016C, "Member 'UBP_AJBWallClimb_C::CanClimbMinHeight' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WallNormal) == 0x000170, "Member 'UBP_AJBWallClimb_C::WallNormal' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bCanClimb) == 0x00017C, "Member 'UBP_AJBWallClimb_C::bCanClimb' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, EffectiveHeight) == 0x000180, "Member 'UBP_AJBWallClimb_C::EffectiveHeight' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, TargetPoint) == 0x000184, "Member 'UBP_AJBWallClimb_C::TargetPoint' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, AscensionSpeed) == 0x000190, "Member 'UBP_AJBWallClimb_C::AscensionSpeed' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, CacheActorLocation) == 0x000198, "Member 'UBP_AJBWallClimb_C::CacheActorLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bCheckWallAsAction) == 0x0001A8, "Member 'UBP_AJBWallClimb_C::bCheckWallAsAction' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bDontTreatEntranceAsWall) == 0x0001A9, "Member 'UBP_AJBWallClimb_C::bDontTreatEntranceAsWall' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bSideMoveFree) == 0x0001AA, "Member 'UBP_AJBWallClimb_C::bSideMoveFree' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bClimbFree) == 0x0001AB, "Member 'UBP_AJBWallClimb_C::bClimbFree' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bCheckIfCacheIsFull) == 0x0001AC, "Member 'UBP_AJBWallClimb_C::bCheckIfCacheIsFull' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, CheckRestCacheNum) == 0x0001B0, "Member 'UBP_AJBWallClimb_C::CheckRestCacheNum' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, TouchWallLength) == 0x0001B4, "Member 'UBP_AJBWallClimb_C::TouchWallLength' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, EdgeCheckLengthFactor) == 0x0001B8, "Member 'UBP_AJBWallClimb_C::EdgeCheckLengthFactor' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bShouldUpdateAction) == 0x0001BC, "Member 'UBP_AJBWallClimb_C::bShouldUpdateAction' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, LaunchVelocityPower) == 0x0001C0, "Member 'UBP_AJBWallClimb_C::LaunchVelocityPower' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bRequestActionGion) == 0x0001C4, "Member 'UBP_AJBWallClimb_C::bRequestActionGion' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, ActionGionRepeatInterval) == 0x0001C8, "Member 'UBP_AJBWallClimb_C::ActionGionRepeatInterval' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, TimerHandleActionGionRepeat) == 0x0001D0, "Member 'UBP_AJBWallClimb_C::TimerHandleActionGionRepeat' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, AJBParticleLegMoving) == 0x0001D8, "Member 'UBP_AJBWallClimb_C::AJBParticleLegMoving' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bIgnoreVisualProcess) == 0x0001E0, "Member 'UBP_AJBWallClimb_C::bIgnoreVisualProcess' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WallTraceObjectTypes) == 0x0001E8, "Member 'UBP_AJBWallClimb_C::WallTraceObjectTypes' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, TraceForwardToleranceDot) == 0x0001F8, "Member 'UBP_AJBWallClimb_C::TraceForwardToleranceDot' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WildcardList) == 0x000200, "Member 'UBP_AJBWallClimb_C::WildcardList' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, TopTraceLength) == 0x000210, "Member 'UBP_AJBWallClimb_C::TopTraceLength' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, LegAppearSETag) == 0x000218, "Member 'UBP_AJBWallClimb_C::LegAppearSETag' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, MovingSETag) == 0x000220, "Member 'UBP_AJBWallClimb_C::MovingSETag' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, MovingSE) == 0x000228, "Member 'UBP_AJBWallClimb_C::MovingSE' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, SocketNameDDWLeg) == 0x000230, "Member 'UBP_AJBWallClimb_C::SocketNameDDWLeg' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, ConsumptionMP) == 0x000238, "Member 'UBP_AJBWallClimb_C::ConsumptionMP' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, S_) == 0x00023C, "Member 'UBP_AJBWallClimb_C::S_' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bShouldConsumeMP) == 0x000240, "Member 'UBP_AJBWallClimb_C::bShouldConsumeMP' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, SkillEndTraceHeightOffset) == 0x000244, "Member 'UBP_AJBWallClimb_C::SkillEndTraceHeightOffset' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, ActionStartTime) == 0x000248, "Member 'UBP_AJBWallClimb_C::ActionStartTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, StartVoiceTag) == 0x000250, "Member 'UBP_AJBWallClimb_C::StartVoiceTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bCountUseSkill) == 0x000258, "Member 'UBP_AJBWallClimb_C::bCountUseSkill' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bShouldChangeCharacterSpeedByStand) == 0x000259, "Member 'UBP_AJBWallClimb_C::bShouldChangeCharacterSpeedByStand' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, CharacterMoveSpeedScaleByStand) == 0x00025C, "Member 'UBP_AJBWallClimb_C::CharacterMoveSpeedScaleByStand' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, StandLaunchVelocityScale) == 0x000260, "Member 'UBP_AJBWallClimb_C::StandLaunchVelocityScale' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, EdgeCheckDepthOffset) == 0x000264, "Member 'UBP_AJBWallClimb_C::EdgeCheckDepthOffset' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, EdgeCheckHeightOffset) == 0x000268, "Member 'UBP_AJBWallClimb_C::EdgeCheckHeightOffset' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, EdgeCheckRadius) == 0x00026C, "Member 'UBP_AJBWallClimb_C::EdgeCheckRadius' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WallCheckRadius) == 0x000270, "Member 'UBP_AJBWallClimb_C::WallCheckRadius' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, HitActorCenterWallAngleCheck) == 0x000278, "Member 'UBP_AJBWallClimb_C::HitActorCenterWallAngleCheck' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WallAngleThresholdMoat) == 0x000280, "Member 'UBP_AJBWallClimb_C::WallAngleThresholdMoat' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, MoatClassWallAngleCheck) == 0x000288, "Member 'UBP_AJBWallClimb_C::MoatClassWallAngleCheck' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, EndBlockerTag) == 0x000290, "Member 'UBP_AJBWallClimb_C::EndBlockerTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, LastVelocity) == 0x000298, "Member 'UBP_AJBWallClimb_C::LastVelocity' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bRestoreVelocity) == 0x0002A4, "Member 'UBP_AJBWallClimb_C::bRestoreVelocity' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, WB_WallClimb) == 0x0002A8, "Member 'UBP_AJBWallClimb_C::WB_WallClimb' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, GuideInfo) == 0x0002B0, "Member 'UBP_AJBWallClimb_C::GuideInfo' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, bShowGuide) == 0x0002D8, "Member 'UBP_AJBWallClimb_C::bShowGuide' has a wrong offset!");
static_assert(offsetof(UBP_AJBWallClimb_C, ClimbTimeLimit) == 0x0002DC, "Member 'UBP_AJBWallClimb_C::ClimbTimeLimit' has a wrong offset!");

}

