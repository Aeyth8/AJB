#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBMemoryLeakEmphasizerComponent

#include "Basic.hpp"

#include "AJB_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBMemoryLeakEmphasizerComponent.BP_AJBMemoryLeakEmphasizerComponent_C.ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent
// 0x00A0 (0x00A0 - 0x0000)
struct BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAJBHighlightManager*                   CallFunc_GetHighlightManager_HighlightManager;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetFocusActor_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayingReplay_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAJBInGameCharacter*                    K2Node_Event_Operator;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Time;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGeneralTiming                                K2Node_Event_Timing;                               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnable;                              // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bOperatorIsEmpty;                     // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameCharacter_C*               CallFunc_GetAJBCharacterFromActor_CharacterBP;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAJBCharacterFromActor_bSuccess;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBMemoryLeakBuff_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBMemoryLeak_C*                    CallFunc_GetComponentByClass_ReturnValue1;         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ActorIsAlreadyInteracted_Interacted;      // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckBuffLimit_bLimit;                    // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97[0x1];                                       // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable1;                              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select1_Default;                            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent) == 0x000008, "Wrong alignment on BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent");
static_assert(sizeof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent) == 0x0000A0, "Wrong size on BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, EntryPoint) == 0x000000, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetHighlightManager_HighlightManager) == 0x000008, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetHighlightManager_HighlightManager' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetFocusActor_ReturnValue) == 0x000018, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetFocusActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_IsPlayingReplay_ReturnValue) == 0x000020, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_IsPlayingReplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, Temp_float_Variable) == 0x000024, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetViewTarget_ReturnValue) == 0x000030, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_Operator) == 0x000040, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_Operator' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_Time) == 0x000048, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_Time' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_Timing) == 0x00004C, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_Timing' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_bEnable) == 0x00004D, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_bEnable' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_bOperatorIsEmpty) == 0x00004E, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_bOperatorIsEmpty' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_DynamicCast_AsBP_AJBIn_Game_Character) == 0x000050, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_DynamicCast_AsBP_AJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000059, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Event_EndPlayReason) == 0x00005A, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, Temp_bool_Variable) == 0x00005B, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, Temp_bool_Variable1) == 0x00005C, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Select_Default) == 0x000060, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetAJBCharacterFromActor_CharacterBP) == 0x000070, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetAJBCharacterFromActor_CharacterBP' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetAJBCharacterFromActor_bSuccess) == 0x000078, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetAJBCharacterFromActor_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_GetComponentByClass_ReturnValue1) == 0x000088, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_GetComponentByClass_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_IsValid_ReturnValue1) == 0x000090, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_IsValid_ReturnValue2) == 0x000091, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_ActorIsAlreadyInteracted_Interacted) == 0x000092, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_ActorIsAlreadyInteracted_Interacted' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_CheckBuffLimit_bLimit) == 0x000093, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_CheckBuffLimit_bLimit' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_Not_PreBool_ReturnValue) == 0x000094, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_Not_PreBool_ReturnValue1) == 0x000095, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000096, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, Temp_float_Variable1) == 0x000098, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent, K2Node_Select1_Default) == 0x00009C, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ExecuteUbergraph_BP_AJBMemoryLeakEmphasizerComponent::K2Node_Select1_Default' has a wrong offset!");

// Function BP_AJBMemoryLeakEmphasizerComponent.BP_AJBMemoryLeakEmphasizerComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_AJBMemoryLeakEmphasizerComponent.BP_AJBMemoryLeakEmphasizerComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick");
static_assert(sizeof(BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AJBMemoryLeakEmphasizerComponent.BP_AJBMemoryLeakEmphasizerComponent_C.NotifyTheWorld
// 0x0010 (0x0010 - 0x0000)
struct BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld final
{
public:
	class AAJBInGameCharacter*                    Operator;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGeneralTiming                                Timing;                                            // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnable;                                           // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOperatorIsEmpty;                                  // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld) == 0x000008, "Wrong alignment on BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld");
static_assert(sizeof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld) == 0x000010, "Wrong size on BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld, Operator) == 0x000000, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld::Operator' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld, Time) == 0x000008, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld::Time' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld, Timing) == 0x00000C, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld::Timing' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld, bEnable) == 0x00000D, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld::bEnable' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld, bOperatorIsEmpty) == 0x00000E, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_NotifyTheWorld::bOperatorIsEmpty' has a wrong offset!");

// Function BP_AJBMemoryLeakEmphasizerComponent.BP_AJBMemoryLeakEmphasizerComponent_C.TrySpawnParticle
// 0x0028 (0x0028 - 0x0000)
struct BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameParticleEffect_C*          CallFunc_RequestParticleEffectAttachedOnLocal_ParticleEffect; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle) == 0x000008, "Wrong alignment on BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle");
static_assert(sizeof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle) == 0x000028, "Wrong size on BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle, K2Node_DynamicCast_AsBP_AJBIn_Game_Character) == 0x000010, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle::K2Node_DynamicCast_AsBP_AJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle, CallFunc_RequestParticleEffectAttachedOnLocal_ParticleEffect) == 0x000020, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_TrySpawnParticle::CallFunc_RequestParticleEffectAttachedOnLocal_ParticleEffect' has a wrong offset!");

// Function BP_AJBMemoryLeakEmphasizerComponent.BP_AJBMemoryLeakEmphasizerComponent_C.TryDestroyParticle
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle) == 0x000001, "Wrong alignment on BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle");
static_assert(sizeof(BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle) == 0x000001, "Wrong size on BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle");
static_assert(offsetof(BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_AJBMemoryLeakEmphasizerComponent_C_TryDestroyParticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

