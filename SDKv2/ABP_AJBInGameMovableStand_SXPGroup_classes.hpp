#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBInGameMovableStand_SXPGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_AJBInGameMovableStand_SXPGroup.ABP_AJBInGameMovableStand_SXPGroup_C
// 0x0178 (0x04D0 - 0x0358)
class UABP_AJBInGameMovableStand_SXPGroup_C final : public UAnimInstance
{
public:
	uint8                                         Pad_358[0x8];                                      // 0x0358(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_718CE05E4D93C4DAF0B90CBACA41E2AC; // 0x0368(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9152560F4DCC735317A2ADB3A38D3566; // 0x03B0(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9DDD62894908C928FD5A4D925DA3804C; // 0x0460(0x0070)()

public:
	void ExecuteUbergraph_ABP_AJBInGameMovableStand_SXPGroup(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_AJBInGameMovableStand_SXPGroup_C">();
	}
	static class UABP_AJBInGameMovableStand_SXPGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_AJBInGameMovableStand_SXPGroup_C>();
	}
};
static_assert(alignof(UABP_AJBInGameMovableStand_SXPGroup_C) == 0x000008, "Wrong alignment on UABP_AJBInGameMovableStand_SXPGroup_C");
static_assert(sizeof(UABP_AJBInGameMovableStand_SXPGroup_C) == 0x0004D0, "Wrong size on UABP_AJBInGameMovableStand_SXPGroup_C");
static_assert(offsetof(UABP_AJBInGameMovableStand_SXPGroup_C, UberGraphFrame) == 0x000360, "Member 'UABP_AJBInGameMovableStand_SXPGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameMovableStand_SXPGroup_C, AnimGraphNode_Root_718CE05E4D93C4DAF0B90CBACA41E2AC) == 0x000368, "Member 'UABP_AJBInGameMovableStand_SXPGroup_C::AnimGraphNode_Root_718CE05E4D93C4DAF0B90CBACA41E2AC' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameMovableStand_SXPGroup_C, AnimGraphNode_SequencePlayer_9152560F4DCC735317A2ADB3A38D3566) == 0x0003B0, "Member 'UABP_AJBInGameMovableStand_SXPGroup_C::AnimGraphNode_SequencePlayer_9152560F4DCC735317A2ADB3A38D3566' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameMovableStand_SXPGroup_C, AnimGraphNode_Slot_9DDD62894908C928FD5A4D925DA3804C) == 0x000460, "Member 'UABP_AJBInGameMovableStand_SXPGroup_C::AnimGraphNode_Slot_9DDD62894908C928FD5A4D925DA3804C' has a wrong offset!");

}

