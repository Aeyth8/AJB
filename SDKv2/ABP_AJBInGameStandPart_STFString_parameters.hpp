#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBInGameStandPart_STFString

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_AJBInGameStandPart_STFString.ABP_AJBInGameStandPart_STFString_C.ExecuteUbergraph_ABP_AJBInGameStandPart_STFString
// 0x0160 (0x0160 - 0x0000)
struct ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0004(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0084(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0090(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x009C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_InverseTransformLocation_ReturnValue;     // 0x00B0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0xB];                                       // 0x00D5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue1;               // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue1;                    // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBStoneHook_C*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0xE];                                      // 0x0122(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetStringTransform_Result;                // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString) == 0x000010, "Wrong alignment on ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString");
static_assert(sizeof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString) == 0x000160, "Wrong size on ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, EntryPoint) == 0x000000, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_MakeVector_ReturnValue) == 0x000004, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_GetOwningComponent_ReturnValue) == 0x000040, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000050, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, K2Node_Event_DeltaTimeX) == 0x000080, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_BreakTransform_Location) == 0x000084, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_BreakTransform_Rotation) == 0x000090, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_BreakTransform_Scale) == 0x00009C, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_GetOwningActor_ReturnValue) == 0x0000A8, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_InverseTransformLocation_ReturnValue) == 0x0000B0, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_InverseTransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_GetOwner_ReturnValue) == 0x0000C0, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000C8, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_IsValid_ReturnValue) == 0x0000D4, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_MakeTransform_ReturnValue1) == 0x0000E0, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_MakeTransform_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_GetOwner_ReturnValue1) == 0x000110, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_GetOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_GetComponentByClass_ReturnValue) == 0x000118, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_IsValid_ReturnValue1) == 0x000120, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_IsValid_ReturnValue2) == 0x000121, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString, CallFunc_GetStringTransform_Result) == 0x000130, "Member 'ABP_AJBInGameStandPart_STFString_C_ExecuteUbergraph_ABP_AJBInGameStandPart_STFString::CallFunc_GetStringTransform_Result' has a wrong offset!");

// Function ABP_AJBInGameStandPart_STFString.ABP_AJBInGameStandPart_STFString_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_AJBInGameStandPart_STFString_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

}

