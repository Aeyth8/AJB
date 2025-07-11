#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBSetPairLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTT_AJBSetPairLocation.BTT_AJBSetPairLocation_C.ExecuteUbergraph_BTT_AJBSetPairLocation
// 0x0050 (0x0050 - 0x0000)
struct BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    CallFunc_GetControllingImaginaryCharacter_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInGameAIRecognition_C*           CallFunc_GetRecognition_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetRawPawn_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0030(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue1;                 // 0x003C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavigationPath*                        CallFunc_FindPathToLocationSynchronously_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation) == 0x000008, "Wrong alignment on BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation");
static_assert(sizeof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation) == 0x000050, "Wrong size on BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, EntryPoint) == 0x000000, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, CallFunc_GetControllingImaginaryCharacter_ReturnValue) == 0x000018, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::CallFunc_GetControllingImaginaryCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, CallFunc_GetRecognition_ReturnValue) == 0x000020, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::CallFunc_GetRecognition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, CallFunc_GetRawPawn_ReturnValue) == 0x000028, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::CallFunc_GetRawPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, CallFunc_GetLocation_ReturnValue) == 0x000030, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, CallFunc_GetLocation_ReturnValue1) == 0x00003C, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::CallFunc_GetLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation, CallFunc_FindPathToLocationSynchronously_ReturnValue) == 0x000048, "Member 'BTT_AJBSetPairLocation_C_ExecuteUbergraph_BTT_AJBSetPairLocation::CallFunc_FindPathToLocationSynchronously_ReturnValue' has a wrong offset!");

// Function BTT_AJBSetPairLocation.BTT_AJBSetPairLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_AJBSetPairLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_AJBSetPairLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_AJBSetPairLocation_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_AJBSetPairLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_AJBSetPairLocation_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_AJBSetPairLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_AJBSetPairLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_AJBSetPairLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

