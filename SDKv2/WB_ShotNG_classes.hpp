#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ShotNG

#include "Basic.hpp"

#include "AJB_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ShotNG.WB_ShotNG_C
// 0x0010 (0x0258 - 0x0248)
class UWB_ShotNG_C final : public UAJBUserWidget
{
public:
	class UImage*                                 Img_NG;                                            // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_NG_Base;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ShotNG_C">();
	}
	static class UWB_ShotNG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ShotNG_C>();
	}
};
static_assert(alignof(UWB_ShotNG_C) == 0x000008, "Wrong alignment on UWB_ShotNG_C");
static_assert(sizeof(UWB_ShotNG_C) == 0x000258, "Wrong size on UWB_ShotNG_C");
static_assert(offsetof(UWB_ShotNG_C, Img_NG) == 0x000248, "Member 'UWB_ShotNG_C::Img_NG' has a wrong offset!");
static_assert(offsetof(UWB_ShotNG_C, Img_NG_Base) == 0x000250, "Member 'UWB_ShotNG_C::Img_NG_Base' has a wrong offset!");

}

