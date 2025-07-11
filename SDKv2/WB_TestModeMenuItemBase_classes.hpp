#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TestModeMenuItemBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TestModeMenuItemBase.WB_TestModeMenuItemBase_C
// 0x00F0 (0x02F8 - 0x0208)
class UWB_TestModeMenuItemBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UCanvasPanel*                           RootCanvasPanel;                                   // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Label;                                             // 0x0218(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTimerHandle                           BlinkTimer;                                        // 0x0230(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UTextBlock*                             LabelText;                                         // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBlinkColor;                                       // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         SlateFont;                                         // 0x0248(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              ShadowOffset;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ShadowColor;                                       // 0x02A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnDecideMenuItem;                                  // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnCancelMenuItem;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCanSelect;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnSelectMenuItem;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnUnselectMenuItem;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDecideMenuItem__DelegateSignature(class UWB_TestModeMenuItemBase_C* DecideMenuItem);
	void OnCancelMenuItem__DelegateSignature(class UWB_TestModeMenuItemBase_C* CancelMenuItem);
	void OnSelectMenuItem__DelegateSignature();
	void OnUnselectMenuItem__DelegateSignature();
	void ExecuteUbergraph_WB_TestModeMenuItemBase(int32 EntryPoint);
	void OnCancel();
	void OnDecide();
	void OnUnSelect();
	void OnSelect();
	void BlinkAnim();
	void PreConstruct(bool IsDesignTime);
	void OnPrev();
	void OnNext();
	void SetFocusMenuItem(class FName SelectItemMenu);
	void ModifyLabelColor();
	void RestartBlink();
	void StopBlink();
	void AddPaddingY(float Top);
	void IsLock(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TestModeMenuItemBase_C">();
	}
	static class UWB_TestModeMenuItemBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TestModeMenuItemBase_C>();
	}
};
static_assert(alignof(UWB_TestModeMenuItemBase_C) == 0x000008, "Wrong alignment on UWB_TestModeMenuItemBase_C");
static_assert(sizeof(UWB_TestModeMenuItemBase_C) == 0x0002F8, "Wrong size on UWB_TestModeMenuItemBase_C");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, UberGraphFrame) == 0x000208, "Member 'UWB_TestModeMenuItemBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, RootCanvasPanel) == 0x000210, "Member 'UWB_TestModeMenuItemBase_C::RootCanvasPanel' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, Label) == 0x000218, "Member 'UWB_TestModeMenuItemBase_C::Label' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, BlinkTimer) == 0x000230, "Member 'UWB_TestModeMenuItemBase_C::BlinkTimer' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, LabelText) == 0x000238, "Member 'UWB_TestModeMenuItemBase_C::LabelText' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, bBlinkColor) == 0x000240, "Member 'UWB_TestModeMenuItemBase_C::bBlinkColor' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, SlateFont) == 0x000248, "Member 'UWB_TestModeMenuItemBase_C::SlateFont' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, ShadowOffset) == 0x000298, "Member 'UWB_TestModeMenuItemBase_C::ShadowOffset' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, ShadowColor) == 0x0002A0, "Member 'UWB_TestModeMenuItemBase_C::ShadowColor' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, OnDecideMenuItem) == 0x0002B0, "Member 'UWB_TestModeMenuItemBase_C::OnDecideMenuItem' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, OnCancelMenuItem) == 0x0002C0, "Member 'UWB_TestModeMenuItemBase_C::OnCancelMenuItem' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, bCanSelect) == 0x0002D0, "Member 'UWB_TestModeMenuItemBase_C::bCanSelect' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, OnSelectMenuItem) == 0x0002D8, "Member 'UWB_TestModeMenuItemBase_C::OnSelectMenuItem' has a wrong offset!");
static_assert(offsetof(UWB_TestModeMenuItemBase_C, OnUnselectMenuItem) == 0x0002E8, "Member 'UWB_TestModeMenuItemBase_C::OnUnselectMenuItem' has a wrong offset!");

}

