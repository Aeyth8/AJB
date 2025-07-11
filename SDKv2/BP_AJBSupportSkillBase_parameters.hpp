#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSupportSkillBase

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_SkillInfo_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.ExecuteUbergraph_BP_AJBSupportSkillBase
// 0x0180 (0x0180 - 0x0000)
struct BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_Tag2;                                 // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_FloatValue;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_Tag1;                                 // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_Operator;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_Target;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_CauserType;                           // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SerialNumber;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_Tag;                                  // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveGameplayTag_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue1;                    // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               K2Node_DynamicCast_AsBP_AJBIn_Game_Character1;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterName_CharacterName;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue1;             // 0x00E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0100(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase) == 0x000008, "Wrong alignment on BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase");
static_assert(sizeof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase) == 0x000180, "Wrong size on BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, EntryPoint) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_GetObjectClass_ReturnValue) == 0x000008, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_Tag2) == 0x000010, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_Tag2' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_FloatValue) == 0x000018, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_FloatValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_Tag1) == 0x000020, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_Tag1' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_Operator) == 0x000028, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_Operator' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_Target) == 0x000030, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_CauserType) == 0x000038, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_CauserType' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_SerialNumber) == 0x000040, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_SerialNumber' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_Event_Tag) == 0x000048, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_Event_Tag' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_DynamicCast_AsBP_AJBIn_Game_Character) == 0x000058, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_DynamicCast_AsBP_AJBIn_Game_Character' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_Conv_NameToText_ReturnValue) == 0x000068, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_RemoveGameplayTag_ReturnValue) == 0x0000C1, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_RemoveGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_GetOwner_ReturnValue1) == 0x0000C8, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_GetOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_DynamicCast_AsBP_AJBIn_Game_Character1) == 0x0000D0, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_DynamicCast_AsBP_AJBIn_Game_Character1' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_DynamicCast_bSuccess1) == 0x0000D8, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_GetCharacterName_CharacterName) == 0x0000E0, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_GetCharacterName_CharacterName' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_Conv_NameToText_ReturnValue1) == 0x0000E8, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_Conv_NameToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_MakeStruct_FormatArgumentData1) == 0x000100, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, K2Node_MakeArray_Array) == 0x000140, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_Format_ReturnValue) == 0x000150, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_Conv_TextToString_ReturnValue) == 0x000168, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase, CallFunc_Conv_StringToName_ReturnValue) == 0x000178, "Member 'BP_AJBSupportSkillBase_C_ExecuteUbergraph_BP_AJBSupportSkillBase::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.RemoveGameplayTag
// 0x0008 (0x0008 - 0x0000)
struct BP_AJBSupportSkillBase_C_RemoveGameplayTag final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_RemoveGameplayTag) == 0x000008, "Wrong alignment on BP_AJBSupportSkillBase_C_RemoveGameplayTag");
static_assert(sizeof(BP_AJBSupportSkillBase_C_RemoveGameplayTag) == 0x000008, "Wrong size on BP_AJBSupportSkillBase_C_RemoveGameplayTag");
static_assert(offsetof(BP_AJBSupportSkillBase_C_RemoveGameplayTag, Tag) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_RemoveGameplayTag::Tag' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.AddGameplayTag
// 0x0028 (0x0028 - 0x0000)
struct BP_AJBSupportSkillBase_C_AddGameplayTag final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Operator;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Target;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CauserType;                                        // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         SerialNumber;                                      // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_AddGameplayTag) == 0x000008, "Wrong alignment on BP_AJBSupportSkillBase_C_AddGameplayTag");
static_assert(sizeof(BP_AJBSupportSkillBase_C_AddGameplayTag) == 0x000028, "Wrong size on BP_AJBSupportSkillBase_C_AddGameplayTag");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTag, Tag) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTag::Tag' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTag, Operator) == 0x000008, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTag::Operator' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTag, Target) == 0x000010, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTag::Target' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTag, CauserType) == 0x000018, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTag::CauserType' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTag, SerialNumber) == 0x000020, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTag::SerialNumber' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.AddGameplayTagWithFloat
// 0x0010 (0x0010 - 0x0000)
struct BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                         FloatValue;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat) == 0x000008, "Wrong alignment on BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat");
static_assert(sizeof(BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat) == 0x000010, "Wrong size on BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat, Tag) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat::Tag' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat, FloatValue) == 0x000008, "Member 'BP_AJBSupportSkillBase_C_AddGameplayTagWithFloat::FloatValue' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.ChangeSealEnable
// 0x0001 (0x0001 - 0x0000)
struct BP_AJBSupportSkillBase_C_ChangeSealEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_ChangeSealEnable) == 0x000001, "Wrong alignment on BP_AJBSupportSkillBase_C_ChangeSealEnable");
static_assert(sizeof(BP_AJBSupportSkillBase_C_ChangeSealEnable) == 0x000001, "Wrong size on BP_AJBSupportSkillBase_C_ChangeSealEnable");
static_assert(offsetof(BP_AJBSupportSkillBase_C_ChangeSealEnable, bEnable) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_ChangeSealEnable::bEnable' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.CheckSeal
// 0x0030 (0x0030 - 0x0000)
struct BP_AJBSupportSkillBase_C_CheckSeal final
{
public:
	bool                                          bSeal;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_GetGameplayTags_TagContainerCopy;         // 0x0008(0x0020)()
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_CheckSeal) == 0x000008, "Wrong alignment on BP_AJBSupportSkillBase_C_CheckSeal");
static_assert(sizeof(BP_AJBSupportSkillBase_C_CheckSeal) == 0x000030, "Wrong size on BP_AJBSupportSkillBase_C_CheckSeal");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSeal, bSeal) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_CheckSeal::bSeal' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSeal, CallFunc_GetGameplayTags_TagContainerCopy) == 0x000008, "Member 'BP_AJBSupportSkillBase_C_CheckSeal::CallFunc_GetGameplayTags_TagContainerCopy' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSeal, CallFunc_HasTag_ReturnValue) == 0x000028, "Member 'BP_AJBSupportSkillBase_C_CheckSeal::CallFunc_HasTag_ReturnValue' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.CheckSupportSkill
// 0x0006 (0x0006 - 0x0000)
struct BP_AJBSupportSkillBase_C_CheckSupportSkill final
{
public:
	bool                                          bSupportSkill;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillInfo_bResult;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_SkillInfo                          CallFunc_GetSkillInfo_SkillInfo;                   // 0x0002(0x0002)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_CheckSupportSkill) == 0x000001, "Wrong alignment on BP_AJBSupportSkillBase_C_CheckSupportSkill");
static_assert(sizeof(BP_AJBSupportSkillBase_C_CheckSupportSkill) == 0x000006, "Wrong size on BP_AJBSupportSkillBase_C_CheckSupportSkill");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSupportSkill, bSupportSkill) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_CheckSupportSkill::bSupportSkill' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSupportSkill, CallFunc_GetSkillInfo_bResult) == 0x000001, "Member 'BP_AJBSupportSkillBase_C_CheckSupportSkill::CallFunc_GetSkillInfo_bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSupportSkill, CallFunc_GetSkillInfo_SkillInfo) == 0x000002, "Member 'BP_AJBSupportSkillBase_C_CheckSupportSkill::CallFunc_GetSkillInfo_SkillInfo' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSupportSkill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'BP_AJBSupportSkillBase_C_CheckSupportSkill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBSupportSkillBase_C_CheckSupportSkill, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'BP_AJBSupportSkillBase_C_CheckSupportSkill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AJBSupportSkillBase.BP_AJBSupportSkillBase_C.GetGameplayTags
// 0x0020 (0x0020 - 0x0000)
struct BP_AJBSupportSkillBase_C_GetGameplayTags final
{
public:
	struct FGameplayTagContainer                  TagContainerCopy;                                  // 0x0000(0x0020)(Parm, OutParm)
};
static_assert(alignof(BP_AJBSupportSkillBase_C_GetGameplayTags) == 0x000008, "Wrong alignment on BP_AJBSupportSkillBase_C_GetGameplayTags");
static_assert(sizeof(BP_AJBSupportSkillBase_C_GetGameplayTags) == 0x000020, "Wrong size on BP_AJBSupportSkillBase_C_GetGameplayTags");
static_assert(offsetof(BP_AJBSupportSkillBase_C_GetGameplayTags, TagContainerCopy) == 0x000000, "Member 'BP_AJBSupportSkillBase_C_GetGameplayTags::TagContainerCopy' has a wrong offset!");

}

