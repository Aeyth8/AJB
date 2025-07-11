#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TestModeMenuItemSelectText

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.ExecuteUbergraph_WB_TestModeMenuItemSelectText
// 0x004C (0x004C - 0x0000)
struct WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Value;                                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText) == 0x000004, "Wrong alignment on WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText) == 0x00004C, "Wrong size on WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText, EntryPoint) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText, K2Node_Event_Value) == 0x000048, "Member 'WB_TestModeMenuItemSelectText_C_ExecuteUbergraph_WB_TestModeMenuItemSelectText::K2Node_Event_Value' has a wrong offset!");

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.SetSelectValue
// 0x0004 (0x0004 - 0x0000)
struct WB_TestModeMenuItemSelectText_C_SetSelectValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_SetSelectValue) == 0x000004, "Wrong alignment on WB_TestModeMenuItemSelectText_C_SetSelectValue");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_SetSelectValue) == 0x000004, "Wrong size on WB_TestModeMenuItemSelectText_C_SetSelectValue");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_SetSelectValue, Value) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_SetSelectValue::Value' has a wrong offset!");

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_TestModeMenuItemSelectText_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_Tick) == 0x000004, "Wrong alignment on WB_TestModeMenuItemSelectText_C_Tick");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_Tick) == 0x00003C, "Wrong size on WB_TestModeMenuItemSelectText_C_Tick");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_Tick, MyGeometry) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_TestModeMenuItemSelectText_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.ValueDown
// 0x000C (0x000C - 0x0000)
struct WB_TestModeMenuItemSelectText_C_ValueDown final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValueDown_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_ValueDown) == 0x000004, "Wrong alignment on WB_TestModeMenuItemSelectText_C_ValueDown");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_ValueDown) == 0x00000C, "Wrong size on WB_TestModeMenuItemSelectText_C_ValueDown");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueDown, ReturnValue) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_ValueDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueDown, CallFunc_Less_IntInt_ReturnValue) == 0x000001, "Member 'WB_TestModeMenuItemSelectText_C_ValueDown::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueDown, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'WB_TestModeMenuItemSelectText_C_ValueDown::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueDown, CallFunc_ValueDown_ReturnValue) == 0x000008, "Member 'WB_TestModeMenuItemSelectText_C_ValueDown::CallFunc_ValueDown_ReturnValue' has a wrong offset!");

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.ValueUp
// 0x0014 (0x0014 - 0x0000)
struct WB_TestModeMenuItemSelectText_C_ValueUp final
{
public:
	bool                                          IsMax;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValueUp_IsMax;                            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_ValueUp) == 0x000004, "Wrong alignment on WB_TestModeMenuItemSelectText_C_ValueUp");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_ValueUp) == 0x000014, "Wrong size on WB_TestModeMenuItemSelectText_C_ValueUp");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueUp, IsMax) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_ValueUp::IsMax' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueUp, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WB_TestModeMenuItemSelectText_C_ValueUp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueUp, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_TestModeMenuItemSelectText_C_ValueUp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueUp, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'WB_TestModeMenuItemSelectText_C_ValueUp::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueUp, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'WB_TestModeMenuItemSelectText_C_ValueUp::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_ValueUp, CallFunc_ValueUp_IsMax) == 0x000011, "Member 'WB_TestModeMenuItemSelectText_C_ValueUp::CallFunc_ValueUp_IsMax' has a wrong offset!");

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.IsDefaultValue
// 0x0002 (0x0002 - 0x0000)
struct WB_TestModeMenuItemSelectText_C_IsDefaultValue final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_IsDefaultValue) == 0x000001, "Wrong alignment on WB_TestModeMenuItemSelectText_C_IsDefaultValue");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_IsDefaultValue) == 0x000002, "Wrong size on WB_TestModeMenuItemSelectText_C_IsDefaultValue");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_IsDefaultValue, ReturnValue) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_IsDefaultValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_IsDefaultValue, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000001, "Member 'WB_TestModeMenuItemSelectText_C_IsDefaultValue::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WB_TestModeMenuItemSelectText.WB_TestModeMenuItemSelectText_C.GetValueText
// 0x0030 (0x0030 - 0x0000)
struct WB_TestModeMenuItemSelectText_C_GetValueText final
{
public:
	class FText                                   OutText;                                           // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0018(0x0018)()
};
static_assert(alignof(WB_TestModeMenuItemSelectText_C_GetValueText) == 0x000008, "Wrong alignment on WB_TestModeMenuItemSelectText_C_GetValueText");
static_assert(sizeof(WB_TestModeMenuItemSelectText_C_GetValueText) == 0x000030, "Wrong size on WB_TestModeMenuItemSelectText_C_GetValueText");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_GetValueText, OutText) == 0x000000, "Member 'WB_TestModeMenuItemSelectText_C_GetValueText::OutText' has a wrong offset!");
static_assert(offsetof(WB_TestModeMenuItemSelectText_C_GetValueText, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_TestModeMenuItemSelectText_C_GetValueText::CallFunc_Array_Get_Item' has a wrong offset!");

}

