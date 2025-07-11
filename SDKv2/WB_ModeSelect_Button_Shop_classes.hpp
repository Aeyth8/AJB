#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ModeSelect_Button_Shop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_ModeSelectButtonBase_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ModeSelect_Button_Shop.WB_ModeSelect_Button_Shop_C
// 0x0078 (0x0378 - 0x0300)
class UWB_ModeSelect_Button_Shop_C final : public UWB_ModeSelectButtonBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WB_ModeSelect_Button_Shop_C;        // 0x0300(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Release;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Press;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBRetainerBox*                        AJBRetainerBox_1;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          AJBTextBlock_NeedPP;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          AJBTextBlock_NeedPPLabel;                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              Aura;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBButton*                             Button;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              ButtonBar_Inactive;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PP;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Over_InActiveEvent;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_1;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_Notice;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Txt_Shop_C*              WB_ModeSelect_Txt_Shop;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsVisibleNowPlayingNotice;                        // 0x0370(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_ModeSelect_Button_Shop(int32 EntryPoint);
	void HidePPDisplay();
	void BndEvt__Anim_Release_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	class UAJBButton* GetButton();
	void CanTenpoBattle(bool* bCan);
	void PreConstruct(bool IsDesignTime);
	void ResetPressAndReleaseAnimation();
	void SetNeedPP(int32 NeedPP_0);
	void SetEnableSelect(bool bSelectable);
	void OnButtonReleasedAnimation();
	void OnButtonPressedAnimation();
	void IsEnableSelect(bool* bEnable);
	void IsButtonDecisioning(bool* IsDecisioning);

	void GetAuraImage(class UImage** AuraImage) const;
	void GetRetainerEffectMaterial(class UMaterialInstanceDynamic** EffectMaterial) const;
	void GetButtonCenterPosition(struct FVector2D* ScreenPosition) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ModeSelect_Button_Shop_C">();
	}
	static class UWB_ModeSelect_Button_Shop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ModeSelect_Button_Shop_C>();
	}
};
static_assert(alignof(UWB_ModeSelect_Button_Shop_C) == 0x000008, "Wrong alignment on UWB_ModeSelect_Button_Shop_C");
static_assert(sizeof(UWB_ModeSelect_Button_Shop_C) == 0x000378, "Wrong size on UWB_ModeSelect_Button_Shop_C");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, UberGraphFrame_WB_ModeSelect_Button_Shop_C) == 0x000300, "Member 'UWB_ModeSelect_Button_Shop_C::UberGraphFrame_WB_ModeSelect_Button_Shop_C' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Anim_Release) == 0x000308, "Member 'UWB_ModeSelect_Button_Shop_C::Anim_Release' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Anim_Press) == 0x000310, "Member 'UWB_ModeSelect_Button_Shop_C::Anim_Press' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, AJBRetainerBox_1) == 0x000318, "Member 'UWB_ModeSelect_Button_Shop_C::AJBRetainerBox_1' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, AJBTextBlock_NeedPP) == 0x000320, "Member 'UWB_ModeSelect_Button_Shop_C::AJBTextBlock_NeedPP' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, AJBTextBlock_NeedPPLabel) == 0x000328, "Member 'UWB_ModeSelect_Button_Shop_C::AJBTextBlock_NeedPPLabel' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Aura) == 0x000330, "Member 'UWB_ModeSelect_Button_Shop_C::Aura' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Button) == 0x000338, "Member 'UWB_ModeSelect_Button_Shop_C::Button' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, ButtonBar_Inactive) == 0x000340, "Member 'UWB_ModeSelect_Button_Shop_C::ButtonBar_Inactive' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Canvas_PP) == 0x000348, "Member 'UWB_ModeSelect_Button_Shop_C::Canvas_PP' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Over_InActiveEvent) == 0x000350, "Member 'UWB_ModeSelect_Button_Shop_C::Over_InActiveEvent' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, RetainerBox_1) == 0x000358, "Member 'UWB_ModeSelect_Button_Shop_C::RetainerBox_1' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, Txt_Notice) == 0x000360, "Member 'UWB_ModeSelect_Button_Shop_C::Txt_Notice' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, WB_ModeSelect_Txt_Shop) == 0x000368, "Member 'UWB_ModeSelect_Button_Shop_C::WB_ModeSelect_Txt_Shop' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_Button_Shop_C, bIsVisibleNowPlayingNotice) == 0x000370, "Member 'UWB_ModeSelect_Button_Shop_C::bIsVisibleNowPlayingNotice' has a wrong offset!");

}

