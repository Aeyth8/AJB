#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_AIDebugEventLog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_AIDebugEventLog.ST_AIDebugEventLog
// 0x0018 (0x0018 - 0x0000)
struct FST_AIDebugEventLog final
{
public:
	struct FTimespan                              ElapsedGameTimespan_9_D5FA43F84FAA9E4F959A6881FB5E39CE; // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventTag_5_3F40E10B4FD9F9DAE52B4E9EF61F03D2;       // 0x0008(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           LogKindTag_7_52CB468C45CFB07E57365BA50BEAAC3E;     // 0x0010(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_AIDebugEventLog) == 0x000008, "Wrong alignment on FST_AIDebugEventLog");
static_assert(sizeof(FST_AIDebugEventLog) == 0x000018, "Wrong size on FST_AIDebugEventLog");
static_assert(offsetof(FST_AIDebugEventLog, ElapsedGameTimespan_9_D5FA43F84FAA9E4F959A6881FB5E39CE) == 0x000000, "Member 'FST_AIDebugEventLog::ElapsedGameTimespan_9_D5FA43F84FAA9E4F959A6881FB5E39CE' has a wrong offset!");
static_assert(offsetof(FST_AIDebugEventLog, EventTag_5_3F40E10B4FD9F9DAE52B4E9EF61F03D2) == 0x000008, "Member 'FST_AIDebugEventLog::EventTag_5_3F40E10B4FD9F9DAE52B4E9EF61F03D2' has a wrong offset!");
static_assert(offsetof(FST_AIDebugEventLog, LogKindTag_7_52CB468C45CFB07E57365BA50BEAAC3E) == 0x000010, "Member 'FST_AIDebugEventLog::LogKindTag_7_52CB468C45CFB07E57365BA50BEAAC3E' has a wrong offset!");

}

