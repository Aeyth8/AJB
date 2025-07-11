#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBPistolsStrikeSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBPistolsMoveSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBPistolsStrikeSkill.BP_AJBPistolsStrikeSkill_C
// 0x0008 (0x0348 - 0x0340)
class UBP_AJBPistolsStrikeSkill_C final : public UBP_AJBPistolsMoveSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBPistolsStrikeSkill_C;         // 0x0340(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AJBPistolsStrikeSkill(int32 EntryPoint);
	void OnGiveDamage(int32 Damage_0, const struct FGameplayTag& DamageType, class AActor* DamageReceiver, bool bRemainHP, bool bDamageIsCut, int32 SerialNumber_0, bool DamageReceiverIsPlayer, bool bWithSeparatedStandAttack, bool bEnemysSeparateStand);
	void BindCharacterDispatcher(class ABP_AJBInGameCharacter_C* CharacterBP);
	void OnCancel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBPistolsStrikeSkill_C">();
	}
	static class UBP_AJBPistolsStrikeSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBPistolsStrikeSkill_C>();
	}
};
static_assert(alignof(UBP_AJBPistolsStrikeSkill_C) == 0x000008, "Wrong alignment on UBP_AJBPistolsStrikeSkill_C");
static_assert(sizeof(UBP_AJBPistolsStrikeSkill_C) == 0x000348, "Wrong size on UBP_AJBPistolsStrikeSkill_C");
static_assert(offsetof(UBP_AJBPistolsStrikeSkill_C, UberGraphFrame_BP_AJBPistolsStrikeSkill_C) == 0x000340, "Member 'UBP_AJBPistolsStrikeSkill_C::UberGraphFrame_BP_AJBPistolsStrikeSkill_C' has a wrong offset!");

}

