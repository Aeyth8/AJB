#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharacterAchievement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CharacterAchievement.WB_CharacterAchievement_C
// 0x0098 (0x0358 - 0x02C0)
class UWB_CharacterAchievement_C final : public UAJBWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_FadeText;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_band;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_Line;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          CharacterName;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_4;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          VictoryDetail;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          VictoryTitle;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaAchieve_Progressbar_C*         WB_CharaAchieve_Progressbar;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CommonButton_C*                     WB_CommonButton;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_WindowFrame_C*                      WB_WindowFrame;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAJBProfileCardDetail                  ProfileCardDetail;                                 // 0x0318(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	float                                         ProfileCardDetailTimer;                            // 0x0348(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountDownElapsedTime;                              // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           WaitProgressTimerHandle;                           // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_WB_CharacterAchievement(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WB_CommonButton_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void OnFinishedOpenCurveAnim();
	void OnClosingWindow();
	void OnOpeningWindow();
	void RemainingWinsNumber(int32 VictoryCount, int32* Num);
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
		return StaticBPGeneratedClassImpl<"WB_CharacterAchievement_C">();
	}
	static class UWB_CharacterAchievement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CharacterAchievement_C>();
	}
};
static_assert(alignof(UWB_CharacterAchievement_C) == 0x000008, "Wrong alignment on UWB_CharacterAchievement_C");
static_assert(sizeof(UWB_CharacterAchievement_C) == 0x000358, "Wrong size on UWB_CharacterAchievement_C");
static_assert(offsetof(UWB_CharacterAchievement_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_CharacterAchievement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, Anim_FadeText) == 0x0002C8, "Member 'UWB_CharacterAchievement_C::Anim_FadeText' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, AJBImage_band) == 0x0002D0, "Member 'UWB_CharacterAchievement_C::AJBImage_band' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, AJBImage_Line) == 0x0002D8, "Member 'UWB_CharacterAchievement_C::AJBImage_Line' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, CharacterName) == 0x0002E0, "Member 'UWB_CharacterAchievement_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, Spacer_4) == 0x0002E8, "Member 'UWB_CharacterAchievement_C::Spacer_4' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, VictoryDetail) == 0x0002F0, "Member 'UWB_CharacterAchievement_C::VictoryDetail' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, VictoryTitle) == 0x0002F8, "Member 'UWB_CharacterAchievement_C::VictoryTitle' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, WB_CharaAchieve_Progressbar) == 0x000300, "Member 'UWB_CharacterAchievement_C::WB_CharaAchieve_Progressbar' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, WB_CommonButton) == 0x000308, "Member 'UWB_CharacterAchievement_C::WB_CommonButton' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, WB_WindowFrame) == 0x000310, "Member 'UWB_CharacterAchievement_C::WB_WindowFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, ProfileCardDetail) == 0x000318, "Member 'UWB_CharacterAchievement_C::ProfileCardDetail' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, ProfileCardDetailTimer) == 0x000348, "Member 'UWB_CharacterAchievement_C::ProfileCardDetailTimer' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, CountDownElapsedTime) == 0x00034C, "Member 'UWB_CharacterAchievement_C::CountDownElapsedTime' has a wrong offset!");
static_assert(offsetof(UWB_CharacterAchievement_C, WaitProgressTimerHandle) == 0x000350, "Member 'UWB_CharacterAchievement_C::WaitProgressTimerHandle' has a wrong offset!");

}

