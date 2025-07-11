#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_FullMapGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_FullMapGuide.WB_FullMapGuide_C
// 0x0028 (0x0230 - 0x0208)
class UWB_FullMapGuide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              IconClose;                                         // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              IconTouch;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAJBImage*                              IconTouch2;                                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EAJBPadIconType                               TouchIcon;                                         // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAJBPadIconType                               CloseIcon;                                         // 0x0229(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_FullMapGuide(int32 EntryPoint);
	void OnChangedPadicon();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_FullMapGuide_C">();
	}
	static class UWB_FullMapGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_FullMapGuide_C>();
	}
};
static_assert(alignof(UWB_FullMapGuide_C) == 0x000008, "Wrong alignment on UWB_FullMapGuide_C");
static_assert(sizeof(UWB_FullMapGuide_C) == 0x000230, "Wrong size on UWB_FullMapGuide_C");
static_assert(offsetof(UWB_FullMapGuide_C, UberGraphFrame) == 0x000208, "Member 'UWB_FullMapGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_FullMapGuide_C, IconClose) == 0x000210, "Member 'UWB_FullMapGuide_C::IconClose' has a wrong offset!");
static_assert(offsetof(UWB_FullMapGuide_C, IconTouch) == 0x000218, "Member 'UWB_FullMapGuide_C::IconTouch' has a wrong offset!");
static_assert(offsetof(UWB_FullMapGuide_C, IconTouch2) == 0x000220, "Member 'UWB_FullMapGuide_C::IconTouch2' has a wrong offset!");
static_assert(offsetof(UWB_FullMapGuide_C, TouchIcon) == 0x000228, "Member 'UWB_FullMapGuide_C::TouchIcon' has a wrong offset!");
static_assert(offsetof(UWB_FullMapGuide_C, CloseIcon) == 0x000229, "Member 'UWB_FullMapGuide_C::CloseIcon' has a wrong offset!");

}

