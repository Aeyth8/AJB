#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_WinEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"
#include "ETrainingCPUStrength_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_WinEffect.WB_WinEffect_C
// 0x00D0 (0x0390 - 0x02C0)
class UWB_WinEffect_C final : public UAJBWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       DisappearAnimation;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       EffectAnimation;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_Base_Flash;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_BigFlare;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_BlackBG;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_BlackLine;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_CircleFlare;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_Flash;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_LineFlare;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_NameBG;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_NameFire;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_NameFire_Add;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_NameFlash;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_NameFlash_CircleFlare;                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_NameFlash_Flare;                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_SimpleFlare;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              AJBImage_Slash;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              Flare_Base;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              LastSurviver_Base;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              LastSurviver_Blur1;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              LastSurviver_Blur2;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              Splash_1;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              Splash_2;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBTextBlock*                          WinPlayerName;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         AppearEffectDelayTime;                             // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WinnerPlayerId;                                    // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_WinEffect(int32 EntryPoint);
	void OnFinishedAnim();
	void ForceClose();
	void SetupPlayerID(int32 PlayerID);
	void UpdatePlayerName();
	void TestWin();
	void OnClosedTrainingClear(class UAJBWindowWidget* TargetWidget);
	void OnFinishedAnimation();
	void OnClosingWindow();
	void OnOpeningWindow();
	void RequestSound(const struct FGameplayTag& SoundTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_WinEffect_C">();
	}
	static class UWB_WinEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_WinEffect_C>();
	}
};
static_assert(alignof(UWB_WinEffect_C) == 0x000008, "Wrong alignment on UWB_WinEffect_C");
static_assert(sizeof(UWB_WinEffect_C) == 0x000390, "Wrong size on UWB_WinEffect_C");
static_assert(offsetof(UWB_WinEffect_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_WinEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, DisappearAnimation) == 0x0002C8, "Member 'UWB_WinEffect_C::DisappearAnimation' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, EffectAnimation) == 0x0002D0, "Member 'UWB_WinEffect_C::EffectAnimation' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_Base_Flash) == 0x0002D8, "Member 'UWB_WinEffect_C::AJBImage_Base_Flash' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_BigFlare) == 0x0002E0, "Member 'UWB_WinEffect_C::AJBImage_BigFlare' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_BlackBG) == 0x0002E8, "Member 'UWB_WinEffect_C::AJBImage_BlackBG' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_BlackLine) == 0x0002F0, "Member 'UWB_WinEffect_C::AJBImage_BlackLine' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_CircleFlare) == 0x0002F8, "Member 'UWB_WinEffect_C::AJBImage_CircleFlare' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_Flash) == 0x000300, "Member 'UWB_WinEffect_C::AJBImage_Flash' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_LineFlare) == 0x000308, "Member 'UWB_WinEffect_C::AJBImage_LineFlare' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_NameBG) == 0x000310, "Member 'UWB_WinEffect_C::AJBImage_NameBG' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_NameFire) == 0x000318, "Member 'UWB_WinEffect_C::AJBImage_NameFire' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_NameFire_Add) == 0x000320, "Member 'UWB_WinEffect_C::AJBImage_NameFire_Add' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_NameFlash) == 0x000328, "Member 'UWB_WinEffect_C::AJBImage_NameFlash' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_NameFlash_CircleFlare) == 0x000330, "Member 'UWB_WinEffect_C::AJBImage_NameFlash_CircleFlare' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_NameFlash_Flare) == 0x000338, "Member 'UWB_WinEffect_C::AJBImage_NameFlash_Flare' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_SimpleFlare) == 0x000340, "Member 'UWB_WinEffect_C::AJBImage_SimpleFlare' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AJBImage_Slash) == 0x000348, "Member 'UWB_WinEffect_C::AJBImage_Slash' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, Flare_Base) == 0x000350, "Member 'UWB_WinEffect_C::Flare_Base' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, LastSurviver_Base) == 0x000358, "Member 'UWB_WinEffect_C::LastSurviver_Base' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, LastSurviver_Blur1) == 0x000360, "Member 'UWB_WinEffect_C::LastSurviver_Blur1' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, LastSurviver_Blur2) == 0x000368, "Member 'UWB_WinEffect_C::LastSurviver_Blur2' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, Splash_1) == 0x000370, "Member 'UWB_WinEffect_C::Splash_1' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, Splash_2) == 0x000378, "Member 'UWB_WinEffect_C::Splash_2' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, WinPlayerName) == 0x000380, "Member 'UWB_WinEffect_C::WinPlayerName' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, AppearEffectDelayTime) == 0x000388, "Member 'UWB_WinEffect_C::AppearEffectDelayTime' has a wrong offset!");
static_assert(offsetof(UWB_WinEffect_C, WinnerPlayerId) == 0x00038C, "Member 'UWB_WinEffect_C::WinnerPlayerId' has a wrong offset!");

}

