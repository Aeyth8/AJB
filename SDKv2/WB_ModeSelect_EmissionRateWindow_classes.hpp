#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ModeSelect_EmissionRateWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ModeSelect_EmissionRateWindow.WB_ModeSelect_EmissionRateWindow_C
// 0x0138 (0x03F8 - 0x02C0)
class UWB_ModeSelect_EmissionRateWindow_C final : public UAJBWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(Transient, DuplicateTransient)
	class UAJBTextBlock*                          AJBTextBlock_PickUpTitleLuckyDraw;                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          AJBTextBlock_PickUpTitlePremiumDraw;               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              LuckyBG;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LuckyLimitedRarityListRoot;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              PremiumBG;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PremiumLimitedRarityListRoot;                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ScrollboxSize;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_WindowSize;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TitleRoot;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxLuckyDraw;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxPremiumDraw;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CommonButton_C*                     WB_CommonButton;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CommonTouchScrollBox_C*             WB_CommonTouchScrollBox;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_0;                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_1;                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_2;                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_3;                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_4;                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_5;                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EmissionRate_RarityList_C*          WB_EmissionRate_RarityList_C_6;                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_WindowFrame_C*                      WB_WindowFrame;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAJBGachaDetail                        LuckyDetail;                                       // 0x0378(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAJBGachaDetail                        PremiumDetail;                                     // 0x03B8(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WB_ModeSelect_EmissionRateWindow(int32 EntryPoint);
	void OnFinishedOpenCurveAnim();
	void Construct();
	void SetupGachaDetail(const struct FAJBGachaDetail& LuckyDetail_0, const struct FAJBGachaDetail& PremiumDetail_0);
	void BndEvt__WB_CommonButton_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void OnClosingWindow();
	void OnOpeningWindow();
	void SetupLuckyDrawDisplay(struct FAJBGachaDetail& GachaDetail);
	void SetupPremiumDrawDisplay(struct FAJBGachaDetail& GachaDetail);
	void TryGetCharacterName(int32 CharacterID, class FText* Result);
	bool OnInputTurnRate(float Value);
	bool OnInputReleasedUp();
	bool OnInputReleasedTouch();
	bool OnInputReleasedRight();
	bool OnInputReleasedR2();
	bool OnInputReleasedR1();
	bool OnInputReleasedLeft();
	bool OnInputReleasedL3();
	bool OnInputReleasedL2();
	bool OnInputReleasedL1();
	bool OnInputReleasedDown();
	bool OnInputReleasedDecide();
	bool OnInputReleasedCancel();
	bool OnInputPressedUp();
	bool OnInputPressedTouch(const float LocationX, const float LocationY);
	bool OnInputPressedRight();
	bool OnInputPressedR2();
	bool OnInputPressedR1();
	bool OnInputPressedLeft();
	bool OnInputPressedL3();
	bool OnInputPressedL2();
	bool OnInputPressedL1();
	bool OnInputPressedDown();
	bool OnInputPressedDecide();
	bool OnInputPressedCancel();
	bool OnInputMoveRight(float Value);
	bool OnInputMoveForward(float Value);
	bool OnInputLookupRate(float Value);
	bool IsModeless();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ModeSelect_EmissionRateWindow_C">();
	}
	static class UWB_ModeSelect_EmissionRateWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ModeSelect_EmissionRateWindow_C>();
	}
};
static_assert(alignof(UWB_ModeSelect_EmissionRateWindow_C) == 0x000008, "Wrong alignment on UWB_ModeSelect_EmissionRateWindow_C");
static_assert(sizeof(UWB_ModeSelect_EmissionRateWindow_C) == 0x0003F8, "Wrong size on UWB_ModeSelect_EmissionRateWindow_C");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_ModeSelect_EmissionRateWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, AJBTextBlock_PickUpTitleLuckyDraw) == 0x0002C8, "Member 'UWB_ModeSelect_EmissionRateWindow_C::AJBTextBlock_PickUpTitleLuckyDraw' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, AJBTextBlock_PickUpTitlePremiumDraw) == 0x0002D0, "Member 'UWB_ModeSelect_EmissionRateWindow_C::AJBTextBlock_PickUpTitlePremiumDraw' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, LuckyBG) == 0x0002D8, "Member 'UWB_ModeSelect_EmissionRateWindow_C::LuckyBG' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, LuckyLimitedRarityListRoot) == 0x0002E0, "Member 'UWB_ModeSelect_EmissionRateWindow_C::LuckyLimitedRarityListRoot' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, PremiumBG) == 0x0002E8, "Member 'UWB_ModeSelect_EmissionRateWindow_C::PremiumBG' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, PremiumLimitedRarityListRoot) == 0x0002F0, "Member 'UWB_ModeSelect_EmissionRateWindow_C::PremiumLimitedRarityListRoot' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, SizeBox_ScrollboxSize) == 0x0002F8, "Member 'UWB_ModeSelect_EmissionRateWindow_C::SizeBox_ScrollboxSize' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, Spacer_WindowSize) == 0x000300, "Member 'UWB_ModeSelect_EmissionRateWindow_C::Spacer_WindowSize' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, TitleRoot) == 0x000308, "Member 'UWB_ModeSelect_EmissionRateWindow_C::TitleRoot' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, VerticalBoxLuckyDraw) == 0x000310, "Member 'UWB_ModeSelect_EmissionRateWindow_C::VerticalBoxLuckyDraw' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, VerticalBoxPremiumDraw) == 0x000318, "Member 'UWB_ModeSelect_EmissionRateWindow_C::VerticalBoxPremiumDraw' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_CommonButton) == 0x000320, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_CommonButton' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_CommonTouchScrollBox) == 0x000328, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_CommonTouchScrollBox' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList) == 0x000330, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_0) == 0x000338, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_0' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_1) == 0x000340, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_1' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_2) == 0x000348, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_2' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_3) == 0x000350, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_3' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_4) == 0x000358, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_4' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_5) == 0x000360, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_5' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_EmissionRate_RarityList_C_6) == 0x000368, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_EmissionRate_RarityList_C_6' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, WB_WindowFrame) == 0x000370, "Member 'UWB_ModeSelect_EmissionRateWindow_C::WB_WindowFrame' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, LuckyDetail) == 0x000378, "Member 'UWB_ModeSelect_EmissionRateWindow_C::LuckyDetail' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_EmissionRateWindow_C, PremiumDetail) == 0x0003B8, "Member 'UWB_ModeSelect_EmissionRateWindow_C::PremiumDetail' has a wrong offset!");

}

