#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SequencerSubtitle

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SequencerSubtitle.BP_SequencerSubtitle_C.ExecuteUbergraph_BP_SequencerSubtitle
// 0x0050 (0x0050 - 0x0000)
struct BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Parse_ParsedTxt;                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWB_DBISequencerSubtitler_C*            CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle) == 0x000008, "Wrong alignment on BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle");
static_assert(sizeof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle) == 0x000050, "Wrong size on BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, EntryPoint) == 0x000000, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, CallFunc_Parse_ParsedTxt) == 0x000018, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::CallFunc_Parse_ParsedTxt' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, K2Node_Event_EndPlayReason) == 0x000048, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_SequencerSubtitle_C_ExecuteUbergraph_BP_SequencerSubtitle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_SequencerSubtitle.BP_SequencerSubtitle_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_SequencerSubtitle_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SequencerSubtitle_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_SequencerSubtitle_C_ReceiveEndPlay");
static_assert(sizeof(BP_SequencerSubtitle_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_SequencerSubtitle_C_ReceiveEndPlay");
static_assert(offsetof(BP_SequencerSubtitle_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_SequencerSubtitle_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_SequencerSubtitle.BP_SequencerSubtitle_C.Parse
// 0x0030 (0x0030 - 0x0000)
struct BP_SequencerSubtitle_C_Parse final
{
public:
	class FString                                 Source;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ParsedTxt;                                         // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SequencerSubtitle_C_Parse) == 0x000008, "Wrong alignment on BP_SequencerSubtitle_C_Parse");
static_assert(sizeof(BP_SequencerSubtitle_C_Parse) == 0x000030, "Wrong size on BP_SequencerSubtitle_C_Parse");
static_assert(offsetof(BP_SequencerSubtitle_C_Parse, Source) == 0x000000, "Member 'BP_SequencerSubtitle_C_Parse::Source' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_Parse, ParsedTxt) == 0x000010, "Member 'BP_SequencerSubtitle_C_Parse::ParsedTxt' has a wrong offset!");
static_assert(offsetof(BP_SequencerSubtitle_C_Parse, CallFunc_Replace_ReturnValue) == 0x000020, "Member 'BP_SequencerSubtitle_C_Parse::CallFunc_Replace_ReturnValue' has a wrong offset!");

}

