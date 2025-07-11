#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AJBJumpIfReachableWithJumpSHA

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTS_AJBJumpIfReachableWithJumpSHA.BTS_AJBJumpIfReachableWithJumpSHA_C.ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA
// 0x00C8 (0x00C8 - 0x0000)
struct BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController1;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn1;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable1;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBInGameAIInputProxy_C*            CallFunc_GetInput_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInGameAIRecognition_C*           CallFunc_GetRecognition_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_GetControllingImaginaryCharacter_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsJumping_ReturnValue;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetBlackboardKeyName_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasObjectValue_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable1;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_AI_CanSHAReachEnemyIfJumpOver_JumpTypeOrEmpty; // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEventTagLocker*                        CallFunc_SpawnEventTagLocker_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetBlackboardKeyName_ReturnValue1;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue1;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00AC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_AI_CanSHAReachLocationIfJumpOver_JumpTypeOrEmpty; // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag1_CmpSuccess;  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA) == 0x000008, "Wrong alignment on BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA");
static_assert(sizeof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA) == 0x0000C8, "Wrong size on BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, EntryPoint) == 0x000000, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000005, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_Event_OwnerController1) == 0x000008, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_Event_OwnerController1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_Event_ControlledPawn1) == 0x000010, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_Event_ControlledPawn1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, Temp_bool_Has_Been_Initd_Variable1) == 0x00001C, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::Temp_bool_Has_Been_Initd_Variable1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetInput_ReturnValue) == 0x000020, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetRecognition_ReturnValue) == 0x000028, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetRecognition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetControllingImaginaryCharacter_ReturnValue) == 0x000030, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetControllingImaginaryCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, Temp_bool_IsClosed_Variable) == 0x000038, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_IsJumping_ReturnValue) == 0x000039, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_IsJumping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetBlackboardKeyName_ReturnValue) == 0x000040, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetBlackboardKeyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetValueAsObject_ReturnValue) == 0x000048, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character) == 0x000050, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_DynamicCast_AsBP_AJBIn_Game_AIImaginary_Character' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_Event_OwnerController) == 0x000060, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_Event_ControlledPawn) == 0x000068, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_HasObjectValue_ReturnValue) == 0x000070, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_HasObjectValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, Temp_bool_IsClosed_Variable1) == 0x000071, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::Temp_bool_IsClosed_Variable1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_AI_CanSHAReachEnemyIfJumpOver_JumpTypeOrEmpty) == 0x000078, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_AI_CanSHAReachEnemyIfJumpOver_JumpTypeOrEmpty' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000080, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_SpawnEventTagLocker_ReturnValue) == 0x000088, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_SpawnEventTagLocker_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetBlackboardKeyName_ReturnValue1) == 0x000090, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetBlackboardKeyName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_GetValueAsObject_ReturnValue1) == 0x000098, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_GetValueAsObject_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_DynamicCast_AsActor) == 0x0000A0, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, K2Node_DynamicCast_bSuccess1) == 0x0000A8, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000AC, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, CallFunc_AI_CanSHAReachLocationIfJumpOver_JumpTypeOrEmpty) == 0x0000B8, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::CallFunc_AI_CanSHAReachLocationIfJumpOver_JumpTypeOrEmpty' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA, GameplayTagsK2Node_SwitchGameplayTag1_CmpSuccess) == 0x0000C0, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ExecuteUbergraph_BTS_AJBJumpIfReachableWithJumpSHA::GameplayTagsK2Node_SwitchGameplayTag1_CmpSuccess' has a wrong offset!");

// Function BTS_AJBJumpIfReachableWithJumpSHA.BTS_AJBJumpIfReachableWithJumpSHA_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI");
static_assert(sizeof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_AJBJumpIfReachableWithJumpSHA.BTS_AJBJumpIfReachableWithJumpSHA_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI");
static_assert(sizeof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_AJBJumpIfReachableWithJumpSHA_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

