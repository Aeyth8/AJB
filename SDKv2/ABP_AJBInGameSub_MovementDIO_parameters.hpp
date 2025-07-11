#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBInGameSub_MovementDIO

#include "Basic.hpp"


namespace SDK::Params
{

// Function ABP_AJBInGameSub_MovementDIO.ABP_AJBInGameSub_MovementDIO_C.ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO
// 0x0028 (0x0028 - 0x0000)
struct ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBVampireHealingSkill_C*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkillActive_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO) == 0x000008, "Wrong alignment on ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO");
static_assert(sizeof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO) == 0x000028, "Wrong size on ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, EntryPoint) == 0x000000, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, CallFunc_IsSkillActive_ReturnValue) == 0x000020, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::CallFunc_IsSkillActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO, CallFunc_IsValid_ReturnValue1) == 0x000021, "Member 'ABP_AJBInGameSub_MovementDIO_C_ExecuteUbergraph_ABP_AJBInGameSub_MovementDIO::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function ABP_AJBInGameSub_MovementDIO.ABP_AJBInGameSub_MovementDIO_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_AJBInGameSub_MovementDIO_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

}

