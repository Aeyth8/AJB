#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Skill_Separate_Automatic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Skill_Separate_Automatic.WB_Skill_Separate_Automatic_C
// 0x0020 (0x02A0 - 0x0280)
class UWB_Skill_Separate_Automatic_C final : public UAJBInGameSkillWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              AJBImage_ErrorSeparate_Belt;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LayoutRoot;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_ErrorSeparate;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Skill_Separate_Automatic(int32 EntryPoint);
	void OnUnregisterSkillComponent();
	void OnRegisterSkill();
	void OnRegisterSkillComponent();
	void HideAdditionalGudie();
	void ShowAdditionalGudie(const struct FAJBSkillGuideInfo& AdditionalGuideInfo);
	void OnOwnerSkillStateChanged(uint8 NewState, uint8 PreState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnActiveSkillWidget();
	void OnInactiveSkillWidget();
	void GetGuideInfo(const struct FAJBSkillGuideInfo& AdditionalGuideInfo, struct FAJBSkillGuideInfo* FinalyGuideInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Skill_Separate_Automatic_C">();
	}
	static class UWB_Skill_Separate_Automatic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Skill_Separate_Automatic_C>();
	}
};
static_assert(alignof(UWB_Skill_Separate_Automatic_C) == 0x000008, "Wrong alignment on UWB_Skill_Separate_Automatic_C");
static_assert(sizeof(UWB_Skill_Separate_Automatic_C) == 0x0002A0, "Wrong size on UWB_Skill_Separate_Automatic_C");
static_assert(offsetof(UWB_Skill_Separate_Automatic_C, UberGraphFrame) == 0x000280, "Member 'UWB_Skill_Separate_Automatic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Skill_Separate_Automatic_C, AJBImage_ErrorSeparate_Belt) == 0x000288, "Member 'UWB_Skill_Separate_Automatic_C::AJBImage_ErrorSeparate_Belt' has a wrong offset!");
static_assert(offsetof(UWB_Skill_Separate_Automatic_C, LayoutRoot) == 0x000290, "Member 'UWB_Skill_Separate_Automatic_C::LayoutRoot' has a wrong offset!");
static_assert(offsetof(UWB_Skill_Separate_Automatic_C, Txt_ErrorSeparate) == 0x000298, "Member 'UWB_Skill_Separate_Automatic_C::Txt_ErrorSeparate' has a wrong offset!");

}

