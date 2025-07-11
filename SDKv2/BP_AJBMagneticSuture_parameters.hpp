#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBMagneticSuture

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AJBMagneticSuture.BP_AJBMagneticSuture_C.PossibleHealing
// 0x0020 (0x0020 - 0x0000)
struct BP_AJBMagneticSuture_C_PossibleHealing final
{
public:
	bool                                          bPossibleHealing;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PossibleHealing_bPossibleHealing;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_RST_C*           K2Node_DynamicCast_AsBP_AJBIn_Game_Character_RST;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckActiveIronsandCamouflage_bActive;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBMagneticSuture_C_PossibleHealing) == 0x000008, "Wrong alignment on BP_AJBMagneticSuture_C_PossibleHealing");
static_assert(sizeof(BP_AJBMagneticSuture_C_PossibleHealing) == 0x000020, "Wrong size on BP_AJBMagneticSuture_C_PossibleHealing");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, bPossibleHealing) == 0x000000, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::bPossibleHealing' has a wrong offset!");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, CallFunc_PossibleHealing_bPossibleHealing) == 0x000001, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::CallFunc_PossibleHealing_bPossibleHealing' has a wrong offset!");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, K2Node_DynamicCast_AsBP_AJBIn_Game_Character_RST) == 0x000010, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::K2Node_DynamicCast_AsBP_AJBIn_Game_Character_RST' has a wrong offset!");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, CallFunc_CheckActiveIronsandCamouflage_bActive) == 0x000019, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::CallFunc_CheckActiveIronsandCamouflage_bActive' has a wrong offset!");
static_assert(offsetof(BP_AJBMagneticSuture_C_PossibleHealing, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'BP_AJBMagneticSuture_C_PossibleHealing::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

