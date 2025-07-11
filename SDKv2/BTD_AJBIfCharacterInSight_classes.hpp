#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_AJBIfCharacterInSight

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_AJBIfCharacterInSight.BTD_AJBIfCharacterInSight_C
// 0x0028 (0x00C8 - 0x00A0)
class UBTD_AJBIfCharacterInSight_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 CharacterKey;                                      // 0x00A0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_AJBIfCharacterInSight_C">();
	}
	static class UBTD_AJBIfCharacterInSight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_AJBIfCharacterInSight_C>();
	}
};
static_assert(alignof(UBTD_AJBIfCharacterInSight_C) == 0x000008, "Wrong alignment on UBTD_AJBIfCharacterInSight_C");
static_assert(sizeof(UBTD_AJBIfCharacterInSight_C) == 0x0000C8, "Wrong size on UBTD_AJBIfCharacterInSight_C");
static_assert(offsetof(UBTD_AJBIfCharacterInSight_C, CharacterKey) == 0x0000A0, "Member 'UBTD_AJBIfCharacterInSight_C::CharacterKey' has a wrong offset!");

}

