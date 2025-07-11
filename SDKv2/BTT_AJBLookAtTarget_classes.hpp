#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBLookAtTarget

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AJBLookAtTarget.BTT_AJBLookAtTarget_C
// 0x0070 (0x0110 - 0x00A0)
class UBTT_AJBLookAtTarget_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 RO_LookAtActorKey;                                 // 0x00A8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	float                                         YawThreshold;                                      // 0x00D0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameAIImaginaryCharacter_C*    ImaginaryCharacterSelf;                            // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LookAtTargetRawActor;                              // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 DestinationKey;                                    // 0x00E8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	void ExecuteUbergraph_BTT_AJBLookAtTarget(int32 EntryPoint);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AJBLookAtTarget_C">();
	}
	static class UBTT_AJBLookAtTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AJBLookAtTarget_C>();
	}
};
static_assert(alignof(UBTT_AJBLookAtTarget_C) == 0x000008, "Wrong alignment on UBTT_AJBLookAtTarget_C");
static_assert(sizeof(UBTT_AJBLookAtTarget_C) == 0x000110, "Wrong size on UBTT_AJBLookAtTarget_C");
static_assert(offsetof(UBTT_AJBLookAtTarget_C, UberGraphFrame) == 0x0000A0, "Member 'UBTT_AJBLookAtTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AJBLookAtTarget_C, RO_LookAtActorKey) == 0x0000A8, "Member 'UBTT_AJBLookAtTarget_C::RO_LookAtActorKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBLookAtTarget_C, YawThreshold) == 0x0000D0, "Member 'UBTT_AJBLookAtTarget_C::YawThreshold' has a wrong offset!");
static_assert(offsetof(UBTT_AJBLookAtTarget_C, ImaginaryCharacterSelf) == 0x0000D8, "Member 'UBTT_AJBLookAtTarget_C::ImaginaryCharacterSelf' has a wrong offset!");
static_assert(offsetof(UBTT_AJBLookAtTarget_C, LookAtTargetRawActor) == 0x0000E0, "Member 'UBTT_AJBLookAtTarget_C::LookAtTargetRawActor' has a wrong offset!");
static_assert(offsetof(UBTT_AJBLookAtTarget_C, DestinationKey) == 0x0000E8, "Member 'UBTT_AJBLookAtTarget_C::DestinationKey' has a wrong offset!");

}

