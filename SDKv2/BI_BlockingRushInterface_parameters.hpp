#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_BlockingRushInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BI_BlockingRushInterface.BI_BlockingRushInterface_C.Blocking
// 0x0050 (0x0050 - 0x0000)
struct BI_BlockingRushInterface_C_Blocking final
{
public:
	class AActor*                                 BlockedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CuttingProjectile___;                              // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CuttingOther___;                                   // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInvincible;                                       // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bReflectProjectile;                                // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ReflectRotation;                                   // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                          bAvoidSkill;                                       // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSeparateStandAttack;                              // 0x0041(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ReflectSkillTag;                                   // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BI_BlockingRushInterface_C_Blocking) == 0x000008, "Wrong alignment on BI_BlockingRushInterface_C_Blocking");
static_assert(sizeof(BI_BlockingRushInterface_C_Blocking) == 0x000050, "Wrong size on BI_BlockingRushInterface_C_Blocking");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, BlockedActor) == 0x000000, "Member 'BI_BlockingRushInterface_C_Blocking::BlockedActor' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, OtherActor) == 0x000008, "Member 'BI_BlockingRushInterface_C_Blocking::OtherActor' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, HitLocation) == 0x000010, "Member 'BI_BlockingRushInterface_C_Blocking::HitLocation' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, HitNormal) == 0x00001C, "Member 'BI_BlockingRushInterface_C_Blocking::HitNormal' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, CuttingProjectile___) == 0x000028, "Member 'BI_BlockingRushInterface_C_Blocking::CuttingProjectile___' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, CuttingOther___) == 0x00002C, "Member 'BI_BlockingRushInterface_C_Blocking::CuttingOther___' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, bInvincible) == 0x000030, "Member 'BI_BlockingRushInterface_C_Blocking::bInvincible' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, bReflectProjectile) == 0x000031, "Member 'BI_BlockingRushInterface_C_Blocking::bReflectProjectile' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, ReflectRotation) == 0x000034, "Member 'BI_BlockingRushInterface_C_Blocking::ReflectRotation' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, bAvoidSkill) == 0x000040, "Member 'BI_BlockingRushInterface_C_Blocking::bAvoidSkill' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, bSeparateStandAttack) == 0x000041, "Member 'BI_BlockingRushInterface_C_Blocking::bSeparateStandAttack' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_Blocking, ReflectSkillTag) == 0x000048, "Member 'BI_BlockingRushInterface_C_Blocking::ReflectSkillTag' has a wrong offset!");

// Function BI_BlockingRushInterface.BI_BlockingRushInterface_C.CheckIgnoreBlocking
// 0x0010 (0x0010 - 0x0000)
struct BI_BlockingRushInterface_C_CheckIgnoreBlocking final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIgnore;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_BlockingRushInterface_C_CheckIgnoreBlocking) == 0x000008, "Wrong alignment on BI_BlockingRushInterface_C_CheckIgnoreBlocking");
static_assert(sizeof(BI_BlockingRushInterface_C_CheckIgnoreBlocking) == 0x000010, "Wrong size on BI_BlockingRushInterface_C_CheckIgnoreBlocking");
static_assert(offsetof(BI_BlockingRushInterface_C_CheckIgnoreBlocking, TargetActor) == 0x000000, "Member 'BI_BlockingRushInterface_C_CheckIgnoreBlocking::TargetActor' has a wrong offset!");
static_assert(offsetof(BI_BlockingRushInterface_C_CheckIgnoreBlocking, bIgnore) == 0x000008, "Member 'BI_BlockingRushInterface_C_CheckIgnoreBlocking::bIgnore' has a wrong offset!");

// Function BI_BlockingRushInterface.BI_BlockingRushInterface_C.CheckPassiveOnly
// 0x0001 (0x0001 - 0x0000)
struct BI_BlockingRushInterface_C_CheckPassiveOnly final
{
public:
	bool                                          bIsPassiveOnly;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BI_BlockingRushInterface_C_CheckPassiveOnly) == 0x000001, "Wrong alignment on BI_BlockingRushInterface_C_CheckPassiveOnly");
static_assert(sizeof(BI_BlockingRushInterface_C_CheckPassiveOnly) == 0x000001, "Wrong size on BI_BlockingRushInterface_C_CheckPassiveOnly");
static_assert(offsetof(BI_BlockingRushInterface_C_CheckPassiveOnly, bIsPassiveOnly) == 0x000000, "Member 'BI_BlockingRushInterface_C_CheckPassiveOnly::bIsPassiveOnly' has a wrong offset!");

}

