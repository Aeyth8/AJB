#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Title_Button_EMoney

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Title_Button_EMoney.WB_Title_Button_EMoney_C
// 0x0068 (0x0308 - 0x02A0)
class UWB_Title_Button_EMoney_C final : public UAJBButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Pressed;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_GrayOut;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBButton*                             Button;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EMoneyWindow_C*                     EMoneyWindow;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnImpossibleCancel;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnCancellable;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnFinishedEmoney;                                  // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCanButton;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnImpossibleCancel__DelegateSignature();
	void OnCancellable__DelegateSignature();
	void OnFinishedEmoney__DelegateSignature();
	void ExecuteUbergraph_WB_Title_Button_EMoney(int32 EntryPoint);
	void ForceCloseEmoneyWindow();
	void OnClosedWindow(class UAJBWindowWidget* TargetWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenEmoneyWindow();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature();
	void OnButtonReleasedAnimation();
	void OnButtonPressedAnimation();
	class UAJBButton* GetButton();
	void IsTimeStop(bool* bStop);
	void IsEnableEMoneyButton(bool* bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Title_Button_EMoney_C">();
	}
	static class UWB_Title_Button_EMoney_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Title_Button_EMoney_C>();
	}
};
static_assert(alignof(UWB_Title_Button_EMoney_C) == 0x000008, "Wrong alignment on UWB_Title_Button_EMoney_C");
static_assert(sizeof(UWB_Title_Button_EMoney_C) == 0x000308, "Wrong size on UWB_Title_Button_EMoney_C");
static_assert(offsetof(UWB_Title_Button_EMoney_C, UberGraphFrame) == 0x0002A0, "Member 'UWB_Title_Button_EMoney_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, Anim_Pressed) == 0x0002A8, "Member 'UWB_Title_Button_EMoney_C::Anim_Pressed' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, AJBImage_GrayOut) == 0x0002B0, "Member 'UWB_Title_Button_EMoney_C::AJBImage_GrayOut' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, Button) == 0x0002B8, "Member 'UWB_Title_Button_EMoney_C::Button' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, RetainerBox_0) == 0x0002C0, "Member 'UWB_Title_Button_EMoney_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, EMoneyWindow) == 0x0002C8, "Member 'UWB_Title_Button_EMoney_C::EMoneyWindow' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, OnImpossibleCancel) == 0x0002D0, "Member 'UWB_Title_Button_EMoney_C::OnImpossibleCancel' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, OnCancellable) == 0x0002E0, "Member 'UWB_Title_Button_EMoney_C::OnCancellable' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, OnFinishedEmoney) == 0x0002F0, "Member 'UWB_Title_Button_EMoney_C::OnFinishedEmoney' has a wrong offset!");
static_assert(offsetof(UWB_Title_Button_EMoney_C, bCanButton) == 0x000300, "Member 'UWB_Title_Button_EMoney_C::bCanButton' has a wrong offset!");

}

