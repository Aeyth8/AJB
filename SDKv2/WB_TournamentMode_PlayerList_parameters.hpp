#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TournamentMode_PlayerList

#include "Basic.hpp"

#include "ST_ShopCompetitionTeamInfo_structs.hpp"
#include "AJB_structs.hpp"
#include "ST_ShopCompetitionUICharaParam_structs.hpp"
#include "ST_ShopCompetitionUICharaPollingParam_structs.hpp"


namespace SDK::Params
{

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.OnClickedPlayerDetailButton__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature final
{
public:
	int32                                         PlayerID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature) == 0x000004, "Wrong alignment on WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature) == 0x000004, "Wrong size on WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature, PlayerID) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_OnClickedPlayerDetailButton__DelegateSignature::PlayerID' has a wrong offset!");

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.ExecuteUbergraph_WB_TournamentMode_PlayerList
// 0x00B8 (0x00B8 - 0x0000)
struct WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_TournamentMode_PlayerDetail_C*      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable1;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable2;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PlayerID;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWB_TournamentMode_PlayerDetail_C*> K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	struct FST_ShopCompetitionUICharaParam        K2Node_CustomEvent_CharaParam;                     // 0x0050(0x0020)(HasGetValueTypeHash)
	class UWB_TournamentMode_PlayerDetail_C*      CallFunc_Array_Get_Item1;                          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F[0x1];                                       // 0x007F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable2;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopCompetitionUICharaPollingParam K2Node_CustomEvent_PollingCharaParam;              // 0x008C(0x0008)(HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 PlayerID)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UWB_TournamentMode_PlayerDetail_C*      CallFunc_Array_Get_Item2;                          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue1;                  // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList) == 0x000008, "Wrong alignment on WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList) == 0x0000B8, "Wrong size on WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, EntryPoint) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_int_Array_Index_Variable1) == 0x00001C, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Array_Get_Item) == 0x000020, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_int_Loop_Counter_Variable1) == 0x000028, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Add_IntInt_ReturnValue1) == 0x00002C, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_bool_True_if_break_was_hit_Variable1) == 0x000030, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_bool_True_if_break_was_hit_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_int_Array_Index_Variable2) == 0x000034, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_int_Array_Index_Variable2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Not_PreBool_ReturnValue1) == 0x000038, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, K2Node_CustomEvent_PlayerID) == 0x00003C, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::K2Node_CustomEvent_PlayerID' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, K2Node_MakeArray_Array) == 0x000040, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, K2Node_CustomEvent_CharaParam) == 0x000050, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::K2Node_CustomEvent_CharaParam' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Array_Get_Item1) == 0x000070, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Array_Length_ReturnValue1) == 0x000078, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_BooleanAND_ReturnValue) == 0x00007D, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00007E, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, Temp_int_Loop_Counter_Variable2) == 0x000080, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::Temp_int_Loop_Counter_Variable2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Less_IntInt_ReturnValue1) == 0x000084, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Add_IntInt_ReturnValue2) == 0x000088, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, K2Node_CustomEvent_PollingCharaParam) == 0x00008C, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::K2Node_CustomEvent_PollingCharaParam' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, K2Node_CreateDelegate_OutputDelegate) == 0x000098, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Array_Get_Item2) == 0x0000A8, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Array_Length_ReturnValue2) == 0x0000B0, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_Less_IntInt_ReturnValue2) == 0x0000B4, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_BooleanAND_ReturnValue1) == 0x0000B5, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_BooleanAND_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList, CallFunc_EqualEqual_IntInt_ReturnValue1) == 0x0000B6, "Member 'WB_TournamentMode_PlayerList_C_ExecuteUbergraph_WB_TournamentMode_PlayerList::CallFunc_EqualEqual_IntInt_ReturnValue1' has a wrong offset!");

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.UpdatePollingCharaParam
// 0x0008 (0x0008 - 0x0000)
struct WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam final
{
public:
	struct FST_ShopCompetitionUICharaPollingParam PollingCharaParam;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam) == 0x000004, "Wrong alignment on WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam) == 0x000008, "Wrong size on WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam, PollingCharaParam) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_UpdatePollingCharaParam::PollingCharaParam' has a wrong offset!");

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.UpdateCharaParam
// 0x0020 (0x0020 - 0x0000)
struct WB_TournamentMode_PlayerList_C_UpdateCharaParam final
{
public:
	struct FST_ShopCompetitionUICharaParam        CharaParam;                                        // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_UpdateCharaParam) == 0x000004, "Wrong alignment on WB_TournamentMode_PlayerList_C_UpdateCharaParam");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_UpdateCharaParam) == 0x000020, "Wrong size on WB_TournamentMode_PlayerList_C_UpdateCharaParam");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_UpdateCharaParam, CharaParam) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_UpdateCharaParam::CharaParam' has a wrong offset!");

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.OnClicked
// 0x0004 (0x0004 - 0x0000)
struct WB_TournamentMode_PlayerList_C_OnClicked final
{
public:
	int32                                         PlayerID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_OnClicked) == 0x000004, "Wrong alignment on WB_TournamentMode_PlayerList_C_OnClicked");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_OnClicked) == 0x000004, "Wrong size on WB_TournamentMode_PlayerList_C_OnClicked");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_OnClicked, PlayerID) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_OnClicked::PlayerID' has a wrong offset!");

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.GetPlayerList
// 0x0188 (0x0188 - 0x0000)
struct WB_TournamentMode_PlayerList_C_GetPlayerList final
{
public:
	TArray<struct FST_ShopCompetitionTeamInfo>    TeamInfoList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMatchingPlayerInfo>            PlayerInfoList;                                    // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor)
	bool                                          bLExist;                                           // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMatchingPlayerInfo>            LPlayers;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopCompetitionTeamInfo            CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAJBGameInstance_bSuccess;              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBGameInstance_C*                  CallFunc_GetAJBGameInstance_AJB_Game_Instance;     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMatchingPlayerInfo                    CallFunc_TryGetMatchingPlayerInfoByPlayerID_Out;   // 0x0060(0x0088)()
	bool                                          CallFunc_TryGetMatchingPlayerInfoByPlayerID_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchingPlayerInfo                    CallFunc_TryGetMatchingPlayerInfoByPlayerID_Out1;  // 0x00F0(0x0088)()
	bool                                          CallFunc_TryGetMatchingPlayerInfoByPlayerID_ReturnValue1; // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue1;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_GetPlayerList) == 0x000008, "Wrong alignment on WB_TournamentMode_PlayerList_C_GetPlayerList");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_GetPlayerList) == 0x000188, "Wrong size on WB_TournamentMode_PlayerList_C_GetPlayerList");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, TeamInfoList) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::TeamInfoList' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, PlayerInfoList) == 0x000010, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::PlayerInfoList' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, bLExist) == 0x000020, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::bLExist' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, LPlayers) == 0x000028, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::LPlayers' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_Array_Get_Item) == 0x000044, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_GetAJBGameInstance_bSuccess) == 0x000054, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_GetAJBGameInstance_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_GetAJBGameInstance_AJB_Game_Instance) == 0x000058, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_GetAJBGameInstance_AJB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_TryGetMatchingPlayerInfoByPlayerID_Out) == 0x000060, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_TryGetMatchingPlayerInfoByPlayerID_Out' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_TryGetMatchingPlayerInfoByPlayerID_ReturnValue) == 0x0000E8, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_TryGetMatchingPlayerInfoByPlayerID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_TryGetMatchingPlayerInfoByPlayerID_Out1) == 0x0000F0, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_TryGetMatchingPlayerInfoByPlayerID_Out1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_TryGetMatchingPlayerInfoByPlayerID_ReturnValue1) == 0x000178, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_TryGetMatchingPlayerInfoByPlayerID_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_Array_Add_ReturnValue) == 0x00017C, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_GetPlayerList, CallFunc_Array_Add_ReturnValue1) == 0x000180, "Member 'WB_TournamentMode_PlayerList_C_GetPlayerList::CallFunc_Array_Add_ReturnValue1' has a wrong offset!");

// Function WB_TournamentMode_PlayerList.WB_TournamentMode_PlayerList_C.SetupPlayerList
// 0x0108 (0x0108 - 0x0000)
struct WB_TournamentMode_PlayerList_C_SetupPlayerList final
{
public:
	TArray<struct FST_ShopCompetitionTeamInfo>    TeamInfoList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         Temp_LastPairNumber;                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Temp_FoundTeamHostUserIDs;                         // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMatchingPlayerInfo>            CallFunc_GetPlayerList_PlayerInfoList;             // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchingPlayerInfo                    CallFunc_Array_Get_Item;                           // 0x0050(0x0088)()
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_TournamentMode_PlayerDetail_C*      CallFunc_Array_Get_Item1;                          // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_TournamentMode_PlayerDetail_C*      CallFunc_Array_Get_Item2;                          // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_TournamentMode_PlayerList_C_SetupPlayerList) == 0x000008, "Wrong alignment on WB_TournamentMode_PlayerList_C_SetupPlayerList");
static_assert(sizeof(WB_TournamentMode_PlayerList_C_SetupPlayerList) == 0x000108, "Wrong size on WB_TournamentMode_PlayerList_C_SetupPlayerList");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, TeamInfoList) == 0x000000, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::TeamInfoList' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, Temp_LastPairNumber) == 0x000010, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::Temp_LastPairNumber' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, Temp_FoundTeamHostUserIDs) == 0x000018, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::Temp_FoundTeamHostUserIDs' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_GetPlayerList_PlayerInfoList) == 0x000028, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_GetPlayerList_PlayerInfoList' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, Temp_int_Array_Index_Variable) == 0x000044, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, Temp_int_Array_Index_Variable1) == 0x000048, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Array_Get_Item) == 0x000050, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, Temp_int_Loop_Counter_Variable1) == 0x0000D8, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Array_Get_Item1) == 0x0000E0, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Add_IntInt_ReturnValue1) == 0x0000EC, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000F0, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Array_Get_Item2) == 0x0000F8, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Array_Length_ReturnValue1) == 0x000100, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_TournamentMode_PlayerList_C_SetupPlayerList, CallFunc_Less_IntInt_ReturnValue1) == 0x000104, "Member 'WB_TournamentMode_PlayerList_C_SetupPlayerList::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");

}

