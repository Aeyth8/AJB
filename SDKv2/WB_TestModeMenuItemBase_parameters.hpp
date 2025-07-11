#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TestModeMenuItemBase

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.OnDecideMenuItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature final
{
public:
	class UWB_TestModeMenuItemBase_C*             DecideMenuItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature");
static_assert(sizeof(WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature) == 0x000008, "Wrong size on WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature");
static_assert(offsetof(WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature, DecideMenuItem) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_OnDecideMenuItem__DelegateSignature::DecideMenuItem' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.OnCancelMenuItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature final
{
public:
	class UWB_TestModeMenuItemBase_C*             CancelMenuItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature");
static_assert(sizeof(WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature) == 0x000008, "Wrong size on WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature");
static_assert(offsetof(WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature, CancelMenuItem) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_OnCancelMenuItem__DelegateSignature::CancelMenuItem' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.ExecuteUbergraph_WB_TestModeMenuItemBase
// 0x0058 (0x0058 - 0x0000)
struct WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	class FName                                   K2Node_Event_SelectItemMenu;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_SpawnObject_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0050(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase");
static_assert(sizeof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase) == 0x000058, "Wrong size on WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, EntryPoint) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, K2Node_Event_SelectItemMenu) == 0x000030, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::K2Node_Event_SelectItemMenu' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, CallFunc_SpawnObject_ReturnValue) == 0x000038, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, CallFunc_AddChildToCanvas_ReturnValue) == 0x000048, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase, CallFunc_MakeVector2D_ReturnValue) == 0x000050, "Member 'WB_TestModeMenuItemBase_C_ExecuteUbergraph_WB_TestModeMenuItemBase::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_TestModeMenuItemBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_PreConstruct) == 0x000001, "Wrong alignment on WB_TestModeMenuItemBase_C_PreConstruct");
static_assert(sizeof(WB_TestModeMenuItemBase_C_PreConstruct) == 0x000001, "Wrong size on WB_TestModeMenuItemBase_C_PreConstruct");
static_assert(offsetof(WB_TestModeMenuItemBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.SetFocusMenuItem
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) WB_TestModeMenuItemBase_C_SetFocusMenuItem final
{
public:
	class FName                                   SelectItemMenu;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_SetFocusMenuItem) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_SetFocusMenuItem");
static_assert(sizeof(WB_TestModeMenuItemBase_C_SetFocusMenuItem) == 0x000008, "Wrong size on WB_TestModeMenuItemBase_C_SetFocusMenuItem");
static_assert(offsetof(WB_TestModeMenuItemBase_C_SetFocusMenuItem, SelectItemMenu) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_SetFocusMenuItem::SelectItemMenu' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.ModifyLabelColor
// 0x00B0 (0x00B0 - 0x0000)
struct WB_TestModeMenuItemBase_C_ModifyLabelColor final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable1;                             // 0x0018(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable2;                             // 0x0028(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	bool                                          CallFunc_IsLock_result;                            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0064(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x0074(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor1;                     // 0x0088(0x0028)()
};
static_assert(alignof(WB_TestModeMenuItemBase_C_ModifyLabelColor) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_ModifyLabelColor");
static_assert(sizeof(WB_TestModeMenuItemBase_C_ModifyLabelColor) == 0x0000B0, "Wrong size on WB_TestModeMenuItemBase_C_ModifyLabelColor");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, Temp_bool_Variable) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, Temp_struct_Variable) == 0x000004, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, Temp_bool_Variable1) == 0x000014, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, Temp_struct_Variable1) == 0x000018, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, Temp_struct_Variable2) == 0x000028, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, CallFunc_IsLock_result) == 0x000060, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::CallFunc_IsLock_result' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, K2Node_Select_Default) == 0x000064, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, K2Node_Select1_Default) == 0x000074, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_ModifyLabelColor, K2Node_MakeStruct_SlateColor1) == 0x000088, "Member 'WB_TestModeMenuItemBase_C_ModifyLabelColor::K2Node_MakeStruct_SlateColor1' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.RestartBlink
// 0x0020 (0x0020 - 0x0000)
struct WB_TestModeMenuItemBase_C_RestartBlink final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_RestartBlink) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_RestartBlink");
static_assert(sizeof(WB_TestModeMenuItemBase_C_RestartBlink) == 0x000020, "Wrong size on WB_TestModeMenuItemBase_C_RestartBlink");
static_assert(offsetof(WB_TestModeMenuItemBase_C_RestartBlink, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_RestartBlink::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_RestartBlink, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WB_TestModeMenuItemBase_C_RestartBlink::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_RestartBlink, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000018, "Member 'WB_TestModeMenuItemBase_C_RestartBlink::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.AddPaddingY
// 0x0028 (0x0028 - 0x0000)
struct WB_TestModeMenuItemBase_C_AddPaddingY final
{
public:
	float                                         Top;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_AddPaddingY) == 0x000008, "Wrong alignment on WB_TestModeMenuItemBase_C_AddPaddingY");
static_assert(sizeof(WB_TestModeMenuItemBase_C_AddPaddingY) == 0x000028, "Wrong size on WB_TestModeMenuItemBase_C_AddPaddingY");
static_assert(offsetof(WB_TestModeMenuItemBase_C_AddPaddingY, Top) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_AddPaddingY::Top' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_AddPaddingY, K2Node_MakeStruct_Margin) == 0x000004, "Member 'WB_TestModeMenuItemBase_C_AddPaddingY::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_AddPaddingY, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000018, "Member 'WB_TestModeMenuItemBase_C_AddPaddingY::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemBase_C_AddPaddingY, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WB_TestModeMenuItemBase_C_AddPaddingY::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C.IsLock
// 0x0001 (0x0001 - 0x0000)
struct WB_TestModeMenuItemBase_C_IsLock final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemBase_C_IsLock) == 0x000001, "Wrong alignment on WB_TestModeMenuItemBase_C_IsLock");
static_assert(sizeof(WB_TestModeMenuItemBase_C_IsLock) == 0x000001, "Wrong size on WB_TestModeMenuItemBase_C_IsLock");
static_assert(offsetof(WB_TestModeMenuItemBase_C_IsLock, Result) == 0x000000, "Member 'WB_TestModeMenuItemBase_C_IsLock::Result' has a wrong offset!");

}

