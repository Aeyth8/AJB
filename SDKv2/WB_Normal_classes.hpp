#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Normal

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Normal.WB_Normal_C
// 0x0000 (0x0208 - 0x0208)
class UWB_Normal_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Normal_C">();
	}
	static class UWB_Normal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Normal_C>();
	}
};
static_assert(alignof(UWB_Normal_C) == 0x000008, "Wrong alignment on UWB_Normal_C");
static_assert(sizeof(UWB_Normal_C) == 0x000208, "Wrong size on UWB_Normal_C");

}

