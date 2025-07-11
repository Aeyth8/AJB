#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AJBPostProcessHuman

#include "Basic.hpp"

#include "ELipType_structs.hpp"


namespace SDK::Params
{

// Function ABP_AJBPostProcessHuman.ABP_AJBPostProcessHuman_C.ExecuteUbergraph_ABP_AJBPostProcessHuman
// 0x0050 (0x0050 - 0x0000)
struct ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELipType                                      K2Node_Event_NewType;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      K2Node_Event_Lip_A;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_Event_Lip_I;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_Event_Lip_U;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_Event_Lip_E;                                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_Event_Lip_O;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_NewFlag;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_NewBlendTime;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue1;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue2;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman) == 0x000008, "Wrong alignment on ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman");
static_assert(sizeof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman) == 0x000050, "Wrong size on ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, EntryPoint) == 0x000000, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_NewType) == 0x000004, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_NewType' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_Lip_A) == 0x000008, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_Lip_A' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_Lip_I) == 0x000010, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_Lip_I' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_Lip_U) == 0x000018, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_Lip_U' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_Lip_E) == 0x000020, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_Lip_E' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_Lip_O) == 0x000028, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_Lip_O' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_NewFlag) == 0x000030, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_NewFlag' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_NewBlendTime) == 0x000034, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_NewBlendTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_Event_DeltaTimeX) == 0x000038, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, K2Node_SwitchEnum_CmpSuccess) == 0x00003C, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000040, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, CallFunc_FInterpTo_ReturnValue) == 0x000044, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, CallFunc_FInterpTo_ReturnValue1) == 0x000048, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::CallFunc_FInterpTo_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman, CallFunc_FInterpTo_ReturnValue2) == 0x00004C, "Member 'ABP_AJBPostProcessHuman_C_ExecuteUbergraph_ABP_AJBPostProcessHuman::CallFunc_FInterpTo_ReturnValue2' has a wrong offset!");

// Function ABP_AJBPostProcessHuman.ABP_AJBPostProcessHuman_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_AJBPostProcessHuman_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_AJBPostProcessHuman.ABP_AJBPostProcessHuman_C.UpdateLipBlendTime
// 0x0004 (0x0004 - 0x0000)
struct ABP_AJBPostProcessHuman_C_UpdateLipBlendTime final
{
public:
	float                                         NewBlendTime;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBPostProcessHuman_C_UpdateLipBlendTime) == 0x000004, "Wrong alignment on ABP_AJBPostProcessHuman_C_UpdateLipBlendTime");
static_assert(sizeof(ABP_AJBPostProcessHuman_C_UpdateLipBlendTime) == 0x000004, "Wrong size on ABP_AJBPostProcessHuman_C_UpdateLipBlendTime");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_UpdateLipBlendTime, NewBlendTime) == 0x000000, "Member 'ABP_AJBPostProcessHuman_C_UpdateLipBlendTime::NewBlendTime' has a wrong offset!");

// Function ABP_AJBPostProcessHuman.ABP_AJBPostProcessHuman_C.SetEnableLip
// 0x0001 (0x0001 - 0x0000)
struct ABP_AJBPostProcessHuman_C_SetEnableLip final
{
public:
	bool                                          NewFlag;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ABP_AJBPostProcessHuman_C_SetEnableLip) == 0x000001, "Wrong alignment on ABP_AJBPostProcessHuman_C_SetEnableLip");
static_assert(sizeof(ABP_AJBPostProcessHuman_C_SetEnableLip) == 0x000001, "Wrong size on ABP_AJBPostProcessHuman_C_SetEnableLip");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_SetEnableLip, NewFlag) == 0x000000, "Member 'ABP_AJBPostProcessHuman_C_SetEnableLip::NewFlag' has a wrong offset!");

// Function ABP_AJBPostProcessHuman.ABP_AJBPostProcessHuman_C.SetLipAnimSequence
// 0x0028 (0x0028 - 0x0000)
struct ABP_AJBPostProcessHuman_C_SetLipAnimSequence final
{
public:
	class UAnimSequenceBase*                      Lip_A;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Lip_I;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Lip_U;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Lip_E;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Lip_O;                                             // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence) == 0x000008, "Wrong alignment on ABP_AJBPostProcessHuman_C_SetLipAnimSequence");
static_assert(sizeof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence) == 0x000028, "Wrong size on ABP_AJBPostProcessHuman_C_SetLipAnimSequence");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence, Lip_A) == 0x000000, "Member 'ABP_AJBPostProcessHuman_C_SetLipAnimSequence::Lip_A' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence, Lip_I) == 0x000008, "Member 'ABP_AJBPostProcessHuman_C_SetLipAnimSequence::Lip_I' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence, Lip_U) == 0x000010, "Member 'ABP_AJBPostProcessHuman_C_SetLipAnimSequence::Lip_U' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence, Lip_E) == 0x000018, "Member 'ABP_AJBPostProcessHuman_C_SetLipAnimSequence::Lip_E' has a wrong offset!");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_SetLipAnimSequence, Lip_O) == 0x000020, "Member 'ABP_AJBPostProcessHuman_C_SetLipAnimSequence::Lip_O' has a wrong offset!");

// Function ABP_AJBPostProcessHuman.ABP_AJBPostProcessHuman_C.UpdateLipType
// 0x0001 (0x0001 - 0x0000)
struct ABP_AJBPostProcessHuman_C_UpdateLipType final
{
public:
	ELipType                                      NewType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_AJBPostProcessHuman_C_UpdateLipType) == 0x000001, "Wrong alignment on ABP_AJBPostProcessHuman_C_UpdateLipType");
static_assert(sizeof(ABP_AJBPostProcessHuman_C_UpdateLipType) == 0x000001, "Wrong size on ABP_AJBPostProcessHuman_C_UpdateLipType");
static_assert(offsetof(ABP_AJBPostProcessHuman_C_UpdateLipType, NewType) == 0x000000, "Member 'ABP_AJBPostProcessHuman_C_UpdateLipType::NewType' has a wrong offset!");

}

