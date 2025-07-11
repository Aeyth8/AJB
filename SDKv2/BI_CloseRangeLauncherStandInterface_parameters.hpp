#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_CloseRangeLauncherStandInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BI_CloseRangeLauncherStandInterface.BI_CloseRangeLauncherStandInterface_C.GetCloseRangeLaunchedActor
// 0x0010 (0x0010 - 0x0000)
struct BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor final
{
public:
	int32                                         CloseRangeSkillNo;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LaunchedActor;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor) == 0x000008, "Wrong alignment on BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor");
static_assert(sizeof(BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor) == 0x000010, "Wrong size on BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor");
static_assert(offsetof(BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor, CloseRangeSkillNo) == 0x000000, "Member 'BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor::CloseRangeSkillNo' has a wrong offset!");
static_assert(offsetof(BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor, LaunchedActor) == 0x000008, "Member 'BI_CloseRangeLauncherStandInterface_C_GetCloseRangeLaunchedActor::LaunchedActor' has a wrong offset!");

// Function BI_CloseRangeLauncherStandInterface.BI_CloseRangeLauncherStandInterface_C.GetLaunchedActorHomeLocation
// 0x0010 (0x0010 - 0x0000)
struct BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation final
{
public:
	int32                                         CloseRangeSkillNo;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0004(0x000C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation) == 0x000004, "Wrong alignment on BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation");
static_assert(sizeof(BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation) == 0x000010, "Wrong size on BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation");
static_assert(offsetof(BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation, CloseRangeSkillNo) == 0x000000, "Member 'BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation::CloseRangeSkillNo' has a wrong offset!");
static_assert(offsetof(BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation, Location) == 0x000004, "Member 'BI_CloseRangeLauncherStandInterface_C_GetLaunchedActorHomeLocation::Location' has a wrong offset!");

}

