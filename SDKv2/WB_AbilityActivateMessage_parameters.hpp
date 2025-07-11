#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AbilityActivateMessage

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_AbilityActivateMessage.WB_AbilityActivateMessage_C.ExecuteUbergraph_WB_AbilityActivateMessage
// 0x0068 (0x0068 - 0x0000)
struct WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUltimateSkill_bUltimateSkill;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_SkillIcon_C*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue1;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Message;                        // 0x0030(0x0018)()
	class UWB_SkillIcon_C*                        K2Node_CustomEvent_SkillUnlockAnimWidget;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_RequestWwiseEventOnLocal_AkComponent;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_RequestWwiseEventOnLocal_AkComponent1;    // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage) == 0x000008, "Wrong alignment on WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage");
static_assert(sizeof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage) == 0x000068, "Wrong size on WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, EntryPoint) == 0x000000, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_IsValid_ReturnValue1) == 0x000019, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_IsUltimateSkill_bUltimateSkill) == 0x00001A, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_IsUltimateSkill_bUltimateSkill' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_Array_Get_Item) == 0x000020, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_IsValid_ReturnValue2) == 0x000028, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000029, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_Array_IsValidIndex_ReturnValue1) == 0x00002A, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_Array_IsValidIndex_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, K2Node_CustomEvent_Message) == 0x000030, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, K2Node_CustomEvent_SkillUnlockAnimWidget) == 0x000048, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::K2Node_CustomEvent_SkillUnlockAnimWidget' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_Array_Add_ReturnValue1) == 0x000054, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_Array_Add_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_RequestWwiseEventOnLocal_AkComponent) == 0x000058, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_RequestWwiseEventOnLocal_AkComponent' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage, CallFunc_RequestWwiseEventOnLocal_AkComponent1) == 0x000060, "Member 'WB_AbilityActivateMessage_C_ExecuteUbergraph_WB_AbilityActivateMessage::CallFunc_RequestWwiseEventOnLocal_AkComponent1' has a wrong offset!");

// Function WB_AbilityActivateMessage.WB_AbilityActivateMessage_C.ShowMessageText
// 0x0020 (0x0020 - 0x0000)
struct WB_AbilityActivateMessage_C_ShowMessageText final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWB_SkillIcon_C*                        SkillUnlockAnimWidget;                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AbilityActivateMessage_C_ShowMessageText) == 0x000008, "Wrong alignment on WB_AbilityActivateMessage_C_ShowMessageText");
static_assert(sizeof(WB_AbilityActivateMessage_C_ShowMessageText) == 0x000020, "Wrong size on WB_AbilityActivateMessage_C_ShowMessageText");
static_assert(offsetof(WB_AbilityActivateMessage_C_ShowMessageText, Message) == 0x000000, "Member 'WB_AbilityActivateMessage_C_ShowMessageText::Message' has a wrong offset!");
static_assert(offsetof(WB_AbilityActivateMessage_C_ShowMessageText, SkillUnlockAnimWidget) == 0x000018, "Member 'WB_AbilityActivateMessage_C_ShowMessageText::SkillUnlockAnimWidget' has a wrong offset!");

}

