#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBInGameStand_ECH03

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_AJBInGameStand_ECH03.ABP_AJBInGameStand_ECH03_C
// 0x02A0 (0x05F8 - 0x0358)
class UABP_AJBInGameStand_ECH03_C final : public UAnimInstance
{
public:
	uint8                                         Pad_358[0x8];                                      // 0x0358(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_0345CC8642EF0D3303973A891417DBFA; // 0x0368(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7D52FD054C3E041ADB32269E4E9094F6; // 0x03B0(0x0070)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_C777B396497E1BAD9FB132956DA8843D; // 0x0420(0x00B0)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_3DE1AD974216ABF94CC0F98B8A5910F7; // 0x04D0(0x0048)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_6B1A7BF742A0410D8E4D529B6BA1F205; // 0x0518(0x00E0)()

public:
	void ExecuteUbergraph_ABP_AJBInGameStand_ECH03(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_AJBInGameStand_ECH03_C">();
	}
	static class UABP_AJBInGameStand_ECH03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_AJBInGameStand_ECH03_C>();
	}
};
static_assert(alignof(UABP_AJBInGameStand_ECH03_C) == 0x000008, "Wrong alignment on UABP_AJBInGameStand_ECH03_C");
static_assert(sizeof(UABP_AJBInGameStand_ECH03_C) == 0x0005F8, "Wrong size on UABP_AJBInGameStand_ECH03_C");
static_assert(offsetof(UABP_AJBInGameStand_ECH03_C, UberGraphFrame) == 0x000360, "Member 'UABP_AJBInGameStand_ECH03_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameStand_ECH03_C, AnimGraphNode_Root_0345CC8642EF0D3303973A891417DBFA) == 0x000368, "Member 'UABP_AJBInGameStand_ECH03_C::AnimGraphNode_Root_0345CC8642EF0D3303973A891417DBFA' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameStand_ECH03_C, AnimGraphNode_Slot_7D52FD054C3E041ADB32269E4E9094F6) == 0x0003B0, "Member 'UABP_AJBInGameStand_ECH03_C::AnimGraphNode_Slot_7D52FD054C3E041ADB32269E4E9094F6' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameStand_ECH03_C, AnimGraphNode_SequencePlayer_C777B396497E1BAD9FB132956DA8843D) == 0x000420, "Member 'UABP_AJBInGameStand_ECH03_C::AnimGraphNode_SequencePlayer_C777B396497E1BAD9FB132956DA8843D' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameStand_ECH03_C, AnimGraphNode_StateResult_3DE1AD974216ABF94CC0F98B8A5910F7) == 0x0004D0, "Member 'UABP_AJBInGameStand_ECH03_C::AnimGraphNode_StateResult_3DE1AD974216ABF94CC0F98B8A5910F7' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameStand_ECH03_C, AnimGraphNode_StateMachine_6B1A7BF742A0410D8E4D529B6BA1F205) == 0x000518, "Member 'UABP_AJBInGameStand_ECH03_C::AnimGraphNode_StateMachine_6B1A7BF742A0410D8E4D529B6BA1F205' has a wrong offset!");

}

