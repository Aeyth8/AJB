#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBStoneHookJump

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AJBPassiveSkillBase_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBStoneHookJump.BP_AJBStoneHookJump_C
// 0x0030 (0x0220 - 0x01F0)
class UBP_AJBStoneHookJump_C final : public UBP_AJBPassiveSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBStoneHookJump_C;              // 0x01F0(0x0008)(Transient, DuplicateTransient)
	bool                                          bIsJumping;                                        // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugPrintActive;                                 // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FA[0x6];                                      // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     PostProcessMaterial;                               // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PostProcessIndex;                                  // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastVelocity;                                      // 0x020C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsReLaunch;                                       // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBStoneHookJump(int32 EntryPoint);
	void OnSetViewTargetToNewSpectator_Event();
	void ROS_ResetVelocity();
	void CheckPassiveContainer(const struct FGameplayTagContainer& PassiveGameplayTagContainer);
	void OnPassiveAdded(const struct FGameplayTag& AddCondition);
	void CheckPassive(const struct FGameplayTag& PassiveTag_0);
	void CheckJumpState();
	void ROS_ReLaunch(const struct FVector& LastLaunchVelocity, const struct FTransform& Transform);
	void SetEnablePostProcess(bool IsEnable);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnActionInactivate(bool bTriggeredByStand);
	void OnActionActivate(bool bTriggeredByStand);
	void NotifyTheWorld(class AAJBInGameCharacter* Operator, float Time, EGeneralTiming Timing, bool bEnable, bool bOperatorIsEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBStoneHookJump_C">();
	}
	static class UBP_AJBStoneHookJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBStoneHookJump_C>();
	}
};
static_assert(alignof(UBP_AJBStoneHookJump_C) == 0x000008, "Wrong alignment on UBP_AJBStoneHookJump_C");
static_assert(sizeof(UBP_AJBStoneHookJump_C) == 0x000220, "Wrong size on UBP_AJBStoneHookJump_C");
static_assert(offsetof(UBP_AJBStoneHookJump_C, UberGraphFrame_BP_AJBStoneHookJump_C) == 0x0001F0, "Member 'UBP_AJBStoneHookJump_C::UberGraphFrame_BP_AJBStoneHookJump_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBStoneHookJump_C, bIsJumping) == 0x0001F8, "Member 'UBP_AJBStoneHookJump_C::bIsJumping' has a wrong offset!");
static_assert(offsetof(UBP_AJBStoneHookJump_C, bDebugPrintActive) == 0x0001F9, "Member 'UBP_AJBStoneHookJump_C::bDebugPrintActive' has a wrong offset!");
static_assert(offsetof(UBP_AJBStoneHookJump_C, PostProcessMaterial) == 0x000200, "Member 'UBP_AJBStoneHookJump_C::PostProcessMaterial' has a wrong offset!");
static_assert(offsetof(UBP_AJBStoneHookJump_C, PostProcessIndex) == 0x000208, "Member 'UBP_AJBStoneHookJump_C::PostProcessIndex' has a wrong offset!");
static_assert(offsetof(UBP_AJBStoneHookJump_C, LastVelocity) == 0x00020C, "Member 'UBP_AJBStoneHookJump_C::LastVelocity' has a wrong offset!");
static_assert(offsetof(UBP_AJBStoneHookJump_C, bIsReLaunch) == 0x000218, "Member 'UBP_AJBStoneHookJump_C::bIsReLaunch' has a wrong offset!");

}

