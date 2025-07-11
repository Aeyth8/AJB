#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_AJBExecutionNotifier

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BTD_AJBExecutionNotifier.BTD_AJBExecutionNotifier_C.OnExecutionStartAI__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature) == 0x000008, "Wrong alignment on BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature");
static_assert(sizeof(BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature) == 0x000010, "Wrong size on BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature, OwnerController) == 0x000000, "Member 'BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature, ControlledPawn) == 0x000008, "Member 'BTD_AJBExecutionNotifier_C_OnExecutionStartAI__DelegateSignature::ControlledPawn' has a wrong offset!");

// Function BTD_AJBExecutionNotifier.BTD_AJBExecutionNotifier_C.OnExecutionFinishAI__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBTNodeResult                                 NodeResult;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature) == 0x000008, "Wrong alignment on BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature");
static_assert(sizeof(BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature) == 0x000018, "Wrong size on BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature, OwnerController) == 0x000000, "Member 'BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature, ControlledPawn) == 0x000008, "Member 'BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature, NodeResult) == 0x000010, "Member 'BTD_AJBExecutionNotifier_C_OnExecutionFinishAI__DelegateSignature::NodeResult' has a wrong offset!");

// Function BTD_AJBExecutionNotifier.BTD_AJBExecutionNotifier_C.ExecuteUbergraph_BTD_AJBExecutionNotifier
// 0x0040 (0x0040 - 0x0000)
struct BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UBTD_AJBExecutionNotifier_C*      Temp_object_Variable;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController1;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn1;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBTNodeResult                                 K2Node_Event_NodeResult;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBAIBTExtension_C*                 CallFunc_GetBTExtension_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier) == 0x000008, "Wrong alignment on BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier");
static_assert(sizeof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier) == 0x000040, "Wrong size on BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, EntryPoint) == 0x000000, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, Temp_object_Variable) == 0x000008, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, K2Node_Event_OwnerController1) == 0x000010, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::K2Node_Event_OwnerController1' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, K2Node_Event_ControlledPawn1) == 0x000018, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::K2Node_Event_ControlledPawn1' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, K2Node_Event_OwnerController) == 0x000020, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, K2Node_Event_ControlledPawn) == 0x000028, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, K2Node_Event_NodeResult) == 0x000030, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::K2Node_Event_NodeResult' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier, CallFunc_GetBTExtension_ReturnValue) == 0x000038, "Member 'BTD_AJBExecutionNotifier_C_ExecuteUbergraph_BTD_AJBExecutionNotifier::CallFunc_GetBTExtension_ReturnValue' has a wrong offset!");

// Function BTD_AJBExecutionNotifier.BTD_AJBExecutionNotifier_C.ReceiveExecutionFinishAI
// 0x0018 (0x0018 - 0x0000)
struct BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBTNodeResult                                 NodeResult;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI) == 0x000008, "Wrong alignment on BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI");
static_assert(sizeof(BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI) == 0x000018, "Wrong size on BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI, OwnerController) == 0x000000, "Member 'BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI, ControlledPawn) == 0x000008, "Member 'BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI, NodeResult) == 0x000010, "Member 'BTD_AJBExecutionNotifier_C_ReceiveExecutionFinishAI::NodeResult' has a wrong offset!");

// Function BTD_AJBExecutionNotifier.BTD_AJBExecutionNotifier_C.ReceiveExecutionStartAI
// 0x0010 (0x0010 - 0x0000)
struct BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI) == 0x000008, "Wrong alignment on BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI");
static_assert(sizeof(BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI) == 0x000010, "Wrong size on BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI, OwnerController) == 0x000000, "Member 'BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI, ControlledPawn) == 0x000008, "Member 'BTD_AJBExecutionNotifier_C_ReceiveExecutionStartAI::ControlledPawn' has a wrong offset!");

// Function BTD_AJBExecutionNotifier.BTD_AJBExecutionNotifier_C.PerformConditionCheckAI
// 0x0018 (0x0018 - 0x0000)
struct BTD_AJBExecutionNotifier_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTD_AJBExecutionNotifier_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_AJBExecutionNotifier_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_AJBExecutionNotifier_C_PerformConditionCheckAI) == 0x000018, "Wrong size on BTD_AJBExecutionNotifier_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_AJBExecutionNotifier_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_AJBExecutionNotifier_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_AJBExecutionNotifier_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_AJBExecutionNotifier_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");

}

