#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArcadeTimeManager

#include "Basic.hpp"

#include "AJB_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ArcadeTimeManager.BP_ArcadeTimeManager_C
// 0x0000 (0x0060 - 0x0060)
class UBP_ArcadeTimeManager_C final : public UAJBArcadeTimeManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArcadeTimeManager_C">();
	}
	static class UBP_ArcadeTimeManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArcadeTimeManager_C>();
	}
};
static_assert(alignof(UBP_ArcadeTimeManager_C) == 0x000008, "Wrong alignment on UBP_ArcadeTimeManager_C");
static_assert(sizeof(UBP_ArcadeTimeManager_C) == 0x000060, "Wrong size on UBP_ArcadeTimeManager_C");

}

