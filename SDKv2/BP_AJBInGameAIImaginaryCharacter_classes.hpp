#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameAIImaginaryCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "ST_AJBAICharacterSkillInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameAIImaginaryCharacter.BP_AJBInGameAIImaginaryCharacter_C
// 0x0140 (0x0468 - 0x0328)
class ABP_AJBInGameAIImaginaryCharacter_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               MyCharacter;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FST_AJBAICharacterSkillInfo> SkillInfos;                                        // 0x0340(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_AJBAICharacterSkillInfo            NormalAttackSkillInfo;                             // 0x0390(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         AttackRangeMaxParam;                               // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BodyRadiusBuffer;                                  // 0x03B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BodyJumpHeight;                                    // 0x03B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNPC;                                            // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasMovableStand;                                  // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAsMovableStand;                                   // 0x03BE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3BF[0x1];                                      // 0x03BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_AJBAICharacterSkillInfo            UltimateSkillInfo;                                 // 0x03C0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AAIController*                          MyAIController;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, float>              AttackRanges;                                      // 0x03E8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         AttackRangeDefault;                                // 0x0438(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitialized;                                      // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasHealingBase;                                   // 0x043D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E[0x2];                                      // 0x043E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBAIInGameCharacterHandle_C*       MyCharacterHandle;                                 // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  SpecialTags;                                       // 0x0448(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_AJBInGameAIImaginaryCharacter(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	bool IsAlive();
	bool EqualCharacter(class AActor* Actor);
	struct FST_AJBAICharacterSkillInfo GetNormalAttackSkillInfo();
	struct FST_AJBAICharacterSkillInfo GetSkillInfo(const struct FGameplayTag& SkillTag);
	struct FGameplayTag GetNormalAttackSkill();
	struct FVector GetLocation();
	struct FVector GetVelocityVector();
	struct FVector GetNormalizedVelocity();
	class AActor* GetRawBodyActor();
	float GetBodyRadius();
	bool IfCrouching();
	struct FVector GetForwardVector();
	bool IsJumping();
	float GetBodyHalfHeight();
	void InvalidateFromRecognition();
	bool HasSpeed();
	bool IsInDoor();
	float GetBodyJumpHeight();
	bool IsFalling();
	bool IsMovingOnGround();
	void IsNPC(bool* bIsNPC_0);
	float GetKneeHeight();
	struct FRotator GetRotation();
	bool HasMovableStand();
	void IsStandSeparating(bool* bSeparation);
	struct FVector GetMovableStandLocation();
	struct FRotator GetMovableStandRotation();
	struct FVector GetMovableStandForwardVector();
	class APawn* GetRawPawn();
	bool IsMovableStand();
	float GetMovableStandBodyHalfHeight();
	float GetMovableStandBodyRadius();
	struct FVector GetMovableStandUpVector();
	struct FVector GetUpVector();
	struct FVector GetHeadTopLocation();
	class AActor* GetRawMovableStandActor();
	bool IsInteracting();
	bool HasAccompanySkill();
	class UBP_AJBSkillBase_C* GetSkillComponentByTag(const struct FGameplayTag& SkillTag);
	struct FST_AJBAICharacterSkillInfo GetUltimateSkillInfo();
	struct FGameplayTag GetUltimateSkill();
	bool HasSeparateSkill();
	bool IsPair(class ABP_AJBInGameAIImaginaryCharacter_C* Other);
	class AAIController* GetAIControllerForNPC();
	bool IsCritical();
	bool IsStealth();
	struct FVector GetFootLocation();
	float GetAttackRangeOfSkill(const struct FGameplayTag& SkillTag, bool* Found);
	void ResetAttackRangeOfSkills(float AttackRangeMax);
	struct FVector GetBreastLocation();
	bool IsInitialized();
	bool HasHealingBase();
	int32 GetHPForPair();
	class UBP_AJBAIInGameCharacterHandle_C* GetCharacterHandle(const struct FGameplayTag& RequestTag);
	bool IsEmpty();
	bool HasSpecialTag(const struct FGameplayTag& Tag, bool bExactMatch);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameAIImaginaryCharacter_C">();
	}
	static class ABP_AJBInGameAIImaginaryCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameAIImaginaryCharacter_C>();
	}
};
static_assert(alignof(ABP_AJBInGameAIImaginaryCharacter_C) == 0x000008, "Wrong alignment on ABP_AJBInGameAIImaginaryCharacter_C");
static_assert(sizeof(ABP_AJBInGameAIImaginaryCharacter_C) == 0x000468, "Wrong size on ABP_AJBInGameAIImaginaryCharacter_C");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, UberGraphFrame) == 0x000328, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, DefaultSceneRoot) == 0x000330, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, MyCharacter) == 0x000338, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::MyCharacter' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, SkillInfos) == 0x000340, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::SkillInfos' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, NormalAttackSkillInfo) == 0x000390, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::NormalAttackSkillInfo' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, AttackRangeMaxParam) == 0x0003B0, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::AttackRangeMaxParam' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, BodyRadiusBuffer) == 0x0003B4, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::BodyRadiusBuffer' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, BodyJumpHeight) == 0x0003B8, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::BodyJumpHeight' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, bIsNPC) == 0x0003BC, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::bIsNPC' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, bHasMovableStand) == 0x0003BD, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::bHasMovableStand' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, bAsMovableStand) == 0x0003BE, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::bAsMovableStand' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, UltimateSkillInfo) == 0x0003C0, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::UltimateSkillInfo' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, MyAIController) == 0x0003E0, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::MyAIController' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, AttackRanges) == 0x0003E8, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::AttackRanges' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, AttackRangeDefault) == 0x000438, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::AttackRangeDefault' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, bInitialized) == 0x00043C, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::bInitialized' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, bHasHealingBase) == 0x00043D, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::bHasHealingBase' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, MyCharacterHandle) == 0x000440, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::MyCharacterHandle' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameAIImaginaryCharacter_C, SpecialTags) == 0x000448, "Member 'ABP_AJBInGameAIImaginaryCharacter_C::SpecialTags' has a wrong offset!");

}

