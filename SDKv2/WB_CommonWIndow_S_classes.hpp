#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CommonWIndow_S

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPopupWindowSEType_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CommonWIndow_S.WB_CommonWIndow_S_C
// 0x0090 (0x0350 - 0x02C0)
class UWB_CommonWIndow_S_C final : public UAJBWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation_1;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TwoButtonRoot;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonRoot;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextOnlyRoot;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TitleRoot;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_2ButtonTitle;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_2ButtonTitleTxt;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_Title;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_TitleTxt;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Txt_TxtOnly;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CommonButton_C*                     WB_CommonButton_NO;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CommonButton_C*                     WB_CommonButton_YES;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EAJBConfirmResult                             ButtonResult;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnFinishedConfirmDispatcher;                       // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bButtonMode;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EPopupWindowSEType                            PopupWindowSEType;                                 // 0x0341(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAJBCreditDisplayType                         OverrideCreditDisplay;                             // 0x0342(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_343[0x1];                                      // 0x0343(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LifeTime;                                          // 0x0344(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bOpenGameOver;                                     // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayOpenSE;                                     // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsPlayCloseSE;                                    // 0x034A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bInvalidTouch;                                     // 0x034B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnFinishedConfirmDispatcher__DelegateSignature(EAJBConfirmResult Result);
	void ExecuteUbergraph_WB_CommonWIndow_S(int32 EntryPoint);
	void OnOpeningWindow();
	void ShowButton2AndText(const class FText& Title, const class FText& Text, const class FText& YesButton, const class FText& NoButton);
	void SetIsPlaySE(bool bIsPlayDecisionSE, bool bIsPlayCancelSE, bool bIsPlayOpenSE_0, bool bIsPlayCloseSE_0);
	void OnClosingWindow();
	void OnOpeningGameOver(class UAJBWindowWidget* TargetWidget);
	void OnFinishedOpenCurveAnim();
	void BndEvt__WB_CommonButton_YES_K2Node_ComponentBoundEvent_1_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_CommonButton_NO_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void ShowTextOnly(const class FText& Text);
	void Construct();
	void ShowTitle(const class FText& Title, const class FText& Text);
	void ShowButton2(const class FText& Title, const class FText& YesButton, const class FText& NoButton);
	void GetButtonResult(EAJBConfirmResult* Result);
	bool OnInputReleasedUp();
	bool OnInputReleasedRight();
	bool OnInputReleasedLeft();
	bool OnInputReleasedDown();
	bool OnInputReleasedDecide();
	bool OnInputReleasedCancel();
	bool OnInputPressedUp();
	bool OnInputPressedRight();
	bool OnInputPressedLeft();
	bool OnInputPressedDown();
	bool OnInputPressedDecide();
	bool OnInputPressedCancel();
	bool OnInputTurnRate(float Value);
	bool OnInputReleasedTouch();
	bool OnInputPressedTouch(const float LocationX, const float LocationY);
	bool OnInputMoveRight(float Value);
	bool OnInputMoveForward(float Value);
	bool OnInputLookupRate(float Value);
	bool IsModeless();
	bool OnInputReleasedR2();
	bool OnInputReleasedR1();
	bool OnInputReleasedL3();
	bool OnInputReleasedL2();
	bool OnInputReleasedL1();
	bool OnInputPressedR2();
	bool OnInputPressedR1();
	bool OnInputPressedL3();
	bool OnInputPressedL2();
	bool OnInputPressedL1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CommonWIndow_S_C">();
	}
	static class UWB_CommonWIndow_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CommonWIndow_S_C>();
	}
};
static_assert(alignof(UWB_CommonWIndow_S_C) == 0x000008, "Wrong alignment on UWB_CommonWIndow_S_C");
static_assert(sizeof(UWB_CommonWIndow_S_C) == 0x000350, "Wrong size on UWB_CommonWIndow_S_C");
static_assert(offsetof(UWB_CommonWIndow_S_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_CommonWIndow_S_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, NewAnimation_1) == 0x0002C8, "Member 'UWB_CommonWIndow_S_C::NewAnimation_1' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, TwoButtonRoot) == 0x0002D0, "Member 'UWB_CommonWIndow_S_C::TwoButtonRoot' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, ButtonRoot) == 0x0002D8, "Member 'UWB_CommonWIndow_S_C::ButtonRoot' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, TextOnlyRoot) == 0x0002E0, "Member 'UWB_CommonWIndow_S_C::TextOnlyRoot' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, TitleRoot) == 0x0002E8, "Member 'UWB_CommonWIndow_S_C::TitleRoot' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, Txt_2ButtonTitle) == 0x0002F0, "Member 'UWB_CommonWIndow_S_C::Txt_2ButtonTitle' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, Txt_2ButtonTitleTxt) == 0x0002F8, "Member 'UWB_CommonWIndow_S_C::Txt_2ButtonTitleTxt' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, Txt_Title) == 0x000300, "Member 'UWB_CommonWIndow_S_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, Txt_TitleTxt) == 0x000308, "Member 'UWB_CommonWIndow_S_C::Txt_TitleTxt' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, Txt_TxtOnly) == 0x000310, "Member 'UWB_CommonWIndow_S_C::Txt_TxtOnly' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, WB_CommonButton_NO) == 0x000318, "Member 'UWB_CommonWIndow_S_C::WB_CommonButton_NO' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, WB_CommonButton_YES) == 0x000320, "Member 'UWB_CommonWIndow_S_C::WB_CommonButton_YES' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, ButtonResult) == 0x000328, "Member 'UWB_CommonWIndow_S_C::ButtonResult' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, OnFinishedConfirmDispatcher) == 0x000330, "Member 'UWB_CommonWIndow_S_C::OnFinishedConfirmDispatcher' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, bButtonMode) == 0x000340, "Member 'UWB_CommonWIndow_S_C::bButtonMode' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, PopupWindowSEType) == 0x000341, "Member 'UWB_CommonWIndow_S_C::PopupWindowSEType' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, OverrideCreditDisplay) == 0x000342, "Member 'UWB_CommonWIndow_S_C::OverrideCreditDisplay' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, LifeTime) == 0x000344, "Member 'UWB_CommonWIndow_S_C::LifeTime' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, bOpenGameOver) == 0x000348, "Member 'UWB_CommonWIndow_S_C::bOpenGameOver' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, bIsPlayOpenSE) == 0x000349, "Member 'UWB_CommonWIndow_S_C::bIsPlayOpenSE' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, bIsPlayCloseSE) == 0x00034A, "Member 'UWB_CommonWIndow_S_C::bIsPlayCloseSE' has a wrong offset!");
static_assert(offsetof(UWB_CommonWIndow_S_C, bInvalidTouch) == 0x00034B, "Member 'UWB_CommonWIndow_S_C::bInvalidTouch' has a wrong offset!");

}

