#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GionEffect

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_GionEffect.BPI_GionEffect_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_GionEffect_C final : public IInterface
{
public:
	void GetGionScreenWidget(class UWB_AJBInGameGionScreen_C** GionScreen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_GionEffect_C">();
	}
	static class IBPI_GionEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_GionEffect_C>();
	}
};
static_assert(alignof(IBPI_GionEffect_C) == 0x000008, "Wrong alignment on IBPI_GionEffect_C");
static_assert(sizeof(IBPI_GionEffect_C) == 0x000028, "Wrong size on IBPI_GionEffect_C");

}

