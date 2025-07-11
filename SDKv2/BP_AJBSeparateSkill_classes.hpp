#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSeparateSkill

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_AJBSkillBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBSeparateSkill.BP_AJBSeparateSkill_C
// 0x0038 (0x0210 - 0x01D8)
class UBP_AJBSeparateSkill_C final : public UBP_AJBSkillBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBSeparateSkill_C;              // 0x01D8(0x0008)(Transient, DuplicateTransient)
	float                                         CameraChangeInTime;                                // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraChangeOutTime;                               // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AppearTime;                                        // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DisappearTime;                                     // 0x01EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PostProcessMaterial;                               // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PostProcessIndex;                                  // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rep_PrevRotation;                                  // 0x01FC(0x000C)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCompletedStandPossess;                            // 0x0208(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugPrintStateChanged_Local_;                    // 0x0209(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugPrintStateChanged_All_;                      // 0x020A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugPrintInputChanged_Local_;                    // 0x020B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCompletedCharacterPossess;                        // 0x020C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bReserveImmediateInactive;                         // 0x020D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBSeparateSkill(int32 EntryPoint);
	void OnDisconnected();
	void OnStandClientRestarted();
	void OnPawnClientRestarted();
	void OnCharacterClientRestarted();
	void UpdateMP(float DeltaSeconds);
	void ROS_CheckCancelFlinch();
	void StateEndCore();
	void MC_StateEnd();
	void ROS_StateEnd();
	void ROS_Possess();
	void MC_Possess();
	void StateBeginDisappearCore();
	void ROC_Possess();
	void MC_StateBegin_Disappear(bool bSkipOwningClient);
	void ROS_StateBegin_Disappear();
	void StateTick_Separate(float DeltaSeconds);
	void StateEnd();
	void StateBegin_Separate();
	void StateBegin_Disappear();
	void StateBegin_Appear();
	void StateTick_Disappear(float DeltaSeconds);
	void StateTick_Appear(float DeltaSeconds);
	void StateTick(float DeltaSeconds);
	void SetEnablePostProcess(bool IsEnable);
	void ReserveImeidiateInactive();
	void OnCancel();
	void ReceiveTick(float DeltaSeconds);
	void OnInactive();
	void OnActive();
	void InitializeVariables();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBSeparateSkill_C">();
	}
	static class UBP_AJBSeparateSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBSeparateSkill_C>();
	}
};
static_assert(alignof(UBP_AJBSeparateSkill_C) == 0x000008, "Wrong alignment on UBP_AJBSeparateSkill_C");
static_assert(sizeof(UBP_AJBSeparateSkill_C) == 0x000210, "Wrong size on UBP_AJBSeparateSkill_C");
static_assert(offsetof(UBP_AJBSeparateSkill_C, UberGraphFrame_BP_AJBSeparateSkill_C) == 0x0001D8, "Member 'UBP_AJBSeparateSkill_C::UberGraphFrame_BP_AJBSeparateSkill_C' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, CameraChangeInTime) == 0x0001E0, "Member 'UBP_AJBSeparateSkill_C::CameraChangeInTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, CameraChangeOutTime) == 0x0001E4, "Member 'UBP_AJBSeparateSkill_C::CameraChangeOutTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, AppearTime) == 0x0001E8, "Member 'UBP_AJBSeparateSkill_C::AppearTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, DisappearTime) == 0x0001EC, "Member 'UBP_AJBSeparateSkill_C::DisappearTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, PostProcessMaterial) == 0x0001F0, "Member 'UBP_AJBSeparateSkill_C::PostProcessMaterial' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, PostProcessIndex) == 0x0001F8, "Member 'UBP_AJBSeparateSkill_C::PostProcessIndex' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, Rep_PrevRotation) == 0x0001FC, "Member 'UBP_AJBSeparateSkill_C::Rep_PrevRotation' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, bCompletedStandPossess) == 0x000208, "Member 'UBP_AJBSeparateSkill_C::bCompletedStandPossess' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, bDebugPrintStateChanged_Local_) == 0x000209, "Member 'UBP_AJBSeparateSkill_C::bDebugPrintStateChanged_Local_' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, bDebugPrintStateChanged_All_) == 0x00020A, "Member 'UBP_AJBSeparateSkill_C::bDebugPrintStateChanged_All_' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, bDebugPrintInputChanged_Local_) == 0x00020B, "Member 'UBP_AJBSeparateSkill_C::bDebugPrintInputChanged_Local_' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, bCompletedCharacterPossess) == 0x00020C, "Member 'UBP_AJBSeparateSkill_C::bCompletedCharacterPossess' has a wrong offset!");
static_assert(offsetof(UBP_AJBSeparateSkill_C, bReserveImmediateInactive) == 0x00020D, "Member 'UBP_AJBSeparateSkill_C::bReserveImmediateInactive' has a wrong offset!");

}

