#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBStringJailFlinch

#include "Basic.hpp"

#include "AJB_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.ExecuteUbergraph_BP_AJBStringJailFlinch
// 0x0100 (0x0100 - 0x0000)
struct BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBInGameCharacter*                    K2Node_Event_Operator;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Time;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGeneralTiming                                K2Node_Event_Timing;                               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnable;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bOperatorIsEmpty;                     // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bTriggeredByStand1;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bTriggeredByStand;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_TriggeredByStand;               // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bShouldUpdateLeftActiveTime;          // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bNewVisibility;                       // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue1;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue2;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue3;           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0040(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAssociatedAkEvent_ReturnValue;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue1;                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character1;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue2;                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character2;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_RequestWwiseEventAttachedOnLocal_AkComponent; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0098(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_RequestGion_AkComponent__LocalOnly_;      // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestGion_bFullfilDisplayCond_LocalOnly_; // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue3;                    // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character3;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue1;         // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_RequestWwiseEventAttachedOnLocal_AkComponent1; // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x00E0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_RequestGion_AkComponent__LocalOnly_1;     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestGion_bFullfilDisplayCond_LocalOnly_1; // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch) == 0x000008, "Wrong alignment on BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch");
static_assert(sizeof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch) == 0x000100, "Wrong size on BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, EntryPoint) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_AsBP_AJBIn_Game_Character) == 0x000010, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_AsBP_AJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_Operator) == 0x000020, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_Operator' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_Time) == 0x000028, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_Time' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_Timing) == 0x00002C, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_Timing' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_bEnable) == 0x00002D, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_bEnable' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_bOperatorIsEmpty) == 0x00002E, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_bOperatorIsEmpty' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsValid_ReturnValue) == 0x00002F, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_bTriggeredByStand1) == 0x000030, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_bTriggeredByStand1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_bTriggeredByStand) == 0x000032, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_bTriggeredByStand' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_CustomEvent_TriggeredByStand) == 0x000033, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_CustomEvent_TriggeredByStand' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsActive_ReturnValue) == 0x000034, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsDedicatedServer_ReturnValue) == 0x000035, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_bShouldUpdateLeftActiveTime) == 0x000036, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_bShouldUpdateLeftActiveTime' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_Event_bNewVisibility) == 0x000037, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_Event_bNewVisibility' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsDedicatedServer_ReturnValue1) == 0x000038, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsDedicatedServer_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsDedicatedServer_ReturnValue2) == 0x000039, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsDedicatedServer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsDedicatedServer_ReturnValue3) == 0x00003A, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsDedicatedServer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, Temp_bool_Has_Been_Initd_Variable) == 0x00003B, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsValid_ReturnValue1) == 0x00003C, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, Temp_bool_IsClosed_Variable) == 0x00003D, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, Temp_delegate_Variable) == 0x000040, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_IsValid_ReturnValue2) == 0x000050, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_PostAssociatedAkEvent_ReturnValue) == 0x000054, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_PostAssociatedAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_GetOwner_ReturnValue1) == 0x000058, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_GetOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_AsBP_AJBIn_Game_Character1) == 0x000060, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_AsBP_AJBIn_Game_Character1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_bSuccess1) == 0x000068, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_GetOwner_ReturnValue2) == 0x000070, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_GetOwner_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000078, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_AsBP_AJBIn_Game_Character2) == 0x000080, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_AsBP_AJBIn_Game_Character2' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_bSuccess2) == 0x000088, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_RequestWwiseEventAttachedOnLocal_AkComponent) == 0x000090, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_RequestWwiseEventAttachedOnLocal_AkComponent' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000098, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_RequestGion_AkComponent__LocalOnly_) == 0x0000A8, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_RequestGion_AkComponent__LocalOnly_' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_RequestGion_bFullfilDisplayCond_LocalOnly_) == 0x0000B0, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_RequestGion_bFullfilDisplayCond_LocalOnly_' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_GetOwner_ReturnValue3) == 0x0000B8, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_GetOwner_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_AsBP_AJBIn_Game_Character3) == 0x0000C0, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_AsBP_AJBIn_Game_Character3' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, K2Node_DynamicCast_bSuccess3) == 0x0000C8, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::K2Node_DynamicCast_bSuccess3' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C9, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_K2_GetRootComponent_ReturnValue1) == 0x0000D0, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_K2_GetRootComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_RequestWwiseEventAttachedOnLocal_AkComponent1) == 0x0000D8, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_RequestWwiseEventAttachedOnLocal_AkComponent1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x0000E0, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x0000EC, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_RequestGion_AkComponent__LocalOnly_1) == 0x0000F0, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_RequestGion_AkComponent__LocalOnly_1' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch, CallFunc_RequestGion_bFullfilDisplayCond_LocalOnly_1) == 0x0000F8, "Member 'BP_AJBStringJailFlinch_C_ExecuteUbergraph_BP_AJBStringJailFlinch::CallFunc_RequestGion_bFullfilDisplayCond_LocalOnly_1' has a wrong offset!");

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.MC_SetShouldUpdateLectActiveTime
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime final
{
public:
	bool                                          bShouldUpdateLeftActiveTime;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime) == 0x000001, "Wrong alignment on BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime");
