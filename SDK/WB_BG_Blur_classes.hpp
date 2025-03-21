#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BG_Blur

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BG_Blur.WB_BG_Blur_C
// 0x0018 (0x0228 - 0x0210)
class UWB_BG_Blur_C final : public UAJBBackGroundWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UAJBImage*                              AJBImage_1;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_BG_Blur(int32 EntryPoint);
	void OnClosingOwnerWindow();
	void OnOpeningOwnerWindow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BG_Blur_C">();
	}
	static class UWB_BG_Blur_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BG_Blur_C>();
	}
};
static_assert(alignof(UWB_BG_Blur_C) == 0x000008, "Wrong alignment on UWB_BG_Blur_C");
static_assert(sizeof(UWB_BG_Blur_C) == 0x000228, "Wrong size on UWB_BG_Blur_C");
static_assert(offsetof(UWB_BG_Blur_C, UberGraphFrame) == 0x000210, "Member 'UWB_BG_Blur_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BG_Blur_C, AJBImage_1) == 0x000218, "Member 'UWB_BG_Blur_C::AJBImage_1' has a wrong offset!");
static_assert(offsetof(UWB_BG_Blur_C, InvalidationBox_0) == 0x000220, "Member 'UWB_BG_Blur_C::InvalidationBox_0' has a wrong offset!");

}

