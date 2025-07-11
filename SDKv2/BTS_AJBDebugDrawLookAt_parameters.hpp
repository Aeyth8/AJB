#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AJBDebugDrawLookAt

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTS_AJBDebugDrawLookAt.BTS_AJBDebugDrawLookAt_C.ExecuteUbergraph_BTS_AJBDebugDrawLookAt
// 0x00C0 (0x00C0 - 0x0000)
struct BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameAIImaginaryCharacter_C*    K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_GetControllingImaginaryCharacter_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0040(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotation_ReturnValue;                  // 0x004C(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0058(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue1;                 // 0x0064(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0070(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetBodyHalfHeight_ReturnValue;            // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_GetControllingImaginaryCharacter_ReturnValue1; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue2;                 // 0x008C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0098(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue1;            // 0x00B0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt) == 0x000008, "Wrong alignment on BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt");
static_assert(sizeof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt) == 0x0000C0, "Wrong size on BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, EntryPoint) == 0x000000, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetBlackboardValueAsObject_ReturnValue) == 0x000008, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetBlackboardValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, K2Node_Event_OwnerController) == 0x000010, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character) == 0x000028, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetControllingImaginaryCharacter_ReturnValue) == 0x000038, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetControllingImaginaryCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetLocation_ReturnValue) == 0x000040, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetRotation_ReturnValue) == 0x00004C, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetForwardVector_ReturnValue) == 0x000058, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetLocation_ReturnValue1) == 0x000064, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000070, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetBodyHalfHeight_ReturnValue) == 0x00007C, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetBodyHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetControllingImaginaryCharacter_ReturnValue1) == 0x000080, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetControllingImaginaryCharacter_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000088, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_GetLocation_ReturnValue2) == 0x00008C, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_GetLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_MakeVector_ReturnValue) == 0x000098, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A4, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt, CallFunc_Add_VectorVector_ReturnValue1) == 0x0000B0, "Member 'BTS_AJBDebugDrawLookAt_C_ExecuteUbergraph_BTS_AJBDebugDrawLookAt::CallFunc_Add_VectorVector_ReturnValue1' has a wrong offset!");

// Function BTS_AJBDebugDrawLookAt.BTS_AJBDebugDrawLookAt_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_AJBDebugDrawLookAt_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBDebugDrawLookAt_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_AJBDebugDrawLookAt_C_ReceiveTickAI");
static_assert(sizeof(BTS_AJBDebugDrawLookAt_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_AJBDebugDrawLookAt_C_ReceiveTickAI");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_AJBDebugDrawLookAt_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_AJBDebugDrawLookAt_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_AJBDebugDrawLookAt_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_AJBDebugDrawLookAt_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

