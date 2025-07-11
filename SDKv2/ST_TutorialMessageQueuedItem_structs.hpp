#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_TutorialMessageQueuedItem

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "AJB_structs.hpp"
#include "ETutorialType_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_TutorialMessageQueuedItem.ST_TutorialMessageQueuedItem
// 0x0020 (0x0020 - 0x0000)
struct FST_TutorialMessageQueuedItem final
{
public:
	struct FGameplayTag                           MessageTag_5_874A75B844920263ED0E62802073639A;     // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 TutorialType_11_06F6CE5645E227D4E39174BF9712083A;  // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntParam_4_744EB4B34AFEB725243FA08270051E0C;       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DisplayTime_8_FD4ADE7C49487C12171F47A5143F4CA5;    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnablePadIcon_13_E5069E754EEA0D094EC4168719A1096B; // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EAJBPadIconType                               PadIcon_16_14CD223647243E2F4FED5D8FD2CEFEBE;       // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Priority_19_E58EFECF474C1DF6EC0CA78FF354B1DF;      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableReticleArrow_21_2FE65B0149CB8169686E5D8400260A24; // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_TutorialMessageQueuedItem) == 0x000008, "Wrong alignment on FST_TutorialMessageQueuedItem");
static_assert(sizeof(FST_TutorialMessageQueuedItem) == 0x000020, "Wrong size on FST_TutorialMessageQueuedItem");
static_assert(offsetof(FST_TutorialMessageQueuedItem, MessageTag_5_874A75B844920263ED0E62802073639A) == 0x000000, "Member 'FST_TutorialMessageQueuedItem::MessageTag_5_874A75B844920263ED0E62802073639A' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, TutorialType_11_06F6CE5645E227D4E39174BF9712083A) == 0x000008, "Member 'FST_TutorialMessageQueuedItem::TutorialType_11_06F6CE5645E227D4E39174BF9712083A' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, IntParam_4_744EB4B34AFEB725243FA08270051E0C) == 0x00000C, "Member 'FST_TutorialMessageQueuedItem::IntParam_4_744EB4B34AFEB725243FA08270051E0C' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, DisplayTime_8_FD4ADE7C49487C12171F47A5143F4CA5) == 0x000010, "Member 'FST_TutorialMessageQueuedItem::DisplayTime_8_FD4ADE7C49487C12171F47A5143F4CA5' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, bEnablePadIcon_13_E5069E754EEA0D094EC4168719A1096B) == 0x000014, "Member 'FST_TutorialMessageQueuedItem::bEnablePadIcon_13_E5069E754EEA0D094EC4168719A1096B' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, PadIcon_16_14CD223647243E2F4FED5D8FD2CEFEBE) == 0x000015, "Member 'FST_TutorialMessageQueuedItem::PadIcon_16_14CD223647243E2F4FED5D8FD2CEFEBE' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, Priority_19_E58EFECF474C1DF6EC0CA78FF354B1DF) == 0x000018, "Member 'FST_TutorialMessageQueuedItem::Priority_19_E58EFECF474C1DF6EC0CA78FF354B1DF' has a wrong offset!");
static_assert(offsetof(FST_TutorialMessageQueuedItem, bEnableReticleArrow_21_2FE65B0149CB8169686E5D8400260A24) == 0x00001C, "Member 'FST_TutorialMessageQueuedItem::bEnableReticleArrow_21_2FE65B0149CB8169686E5D8400260A24' has a wrong offset!");

}

