#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharaSelectList

#include "Basic.hpp"

#include "AJB_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_CharaSelectList.WB_CharaSelectList_C.OnClickedChara__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct WB_CharaSelectList_C_OnClickedChara__DelegateSignature final
{
public:
	struct FAJBCharacterInfo                      ButtonCharacterInfo;                               // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_CharaSelectList_C_OnClickedChara__DelegateSignature) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_OnClickedChara__DelegateSignature");
static_assert(sizeof(WB_CharaSelectList_C_OnClickedChara__DelegateSignature) == 0x0000E0, "Wrong size on WB_CharaSelectList_C_OnClickedChara__DelegateSignature");
static_assert(offsetof(WB_CharaSelectList_C_OnClickedChara__DelegateSignature, ButtonCharacterInfo) == 0x000000, "Member 'WB_CharaSelectList_C_OnClickedChara__DelegateSignature::ButtonCharacterInfo' has a wrong offset!");

// Function WB_CharaSelectList.WB_CharaSelectList_C.ExecuteUbergraph_WB_CharaSelectList
// 0x0040 (0x0040 - 0x0000)
struct WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CharaSelectButton_C*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_CharaSelectButton_C*                CallFunc_Array_Get_Item1;                          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList");
static_assert(sizeof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList) == 0x000040, "Wrong size on WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, EntryPoint) == 0x000000, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, Temp_int_Array_Index_Variable1) == 0x000010, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, Temp_int_Loop_Counter_Variable1) == 0x000014, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Add_IntInt_ReturnValue1) == 0x000020, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Array_Get_Item1) == 0x000030, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Array_Length_ReturnValue1) == 0x000038, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList, CallFunc_Less_IntInt_ReturnValue1) == 0x00003C, "Member 'WB_CharaSelectList_C_ExecuteUbergraph_WB_CharaSelectList::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");

// Function WB_CharaSelectList.WB_CharaSelectList_C.CreateButtonWidgets
// 0x01A8 (0x01A8 - 0x0000)
struct WB_CharaSelectList_C_CreateButtonWidgets final
{
public:
	class UCanvasPanelSlot*                       LCanvasSlot;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharacterInfoByCharaSelectIndex_bFound; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAJBCharacterInfo                      CallFunc_GetCharacterInfoByCharaSelectIndex_CharacterInfo; // 0x0020(0x00E0)()
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAvailableCharacter_bAvailable;          // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0128(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_CharaSelectButton_C*                CallFunc_Array_Get_Item;                           // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0154(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x016C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_Array_Get_Item1;                          // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_CharaSelectButton_C*                CallFunc_Create_ReturnValue;                       // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue1;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CharaSelectList_C_CreateButtonWidgets) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_CreateButtonWidgets");
static_assert(sizeof(WB_CharaSelectList_C_CreateButtonWidgets) == 0x0001A8, "Wrong size on WB_CharaSelectList_C_CreateButtonWidgets");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, LCanvasSlot) == 0x000000, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::LCanvasSlot' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, Temp_int_Array_Index_Variable1) == 0x000010, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_GetCharacterInfoByCharaSelectIndex_bFound) == 0x000018, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_GetCharacterInfoByCharaSelectIndex_bFound' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_GetCharacterInfoByCharaSelectIndex_CharacterInfo) == 0x000020, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_GetCharacterInfoByCharaSelectIndex_CharacterInfo' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Add_IntInt_ReturnValue1) == 0x000100, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_IsAvailableCharacter_bAvailable) == 0x000104, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_IsAvailableCharacter_bAvailable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, K2Node_CreateDelegate_OutputDelegate) == 0x000108, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, K2Node_CreateDelegate_OutputDelegate1) == 0x000118, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000128, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Length_ReturnValue) == 0x000138, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Length_ReturnValue1) == 0x00013C, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, Temp_int_Loop_Counter_Variable1) == 0x000140, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Get_Item) == 0x000148, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_GetDesiredSize_ReturnValue) == 0x000154, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Add_IntInt_ReturnValue2) == 0x00015C, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_BreakVector2D_X) == 0x000160, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_BreakVector2D_Y) == 0x000164, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000168, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_MakeVector2D_ReturnValue) == 0x00016C, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Get_Item1) == 0x000178, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Length_ReturnValue2) == 0x000180, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Create_ReturnValue) == 0x000188, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Less_IntInt_ReturnValue1) == 0x000190, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Add_ReturnValue) == 0x000194, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_AddChildToCanvas_ReturnValue) == 0x000198, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_CreateButtonWidgets, CallFunc_Array_Add_ReturnValue1) == 0x0001A0, "Member 'WB_CharaSelectList_C_CreateButtonWidgets::CallFunc_Array_Add_ReturnValue1' has a wrong offset!");

// Function WB_CharaSelectList.WB_CharaSelectList_C.OnClickedButton
// 0x0020 (0x0020 - 0x0000)
struct WB_CharaSelectList_C_OnClickedButton final
{
public:
	class UAJBButtonWidget*                       TargetWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAJBButton*                             TargetButton;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CharaSelectButton_C*                K2Node_DynamicCast_AsWB_Chara_Select_Button;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_CharaSelectList_C_OnClickedButton) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_OnClickedButton");
