#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_LandmarkPairMarker

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_LandmarkPairMarker.WB_LandmarkPairMarker_C.ExecuteUbergraph_WB_LandmarkPairMarker
// 0x0048 (0x0048 - 0x0000)
struct WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InnerScale;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker) == 0x000004, "Wrong alignment on WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker");
static_assert(sizeof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker) == 0x000048, "Wrong size on WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker");
static_assert(offsetof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker, EntryPoint) == 0x000000, "Member 'WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker, K2Node_Event_InnerScale) == 0x000040, "Member 'WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker::K2Node_Event_InnerScale' has a wrong offset!");
static_assert(offsetof(WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000044, "Member 'WB_LandmarkPairMarker_C_ExecuteUbergraph_WB_LandmarkPairMarker::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function WB_LandmarkPairMarker.WB_LandmarkPairMarker_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_LandmarkPairMarker_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_LandmarkPairMarker_C_Tick) == 0x000004, "Wrong alignment on WB_LandmarkPairMarker_C_Tick");
static_assert(sizeof(WB_LandmarkPairMarker_C_Tick) == 0x00003C, "Wrong size on WB_LandmarkPairMarker_C_Tick");
static_assert(offsetof(WB_LandmarkPairMarker_C_Tick, MyGeometry) == 0x000000, "Member 'WB_LandmarkPairMarker_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_LandmarkPairMarker_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_LandmarkPairMarker_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_LandmarkPairMarker.WB_LandmarkPairMarker_C.SetInnerScale
// 0x0004 (0x0004 - 0x0000)
struct WB_LandmarkPairMarker_C_SetInnerScale final
{
public:
	float                                         InnerScale_0;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_LandmarkPairMarker_C_SetInnerScale) == 0x000004, "Wrong alignment on WB_LandmarkPairMarker_C_SetInnerScale");
static_assert(sizeof(WB_LandmarkPairMarker_C_SetInnerScale) == 0x000004, "Wrong size on WB_LandmarkPairMarker_C_SetInnerScale");
static_assert(offsetof(WB_LandmarkPairMarker_C_SetInnerScale, InnerScale_0) == 0x000000, "Member 'WB_LandmarkPairMarker_C_SetInnerScale::InnerScale_0' has a wrong offset!");

// Function WB_LandmarkPairMarker.WB_LandmarkPairMarker_C.GetContentWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_LandmarkPairMarker_C_GetContentWidget final
{
public:
	class UWidget*                                ContentWidget;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_LandmarkPairMarker_C_GetContentWidget) == 0x000008, "Wrong alignment on WB_LandmarkPairMarker_C_GetContentWidget");
static_assert(sizeof(WB_LandmarkPairMarker_C_GetContentWidget) == 0x000008, "Wrong size on WB_LandmarkPairMarker_C_GetContentWidget");
static_assert(offsetof(WB_LandmarkPairMarker_C_GetContentWidget, ContentWidget) == 0x000000, "Member 'WB_LandmarkPairMarker_C_GetContentWidget::ContentWidget' has a wrong offset!");

// Function WB_LandmarkPairMarker.WB_LandmarkPairMarker_C.GetResizerWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_LandmarkPairMarker_C_GetResizerWidget final
{
public:
	class USizeBox*                               SizeBox;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_LandmarkPairMarker_C_GetResizerWidget) == 0x000008, "Wrong alignment on WB_LandmarkPairMarker_C_GetResizerWidget");
static_assert(sizeof(WB_LandmarkPairMarker_C_GetResizerWidget) == 0x000008, "Wrong size on WB_LandmarkPairMarker_C_GetResizerWidget");
static_assert(offsetof(WB_LandmarkPairMarker_C_GetResizerWidget, SizeBox) == 0x000000, "Member 'WB_LandmarkPairMarker_C_GetResizerWidget::SizeBox' has a wrong offset!");

// Function WB_LandmarkPairMarker.WB_LandmarkPairMarker_C.GetRetainerBoxWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_LandmarkPairMarker_C_GetRetainerBoxWidget final
{
public:
	class URetainerBox*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_LandmarkPairMarker_C_GetRetainerBoxWidget) == 0x000008, "Wrong alignment on WB_LandmarkPairMarker_C_GetRetainerBoxWidget");
static_assert(sizeof(WB_LandmarkPairMarker_C_GetRetainerBoxWidget) == 0x000008, "Wrong size on WB_LandmarkPairMarker_C_GetRetainerBoxWidget");
static_assert(offsetof(WB_LandmarkPairMarker_C_GetRetainerBoxWidget, ReturnValue) == 0x000000, "Member 'WB_LandmarkPairMarker_C_GetRetainerBoxWidget::ReturnValue' has a wrong offset!");

}

