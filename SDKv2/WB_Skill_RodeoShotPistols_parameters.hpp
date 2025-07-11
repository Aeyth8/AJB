#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Skill_RodeoShotPistols

#include "Basic.hpp"

#include "AJB_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_Skill_RodeoShotPistols.WB_Skill_RodeoShotPistols_C.ExecuteUbergraph_WB_Skill_RodeoShotPistols
// 0x0140 (0x0140 - 0x0000)
struct WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSXPCharacter_bSuccess;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        CallFunc_GetSXPCharacter_SXP;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovableStandSXPState                         K2Node_CustomEvent_PrevState;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovableStandSXPState                         K2Node_CustomEvent_NextState;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSXPCharacter_bSuccess1;                // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        CallFunc_GetSXPCharacter_SXP1;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSXPCharacter_bSuccess2;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        CallFunc_GetSXPCharacter_SXP2;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAJBInGameHUD_BP_bSuccess;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameHUD_C*                     CallFunc_GetAJBInGameHUD_BP_In_Game_HUD;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBInGameCharacterBase*                CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAJBInGameCharacter*                    K2Node_DynamicCast_AsAJBIn_Game_Character;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAJBViewportWidgetOfClass_bSuccess;    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_InGameMain_C*                       CallFunc_FindAJBViewportWidgetOfClass_OutWidget;   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameMovableStand_C*            K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand;  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAJBViewportWidgetOfClass_bSuccess1;   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_InGameMain_C*                       CallFunc_FindAJBViewportWidgetOfClass_OutWidget1;  // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAJBViewportWidgetOfClass_bSuccess2;   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_InGameMain_C*                       CallFunc_FindAJBViewportWidgetOfClass_OutWidget2;  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAJBViewportWidgetOfClass_bSuccess3;   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_InGameMain_C*                       CallFunc_FindAJBViewportWidgetOfClass_OutWidget3;  // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SkillPartsTimer_C*                  CallFunc_RegisterSkillTimer_ReturValue;            // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_SkillPartsTimer_C*                  CallFunc_RegisterSkillTimer_ReturValue1;           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSXPCharacter_bSuccess3;                // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FB[0x5];                                       // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        CallFunc_GetSXPCharacter_SXP3;                     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSXPCharacter_bSuccess4;                // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        CallFunc_GetSXPCharacter_SXP4;                     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EMovableStandSXPState PrevState, EMovableStandSXPState NextState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EMovableStandSXPState PrevState, EMovableStandSXPState NextState)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue1;      // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols) == 0x000008, "Wrong alignment on WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols");
static_assert(sizeof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols) == 0x000140, "Wrong size on WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, EntryPoint) == 0x000000, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_bSuccess) == 0x000040, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_SXP) == 0x000048, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_SXP' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_CustomEvent_PrevState) == 0x000050, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_CustomEvent_PrevState' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_CustomEvent_NextState) == 0x000051, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_CustomEvent_NextState' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_bSuccess1) == 0x000052, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_bSuccess1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_SXP1) == 0x000058, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_SXP1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000064, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_bSuccess2) == 0x000068, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_bSuccess2' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_SXP2) == 0x000070, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_SXP2' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetAJBInGameHUD_BP_bSuccess) == 0x000078, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetAJBInGameHUD_BP_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetAJBInGameHUD_BP_In_Game_HUD) == 0x000080, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetAJBInGameHUD_BP_In_Game_HUD' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000090, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_DynamicCast_AsAJBIn_Game_Character) == 0x000098, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_DynamicCast_AsAJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_bSuccess) == 0x0000A1, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_OutWidget) == 0x0000A8, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_OutWidget' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand) == 0x0000B0, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_DynamicCast_bSuccess1) == 0x0000B8, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_bSuccess1) == 0x0000B9, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_bSuccess1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_OutWidget1) == 0x0000C0, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_OutWidget1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_bSuccess2) == 0x0000C8, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_bSuccess2' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_OutWidget2) == 0x0000D0, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_OutWidget2' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_bSuccess3) == 0x0000D8, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_bSuccess3' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_FindAJBViewportWidgetOfClass_OutWidget3) == 0x0000E0, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_FindAJBViewportWidgetOfClass_OutWidget3' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_RegisterSkillTimer_ReturValue) == 0x0000E8, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_RegisterSkillTimer_ReturValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_RegisterSkillTimer_ReturValue1) == 0x0000F0, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_RegisterSkillTimer_ReturValue1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, Temp_byte_Variable) == 0x0000F8, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, Temp_byte_Variable1) == 0x0000F9, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_bSuccess3) == 0x0000FA, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_bSuccess3' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_SXP3) == 0x000100, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_SXP3' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, Temp_bool_Variable) == 0x000108, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_Select_Default) == 0x000109, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x00010A, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_bSuccess4) == 0x00010B, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_bSuccess4' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_GetSXPCharacter_SXP4) == 0x000110, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_GetSXPCharacter_SXP4' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_CreateDelegate_OutputDelegate) == 0x000118, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, K2Node_CreateDelegate_OutputDelegate1) == 0x000128, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000138, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_EqualEqual_GameplayTag_ReturnValue1) == 0x000139, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_EqualEqual_GameplayTag_ReturnValue1' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_BooleanAND_ReturnValue) == 0x00013A, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols, CallFunc_IsValid_ReturnValue1) == 0x00013B, "Member 'WB_Skill_RodeoShotPistols_C_ExecuteUbergraph_WB_Skill_RodeoShotPistols::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function WB_Skill_RodeoShotPistols.WB_Skill_RodeoShotPistols_C.OnStateChanged
// 0x0002 (0x0002 - 0x0000)
struct WB_Skill_RodeoShotPistols_C_OnStateChanged final
{
public:
	EMovableStandSXPState                         PrevState;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovableStandSXPState                         NextState;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Skill_RodeoShotPistols_C_OnStateChanged) == 0x000001, "Wrong alignment on WB_Skill_RodeoShotPistols_C_OnStateChanged");
