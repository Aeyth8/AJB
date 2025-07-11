#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_O2_ProgressBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_O2_ProgressBar.WB_O2_ProgressBar_C
// 0x0028 (0x0230 - 0x0208)
class UWB_O2_ProgressBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x0210(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_ProgressBar_O2;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMI_ProgressBar;                                   // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentVisibility;                                 // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_O2_ProgressBar(int32 EntryPoint);
	void SetVisible(bool IsVisible_0);
	void SetPercent(float Value);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_O2_ProgressBar_C">();
	}
	static class UWB_O2_ProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_O2_ProgressBar_C>();
	}
};
static_assert(alignof(UWB_O2_ProgressBar_C) == 0x000008, "Wrong alignment on UWB_O2_ProgressBar_C");
static_assert(sizeof(UWB_O2_ProgressBar_C) == 0x000230, "Wrong size on UWB_O2_ProgressBar_C");
static_assert(offsetof(UWB_O2_ProgressBar_C, UberGraphFrame) == 0x000208, "Member 'UWB_O2_ProgressBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_O2_ProgressBar_C, Fade) == 0x000210, "Member 'UWB_O2_ProgressBar_C::Fade' has a wrong offset!");
static_assert(offsetof(UWB_O2_ProgressBar_C, IMG_ProgressBar_O2) == 0x000218, "Member 'UWB_O2_ProgressBar_C::IMG_ProgressBar_O2' has a wrong offset!");
static_assert(offsetof(UWB_O2_ProgressBar_C, DMI_ProgressBar) == 0x000220, "Member 'UWB_O2_ProgressBar_C::DMI_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWB_O2_ProgressBar_C, CurrentVisibility) == 0x000228, "Member 'UWB_O2_ProgressBar_C::CurrentVisibility' has a wrong offset!");

}

