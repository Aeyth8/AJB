#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Tutorial_GamePadGuide

#include "Basic.hpp"

#include "AJB_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_Tutorial_GamePadGuide.WB_Tutorial_GamePadGuide_C.ExecuteUbergraph_WB_Tutorial_GamePadGuide
// 0x0078 (0x0078 - 0x0000)
struct WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
	EAJBPadIconType                               K2Node_CustomEvent_PadIconType;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAJBPadIconType                               CallFunc_ConvertAJBInGamePadIconKeyAction_ReturnValue; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0028(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        K2Node_MakeArray_Array1;                           // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue1;       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue2;       // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item1;                          // 0x0054(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X1;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z1;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x006C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide) == 0x000008, "Wrong alignment on WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide");
static_assert(sizeof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide) == 0x000078, "Wrong size on WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, EntryPoint) == 0x000000, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, K2Node_MakeArray_Array) == 0x000008, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, K2Node_CustomEvent_PadIconType) == 0x000018, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::K2Node_CustomEvent_PadIconType' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_ConvertAJBInGamePadIconKeyAction_ReturnValue) == 0x000019, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_ConvertAJBInGamePadIconKeyAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000020, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_Array_Get_Item) == 0x000028, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_BreakVector_X) == 0x000034, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_BreakVector_Y) == 0x000038, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_BreakVector_Z) == 0x00003C, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, K2Node_MakeArray_Array1) == 0x000040, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000050, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_EqualEqual_FloatFloat_ReturnValue1) == 0x000051, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_EqualEqual_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_EqualEqual_FloatFloat_ReturnValue2) == 0x000052, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_EqualEqual_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_Array_Get_Item1) == 0x000054, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_BreakVector_X1) == 0x000060, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_BreakVector_X1' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_BreakVector_Y1) == 0x000064, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_BreakVector_Y1' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_BreakVector_Z1) == 0x000068, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_BreakVector_Z1' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide, CallFunc_MakeVector2D_ReturnValue) == 0x00006C, "Member 'WB_Tutorial_GamePadGuide_C_ExecuteUbergraph_WB_Tutorial_GamePadGuide::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WB_Tutorial_GamePadGuide.WB_Tutorial_GamePadGuide_C.ButtonEffectSettings
// 0x0001 (0x0001 - 0x0000)
struct WB_Tutorial_GamePadGuide_C_ButtonEffectSettings final
{
public:
	EAJBPadIconType                               PadIconType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Tutorial_GamePadGuide_C_ButtonEffectSettings) == 0x000001, "Wrong alignment on WB_Tutorial_GamePadGuide_C_ButtonEffectSettings");
static_assert(sizeof(WB_Tutorial_GamePadGuide_C_ButtonEffectSettings) == 0x000001, "Wrong size on WB_Tutorial_GamePadGuide_C_ButtonEffectSettings");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ButtonEffectSettings, PadIconType) == 0x000000, "Member 'WB_Tutorial_GamePadGuide_C_ButtonEffectSettings::PadIconType' has a wrong offset!");

// Function WB_Tutorial_GamePadGuide.WB_Tutorial_GamePadGuide_C.ConvertIndex
// 0x0002 (0x0002 - 0x0000)
struct WB_Tutorial_GamePadGuide_C_ConvertIndex final
{
public:
	EAJBPadIconType                               Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Tutorial_GamePadGuide_C_ConvertIndex) == 0x000001, "Wrong alignment on WB_Tutorial_GamePadGuide_C_ConvertIndex");
static_assert(sizeof(WB_Tutorial_GamePadGuide_C_ConvertIndex) == 0x000002, "Wrong size on WB_Tutorial_GamePadGuide_C_ConvertIndex");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ConvertIndex, Selection) == 0x000000, "Member 'WB_Tutorial_GamePadGuide_C_ConvertIndex::Selection' has a wrong offset!");
static_assert(offsetof(WB_Tutorial_GamePadGuide_C_ConvertIndex, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WB_Tutorial_GamePadGuide_C_ConvertIndex::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

