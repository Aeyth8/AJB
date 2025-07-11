#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AchievementTriggerSender_Character

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AchievementTriggerSender_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AchievementTriggerSender_Character.BP_AchievementTriggerSender_Character_C
// 0x03A8 (0x04A8 - 0x0100)
class UBP_AchievementTriggerSender_Character_C final : public UBP_AchievementTriggerSender_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AchievementTriggerSender_Character_C; // 0x0100(0x0008)(Transient, DuplicateTransient)
	struct FVector                                WorldLocation_LastDistanceCalculation;             // 0x0108(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoveDistanceMeter_Float;                           // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, int32>                            SerialMap_SkillCount_Effective_L1;                 // 0x0118(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_SkillCount_Effective_L2;                 // 0x0168(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_SkillCount_Effective_R1;                 // 0x01B8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_SkillCount_Effective_R2;                 // 0x0208(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_SkillCount_Effective_Support;            // 0x0258(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_KillCount_L1;                            // 0x02A8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_KillCount_L2;                            // 0x02F8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_KillCount_R1;                            // 0x0348(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_KillCount_R2;                            // 0x0398(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_KillCount_Support;                       // 0x03E8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, int32>                            SerialMap_KillCount_SkillInEffect_L1;              // 0x0438(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                 OwnerCharacterShortName;                           // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 InvalidShortName;                                  // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AchievementTriggerSender_Character(int32 EntryPoint);
	void UpdateMoveDistance();
	void OnPassiveAddedForAchievement(const struct FGameplayTag& CauserType, int32 SerialNumber);
	void CountEffectiveSkill(const struct FGameplayTag& SkillTag, int32 SerialNumber);
	void OnHitMultiple(EAJBSkillType SkillType, int32 HittedCharacterCount, int32 BlockedCharacterCount, int32 InvalidatedCharacterCount);
	void OnPairDie();
	void OnLastKill(const struct FGameplayTag& SkillTag);
	void OnDie(bool bWillRessurect, bool bIsLastDefeated, bool bDiedOfKillZ);
	void OnSkillEffectiveValueDetermined(const struct FGameplayTag& SkillTag, int32 EffectiveValue, bool bUpdateEvenIfNotInGameplay);
	void OnCutDamage(int32 CutDamage);
	void OnHidingTimeDetermined(float TimeSec);
	void OnSkillGiveHeadShot(const struct FGameplayTag& SkillTag);
	void OnSkillSucceeded(const struct FGameplayTag& SkillTag);
	void OnSkillEffectiveTimeDetermined(const struct FGameplayTag& SkillTag, float EffectiveTimeSec, bool bUpdateEvenIfNotInGameplay);
	void OnSkillConsumed(const struct FGameplayTag& SkillTag);
	void OnRescueSuccess();
	void OnWindowBroken(bool bBrokenByAttack);
	void OnJump();
	void OnCrouch();
	void OnReceiveDamage(int32 Damage, const struct FGameplayTag& DamageType, class AActor* DamageCauser, bool bRemainHP, bool bDamageIsCutByStatus, bool bDamageIsCutByAAP);
	void OnGetItem(const struct FGameplayTag& ItemTag);
	void OnKill(const struct FGameplayTag& SkillTag, int32 SerialNumber, float AttackDistance, uint8 KilledCharacterId, bool bWithSeparatedStandAttack, bool bHitEnemysSeparatedStand, bool bFirstBlood, int32 UltimateSkillSerialNumberIfInEffect, float ElapsedTime, int32 DeadPlayerID, bool bIsLastDefeated, bool bPlayerKill, bool bSpecialKill);
	void BindOwnerActorEvents();
	void OnGiveDamage(int32 Damage, const struct FGameplayTag& DamageType, class AActor* DamageReceiver, bool bRemainHP, bool bDamageIsCut, int32 SerialNumber, bool DamageReceiverIsPlayer, bool bWithSeparatedStandAttack, bool bEnemysSeparateStand);
	void OnOpenTheGame();
	void GetOwnerCharacterShortName(bool* Result, class FString* ShortName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AchievementTriggerSender_Character_C">();
	}
	static class UBP_AchievementTriggerSender_Character_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AchievementTriggerSender_Character_C>();
	}
};
static_assert(alignof(UBP_AchievementTriggerSender_Character_C) == 0x000008, "Wrong alignment on UBP_AchievementTriggerSender_Character_C");
static_assert(sizeof(UBP_AchievementTriggerSender_Character_C) == 0x0004A8, "Wrong size on UBP_AchievementTriggerSender_Character_C");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, UberGraphFrame_BP_AchievementTriggerSender_Character_C) == 0x000100, "Member 'UBP_AchievementTriggerSender_Character_C::UberGraphFrame_BP_AchievementTriggerSender_Character_C' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, WorldLocation_LastDistanceCalculation) == 0x000108, "Member 'UBP_AchievementTriggerSender_Character_C::WorldLocation_LastDistanceCalculation' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, MoveDistanceMeter_Float) == 0x000114, "Member 'UBP_AchievementTriggerSender_Character_C::MoveDistanceMeter_Float' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_SkillCount_Effective_L1) == 0x000118, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_SkillCount_Effective_L1' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_SkillCount_Effective_L2) == 0x000168, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_SkillCount_Effective_L2' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_SkillCount_Effective_R1) == 0x0001B8, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_SkillCount_Effective_R1' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_SkillCount_Effective_R2) == 0x000208, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_SkillCount_Effective_R2' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_SkillCount_Effective_Support) == 0x000258, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_SkillCount_Effective_Support' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_KillCount_L1) == 0x0002A8, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_KillCount_L1' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_KillCount_L2) == 0x0002F8, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_KillCount_L2' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_KillCount_R1) == 0x000348, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_KillCount_R1' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_KillCount_R2) == 0x000398, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_KillCount_R2' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_KillCount_Support) == 0x0003E8, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_KillCount_Support' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, SerialMap_KillCount_SkillInEffect_L1) == 0x000438, "Member 'UBP_AchievementTriggerSender_Character_C::SerialMap_KillCount_SkillInEffect_L1' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, OwnerCharacterShortName) == 0x000488, "Member 'UBP_AchievementTriggerSender_Character_C::OwnerCharacterShortName' has a wrong offset!");
static_assert(offsetof(UBP_AchievementTriggerSender_Character_C, InvalidShortName) == 0x000498, "Member 'UBP_AchievementTriggerSender_Character_C::InvalidShortName' has a wrong offset!");

}

