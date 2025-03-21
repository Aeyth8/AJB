#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ErrorWIndow

#include "Basic.hpp"

#include "AJB_structs.hpp"


namespace SDK::Params
{

// Function WB_ErrorWIndow.WB_ErrorWindow_C.OnFinishedConfirmDispatcher__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature final
{
public:
	EAJBConfirmResult                             Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature) == 0x000001, "Wrong alignment on WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature");
static_assert(sizeof(WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature) == 0x000001, "Wrong size on WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature");
static_assert(offsetof(WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature, Result) == 0x000000, "Member 'WB_ErrorWindow_C_OnFinishedConfirmDispatcher__DelegateSignature::Result' has a wrong offset!");

// Function WB_ErrorWIndow.WB_ErrorWindow_C.ExecuteUbergraph_WB_ErrorWindow
// 0x0078 (0x0078 - 0x0000)
struct WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Text1;                          // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_Title;                          // 0x0020(0x0018)()
	class FText                                   K2Node_CustomEvent_text;                           // 0x0038(0x0018)()
	bool                                          K2Node_CustomEvent_ErrorSoud;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UAkComponent*                           CallFunc_RequestWwiseEventOnLocal_AkComponent;     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow) == 0x000008, "Wrong alignment on WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow");
static_assert(sizeof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow) == 0x000078, "Wrong size on WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, EntryPoint) == 0x000000, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, K2Node_CustomEvent_Text1) == 0x000008, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::K2Node_CustomEvent_Text1' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, K2Node_CustomEvent_Title) == 0x000020, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::K2Node_CustomEvent_Title' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, K2Node_CustomEvent_text) == 0x000038, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::K2Node_CustomEvent_text' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, K2Node_CustomEvent_ErrorSoud) == 0x000050, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::K2Node_CustomEvent_ErrorSoud' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, CallFunc_RequestWwiseEventOnLocal_AkComponent) == 0x000068, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::CallFunc_RequestWwiseEventOnLocal_AkComponent' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow, CallFunc_IsValid_ReturnValue1) == 0x000071, "Member 'WB_ErrorWindow_C_ExecuteUbergraph_WB_ErrorWindow::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function WB_ErrorWIndow.WB_ErrorWindow_C.ShowTitle
// 0x0038 (0x0038 - 0x0000)
struct WB_ErrorWindow_C_ShowTitle final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Text;                                              // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ErrorSoud;                                         // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ErrorWindow_C_ShowTitle) == 0x000008, "Wrong alignment on WB_ErrorWindow_C_ShowTitle");
static_assert(sizeof(WB_ErrorWindow_C_ShowTitle) == 0x000038, "Wrong size on WB_ErrorWindow_C_ShowTitle");
static_assert(offsetof(WB_ErrorWindow_C_ShowTitle, Title) == 0x000000, "Member 'WB_ErrorWindow_C_ShowTitle::Title' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ShowTitle, Text) == 0x000018, "Member 'WB_ErrorWindow_C_ShowTitle::Text' has a wrong offset!");
static_assert(offsetof(WB_ErrorWindow_C_ShowTitle, ErrorSoud) == 0x000030, "Member 'WB_ErrorWindow_C_ShowTitle::ErrorSoud' has a wrong offset!");

// Function WB_ErrorWIndow.WB_ErrorWindow_C.ShowTextOnly
// 0x0018 (0x0018 - 0x0000)
struct WB_ErrorWindow_C_ShowTextOnly final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_ErrorWindow_C_ShowTextOnly) == 0x000008, "Wrong alignment on WB_ErrorWindow_C_ShowTextOnly");
static_assert(sizeof(WB_ErrorWindow_C_ShowTextOnly) == 0x000018, "Wrong size on WB_ErrorWindow_C_ShowTextOnly");
static_assert(offsetof(WB_ErrorWindow_C_ShowTextOnly, Text) == 0x000000, "Member 'WB_ErrorWindow_C_ShowTextOnly::Text' has a wrong offset!");

// Function WB_ErrorWIndow.WB_ErrorWindow_C.GetButtonResult
// 0x0001 (0x0001 - 0x0000)
struct WB_ErrorWindow_C_GetButtonResult final
{
public:
	EAJBConfirmResult                             Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ErrorWindow_C_GetButtonResult) == 0x000001, "Wrong alignment on WB_ErrorWindow_C_GetButtonResult");
static_assert(sizeof(WB_ErrorWindow_C_GetButtonResult) == 0x000001, "Wrong size on WB_ErrorWindow_C_GetButtonResult");
static_assert(offsetof(WB_ErrorWindow_C_GetButtonResult, Result) == 0x000000, "Member 'WB_ErrorWindow_C_GetButtonResult::Result' has a wrong offset!");

// Function WB_ErrorWIndow.WB_ErrorWindow_C.IsModeless
// 0x0001 (0x0001 - 0x0000)
struct WB_ErrorWindow_C_IsModeless final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ErrorWindow_C_IsModeless) == 0x000001, "Wrong alignment on WB_ErrorWindow_C_IsModeless");
static_assert(sizeof(WB_ErrorWindow_C_IsModeless) == 0x000001, "Wrong size on WB_ErrorWindow_C_IsModeless");
static_assert(offsetof(WB_ErrorWindow_C_IsModeless, ReturnValue) == 0x000000, "Member 'WB_ErrorWindow_C_IsModeless::ReturnValue' has a wrong offset!");

}

