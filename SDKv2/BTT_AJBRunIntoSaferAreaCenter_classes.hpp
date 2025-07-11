#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBRunIntoSaferAreaCenter

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AJBRunIntoSaferAreaCenter.BTT_AJBRunIntoSaferAreaCenter_C
// 0x0070 (0x0110 - 0x00A0)
class UBTT_AJBRunIntoSaferAreaCenter_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 NextMovementPointKey;                              // 0x00A8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlackboardKeySelector                 IsArrivedKey;                                      // 0x00D0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bDebugDraw;                                        // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bToCheckPathNavigating;                            // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBAIPathController_C*              PathController;                                    // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          MyAIController;                                    // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_AJBRunIntoSaferAreaCenter(int32 EntryPoint);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	class UNavigationPath* GetRandomPathForSaferArea(class AAIController* AIController, float RatioOfRadius);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AJBRunIntoSaferAreaCenter_C">();
	}
	static class UBTT_AJBRunIntoSaferAreaCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AJBRunIntoSaferAreaCenter_C>();
	}
};
static_assert(alignof(UBTT_AJBRunIntoSaferAreaCenter_C) == 0x000008, "Wrong alignment on UBTT_AJBRunIntoSaferAreaCenter_C");
static_assert(sizeof(UBTT_AJBRunIntoSaferAreaCenter_C) == 0x000110, "Wrong size on UBTT_AJBRunIntoSaferAreaCenter_C");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, UberGraphFrame) == 0x0000A0, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, NextMovementPointKey) == 0x0000A8, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::NextMovementPointKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, IsArrivedKey) == 0x0000D0, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::IsArrivedKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, bDebugDraw) == 0x0000F8, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::bDebugDraw' has a wrong offset!");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, bToCheckPathNavigating) == 0x0000F9, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::bToCheckPathNavigating' has a wrong offset!");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, PathController) == 0x000100, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::PathController' has a wrong offset!");
static_assert(offsetof(UBTT_AJBRunIntoSaferAreaCenter_C, MyAIController) == 0x000108, "Member 'UBTT_AJBRunIntoSaferAreaCenter_C::MyAIController' has a wrong offset!");

}

