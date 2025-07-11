#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBDamageImpulseBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBDamageImpulseBase.BP_AJBDamageImpulseBase_C
// 0x0128 (0x0450 - 0x0328)
class ABP_AJBDamageImpulseBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UBoxComponent*                          BoxCollision;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereCollision;                                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         FirstPhasePercentage;                              // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FirstPhaseDamage;                                  // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SkillTag;                                          // 0x0348(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SerialNumber;                                      // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          LaunchFormSeparateStand;                           // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EDamageImpulseState                           CurrentState;                                      // 0x0355(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_356[0x2];                                      // 0x0356(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SecondPhasePercentage;                             // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SecondPhaseDamage;                                 // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ThirdPhasePercentage;                              // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ThirdPhaseDamage;                                  // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentTime;                                       // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReadyTime;                                         // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActiveTime;                                        // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClearingTime;                                      // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableTheWorld;                                   // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_379[0x3];                                      // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Radius;                                            // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugDamageDraw;                                  // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           DebugSphereDrawColor_First;                        // 0x0384(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DebugSphereDrawColor_Second;                       // 0x0394(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DebugSphereDrawColor_Third;                        // 0x03A4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugDamageDrawTime;                               // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActiveParticleTag;                                 // 0x03B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ReadyParticleTag;                                  // 0x03C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ImpulseGionTag;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ImpulseSETag;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           PassiveTagOnDamage;                                // 0x03D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bAddPassive;                                       // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E1[0x3];                                      // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PassiveTime;                                       // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAddDamageOnStealth;                               // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAddPassiveOnStealth;                              // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA[0x6];                                      // 0x03EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ReadySETag;                                        // 0x03F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         TempDamageTargetNum;                               // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempKillTargetNum;                                 // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNotDamageIncludeNotKill;                          // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           NotKillVoiceTag;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SingleKillVoiceTag;                                // 0x0410(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           MultiKillVoiceTag;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         TranslucentSortPriority_Active;                    // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           OverrideCharaParam;                                // 0x0428(0x0008)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_AJBInGameParticleEffect_C*          ReadyParticle;                                     // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameParticleEffect_C*          ActiveParticle;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseBoxCollision;                                  // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BoxWidth;                                          // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoxDepth;                                          // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoxHeight;                                         // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBDamageImpulseBase(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Cancel_Server();
	void ROC_AttackResult(int32 KillNum);
	void MC_AttackHit();
	void MC_SpawnInvisibleParticle(class AActor* TargetActor);
	void DamageProcess();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnBeginState_Active_All();
	void MC_OnBeginState_Ready();
	void MC_OnBeginState_Active();
	void TickState_Active(float DeltaSeconds);
	void OnStateEnd();
	void StateTick(float DeltaSeconds);
	void TickState_Clearing(float DeltaSeconds);
	void TickState_Ready(float DeltaSeconds);
	void OnBeginState_Clearing();
	void OnBeginState_Active();
	void OnBeginState_Ready();
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);
	void UserConstructionScript();
	void GetAttackDistance(class AActor* DamagedActor, float* AttackDistance);
	void ChangeState(EDamageImpulseState NewState);
	void CalcDamage(class AActor* DamagedActor, int32* Damage);
	void CheckInRange(class AActor* DamagedActor, bool* bInRange);
	void EnableDamageOverlap();
	void DamageProcessCore(class AActor* DamagedActor, class AActor* DamageCauser, bool bNoDamage, bool* bRemainHP);
	void ShouldAddDamage(class AActor* DamagedActor, class AActor* DamageCauser, bool* bShouldAddDamage);
	void ShouldAddPassive(class AActor* DamagedActor, class AActor* DamageCauser, bool* bShouldAddPassive);
	void TryToSpeakAttackResultVoice(int32 KillNum);
	void RequestImpulseGion();
	void TryDestroyReadyParticle();
	void SettingCollisionSize();
	void GetCollisionComponent(class UPrimitiveComponent** CollisionComponent);
	void CheckDamage(class AActor* DamagedActor, class AActor* DamageCauser, bool* bNoDamage);
	void RequestActiveParticle();
	void GetPoliticPassiveTagOnDamage(class AActor* DamagedActor, struct FGameplayTag* PassiveTagOnDamage_0);
	void ShouldDamageOverlap(class AActor* DamagedActor, class AActor* DamageCauser, bool* bShouldOverlap);
	void GetCauserOwnerCharacterBP(class ABP_AJBInGameCharacter_C** CharacterBP);
	void GetPassiveSkillTag(struct FGameplayTag* PassiveSkillTag);
	void GetDuration(float* Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBDamageImpulseBase_C">();
	}
	static class ABP_AJBDamageImpulseBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBDamageImpulseBase_C>();
	}
};
static_assert(alignof(ABP_AJBDamageImpulseBase_C) == 0x000008, "Wrong alignment on ABP_AJBDamageImpulseBase_C");
static_assert(sizeof(ABP_AJBDamageImpulseBase_C) == 0x000450, "Wrong size on ABP_AJBDamageImpulseBase_C");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, UberGraphFrame) == 0x000328, "Member 'ABP_AJBDamageImpulseBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, BoxCollision) == 0x000330, "Member 'ABP_AJBDamageImpulseBase_C::BoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, SphereCollision) == 0x000338, "Member 'ABP_AJBDamageImpulseBase_C::SphereCollision' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, FirstPhasePercentage) == 0x000340, "Member 'ABP_AJBDamageImpulseBase_C::FirstPhasePercentage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, FirstPhaseDamage) == 0x000344, "Member 'ABP_AJBDamageImpulseBase_C::FirstPhaseDamage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, SkillTag) == 0x000348, "Member 'ABP_AJBDamageImpulseBase_C::SkillTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, SerialNumber) == 0x000350, "Member 'ABP_AJBDamageImpulseBase_C::SerialNumber' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, LaunchFormSeparateStand) == 0x000354, "Member 'ABP_AJBDamageImpulseBase_C::LaunchFormSeparateStand' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, CurrentState) == 0x000355, "Member 'ABP_AJBDamageImpulseBase_C::CurrentState' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, SecondPhasePercentage) == 0x000358, "Member 'ABP_AJBDamageImpulseBase_C::SecondPhasePercentage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, SecondPhaseDamage) == 0x00035C, "Member 'ABP_AJBDamageImpulseBase_C::SecondPhaseDamage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ThirdPhasePercentage) == 0x000360, "Member 'ABP_AJBDamageImpulseBase_C::ThirdPhasePercentage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ThirdPhaseDamage) == 0x000364, "Member 'ABP_AJBDamageImpulseBase_C::ThirdPhaseDamage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, CurrentTime) == 0x000368, "Member 'ABP_AJBDamageImpulseBase_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ReadyTime) == 0x00036C, "Member 'ABP_AJBDamageImpulseBase_C::ReadyTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ActiveTime) == 0x000370, "Member 'ABP_AJBDamageImpulseBase_C::ActiveTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ClearingTime) == 0x000374, "Member 'ABP_AJBDamageImpulseBase_C::ClearingTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bEnableTheWorld) == 0x000378, "Member 'ABP_AJBDamageImpulseBase_C::bEnableTheWorld' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, Radius) == 0x00037C, "Member 'ABP_AJBDamageImpulseBase_C::Radius' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bDebugDamageDraw) == 0x000380, "Member 'ABP_AJBDamageImpulseBase_C::bDebugDamageDraw' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, DebugSphereDrawColor_First) == 0x000384, "Member 'ABP_AJBDamageImpulseBase_C::DebugSphereDrawColor_First' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, DebugSphereDrawColor_Second) == 0x000394, "Member 'ABP_AJBDamageImpulseBase_C::DebugSphereDrawColor_Second' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, DebugSphereDrawColor_Third) == 0x0003A4, "Member 'ABP_AJBDamageImpulseBase_C::DebugSphereDrawColor_Third' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, DebugDamageDrawTime) == 0x0003B4, "Member 'ABP_AJBDamageImpulseBase_C::DebugDamageDrawTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ActiveParticleTag) == 0x0003B8, "Member 'ABP_AJBDamageImpulseBase_C::ActiveParticleTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ReadyParticleTag) == 0x0003C0, "Member 'ABP_AJBDamageImpulseBase_C::ReadyParticleTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ImpulseGionTag) == 0x0003C8, "Member 'ABP_AJBDamageImpulseBase_C::ImpulseGionTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ImpulseSETag) == 0x0003D0, "Member 'ABP_AJBDamageImpulseBase_C::ImpulseSETag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, PassiveTagOnDamage) == 0x0003D8, "Member 'ABP_AJBDamageImpulseBase_C::PassiveTagOnDamage' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bAddPassive) == 0x0003E0, "Member 'ABP_AJBDamageImpulseBase_C::bAddPassive' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, PassiveTime) == 0x0003E4, "Member 'ABP_AJBDamageImpulseBase_C::PassiveTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bAddDamageOnStealth) == 0x0003E8, "Member 'ABP_AJBDamageImpulseBase_C::bAddDamageOnStealth' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bAddPassiveOnStealth) == 0x0003E9, "Member 'ABP_AJBDamageImpulseBase_C::bAddPassiveOnStealth' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ReadySETag) == 0x0003F0, "Member 'ABP_AJBDamageImpulseBase_C::ReadySETag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, TempDamageTargetNum) == 0x0003F8, "Member 'ABP_AJBDamageImpulseBase_C::TempDamageTargetNum' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, TempKillTargetNum) == 0x0003FC, "Member 'ABP_AJBDamageImpulseBase_C::TempKillTargetNum' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bNotDamageIncludeNotKill) == 0x000400, "Member 'ABP_AJBDamageImpulseBase_C::bNotDamageIncludeNotKill' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, NotKillVoiceTag) == 0x000408, "Member 'ABP_AJBDamageImpulseBase_C::NotKillVoiceTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, SingleKillVoiceTag) == 0x000410, "Member 'ABP_AJBDamageImpulseBase_C::SingleKillVoiceTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, MultiKillVoiceTag) == 0x000418, "Member 'ABP_AJBDamageImpulseBase_C::MultiKillVoiceTag' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, TranslucentSortPriority_Active) == 0x000420, "Member 'ABP_AJBDamageImpulseBase_C::TranslucentSortPriority_Active' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, OverrideCharaParam) == 0x000428, "Member 'ABP_AJBDamageImpulseBase_C::OverrideCharaParam' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ReadyParticle) == 0x000430, "Member 'ABP_AJBDamageImpulseBase_C::ReadyParticle' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, ActiveParticle) == 0x000438, "Member 'ABP_AJBDamageImpulseBase_C::ActiveParticle' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, bUseBoxCollision) == 0x000440, "Member 'ABP_AJBDamageImpulseBase_C::bUseBoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, BoxWidth) == 0x000444, "Member 'ABP_AJBDamageImpulseBase_C::BoxWidth' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, BoxDepth) == 0x000448, "Member 'ABP_AJBDamageImpulseBase_C::BoxDepth' has a wrong offset!");
static_assert(offsetof(ABP_AJBDamageImpulseBase_C, BoxHeight) == 0x00044C, "Member 'ABP_AJBDamageImpulseBase_C::BoxHeight' has a wrong offset!");

}