static_assert(sizeof(BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime) == 0x000001, "Wrong size on BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime");
static_assert(offsetof(BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime, bShouldUpdateLeftActiveTime) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_MC_SetShouldUpdateLectActiveTime::bShouldUpdateLeftActiveTime' has a wrong offset!");

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.BeginContinuousGion
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBStringJailFlinch_C_BeginContinuousGion final
{
public:
	bool                                          TriggeredByStand;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_BeginContinuousGion) == 0x000001, "Wrong alignment on BP_AJBStringJailFlinch_C_BeginContinuousGion");
static_assert(sizeof(BP_AJBStringJailFlinch_C_BeginContinuousGion) == 0x000001, "Wrong size on BP_AJBStringJailFlinch_C_BeginContinuousGion");
static_assert(offsetof(BP_AJBStringJailFlinch_C_BeginContinuousGion, TriggeredByStand) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_BeginContinuousGion::TriggeredByStand' has a wrong offset!");

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.ChangeParticleVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBStringJailFlinch_C_ChangeParticleVisibility final
{
public:
	bool                                          bNewVisibility;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_ChangeParticleVisibility) == 0x000001, "Wrong alignment on BP_AJBStringJailFlinch_C_ChangeParticleVisibility");
static_assert(sizeof(BP_AJBStringJailFlinch_C_ChangeParticleVisibility) == 0x000001, "Wrong size on BP_AJBStringJailFlinch_C_ChangeParticleVisibility");
static_assert(offsetof(BP_AJBStringJailFlinch_C_ChangeParticleVisibility, bNewVisibility) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_ChangeParticleVisibility::bNewVisibility' has a wrong offset!");

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.NotifyTheWorld
// 0x0010 (0x0010 - 0x0000)
struct BP_AJBStringJailFlinch_C_NotifyTheWorld final
{
public:
	class AAJBInGameCharacter*                    Operator;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGeneralTiming                                Timing;                                            // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnable;                                           // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOperatorIsEmpty;                                  // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_NotifyTheWorld) == 0x000008, "Wrong alignment on BP_AJBStringJailFlinch_C_NotifyTheWorld");
static_assert(sizeof(BP_AJBStringJailFlinch_C_NotifyTheWorld) == 0x000010, "Wrong size on BP_AJBStringJailFlinch_C_NotifyTheWorld");
static_assert(offsetof(BP_AJBStringJailFlinch_C_NotifyTheWorld, Operator) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_NotifyTheWorld::Operator' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_NotifyTheWorld, Time) == 0x000008, "Member 'BP_AJBStringJailFlinch_C_NotifyTheWorld::Time' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_NotifyTheWorld, Timing) == 0x00000C, "Member 'BP_AJBStringJailFlinch_C_NotifyTheWorld::Timing' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_NotifyTheWorld, bEnable) == 0x00000D, "Member 'BP_AJBStringJailFlinch_C_NotifyTheWorld::bEnable' has a wrong offset!");
static_assert(offsetof(BP_AJBStringJailFlinch_C_NotifyTheWorld, bOperatorIsEmpty) == 0x00000E, "Member 'BP_AJBStringJailFlinch_C_NotifyTheWorld::bOperatorIsEmpty' has a wrong offset!");

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.OnActionInactivate
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBStringJailFlinch_C_OnActionInactivate final
{
public:
	bool                                          bTriggeredByStand;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_OnActionInactivate) == 0x000001, "Wrong alignment on BP_AJBStringJailFlinch_C_OnActionInactivate");
static_assert(sizeof(BP_AJBStringJailFlinch_C_OnActionInactivate) == 0x000001, "Wrong size on BP_AJBStringJailFlinch_C_OnActionInactivate");
static_assert(offsetof(BP_AJBStringJailFlinch_C_OnActionInactivate, bTriggeredByStand) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_OnActionInactivate::bTriggeredByStand' has a wrong offset!");

// Function BP_AJBStringJailFlinch.BP_AJBStringJailFlinch_C.OnActionActivate
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBStringJailFlinch_C_OnActionActivate final
{
public:
	bool                                          bTriggeredByStand;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBStringJailFlinch_C_OnActionActivate) == 0x000001, "Wrong alignment on BP_AJBStringJailFlinch_C_OnActionActivate");
static_assert(sizeof(BP_AJBStringJailFlinch_C_OnActionActivate) == 0x000001, "Wrong size on BP_AJBStringJailFlinch_C_OnActionActivate");
static_assert(offsetof(BP_AJBStringJailFlinch_C_OnActionActivate, bTriggeredByStand) == 0x000000, "Member 'BP_AJBStringJailFlinch_C_OnActionActivate::bTriggeredByStand' has a wrong offset!");

}

