#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_SkillInfo

#include "Basic.hpp"

#include "AJB_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_SkillInfo.ST_SkillInfo
// 0x0002 (0x0002 - 0x0000)
struct FST_SkillInfo final
{
public:
	EAJBSkillType                                 SkillType_2_B9EC677A444341182E33CC8462504E47;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLongPressInteract_6_47923CF048E7C3061B133686AA6B1FD8; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_SkillInfo) == 0x000001, "Wrong alignment on FST_SkillInfo");
static_assert(sizeof(FST_SkillInfo) == 0x000002, "Wrong size on FST_SkillInfo");
static_assert(offsetof(FST_SkillInfo, SkillType_2_B9EC677A444341182E33CC8462504E47) == 0x000000, "Member 'FST_SkillInfo::SkillType_2_B9EC677A444341182E33CC8462504E47' has a wrong offset!");
static_assert(offsetof(FST_SkillInfo, bLongPressInteract_6_47923CF048E7C3061B133686AA6B1FD8) == 0x000001, "Member 'FST_SkillInfo::bLongPressInteract_6_47923CF048E7C3061B133686AA6B1FD8' has a wrong offset!");

}