static_assert(sizeof(WB_Skill_RodeoShotPistols_C_OnStateChanged) == 0x000002, "Wrong size on WB_Skill_RodeoShotPistols_C_OnStateChanged");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_OnStateChanged, PrevState) == 0x000000, "Member 'WB_Skill_RodeoShotPistols_C_OnStateChanged::PrevState' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_OnStateChanged, NextState) == 0x000001, "Member 'WB_Skill_RodeoShotPistols_C_OnStateChanged::NextState' has a wrong offset!");

// Function WB_Skill_RodeoShotPistols.WB_Skill_RodeoShotPistols_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_Skill_RodeoShotPistols_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Skill_RodeoShotPistols_C_Tick) == 0x000004, "Wrong alignment on WB_Skill_RodeoShotPistols_C_Tick");
static_assert(sizeof(WB_Skill_RodeoShotPistols_C_Tick) == 0x00003C, "Wrong size on WB_Skill_RodeoShotPistols_C_Tick");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_Tick, MyGeometry) == 0x000000, "Member 'WB_Skill_RodeoShotPistols_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_Skill_RodeoShotPistols_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_Skill_RodeoShotPistols.WB_Skill_RodeoShotPistols_C.GetSXPCharacter
// 0x0030 (0x0030 - 0x0000)
struct WB_Skill_RodeoShotPistols_C_GetSXPCharacter final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        SXP;                                               // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBInGameMovableStand*                 CallFunc_GetOwnerMovableStand_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameMovableStand_SXP_C*        K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand_SXP; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter) == 0x000008, "Wrong alignment on WB_Skill_RodeoShotPistols_C_GetSXPCharacter");
static_assert(sizeof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter) == 0x000030, "Wrong size on WB_Skill_RodeoShotPistols_C_GetSXPCharacter");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter, bSuccess) == 0x000000, "Member 'WB_Skill_RodeoShotPistols_C_GetSXPCharacter::bSuccess' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter, SXP) == 0x000008, "Member 'WB_Skill_RodeoShotPistols_C_GetSXPCharacter::SXP' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WB_Skill_RodeoShotPistols_C_GetSXPCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter, CallFunc_GetOwnerMovableStand_ReturnValue) == 0x000018, "Member 'WB_Skill_RodeoShotPistols_C_GetSXPCharacter::CallFunc_GetOwnerMovableStand_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter, K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand_SXP) == 0x000020, "Member 'WB_Skill_RodeoShotPistols_C_GetSXPCharacter::K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand_SXP' has a wrong offset!");
static_assert(offsetof(WB_Skill_RodeoShotPistols_C_GetSXPCharacter, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_Skill_RodeoShotPistols_C_GetSXPCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

