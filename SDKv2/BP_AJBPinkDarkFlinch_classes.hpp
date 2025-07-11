#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBPinkDarkFlinch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBFlinchBase_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBPinkDarkFlinch.BP_AJBPinkDarkFlinch_C
// 0x0078 (0x0280 - 0x0208)
class UBP_AJBPinkDarkFlinch_C final : public UBP_AJBFlinchBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBPinkDarkFlinch_C;             // 0x0208(0x0008)(Transient, DuplicateTransient)
	TArray<class ABP_AJBInGameCharacter_C*>       CauserCharacterBP;                                 // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class ABP_AJBInGameCharacter_C*, class ABP_AJBInGameParticleEffect_C*> ParticleEffectFlinch;                              // 0x0220(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                           SuperiorityTag;                                    // 0x0270(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         FlinchCustomStencilValue;                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBPinkDarkFlinch(int32 EntryPoint);
	void SetFlinchCustomStencilValue();
	void SetDefaultCustomStencilValue();
	void TryRemoveParticle(class ABP_AJBInGameCharacter_C* CharacterBP);
	void PlaySE(class UObject* Causer);
	void MC_ActivePassive_(class UObject* Causer, const struct FGameplayTag& CauserType, int32 SerialNumber);
	void OnActionInactivate(bool bTriggeredByStand);
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBPinkDarkFlinch_C">();
	}
	static class UBP_AJBPinkDarkFlinch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBPinkDarkFlinch_C>();
	}
};
static_assert(alignof(UBP_AJBPinkDarkFlinch_C) == 0x000008, "Wrong alignment on UBP_AJBPinkDarkFlinch_C");
static_assert(sizeof(UBP_AJBPinkDarkFlinch_C) == 0x000280, "Wrong size on UBP_AJBPinkDarkFlinch_C");
static_assert(offsetof(UBP_AJBPinkDarkFlinch_C, UberGraphFrame_BP_AJBPinkDarkFlinch_C) == 0x000208, "Member 'UBP_AJBPinkDarkFlinch_C::UberGraphFrame_BP_AJBPinkDarkFlinch_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBPinkDarkFlinch_C, CauserCharacterBP) == 0x000210, "Member 'UBP_AJBPinkDarkFlinch_C::CauserCharacterBP' has a wrong offset!");
static_assert(offsetof(UBP_AJBPinkDarkFlinch_C, ParticleEffectFlinch) == 0x000220, "Member 'UBP_AJBPinkDarkFlinch_C::ParticleEffectFlinch' has a wrong offset!");
static_assert(offsetof(UBP_AJBPinkDarkFlinch_C, SuperiorityTag) == 0x000270, "Member 'UBP_AJBPinkDarkFlinch_C::SuperiorityTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBPinkDarkFlinch_C, FlinchCustomStencilValue) == 0x000278, "Member 'UBP_AJBPinkDarkFlinch_C::FlinchCustomStencilValue' has a wrong offset!");

}