static_assert(sizeof(WB_CharaSelectList_C_OnClickedButton) == 0x000020, "Wrong size on WB_CharaSelectList_C_OnClickedButton");
static_assert(offsetof(WB_CharaSelectList_C_OnClickedButton, TargetWidget) == 0x000000, "Member 'WB_CharaSelectList_C_OnClickedButton::TargetWidget' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_OnClickedButton, TargetButton) == 0x000008, "Member 'WB_CharaSelectList_C_OnClickedButton::TargetButton' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_OnClickedButton, K2Node_DynamicCast_AsWB_Chara_Select_Button) == 0x000010, "Member 'WB_CharaSelectList_C_OnClickedButton::K2Node_DynamicCast_AsWB_Chara_Select_Button' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_OnClickedButton, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_CharaSelectList_C_OnClickedButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_CharaSelectList.WB_CharaSelectList_C.GetAllButtons
// 0x0020 (0x0020 - 0x0000)
struct WB_CharaSelectList_C_GetAllButtons final
{
public:
	TArray<class UWB_CharaSelectButton_C*>        Buttons_0;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor)
	TArray<class UWB_CharaSelectButton_C*>        LButtons;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
};
static_assert(alignof(WB_CharaSelectList_C_GetAllButtons) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_GetAllButtons");
static_assert(sizeof(WB_CharaSelectList_C_GetAllButtons) == 0x000020, "Wrong size on WB_CharaSelectList_C_GetAllButtons");
static_assert(offsetof(WB_CharaSelectList_C_GetAllButtons, Buttons_0) == 0x000000, "Member 'WB_CharaSelectList_C_GetAllButtons::Buttons_0' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetAllButtons, LButtons) == 0x000010, "Member 'WB_CharaSelectList_C_GetAllButtons::LButtons' has a wrong offset!");

// Function WB_CharaSelectList.WB_CharaSelectList_C.IsAvailableCharacter
// 0x0100 (0x0100 - 0x0000)
struct WB_CharaSelectList_C_IsAvailableCharacter final
{
public:
	struct FAJBCharacterInfo                      CheckCharacterInfo;                                // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bAvailable;                                        // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LCanvasSlot;                                       // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAvailableAllCharacters_ReturnValue;    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShipping_ReturnValue;                   // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsForNegotiations_ReturnValue;            // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x00F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue3;                  // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_CharaSelectList_C_IsAvailableCharacter) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_IsAvailableCharacter");
static_assert(sizeof(WB_CharaSelectList_C_IsAvailableCharacter) == 0x000100, "Wrong size on WB_CharaSelectList_C_IsAvailableCharacter");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CheckCharacterInfo) == 0x000000, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CheckCharacterInfo' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, bAvailable) == 0x0000E0, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::bAvailable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, LCanvasSlot) == 0x0000E8, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::LCanvasSlot' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_GetAvailableAllCharacters_ReturnValue) == 0x0000F0, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_GetAvailableAllCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_Not_PreBool_ReturnValue) == 0x0000F1, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x0000F2, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000F3, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_IsShipping_ReturnValue) == 0x0000F4, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_IsShipping_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_BooleanAND_ReturnValue) == 0x0000F5, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_IsForNegotiations_ReturnValue) == 0x0000F6, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_IsForNegotiations_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_Not_PreBool_ReturnValue1) == 0x0000F7, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_BooleanAND_ReturnValue1) == 0x0000F8, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F9, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_BooleanAND_ReturnValue2) == 0x0000FA, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_IsAvailableCharacter, CallFunc_BooleanAND_ReturnValue3) == 0x0000FB, "Member 'WB_CharaSelectList_C_IsAvailableCharacter::CallFunc_BooleanAND_ReturnValue3' has a wrong offset!");

// Function WB_CharaSelectList.WB_CharaSelectList_C.GetCharacterInfoByCharaSelectIndex
// 0x0208 (0x0208 - 0x0000)
struct WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex final
{
public:
	int32                                         CharaSelectIndex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFound;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAJBCharacterInfo                      CharacterInfo;                                     // 0x0008(0x00E0)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00F8(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAJBCharacterInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0120(0x00E0)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex) == 0x000008, "Wrong alignment on WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex");
static_assert(sizeof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex) == 0x000208, "Wrong size on WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CharaSelectIndex) == 0x000000, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CharaSelectIndex' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, bFound) == 0x000004, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::bFound' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CharacterInfo) == 0x000008, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CharacterInfo' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, Temp_int_Array_Index_Variable) == 0x0000E8, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, Temp_int_Loop_Counter_Variable) == 0x0000EC, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000F8, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_Array_Get_Item) == 0x000110, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_GetDataTableRowFromName_OutRow) == 0x000120, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000200, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000201, "Member 'WB_CharaSelectList_C_GetCharacterInfoByCharaSelectIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

