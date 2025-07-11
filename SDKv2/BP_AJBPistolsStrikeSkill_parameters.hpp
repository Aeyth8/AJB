#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBPistolsStrikeSkill

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBPistolsStrikeSkill.BP_AJBPistolsStrikeSkill_C.ExecuteUbergraph_BP_AJBPistolsStrikeSkill
// 0x0090 (0x0090 - 0x0000)
struct BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Damage, const struct FGameplayTag& DamageType, class AActor* DamageReceiver, bool bRemainHP, bool bDamageIsCut, int32 SerialNumber, bool DamageReceiverIsPlayer, bool bWithSeparatedStandAttack, bool bEnemysSeparateStand)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class AAJBInGameCharacterBase*                CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasLocalSharedController_ReturnValue;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameCharacter_C*               K2Node_Event_CharacterBP;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Damage;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_DamageType;                     // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageReceiver;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bRemainHP;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bDamageIsCut;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SerialNumber;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_DamageReceiverIsPlayer;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWithSeparatedStandAttack;      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bEnemysSeparateStand;           // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryToSpeakVoice_bWillBeSpoken;            // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBInGameCharacterBase*                CallFunc_GetOwnerCharacter_ReturnValue1;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_C*            K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBInGameMovableStand_SXP_C*        K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand_SXP; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill) == 0x000008, "Wrong alignment on BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill");
static_assert(sizeof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill) == 0x000090, "Wrong size on BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, EntryPoint) == 0x000000, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000018, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_HasLocalSharedController_ReturnValue) == 0x000020, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_HasLocalSharedController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_Event_CharacterBP) == 0x000028, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_Event_CharacterBP' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_Damage) == 0x000034, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_DamageType) == 0x000038, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_DamageType' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_DamageReceiver) == 0x000040, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_DamageReceiver' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_bRemainHP) == 0x000048, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_bRemainHP' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_bDamageIsCut) == 0x000049, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_bDamageIsCut' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_SerialNumber) == 0x00004C, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_SerialNumber' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_DamageReceiverIsPlayer) == 0x000050, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_DamageReceiverIsPlayer' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_bWithSeparatedStandAttack) == 0x000051, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_bWithSeparatedStandAttack' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_CustomEvent_bEnemysSeparateStand) == 0x000052, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_CustomEvent_bEnemysSeparateStand' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_TryToSpeakVoice_bWillBeSpoken) == 0x000053, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_TryToSpeakVoice_bWillBeSpoken' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000054, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, CallFunc_GetOwnerCharacter_ReturnValue1) == 0x000058, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::CallFunc_GetOwnerCharacter_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_DynamicCast_AsBP_AJBIn_Game_Character) == 0x000060, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_DynamicCast_AsBP_AJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand) == 0x000070, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_DynamicCast_bSuccess1) == 0x000078, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand_SXP) == 0x000080, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_DynamicCast_AsBP_AJBIn_Game_Movable_Stand_SXP' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill, K2Node_DynamicCast_bSuccess2) == 0x000088, "Member 'BP_AJBPistolsStrikeSkill_C_ExecuteUbergraph_BP_AJBPistolsStrikeSkill::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

// Function BP_AJBPistolsStrikeSkill.BP_AJBPistolsStrikeSkill_C.OnGiveDamage
// 0x0028 (0x0028 - 0x0000)
struct BP_AJBPistolsStrikeSkill_C_OnGiveDamage final
{
public:
	int32                                         Damage_0;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           DamageType;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageReceiver;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRemainHP;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDamageIsCut;                                      // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SerialNumber_0;                                    // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DamageReceiverIsPlayer;                            // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bWithSeparatedStandAttack;                         // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnemysSeparateStand;                              // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage) == 0x000008, "Wrong alignment on BP_AJBPistolsStrikeSkill_C_OnGiveDamage");
static_assert(sizeof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage) == 0x000028, "Wrong size on BP_AJBPistolsStrikeSkill_C_OnGiveDamage");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, Damage_0) == 0x000000, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::Damage_0' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, DamageType) == 0x000008, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::DamageType' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, DamageReceiver) == 0x000010, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::DamageReceiver' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, bRemainHP) == 0x000018, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::bRemainHP' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, bDamageIsCut) == 0x000019, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::bDamageIsCut' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, SerialNumber_0) == 0x00001C, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::SerialNumber_0' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, DamageReceiverIsPlayer) == 0x000020, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::DamageReceiverIsPlayer' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, bWithSeparatedStandAttack) == 0x000021, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::bWithSeparatedStandAttack' has a wrong offset!");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_OnGiveDamage, bEnemysSeparateStand) == 0x000022, "Member 'BP_AJBPistolsStrikeSkill_C_OnGiveDamage::bEnemysSeparateStand' has a wrong offset!");

// Function BP_AJBPistolsStrikeSkill.BP_AJBPistolsStrikeSkill_C.BindCharacterDispatcher
// 0x0008 (0x0008 - 0x0000)
struct BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher final
{
public:
	class ABP_AJBInGameCharacter_C*               CharacterBP;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher) == 0x000008, "Wrong alignment on BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher");
static_assert(sizeof(BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher) == 0x000008, "Wrong size on BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher");
static_assert(offsetof(BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher, CharacterBP) == 0x000000, "Member 'BP_AJBPistolsStrikeSkill_C_BindCharacterDispatcher::CharacterBP' has a wrong offset!");

}

