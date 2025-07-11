#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CommonButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CommonButton.WB_CommonButton_C
// 0x0080 (0x0320 - 0x02A0)
class UWB_CommonButton_C final : public UAJBButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Pressed;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBRetainerBox*                        AJBRetainerBox_Activater;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBButton*                             Button;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          Text;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Aura_C*                             WB_Aura;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         AuraInterpSpeed;                                   // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     OverrideFontMaterial;                              // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetAuraValue;                                   // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DMI_Aura;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AuraValue;                                         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlaySE;                                         // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsPlayCancelSE;                                   // 0x02FD(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FE[0x2];                                      // 0x02FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AuraOffset;                                        // 0x0300(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DMI_Activater;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPrevButtonActive;                               // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUntouchableWhenDeactive;                        // 0x0311(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312[0x2];                                      // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleValue;                                        // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleInterpSpeed;                                  // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bReturnButtonScale;                                // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_CommonButton(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnResetButtonWidget();
	void SetButtonActive(bool bIsActive, bool PlayActiveSE);
	void OnButtonPressedAnimation();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonCancelledEvent__DelegateSignature();
	void OnButtonReleasedAnimation();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayClickAnimation();
	class UAJBTextBlock* GetTextBlock();
	class UAJBButton* GetButton();

	bool IsTouchable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CommonButton_C">();
	}
	static class UWB_CommonButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CommonButton_C>();
	}
};
static_assert(alignof(UWB_CommonButton_C) == 0x000008, "Wrong alignment on UWB_CommonButton_C");
static_assert(sizeof(UWB_CommonButton_C) == 0x000320, "Wrong size on UWB_CommonButton_C");
static_assert(offsetof(UWB_CommonButton_C, UberGraphFrame) == 0x0002A0, "Member 'UWB_CommonButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, Anim_Pressed) == 0x0002A8, "Member 'UWB_CommonButton_C::Anim_Pressed' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, AJBRetainerBox_Activater) == 0x0002B0, "Member 'UWB_CommonButton_C::AJBRetainerBox_Activater' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, Button) == 0x0002B8, "Member 'UWB_CommonButton_C::Button' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, Root) == 0x0002C0, "Member 'UWB_CommonButton_C::Root' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, Text) == 0x0002C8, "Member 'UWB_CommonButton_C::Text' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, WB_Aura) == 0x0002D0, "Member 'UWB_CommonButton_C::WB_Aura' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, AuraInterpSpeed) == 0x0002D8, "Member 'UWB_CommonButton_C::AuraInterpSpeed' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, OverrideFontMaterial) == 0x0002E0, "Member 'UWB_CommonButton_C::OverrideFontMaterial' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, TargetAuraValue) == 0x0002E8, "Member 'UWB_CommonButton_C::TargetAuraValue' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, DMI_Aura) == 0x0002F0, "Member 'UWB_CommonButton_C::DMI_Aura' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, AuraValue) == 0x0002F8, "Member 'UWB_CommonButton_C::AuraValue' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, bIsPlaySE) == 0x0002FC, "Member 'UWB_CommonButton_C::bIsPlaySE' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, bIsPlayCancelSE) == 0x0002FD, "Member 'UWB_CommonButton_C::bIsPlayCancelSE' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, AuraOffset) == 0x000300, "Member 'UWB_CommonButton_C::AuraOffset' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, DMI_Activater) == 0x000308, "Member 'UWB_CommonButton_C::DMI_Activater' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, bIsPrevButtonActive) == 0x000310, "Member 'UWB_CommonButton_C::bIsPrevButtonActive' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, bIsUntouchableWhenDeactive) == 0x000311, "Member 'UWB_CommonButton_C::bIsUntouchableWhenDeactive' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, ScaleValue) == 0x000314, "Member 'UWB_CommonButton_C::ScaleValue' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, ScaleInterpSpeed) == 0x000318, "Member 'UWB_CommonButton_C::ScaleInterpSpeed' has a wrong offset!");
static_assert(offsetof(UWB_CommonButton_C, bReturnButtonScale) == 0x00031C, "Member 'UWB_CommonButton_C::bReturnButtonScale' has a wrong offset!");

}

