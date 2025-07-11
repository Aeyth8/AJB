#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_InteractOperatorInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BI_InteractOperatorInterface.BI_InteractOperatorInterface_C.CheckErrorConditionOperator
// 0x0010 (0x0010 - 0x0000)
struct BI_InteractOperatorInterface_C_CheckErrorConditionOperator final
{
public:
	class AActor*                                 InteractActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bErrorCondition;                                   // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         ErrorType;                                         // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_InteractOperatorInterface_C_CheckErrorConditionOperator) == 0x000008, "Wrong alignment on BI_InteractOperatorInterface_C_CheckErrorConditionOperator");
static_assert(sizeof(BI_InteractOperatorInterface_C_CheckErrorConditionOperator) == 0x000010, "Wrong size on BI_InteractOperatorInterface_C_CheckErrorConditionOperator");
static_assert(offsetof(BI_InteractOperatorInterface_C_CheckErrorConditionOperator, InteractActor) == 0x000000, "Member 'BI_InteractOperatorInterface_C_CheckErrorConditionOperator::InteractActor' has a wrong offset!");
static_assert(offsetof(BI_InteractOperatorInterface_C_CheckErrorConditionOperator, bErrorCondition) == 0x000008, "Member 'BI_InteractOperatorInterface_C_CheckErrorConditionOperator::bErrorCondition' has a wrong offset!");
static_assert(offsetof(BI_InteractOperatorInterface_C_CheckErrorConditionOperator, ErrorType) == 0x000009, "Member 'BI_InteractOperatorInterface_C_CheckErrorConditionOperator::ErrorType' has a wrong offset!");

// Function BI_InteractOperatorInterface.BI_InteractOperatorInterface_C.InteractableOperator
// 0x0010 (0x0010 - 0x0000)
struct BI_InteractOperatorInterface_C_InteractableOperator final
{
public:
	class AActor*                                 InteractActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReturnValue;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_InteractOperatorInterface_C_InteractableOperator) == 0x000008, "Wrong alignment on BI_InteractOperatorInterface_C_InteractableOperator");
static_assert(sizeof(BI_InteractOperatorInterface_C_InteractableOperator) == 0x000010, "Wrong size on BI_InteractOperatorInterface_C_InteractableOperator");
static_assert(offsetof(BI_InteractOperatorInterface_C_InteractableOperator, InteractActor) == 0x000000, "Member 'BI_InteractOperatorInterface_C_InteractableOperator::InteractActor' has a wrong offset!");
static_assert(offsetof(BI_InteractOperatorInterface_C_InteractableOperator, bReturnValue) == 0x000008, "Member 'BI_InteractOperatorInterface_C_InteractableOperator::bReturnValue' has a wrong offset!");

}

