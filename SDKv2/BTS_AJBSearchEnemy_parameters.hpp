#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AJBSearchEnemy

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BTS_AJBSearchEnemy.BTS_AJBSearchEnemy_C.ExecuteUbergraph_BTS_AJBSearchEnemy
// 0x00D8 (0x00D8 - 0x0000)
struct BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController2;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn2;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController1;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn1;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInGameAIRecognition_C*           CallFunc_GetRecognition_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_NearestEnemy_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNPC_bIsNPC;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetBlackboardKeyName_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTargetableCharacter_ReturnValue;        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetRawBodyActor_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReachableActor_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNavigationPath*                        CallFunc_IsReachableActor_NavigationPath;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsObservableCharacter_ReturnValue;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParam_ReturnValue;                // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatParam_Found;                      // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AEventTagLocker*                        CallFunc_SpawnEventTagLocker_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable1;                             // 0x00C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Select_Default;                             // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy) == 0x000008, "Wrong alignment on BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy");
static_assert(sizeof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy) == 0x0000D8, "Wrong size on BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, EntryPoint) == 0x000000, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, Temp_struct_Variable) == 0x000008, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, Temp_bool_Variable) == 0x000010, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, Temp_bool_IsClosed_Variable) == 0x000011, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_OwnerController2) == 0x000018, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_OwnerController2' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_ControlledPawn2) == 0x000020, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_ControlledPawn2' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetBlackboardValueAsObject_ReturnValue) == 0x000030, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetBlackboardValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_OwnerController1) == 0x000040, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_OwnerController1' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_ControlledPawn1) == 0x000048, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_ControlledPawn1' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetRecognition_ReturnValue) == 0x000050, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetRecognition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_NearestEnemy_ReturnValue) == 0x000058, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_NearestEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, Temp_bool_Has_Been_Initd_Variable) == 0x000060, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsNPC_bIsNPC) == 0x000061, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsNPC_bIsNPC' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsValid_ReturnValue1) == 0x000062, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetBlackboardKeyName_ReturnValue) == 0x000068, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetBlackboardKeyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetValueAsObject_ReturnValue) == 0x000070, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character) == 0x000078, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsTargetableCharacter_ReturnValue) == 0x000081, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsTargetableCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetRawBodyActor_ReturnValue) == 0x000088, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetRawBodyActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsReachableActor_ReturnValue) == 0x000090, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsReachableActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsReachableActor_NavigationPath) == 0x000098, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsReachableActor_NavigationPath' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_IsObservableCharacter_ReturnValue) == 0x0000A0, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_IsObservableCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_OwnerController) == 0x0000A8, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Event_ControlledPawn) == 0x0000B0, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetFloatParam_ReturnValue) == 0x0000B8, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetFloatParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_GetFloatParam_Found) == 0x0000BC, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_GetFloatParam_Found' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, CallFunc_SpawnEventTagLocker_ReturnValue) == 0x0000C0, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::CallFunc_SpawnEventTagLocker_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, Temp_struct_Variable1) == 0x0000C8, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy, K2Node_Select_Default) == 0x0000D0, "Member 'BTS_AJBSearchEnemy_C_ExecuteUbergraph_BTS_AJBSearchEnemy::K2Node_Select_Default' has a wrong offset!");

// Function BTS_AJBSearchEnemy.BTS_AJBSearchEnemy_C.ReceiveDeactivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_AJBSearchEnemy_C_ReceiveDeactivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBSearchEnemy_C_ReceiveDeactivationAI) == 0x000008, "Wrong alignment on BTS_AJBSearchEnemy_C_ReceiveDeactivationAI");
static_assert(sizeof(BTS_AJBSearchEnemy_C_ReceiveDeactivationAI) == 0x000010, "Wrong size on BTS_AJBSearchEnemy_C_ReceiveDeactivationAI");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveDeactivationAI, OwnerController) == 0x000000, "Member 'BTS_AJBSearchEnemy_C_ReceiveDeactivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveDeactivationAI, ControlledPawn) == 0x000008, "Member 'BTS_AJBSearchEnemy_C_ReceiveDeactivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_AJBSearchEnemy.BTS_AJBSearchEnemy_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_AJBSearchEnemy_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBSearchEnemy_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_AJBSearchEnemy_C_ReceiveActivationAI");
static_assert(sizeof(BTS_AJBSearchEnemy_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_AJBSearchEnemy_C_ReceiveActivationAI");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_AJBSearchEnemy_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTS_AJBSearchEnemy_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_AJBSearchEnemy.BTS_AJBSearchEnemy_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_AJBSearchEnemy_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBSearchEnemy_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_AJBSearchEnemy_C_ReceiveTickAI");
static_assert(sizeof(BTS_AJBSearchEnemy_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_AJBSearchEnemy_C_ReceiveTickAI");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_AJBSearchEnemy_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_AJBSearchEnemy_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_AJBSearchEnemy_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_AJBSearchEnemy_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

