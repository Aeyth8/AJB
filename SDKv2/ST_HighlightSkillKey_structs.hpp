#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_HighlightSkillKey

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "AJB_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_HighlightSkillKey.ST_HighlightSkillKey
// 0x0018 (0x0018 - 0x0000)
struct FST_HighlightSkillKey final
{
public:
	float                                         Time_8_A2305C9549FBAF92083E449A7B39F45C;           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           SkillTag_19_54EF044C460E6D2A9C90AAA082960423;      // 0x0008(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EAJBSkillType                                 SkillType_22_5E34F38B4257475F8DAD6D8C8D4043D8;     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnStart_27_DE85A1F04740A3BAB817FE9925B2AC85;       // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_HighlightSkillKey) == 0x000008, "Wrong alignment on FST_HighlightSkillKey");
static_assert(sizeof(FST_HighlightSkillKey) == 0x000018, "Wrong size on FST_HighlightSkillKey");
static_assert(offsetof(FST_HighlightSkillKey, Time_8_A2305C9549FBAF92083E449A7B39F45C) == 0x000000, "Member 'FST_HighlightSkillKey::Time_8_A2305C9549FBAF92083E449A7B39F45C' has a wrong offset!");
static_assert(offsetof(FST_HighlightSkillKey, SkillTag_19_54EF044C460E6D2A9C90AAA082960423) == 0x000008, "Member 'FST_HighlightSkillKey::SkillTag_19_54EF044C460E6D2A9C90AAA082960423' has a wrong offset!");
static_assert(offsetof(FST_HighlightSkillKey, SkillType_22_5E34F38B4257475F8DAD6D8C8D4043D8) == 0x000010, "Member 'FST_HighlightSkillKey::SkillType_22_5E34F38B4257475F8DAD6D8C8D4043D8' has a wrong offset!");
static_assert(offsetof(FST_HighlightSkillKey, OnStart_27_DE85A1F04740A3BAB817FE9925B2AC85) == 0x000011, "Member 'FST_HighlightSkillKey::OnStart_27_DE85A1F04740A3BAB817FE9925B2AC85' has a wrong offset!");

}

