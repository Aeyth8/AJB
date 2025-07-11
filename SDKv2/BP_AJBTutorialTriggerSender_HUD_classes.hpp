#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBTutorialTriggerSender_HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBTutorialTriggerSender_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBTutorialTriggerSender_HUD.BP_AJBTutorialTriggerSender_HUD_C
// 0x0008 (0x0108 - 0x0100)
class UBP_AJBTutorialTriggerSender_HUD_C final : public UBP_AJBTutorialTriggerSender_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBTutorialTriggerSender_HUD_C;  // 0x0100(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AJBTutorialTriggerSender_HUD(int32 EntryPoint);
	void OnDisplayGion(const struct FGameplayTag& GionType, bool bIsOnScreen, bool bIsOwnerGion);
	void BindOwnerActorEvents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBTutorialTriggerSender_HUD_C">();
	}
	static class UBP_AJBTutorialTriggerSender_HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBTutorialTriggerSender_HUD_C>();
	}
};
static_assert(alignof(UBP_AJBTutorialTriggerSender_HUD_C) == 0x000008, "Wrong alignment on UBP_AJBTutorialTriggerSender_HUD_C");
static_assert(sizeof(UBP_AJBTutorialTriggerSender_HUD_C) == 0x000108, "Wrong size on UBP_AJBTutorialTriggerSender_HUD_C");
static_assert(offsetof(UBP_AJBTutorialTriggerSender_HUD_C, UberGraphFrame_BP_AJBTutorialTriggerSender_HUD_C) == 0x000100, "Member 'UBP_AJBTutorialTriggerSender_HUD_C::UberGraphFrame_BP_AJBTutorialTriggerSender_HUD_C' has a wrong offset!");

}

