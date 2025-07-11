#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBDamageAreaContext

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.OnIntervalSetupCompleted__DelegateSignature
// 0x0014 (0x0014 - 0x0000)
struct BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature final
{
public:
	float                                         BaseRadius;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BaseLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableReduction;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature) == 0x000004, "Wrong alignment on BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature");
static_assert(sizeof(BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature) == 0x000014, "Wrong size on BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature");
static_assert(offsetof(BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature, BaseRadius) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature::BaseRadius' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature, BaseLocation) == 0x000004, "Member 'BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature::BaseLocation' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature, DisableReduction) == 0x000010, "Member 'BP_AJBDamageAreaContext_C_OnIntervalSetupCompleted__DelegateSignature::DisableReduction' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.OnRestart__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature final
{
public:
	float                                         BaseRadius;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BaseLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature) == 0x000004, "Wrong alignment on BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature");
static_assert(sizeof(BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature) == 0x000010, "Wrong size on BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature");
static_assert(offsetof(BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature, BaseRadius) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature::BaseRadius' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature, BaseLocation) == 0x000004, "Member 'BP_AJBDamageAreaContext_C_OnRestart__DelegateSignature::BaseLocation' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.ExecuteUbergraph_BP_AJBDamageAreaContext
// 0x0038 (0x0038 - 0x0000)
struct BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_BaseRadius1;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_BaseLocation1;                  // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_DoesNotReduction;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_BaseRadius;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_BaseLocation;                   // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_GetTimespanFromBattleStart_ReturnValue;   // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext) == 0x000008, "Wrong alignment on BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext");
static_assert(sizeof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext) == 0x000038, "Wrong size on BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, EntryPoint) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, K2Node_CustomEvent_BaseRadius1) == 0x000004, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::K2Node_CustomEvent_BaseRadius1' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, K2Node_CustomEvent_BaseLocation1) == 0x000008, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::K2Node_CustomEvent_BaseLocation1' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, K2Node_CustomEvent_DoesNotReduction) == 0x000014, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::K2Node_CustomEvent_DoesNotReduction' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, K2Node_CustomEvent_BaseRadius) == 0x00001C, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::K2Node_CustomEvent_BaseRadius' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, K2Node_CustomEvent_BaseLocation) == 0x000020, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::K2Node_CustomEvent_BaseLocation' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext, CallFunc_GetTimespanFromBattleStart_ReturnValue) == 0x000030, "Member 'BP_AJBDamageAreaContext_C_ExecuteUbergraph_BP_AJBDamageAreaContext::CallFunc_GetTimespanFromBattleStart_ReturnValue' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.MC_Restart
// 0x0010 (0x0010 - 0x0000)
struct BP_AJBDamageAreaContext_C_MC_Restart final
{
public:
	float                                         BaseRadius;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BaseLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_MC_Restart) == 0x000004, "Wrong alignment on BP_AJBDamageAreaContext_C_MC_Restart");
static_assert(sizeof(BP_AJBDamageAreaContext_C_MC_Restart) == 0x000010, "Wrong size on BP_AJBDamageAreaContext_C_MC_Restart");
static_assert(offsetof(BP_AJBDamageAreaContext_C_MC_Restart, BaseRadius) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_MC_Restart::BaseRadius' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_MC_Restart, BaseLocation) == 0x000004, "Member 'BP_AJBDamageAreaContext_C_MC_Restart::BaseLocation' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AJBDamageAreaContext_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AJBDamageAreaContext_C_ReceiveTick");
static_assert(sizeof(BP_AJBDamageAreaContext_C_ReceiveTick) == 0x000004, "Wrong size on BP_AJBDamageAreaContext_C_ReceiveTick");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.MC_IntervalSetupCompleted
// 0x0014 (0x0014 - 0x0000)
struct BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted final
{
public:
	float                                         BaseRadius;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BaseLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoesNotReduction;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted) == 0x000004, "Wrong alignment on BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted");
