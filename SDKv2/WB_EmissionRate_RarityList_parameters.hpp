#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EmissionRate_RarityList

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_EmissionRate_RarityList.WB_EmissionRate_RarityList_C.ExecuteUbergraph_WB_EmissionRate_RarityList
// 0x0020 (0x0020 - 0x0000)
struct WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Set_PercentNum;                 // 0x0008(0x0018)()
};
static_assert(alignof(WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList) == 0x000008, "Wrong alignment on WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList");
static_assert(sizeof(WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList) == 0x000020, "Wrong size on WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList");
static_assert(offsetof(WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList, EntryPoint) == 0x000000, "Member 'WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList, K2Node_CustomEvent_Set_PercentNum) == 0x000008, "Member 'WB_EmissionRate_RarityList_C_ExecuteUbergraph_WB_EmissionRate_RarityList::K2Node_CustomEvent_Set_PercentNum' has a wrong offset!");

// Function WB_EmissionRate_RarityList.WB_EmissionRate_RarityList_C.SetTextPercentNum
// 0x0018 (0x0018 - 0x0000)
struct WB_EmissionRate_RarityList_C_SetTextPercentNum final
{
public:
	class FText                                   Set_PercentNum_0;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_EmissionRate_RarityList_C_SetTextPercentNum) == 0x000008, "Wrong alignment on WB_EmissionRate_RarityList_C_SetTextPercentNum");
static_assert(sizeof(WB_EmissionRate_RarityList_C_SetTextPercentNum) == 0x000018, "Wrong size on WB_EmissionRate_RarityList_C_SetTextPercentNum");
static_assert(offsetof(WB_EmissionRate_RarityList_C_SetTextPercentNum, Set_PercentNum_0) == 0x000000, "Member 'WB_EmissionRate_RarityList_C_SetTextPercentNum::Set_PercentNum_0' has a wrong offset!");

// Function WB_EmissionRate_RarityList.WB_EmissionRate_RarityList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_EmissionRate_RarityList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_EmissionRate_RarityList_C_PreConstruct) == 0x000001, "Wrong alignment on WB_EmissionRate_RarityList_C_PreConstruct");
static_assert(sizeof(WB_EmissionRate_RarityList_C_PreConstruct) == 0x000001, "Wrong size on WB_EmissionRate_RarityList_C_PreConstruct");
static_assert(offsetof(WB_EmissionRate_RarityList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_EmissionRate_RarityList_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

