#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PPBuyButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PPBuyButton.WB_PPBuyButton_C
// 0x0020 (0x02C0 - 0x02A0)
class UWB_PPBuyButton_C final : public UAJBButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Pressed;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBButton*                             Button;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_PPBuyButton(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature();
	void Construct();
	class UAJBButton* GetButton();
	void OnButtonPressedAnimation();
	void OnButtonReleasedAnimation();
	void OnCheckPP();
	void OnFinishedButtonAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_PPBuyButton_C">();
	}
	static class UWB_PPBuyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PPBuyButton_C>();
	}
};
static_assert(alignof(UWB_PPBuyButton_C) == 0x000008, "Wrong alignment on UWB_PPBuyButton_C");
static_assert(sizeof(UWB_PPBuyButton_C) == 0x0002C0, "Wrong size on UWB_PPBuyButton_C");
static_assert(offsetof(UWB_PPBuyButton_C, UberGraphFrame) == 0x0002A0, "Member 'UWB_PPBuyButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_PPBuyButton_C, Anim_Pressed) == 0x0002A8, "Member 'UWB_PPBuyButton_C::Anim_Pressed' has a wrong offset!");
static_assert(offsetof(UWB_PPBuyButton_C, Button) == 0x0002B0, "Member 'UWB_PPBuyButton_C::Button' has a wrong offset!");
static_assert(offsetof(UWB_PPBuyButton_C, RetainerBox_0) == 0x0002B8, "Member 'UWB_PPBuyButton_C::RetainerBox_0' has a wrong offset!");

}

