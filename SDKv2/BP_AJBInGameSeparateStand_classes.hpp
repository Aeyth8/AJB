#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameSeparateStand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "BP_AJBInGameMovableStand_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameSeparateStand.BP_AJBInGameSeparateStand_C
// 0x0060 (0x0F80 - 0x0F20)
class ABP_AJBInGameSeparateStand_C final : public ABP_AJBInGameMovableStand_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AJBInGameSeparateStand_C;        // 0x0F20(0x0008)(Transient, DuplicateTransient)
	float                                         GravityRate;                                       // 0x0F28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESeparateStandInputType                       InputType;                                         // 0x0F2C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2D[0x3];                                      // 0x0F2D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GravityRateOnReceiveGravityLoad;                   // 0x0F30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESeparateStandFlyingState                     SeparateFlyingState;                               // 0x0F34(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESeparateStandFlyingState                     _ForSkipOwner_SeparateFlyingState;                 // 0x0F35(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F36[0x2];                                      // 0x0F36(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnSeparateMaxSpeedChanged;                         // 0x0F38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESeparateStandMovementType                    SeparateMovementType;                              // 0x0F48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F49[0x3];                                      // 0x0F49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AccelThreshould;                                   // 0x0F4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_SpeedDst;                                      // 0x0F50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DMIParam_IntencityName;                            // 0x0F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MT_SpeedDst;                                       // 0x0F60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PPMaterialIndex;                                   // 0x0F68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntencityDefault;                                  // 0x0F6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntencityOnAccel;                                  // 0x0F70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntencityOnDeaccel;                                // 0x0F74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxGravityRate;                                    // 0x0F78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSeparateMaxSpeedChanged__DelegateSignature(ESeparateStandFlyingState SeparateFlyingState_0);
	void ExecuteUbergraph_BP_AJBInGameSeparateStand(int32 EntryPoint);
	void StopSpecialBreakDownAnimation();
	void PlaySpecialBreakDownAnimation();
	void OnCharacterActiveBehaviorChanged(class AAJBInGameCharacter* TargetCharacter, ECharacterActiveBehavior OldBehavior, ECharacterActiveBehavior NextBehavior, bool bSpecialBreakDown);
	void ROS_ChangeSeparateFlyingState(ESeparateStandFlyingState NewState);
	void ChangeSeparateFlyingState(ESeparateStandFlyingState NewState);
	void OnAccompany();
	void EndSpecialBreakDown();
	void StartSpecialBreakDown();
	void OnReleasedR1();
	void OnPressedR1();
	void OnReleasedR2();
	void OnPressedR2();
	void OnReleasedL1();
	void OnPressedL1();
	void OnReleasedL2();
	void OnPressedL2();
	void DebugTick();
	void OnCompleted_BB2764CB4B4D868CA76405BD4FA20046(class FName NotifyName);
	void OnBlendOut_BB2764CB4B4D868CA76405BD4FA20046(class FName NotifyName);
	void OnInterrupted_BB2764CB4B4D868CA76405BD4FA20046(class FName NotifyName);
	void OnNotifyBegin_BB2764CB4B4D868CA76405BD4FA20046(class FName NotifyName);
	void OnNotifyEnd_BB2764CB4B4D868CA76405BD4FA20046(class FName NotifyName);
	bool CheckGravityLoadReceived();
	void OnRep__ForSkipOwner_SeparateFlyingState();
	void OnChangeSeparateFlyingState(ESeparateStandFlyingState NewState);
	void MovableStandSetup();
	void OnDisappear();
	void OnAppear();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void UpdateTransparence(float CurrentRate);
	void GetCollisionProfileName(class FName* ProfileName);
	void UpdateMovementForwardInput(float Value, struct FVector* WorldDirection, float* ScaleValue);
	void CheckChangeableSpeed(bool* bChangeable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameSeparateStand_C">();
	}
	static class ABP_AJBInGameSeparateStand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameSeparateStand_C>();
	}
};
static_assert(alignof(ABP_AJBInGameSeparateStand_C) == 0x000010, "Wrong alignment on ABP_AJBInGameSeparateStand_C");
static_assert(sizeof(ABP_AJBInGameSeparateStand_C) == 0x000F80, "Wrong size on ABP_AJBInGameSeparateStand_C");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, UberGraphFrame_BP_AJBInGameSeparateStand_C) == 0x000F20, "Member 'ABP_AJBInGameSeparateStand_C::UberGraphFrame_BP_AJBInGameSeparateStand_C' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, GravityRate) == 0x000F28, "Member 'ABP_AJBInGameSeparateStand_C::GravityRate' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, InputType) == 0x000F2C, "Member 'ABP_AJBInGameSeparateStand_C::InputType' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, GravityRateOnReceiveGravityLoad) == 0x000F30, "Member 'ABP_AJBInGameSeparateStand_C::GravityRateOnReceiveGravityLoad' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, SeparateFlyingState) == 0x000F34, "Member 'ABP_AJBInGameSeparateStand_C::SeparateFlyingState' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, _ForSkipOwner_SeparateFlyingState) == 0x000F35, "Member 'ABP_AJBInGameSeparateStand_C::_ForSkipOwner_SeparateFlyingState' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, OnSeparateMaxSpeedChanged) == 0x000F38, "Member 'ABP_AJBInGameSeparateStand_C::OnSeparateMaxSpeedChanged' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, SeparateMovementType) == 0x000F48, "Member 'ABP_AJBInGameSeparateStand_C::SeparateMovementType' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, AccelThreshould) == 0x000F4C, "Member 'ABP_AJBInGameSeparateStand_C::AccelThreshould' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, DMI_SpeedDst) == 0x000F50, "Member 'ABP_AJBInGameSeparateStand_C::DMI_SpeedDst' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, DMIParam_IntencityName) == 0x000F58, "Member 'ABP_AJBInGameSeparateStand_C::DMIParam_IntencityName' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, MT_SpeedDst) == 0x000F60, "Member 'ABP_AJBInGameSeparateStand_C::MT_SpeedDst' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, PPMaterialIndex) == 0x000F68, "Member 'ABP_AJBInGameSeparateStand_C::PPMaterialIndex' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, IntencityDefault) == 0x000F6C, "Member 'ABP_AJBInGameSeparateStand_C::IntencityDefault' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, IntencityOnAccel) == 0x000F70, "Member 'ABP_AJBInGameSeparateStand_C::IntencityOnAccel' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, IntencityOnDeaccel) == 0x000F74, "Member 'ABP_AJBInGameSeparateStand_C::IntencityOnDeaccel' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSeparateStand_C, MaxGravityRate) == 0x000F78, "Member 'ABP_AJBInGameSeparateStand_C::MaxGravityRate' has a wrong offset!");

}

