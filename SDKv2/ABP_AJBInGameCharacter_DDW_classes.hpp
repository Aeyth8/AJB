#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBInGameCharacter_DDW

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_AJBInGameCharacter_DDW.ABP_AJBInGameCharacter_DDW_C
// 0x0178 (0x04D0 - 0x0358)
class UABP_AJBInGameCharacter_DDW_C final : public UAnimInstance
{
public:
	uint8                                         Pad_358[0x8];                                      // 0x0358(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_5AC3E3504A4F2F917858F6A8275EF598; // 0x0368(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_8E90386B4191DFCBBE794F821DDBCC6C; // 0x03B0(0x0070)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8844FA72439DB322F4022A92D9BFF64F; // 0x0420(0x00B0)()

public:
	void ExecuteUbergraph_ABP_AJBInGameCharacter_DDW(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_AJBInGameCharacter_DDW_C">();
	}
	static class UABP_AJBInGameCharacter_DDW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_AJBInGameCharacter_DDW_C>();
	}
};
static_assert(alignof(UABP_AJBInGameCharacter_DDW_C) == 0x000008, "Wrong alignment on UABP_AJBInGameCharacter_DDW_C");
static_assert(sizeof(UABP_AJBInGameCharacter_DDW_C) == 0x0004D0, "Wrong size on UABP_AJBInGameCharacter_DDW_C");
static_assert(offsetof(UABP_AJBInGameCharacter_DDW_C, UberGraphFrame) == 0x000360, "Member 'UABP_AJBInGameCharacter_DDW_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameCharacter_DDW_C, AnimGraphNode_Root_5AC3E3504A4F2F917858F6A8275EF598) == 0x000368, "Member 'UABP_AJBInGameCharacter_DDW_C::AnimGraphNode_Root_5AC3E3504A4F2F917858F6A8275EF598' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameCharacter_DDW_C, AnimGraphNode_Slot_8E90386B4191DFCBBE794F821DDBCC6C) == 0x0003B0, "Member 'UABP_AJBInGameCharacter_DDW_C::AnimGraphNode_Slot_8E90386B4191DFCBBE794F821DDBCC6C' has a wrong offset!");
static_assert(offsetof(UABP_AJBInGameCharacter_DDW_C, AnimGraphNode_SequencePlayer_8844FA72439DB322F4022A92D9BFF64F) == 0x000420, "Member 'UABP_AJBInGameCharacter_DDW_C::AnimGraphNode_SequencePlayer_8844FA72439DB322F4022A92D9BFF64F' has a wrong offset!");

}

