#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test1_BTD_TimeLimit

#include "Basic.hpp"


namespace SDK::Params
{

// Function test1_BTD_TimeLimit.test1_BTD_TimeLimit_C.ExecuteUbergraph_test1_BTD_TimeLimit
// 0x0038 (0x0038 - 0x0000)
struct Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController1;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn1;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ResetRemainingTime_RemainingTime;         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit) == 0x000008, "Wrong alignment on Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit");
static_assert(sizeof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit) == 0x000038, "Wrong size on Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, EntryPoint) == 0x000000, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::EntryPoint' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, K2Node_Event_OwnerController) == 0x000008, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, K2Node_Event_ControlledPawn) == 0x000010, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, K2Node_Event_OwnerController1) == 0x000018, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::K2Node_Event_OwnerController1' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, K2Node_Event_ControlledPawn1) == 0x000020, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::K2Node_Event_ControlledPawn1' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, CallFunc_ResetRemainingTime_RemainingTime) == 0x00002C, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::CallFunc_ResetRemainingTime_RemainingTime' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'Test1_BTD_TimeLimit_C_ExecuteUbergraph_test1_BTD_TimeLimit::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function test1_BTD_TimeLimit.test1_BTD_TimeLimit_C.ReceiveObserverActivatedAI
// 0x0010 (0x0010 - 0x0000)
struct Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI) == 0x000008, "Wrong alignment on Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI");
static_assert(sizeof(Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI) == 0x000010, "Wrong size on Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI, OwnerController) == 0x000000, "Member 'Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI, ControlledPawn) == 0x000008, "Member 'Test1_BTD_TimeLimit_C_ReceiveObserverActivatedAI::ControlledPawn' has a wrong offset!");

// Function test1_BTD_TimeLimit.test1_BTD_TimeLimit_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct Test1_BTD_TimeLimit_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Test1_BTD_TimeLimit_C_ReceiveTickAI) == 0x000008, "Wrong alignment on Test1_BTD_TimeLimit_C_ReceiveTickAI");
static_assert(sizeof(Test1_BTD_TimeLimit_C_ReceiveTickAI) == 0x000018, "Wrong size on Test1_BTD_TimeLimit_C_ReceiveTickAI");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'Test1_BTD_TimeLimit_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'Test1_BTD_TimeLimit_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'Test1_BTD_TimeLimit_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function test1_BTD_TimeLimit.test1_BTD_TimeLimit_C.PerformConditionCheckAI
// 0x0020 (0x0020 - 0x0000)
struct Test1_BTD_TimeLimit_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_ResetRemainingTime_RemainingTime;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ResetRemainingTime_RemainingTime1;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on Test1_BTD_TimeLimit_C_PerformConditionCheckAI");
static_assert(sizeof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI) == 0x000020, "Wrong size on Test1_BTD_TimeLimit_C_PerformConditionCheckAI");
static_assert(offsetof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'Test1_BTD_TimeLimit_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'Test1_BTD_TimeLimit_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'Test1_BTD_TimeLimit_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI, CallFunc_ResetRemainingTime_RemainingTime) == 0x000014, "Member 'Test1_BTD_TimeLimit_C_PerformConditionCheckAI::CallFunc_ResetRemainingTime_RemainingTime' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI, CallFunc_ResetRemainingTime_RemainingTime1) == 0x000018, "Member 'Test1_BTD_TimeLimit_C_PerformConditionCheckAI::CallFunc_ResetRemainingTime_RemainingTime1' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_PerformConditionCheckAI, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'Test1_BTD_TimeLimit_C_PerformConditionCheckAI::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function test1_BTD_TimeLimit.test1_BTD_TimeLimit_C.ResetRemainingTime
// 0x0014 (0x0014 - 0x0000)
struct Test1_BTD_TimeLimit_C_ResetRemainingTime final
{
public:
	float                                         RemainingTime_0;                                   // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Test1_BTD_TimeLimit_C_ResetRemainingTime) == 0x000004, "Wrong alignment on Test1_BTD_TimeLimit_C_ResetRemainingTime");
static_assert(sizeof(Test1_BTD_TimeLimit_C_ResetRemainingTime) == 0x000014, "Wrong size on Test1_BTD_TimeLimit_C_ResetRemainingTime");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ResetRemainingTime, RemainingTime_0) == 0x000000, "Member 'Test1_BTD_TimeLimit_C_ResetRemainingTime::RemainingTime_0' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ResetRemainingTime, CallFunc_Abs_ReturnValue) == 0x000004, "Member 'Test1_BTD_TimeLimit_C_ResetRemainingTime::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ResetRemainingTime, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'Test1_BTD_TimeLimit_C_ResetRemainingTime::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ResetRemainingTime, CallFunc_RandomFloatInRange_ReturnValue) == 0x00000C, "Member 'Test1_BTD_TimeLimit_C_ResetRemainingTime::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTD_TimeLimit_C_ResetRemainingTime, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'Test1_BTD_TimeLimit_C_ResetRemainingTime::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

