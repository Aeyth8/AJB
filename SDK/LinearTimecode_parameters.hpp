#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LinearTimecode

#include "Basic.hpp"

#include "LinearTimecode_structs.hpp"


namespace SDK::Params
{

// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// 0x0020 (0x0020 - 0x0000)
struct LinearTimecodeComponent_GetDropTimeCodeFrameNumber final
{
public:
	struct FDropTimecode                          Timecode;                                          // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         FrameNumber;                                       // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LinearTimecodeComponent_GetDropTimeCodeFrameNumber) == 0x000004, "Wrong alignment on LinearTimecodeComponent_GetDropTimeCodeFrameNumber");
static_assert(sizeof(LinearTimecodeComponent_GetDropTimeCodeFrameNumber) == 0x000020, "Wrong size on LinearTimecodeComponent_GetDropTimeCodeFrameNumber");
static_assert(offsetof(LinearTimecodeComponent_GetDropTimeCodeFrameNumber, Timecode) == 0x000000, "Member 'LinearTimecodeComponent_GetDropTimeCodeFrameNumber::Timecode' has a wrong offset!");
static_assert(offsetof(LinearTimecodeComponent_GetDropTimeCodeFrameNumber, FrameNumber) == 0x00001C, "Member 'LinearTimecodeComponent_GetDropTimeCodeFrameNumber::FrameNumber' has a wrong offset!");

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// 0x003C (0x003C - 0x0000)
struct LinearTimecodeComponent_SetDropTimecodeFrameNumber final
{
public:
	struct FDropTimecode                          Timecode;                                          // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         FrameNumber;                                       // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDropTimecode                          OutTimecode;                                       // 0x0020(0x001C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LinearTimecodeComponent_SetDropTimecodeFrameNumber) == 0x000004, "Wrong alignment on LinearTimecodeComponent_SetDropTimecodeFrameNumber");
static_assert(sizeof(LinearTimecodeComponent_SetDropTimecodeFrameNumber) == 0x00003C, "Wrong size on LinearTimecodeComponent_SetDropTimecodeFrameNumber");
static_assert(offsetof(LinearTimecodeComponent_SetDropTimecodeFrameNumber, Timecode) == 0x000000, "Member 'LinearTimecodeComponent_SetDropTimecodeFrameNumber::Timecode' has a wrong offset!");
static_assert(offsetof(LinearTimecodeComponent_SetDropTimecodeFrameNumber, FrameNumber) == 0x00001C, "Member 'LinearTimecodeComponent_SetDropTimecodeFrameNumber::FrameNumber' has a wrong offset!");
static_assert(offsetof(LinearTimecodeComponent_SetDropTimecodeFrameNumber, OutTimecode) == 0x000020, "Member 'LinearTimecodeComponent_SetDropTimecodeFrameNumber::OutTimecode' has a wrong offset!");

// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// 0x0004 (0x0004 - 0x0000)
struct LinearTimecodeComponent_GetDropFrameNumber final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LinearTimecodeComponent_GetDropFrameNumber) == 0x000004, "Wrong alignment on LinearTimecodeComponent_GetDropFrameNumber");
static_assert(sizeof(LinearTimecodeComponent_GetDropFrameNumber) == 0x000004, "Wrong size on LinearTimecodeComponent_GetDropFrameNumber");
static_assert(offsetof(LinearTimecodeComponent_GetDropFrameNumber, ReturnValue) == 0x000000, "Member 'LinearTimecodeComponent_GetDropFrameNumber::ReturnValue' has a wrong offset!");

// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// 0x0030 (0x0030 - 0x0000)
struct DropTimecodeToStringConversion_Conv_DropTimecodeToString final
{
public:
	struct FDropTimecode                          InTimecode;                                        // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(DropTimecodeToStringConversion_Conv_DropTimecodeToString) == 0x000008, "Wrong alignment on DropTimecodeToStringConversion_Conv_DropTimecodeToString");
static_assert(sizeof(DropTimecodeToStringConversion_Conv_DropTimecodeToString) == 0x000030, "Wrong size on DropTimecodeToStringConversion_Conv_DropTimecodeToString");
static_assert(offsetof(DropTimecodeToStringConversion_Conv_DropTimecodeToString, InTimecode) == 0x000000, "Member 'DropTimecodeToStringConversion_Conv_DropTimecodeToString::InTimecode' has a wrong offset!");
static_assert(offsetof(DropTimecodeToStringConversion_Conv_DropTimecodeToString, ReturnValue) == 0x000020, "Member 'DropTimecodeToStringConversion_Conv_DropTimecodeToString::ReturnValue' has a wrong offset!");

}

