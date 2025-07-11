#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBFindReachableItemSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_AJBFindReachableItemSpawner.BTT_AJBFindReachableItemSpawner_C.ExecuteUbergraph_BTT_AJBFindReachableItemSpawner
// 0x01A8 (0x01A8 - 0x0000)
struct BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatParam_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatParam_Found;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBAIHouseInfo_C*                   CallFunc_FindIndoorHouseInfo_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_AJBInGameItemSpawner_C*>     CallFunc_GetReachableItemSpawners_ReturnValue;     // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	class UBP_AJBInGameAIRecognition_C*           CallFunc_GetRecognition_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFullHP_ReturnValue;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IfDebugDrawOnTask_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_GetControllingImaginaryCharacter_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0078(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_AI_GetLogColor_ReturnValue;               // 0x0084(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_GetControllingImaginaryCharacter_ReturnValue1; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetRawPawn_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue1;                 // 0x00CC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavigationPath*                        CallFunc_FindPathToLocationSynchronously_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x00E0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_AJBInGameItemSpawner_C*>     CallFunc_GetItemSpawnerWithItem_ReturnValue;       // 0x00F0(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class ABP_AJBInGameItemSpawner_C*>     CallFunc_GetReachableItemSpawners_ReturnValue1;    // 0x0100(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsFullHP_ReturnValue1;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue1;                   // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_113[0x5];                                      // 0x0113(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAJBAIEnvironmentBlock*>         CallFunc_GetEnvironmentBlockWithBlocksAroundSelf_ReturnValue; // 0x0118(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAJBAIEnvironmentBlock*                 CallFunc_Array_Get_Item;                           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item1;                          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBAIHouseInfo_C*                   K2Node_DynamicCast_AsBP_AJBAIHouse_Info;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152[0x6];                                      // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_AJBInGameItemSpawner_C*>     CallFunc_GetItemSpawnerWithItem_ReturnValue1;      // 0x0158(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameItemSpawner_C*             K2Node_CustomEvent_ItemSpawner;                    // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_AJBInGameItemSpawner_C*>     K2Node_CustomEvent_ItemSpawners;                   // 0x0180(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameItemSpawner_C*             CallFunc_Array_Get_Item2;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner) == 0x000008, "Wrong alignment on BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner");
static_assert(sizeof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner) == 0x0001A8, "Wrong size on BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, EntryPoint) == 0x000000, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_bool_True_if_break_was_hit_Variable) == 0x00000C, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_Event_OwnerController) == 0x000018, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_Event_ControlledPawn) == 0x000020, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetFloatParam_ReturnValue) == 0x000028, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetFloatParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetFloatParam_Found) == 0x00002C, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetFloatParam_Found' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_FindIndoorHouseInfo_ReturnValue) == 0x000030, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_FindIndoorHouseInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Less_FloatFloat_ReturnValue) == 0x000038, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_bool_Has_Been_Initd_Variable) == 0x00003A, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetReachableItemSpawners_ReturnValue) == 0x000040, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetReachableItemSpawners_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetRecognition_ReturnValue) == 0x000050, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetRecognition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_IsFullHP_ReturnValue) == 0x000058, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_IsFullHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Not_PreBool_ReturnValue1) == 0x000059, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_int_Loop_Counter_Variable1) == 0x00005C, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Add_IntInt_ReturnValue1) == 0x000060, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_IfDebugDrawOnTask_ReturnValue) == 0x000064, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_IfDebugDrawOnTask_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_int_Array_Index_Variable1) == 0x000068, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetControllingImaginaryCharacter_ReturnValue) == 0x000070, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetControllingImaginaryCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetLocation_ReturnValue) == 0x000078, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_AI_GetLogColor_ReturnValue) == 0x000084, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_AI_GetLogColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetBlackboardValueAsObject_ReturnValue) == 0x000098, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetBlackboardValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetControllingImaginaryCharacter_ReturnValue1) == 0x0000A0, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetControllingImaginaryCharacter_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_DynamicCast_AsActor) == 0x0000A8, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetRawPawn_ReturnValue) == 0x0000B8, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetRawPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetLocation_ReturnValue1) == 0x0000CC, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_FindPathToLocationSynchronously_ReturnValue) == 0x0000D8, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_FindPathToLocationSynchronously_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x0000E0, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_BooleanOR_ReturnValue) == 0x0000EC, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetItemSpawnerWithItem_ReturnValue) == 0x0000F0, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetItemSpawnerWithItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetReachableItemSpawners_ReturnValue1) == 0x000100, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetReachableItemSpawners_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_IsFullHP_ReturnValue1) == 0x000110, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_IsFullHP_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Not_PreBool_ReturnValue2) == 0x000111, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_BooleanOR_ReturnValue1) == 0x000112, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_BooleanOR_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetEnvironmentBlockWithBlocksAroundSelf_ReturnValue) == 0x000118, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetEnvironmentBlockWithBlocksAroundSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, Temp_bool_IsClosed_Variable) == 0x000128, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_Get_Item) == 0x000130, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_Get_Item1) == 0x000138, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_DynamicCast_AsBP_AJBAIHouse_Info) == 0x000148, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_DynamicCast_AsBP_AJBAIHouse_Info' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_DynamicCast_bSuccess1) == 0x000150, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Less_IntInt_ReturnValue) == 0x000151, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_GetItemSpawnerWithItem_ReturnValue1) == 0x000158, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_GetItemSpawnerWithItem_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_Length_ReturnValue1) == 0x000168, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Less_IntInt_ReturnValue1) == 0x00016C, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_CustomEvent_ItemSpawner) == 0x000170, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_CustomEvent_ItemSpawner' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_BooleanAND_ReturnValue) == 0x000178, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, K2Node_CustomEvent_ItemSpawners) == 0x000180, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::K2Node_CustomEvent_ItemSpawners' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000190, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_LastIndex_ReturnValue) == 0x000194, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000198, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner, CallFunc_Array_Get_Item2) == 0x0001A0, "Member 'BTT_AJBFindReachableItemSpawner_C_ExecuteUbergraph_BTT_AJBFindReachableItemSpawner::CallFunc_Array_Get_Item2' has a wrong offset!");

// Function BTT_AJBFindReachableItemSpawner.BTT_AJBFindReachableItemSpawner_C.SetRandomItemSpawnerIfValid
// 0x0010 (0x0010 - 0x0000)
struct BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid final
{
public:
	TArray<class ABP_AJBInGameItemSpawner_C*>     ItemSpawners;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid) == 0x000008, "Wrong alignment on BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid");
static_assert(sizeof(BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid) == 0x000010, "Wrong size on BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid, ItemSpawners) == 0x000000, "Member 'BTT_AJBFindReachableItemSpawner_C_SetRandomItemSpawnerIfValid::ItemSpawners' has a wrong offset!");

// Function BTT_AJBFindReachableItemSpawner.BTT_AJBFindReachableItemSpawner_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_AJBFindReachableItemSpawner_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTT_AJBFindReachableItemSpawner.BTT_AJBFindReachableItemSpawner_C.SetTargetItemSpawner
// 0x0008 (0x0008 - 0x0000)
struct BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner final
{
public:
	class ABP_AJBInGameItemSpawner_C*             ItemSpawner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner) == 0x000008, "Wrong alignment on BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner");
static_assert(sizeof(BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner) == 0x000008, "Wrong size on BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner");
static_assert(offsetof(BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner, ItemSpawner) == 0x000000, "Member 'BTT_AJBFindReachableItemSpawner_C_SetTargetItemSpawner::ItemSpawner' has a wrong offset!");

}

