#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Test1_BTT_Attack

#include "Basic.hpp"


namespace SDK::Params
{

// Function test1_BTT_Attack.test1_BTT_Attack_C.ExecuteUbergraph_test1_BTT_Attack
// 0x0040 (0x0040 - 0x0000)
struct Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAJBInGameSkillComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack) == 0x000008, "Wrong alignment on Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack");
static_assert(sizeof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack) == 0x000040, "Wrong size on Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, EntryPoint) == 0x000000, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::EntryPoint' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, CallFunc_RandomFloat_ReturnValue) == 0x000004, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, K2Node_Event_OwnerController) == 0x000010, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, K2Node_Event_ControlledPawn) == 0x000018, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, K2Node_DynamicCast_AsBP_AJBIn_Game_Character) == 0x000020, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::K2Node_DynamicCast_AsBP_AJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'Test1_BTT_Attack_C_ExecuteUbergraph_test1_BTT_Attack::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function test1_BTT_Attack.test1_BTT_Attack_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct Test1_BTT_Attack_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Test1_BTT_Attack_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on Test1_BTT_Attack_C_ReceiveExecuteAI");
static_assert(sizeof(Test1_BTT_Attack_C_ReceiveExecuteAI) == 0x000010, "Wrong size on Test1_BTT_Attack_C_ReceiveExecuteAI");
static_assert(offsetof(Test1_BTT_Attack_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'Test1_BTT_Attack_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(Test1_BTT_Attack_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'Test1_BTT_Attack_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

