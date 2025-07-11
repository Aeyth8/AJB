#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_MovementSkill

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_MovementSkill.BI_MovementSkill_C
// 0x0000 (0x0028 - 0x0028)
class IBI_MovementSkill_C final : public IInterface
{
public:
	void ChangeMovementDistanceScale(float Value);
	void ChangeStandMovementDistanceScale(float Value);
	void ChangeStandLaunchVelocityScale(float Value);
	void ChangeCharacterMoveSpeedByStand(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_MovementSkill_C">();
	}
	static class IBI_MovementSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_MovementSkill_C>();
	}
};
static_assert(alignof(IBI_MovementSkill_C) == 0x000008, "Wrong alignment on IBI_MovementSkill_C");
static_assert(sizeof(IBI_MovementSkill_C) == 0x000028, "Wrong size on IBI_MovementSkill_C");

}

