#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBPinkDarkSuperiority

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBPassiveSkillBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBPinkDarkSuperiority.BP_AJBPinkDarkSuperiority_C
// 0x0010 (0x0200 - 0x01F0)
class UBP_AJBPinkDarkSuperiority_C final : public UBP_AJBPassiveSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBPinkDarkSuperiority_C;        // 0x01F0(0x0008)(Transient, DuplicateTransient)
	class ABP_AJBInGameCharacter_C*               CauserCharacterBP;                                 // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AJBPinkDarkSuperiority(int32 EntryPoint);
	void ROC_ActivePassive(class UObject* Causer);
	void ChangeCustomDepthStencilValue(int32 NewValue);
	void ActivePassive(class UObject* Causer, bool bTriggeredByStand, const struct FGameplayTag& CauserType, int32 SerialNumber);
	void OnActionInactivate(bool bTriggeredByStand);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBPinkDarkSuperiority_C">();
	}
	static class UBP_AJBPinkDarkSuperiority_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBPinkDarkSuperiority_C>();
	}
};
static_assert(alignof(UBP_AJBPinkDarkSuperiority_C) == 0x000008, "Wrong alignment on UBP_AJBPinkDarkSuperiority_C");
static_assert(sizeof(UBP_AJBPinkDarkSuperiority_C) == 0x000200, "Wrong size on UBP_AJBPinkDarkSuperiority_C");
static_assert(offsetof(UBP_AJBPinkDarkSuperiority_C, UberGraphFrame_BP_AJBPinkDarkSuperiority_C) == 0x0001F0, "Member 'UBP_AJBPinkDarkSuperiority_C::UberGraphFrame_BP_AJBPinkDarkSuperiority_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBPinkDarkSuperiority_C, CauserCharacterBP) == 0x0001F8, "Member 'UBP_AJBPinkDarkSuperiority_C::CauserCharacterBP' has a wrong offset!");

}