static_assert(sizeof(BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted) == 0x000014, "Wrong size on BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted");
static_assert(offsetof(BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted, BaseRadius) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted::BaseRadius' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted, BaseLocation) == 0x000004, "Member 'BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted::BaseLocation' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted, DoesNotReduction) == 0x000010, "Member 'BP_AJBDamageAreaContext_C_MC_IntervalSetupCompleted::DoesNotReduction' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.ReductionStarted
// 0x0020 (0x0020 - 0x0000)
struct BP_AJBDamageAreaContext_C_ReductionStarted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_GetTimespanFromBattleStart_ReturnValue;   // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_ReductionStarted) == 0x000008, "Wrong alignment on BP_AJBDamageAreaContext_C_ReductionStarted");
static_assert(sizeof(BP_AJBDamageAreaContext_C_ReductionStarted) == 0x000020, "Wrong size on BP_AJBDamageAreaContext_C_ReductionStarted");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionStarted, ReturnValue) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_ReductionStarted::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionStarted, CallFunc_GetTimespanFromBattleStart_ReturnValue) == 0x000008, "Member 'BP_AJBDamageAreaContext_C_ReductionStarted::CallFunc_GetTimespanFromBattleStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionStarted, CallFunc_GetTotalSeconds_ReturnValue) == 0x000010, "Member 'BP_AJBDamageAreaContext_C_ReductionStarted::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionStarted, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'BP_AJBDamageAreaContext_C_ReductionStarted::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionStarted, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_AJBDamageAreaContext_C_ReductionStarted::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionStarted, CallFunc_Less_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_AJBDamageAreaContext_C_ReductionStarted::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.GetTimespanFromBattleStart
// 0x0048 (0x0048 - 0x0000)
struct BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAJBInGameGameState_bIsValid;           // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBInGameGameState*                    CallFunc_GetAJBInGameGameState_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_GetElapsedInGameTimespan_ReturnValue;     // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue1;                 // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_TimespanTimespan_ReturnValue;    // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_Select_Default;                             // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_Select1_Default;                            // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart) == 0x000008, "Wrong alignment on BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart");
static_assert(sizeof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart) == 0x000048, "Wrong size on BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, ReturnValue) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, Temp_bool_Variable) == 0x000008, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, Temp_bool_Variable1) == 0x000009, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, CallFunc_GetAJBInGameGameState_bIsValid) == 0x00000A, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::CallFunc_GetAJBInGameGameState_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, CallFunc_GetAJBInGameGameState_ReturnValue) == 0x000010, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::CallFunc_GetAJBInGameGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, CallFunc_GetElapsedInGameTimespan_ReturnValue) == 0x000018, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::CallFunc_GetElapsedInGameTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, CallFunc_FromSeconds_ReturnValue) == 0x000020, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, CallFunc_FromSeconds_ReturnValue1) == 0x000028, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::CallFunc_FromSeconds_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, CallFunc_Subtract_TimespanTimespan_ReturnValue) == 0x000030, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::CallFunc_Subtract_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, K2Node_Select_Default) == 0x000038, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart, K2Node_Select1_Default) == 0x000040, "Member 'BP_AJBDamageAreaContext_C_GetTimespanFromBattleStart::K2Node_Select1_Default' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.ReductionCompleted
// 0x0020 (0x0020 - 0x0000)
struct BP_AJBDamageAreaContext_C_ReductionCompleted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_GetTimespanFromBattleStart_ReturnValue;   // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_ReductionCompleted) == 0x000008, "Wrong alignment on BP_AJBDamageAreaContext_C_ReductionCompleted");
static_assert(sizeof(BP_AJBDamageAreaContext_C_ReductionCompleted) == 0x000020, "Wrong size on BP_AJBDamageAreaContext_C_ReductionCompleted");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionCompleted, ReturnValue) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_ReductionCompleted::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionCompleted, CallFunc_GetTimespanFromBattleStart_ReturnValue) == 0x000008, "Member 'BP_AJBDamageAreaContext_C_ReductionCompleted::CallFunc_GetTimespanFromBattleStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionCompleted, CallFunc_GetTotalSeconds_ReturnValue) == 0x000010, "Member 'BP_AJBDamageAreaContext_C_ReductionCompleted::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionCompleted, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'BP_AJBDamageAreaContext_C_ReductionCompleted::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionCompleted, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_AJBDamageAreaContext_C_ReductionCompleted::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionCompleted, CallFunc_Less_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_AJBDamageAreaContext_C_ReductionCompleted::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_AJBDamageAreaContext.BP_AJBDamageAreaContext_C.ReductionPreAnnounced
// 0x0020 (0x0020 - 0x0000)
struct BP_AJBDamageAreaContext_C_ReductionPreAnnounced final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_GetTimespanFromBattleStart_ReturnValue;   // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced) == 0x000008, "Wrong alignment on BP_AJBDamageAreaContext_C_ReductionPreAnnounced");
static_assert(sizeof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced) == 0x000020, "Wrong size on BP_AJBDamageAreaContext_C_ReductionPreAnnounced");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced, ReturnValue) == 0x000000, "Member 'BP_AJBDamageAreaContext_C_ReductionPreAnnounced::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced, CallFunc_GetTimespanFromBattleStart_ReturnValue) == 0x000008, "Member 'BP_AJBDamageAreaContext_C_ReductionPreAnnounced::CallFunc_GetTimespanFromBattleStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced, CallFunc_GetTotalSeconds_ReturnValue) == 0x000010, "Member 'BP_AJBDamageAreaContext_C_ReductionPreAnnounced::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'BP_AJBDamageAreaContext_C_ReductionPreAnnounced::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_AJBDamageAreaContext_C_ReductionPreAnnounced::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBDamageAreaContext_C_ReductionPreAnnounced, CallFunc_Less_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_AJBDamageAreaContext_C_ReductionPreAnnounced::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

