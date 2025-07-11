#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBFirstBombImpulseObject

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBFirstBombImpulseObject.BP_AJBFirstBombImpulseObject_C.GetAttackDistance
// 0x0050 (0x0050 - 0x0000)
struct BP_AJBFirstBombImpulseObject_C_GetAttackDistance final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttackDistance;                                    // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               CallFunc_GetAJBCharacterFromActor_CharacterBP;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAJBCharacterFromActor_bSuccess;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x0030(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0040(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance) == 0x000008, "Wrong alignment on BP_AJBFirstBombImpulseObject_C_GetAttackDistance");
static_assert(sizeof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance) == 0x000050, "Wrong size on BP_AJBFirstBombImpulseObject_C_GetAttackDistance");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, DamagedActor) == 0x000000, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, AttackDistance) == 0x000008, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::AttackDistance' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_GetAJBCharacterFromActor_CharacterBP) == 0x000018, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_GetAJBCharacterFromActor_CharacterBP' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_GetAJBCharacterFromActor_bSuccess) == 0x000020, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_GetAJBCharacterFromActor_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000024, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x000030, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBFirstBombImpulseObject_C_GetAttackDistance, CallFunc_VSize_ReturnValue) == 0x00004C, "Member 'BP_AJBFirstBombImpulseObject_C_GetAttackDistance::CallFunc_VSize_ReturnValue' has a wrong offset!");

}

