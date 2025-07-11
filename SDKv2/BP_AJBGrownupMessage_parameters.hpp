#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBGrownupMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_AJBGrownupMessage.BP_AJBGrownupMessage_C.RequestMessageByGameplayTag
// 0x0198 (0x0198 - 0x0000)
struct BP_AJBGrownupMessage_C_RequestMessageByGameplayTag final
{
public:
	class ABP_AJBInGameCharacter_C*               TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GrowupTag;                                         // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_SkillIcon_C*                        UnlockSkillIconWidget;                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Key;                                               // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_MessageFulfillDisplayCondition_bResult;   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterName_CharacterName;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue1;               // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0080(0x0020)()
	bool                                          CallFunc_MatchesAnyTags_ReturnValue;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetTagName_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue1;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStringFromTableByKey_bResult;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringFromTableByKey_String;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	class FName                                   CallFunc_GetStringTablePath_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue2;           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0110(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue2;               // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_BuildString_Name_ReturnValue;             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
};
static_assert(alignof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag) == 0x000008, "Wrong alignment on BP_AJBGrownupMessage_C_RequestMessageByGameplayTag");
static_assert(sizeof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag) == 0x000198, "Wrong size on BP_AJBGrownupMessage_C_RequestMessageByGameplayTag");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, TargetCharacter) == 0x000000, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, GrowupTag) == 0x000008, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::GrowupTag' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, Value) == 0x000010, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::Value' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, UnlockSkillIconWidget) == 0x000018, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::UnlockSkillIconWidget' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, bSuccess) == 0x000020, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, Key) == 0x000028, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::Key' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_MessageFulfillDisplayCondition_bResult) == 0x000038, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_MessageFulfillDisplayCondition_bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_GetCharacterName_CharacterName) == 0x000050, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_GetCharacterName_CharacterName' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Conv_NameToString_ReturnValue) == 0x000058, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Concat_StrStr_ReturnValue1) == 0x000070, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Concat_StrStr_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000080, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_MatchesAnyTags_ReturnValue) == 0x0000A0, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_MatchesAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_GetTagName_ReturnValue) == 0x0000A8, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_GetTagName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Conv_NameToString_ReturnValue1) == 0x0000B0, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Conv_NameToString_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Conv_StringToName_ReturnValue) == 0x0000C0, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_GetStringFromTableByKey_bResult) == 0x0000C8, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_GetStringFromTableByKey_bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_GetStringFromTableByKey_String) == 0x0000D0, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_GetStringFromTableByKey_String' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_GetStringTablePath_ReturnValue) == 0x0000F8, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_GetStringTablePath_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Conv_NameToString_ReturnValue2) == 0x000100, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Conv_NameToString_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, K2Node_MakeStruct_FormatArgumentData) == 0x000110, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Concat_StrStr_ReturnValue2) == 0x000150, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Concat_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, K2Node_MakeArray_Array) == 0x000160, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_BuildString_Name_ReturnValue) == 0x000170, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_BuildString_Name_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTag, CallFunc_Format_ReturnValue) == 0x000180, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTag::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_AJBGrownupMessage.BP_AJBGrownupMessage_C.SetupMessageWidget
// 0x0008 (0x0008 - 0x0000)
struct BP_AJBGrownupMessage_C_SetupMessageWidget final
{
public:
	class UWB_AbilityActivateMessage_C*           MessageWidget_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBGrownupMessage_C_SetupMessageWidget) == 0x000008, "Wrong alignment on BP_AJBGrownupMessage_C_SetupMessageWidget");
static_assert(sizeof(BP_AJBGrownupMessage_C_SetupMessageWidget) == 0x000008, "Wrong size on BP_AJBGrownupMessage_C_SetupMessageWidget");
static_assert(offsetof(BP_AJBGrownupMessage_C_SetupMessageWidget, MessageWidget_0) == 0x000000, "Member 'BP_AJBGrownupMessage_C_SetupMessageWidget::MessageWidget_0' has a wrong offset!");

// Function BP_AJBGrownupMessage.BP_AJBGrownupMessage_C.MessageFulfillDisplayCondition
// 0x0098 (0x0098 - 0x0000)
struct BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition final
{
public:
	struct FGameplayTag                           GrowupTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameCharacter_C*               TargetCharacter;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryGetSkillComponentByType_bSuccess;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBSkillBase_C*                     CallFunc_TryGetSkillComponentByType_SkillComponet; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UltimateSkillNumWillBeIncreased_bResult;  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetTagName_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindSubstring_ReturnValue;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue1;               // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue1;               // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition) == 0x000008, "Wrong alignment on BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition");
static_assert(sizeof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition) == 0x000098, "Wrong size on BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, GrowupTag) == 0x000000, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::GrowupTag' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, TargetCharacter) == 0x000008, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, bResult) == 0x000010, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_TryGetSkillComponentByType_bSuccess) == 0x000011, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_TryGetSkillComponentByType_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_TryGetSkillComponentByType_SkillComponet) == 0x000018, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_TryGetSkillComponentByType_SkillComponet' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_UltimateSkillNumWillBeIncreased_bResult) == 0x000020, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_UltimateSkillNumWillBeIncreased_bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000022, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_GetTagName_ReturnValue) == 0x000028, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_GetTagName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000030, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_Conv_NameToString_ReturnValue) == 0x000038, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_Not_PreBool_ReturnValue1) == 0x000048, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_FindSubstring_ReturnValue) == 0x00004C, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_FindSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_MatchesTag_ReturnValue) == 0x000050, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000051, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_BooleanAND_ReturnValue) == 0x000052, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_GetObjectName_ReturnValue) == 0x000058, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_Concat_StrStr_ReturnValue) == 0x000068, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_GetObjectName_ReturnValue1) == 0x000078, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_GetObjectName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition, CallFunc_Concat_StrStr_ReturnValue1) == 0x000088, "Member 'BP_AJBGrownupMessage_C_MessageFulfillDisplayCondition::CallFunc_Concat_StrStr_ReturnValue1' has a wrong offset!");

// Function BP_AJBGrownupMessage.BP_AJBGrownupMessage_C.RequestMessageByGameplayTagThreeParams
// 0x01B0 (0x01B0 - 0x0000)
struct BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams final
{
public:
	class ABP_AJBInGameCharacter_C*               TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GrowupTag;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                         Value01;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value02;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value03;                                           // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempKey;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0078(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x00B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_MessageFulfillDisplayCondition_bResult;   // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetTagName_ReturnValue;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStringFromTableByKey_bResult;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetStringFromTableByKey_String;           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0148(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	class FName                                   CallFunc_GetStringTablePath_ReturnValue;           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue1;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BuildString_Name_ReturnValue;             // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams) == 0x000008, "Wrong alignment on BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams");
static_assert(sizeof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams) == 0x0001B0, "Wrong size on BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, TargetCharacter) == 0x000000, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::TargetCharacter' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, GrowupTag) == 0x000008, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::GrowupTag' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, Value01) == 0x000010, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::Value01' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, Value02) == 0x000014, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::Value02' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, Value03) == 0x000018, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::Value03' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, bSuccess) == 0x00001C, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, TempKey) == 0x000020, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::TempKey' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, K2Node_MakeStruct_FormatArgumentData1) == 0x000078, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, K2Node_MakeStruct_FormatArgumentData2) == 0x0000B8, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, K2Node_MakeArray_Array) == 0x0000F8, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_MessageFulfillDisplayCondition_bResult) == 0x000108, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_MessageFulfillDisplayCondition_bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_GetTagName_ReturnValue) == 0x000110, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_GetTagName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_Conv_NameToString_ReturnValue) == 0x000118, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_Conv_StringToName_ReturnValue) == 0x000128, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_GetStringFromTableByKey_bResult) == 0x000130, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_GetStringFromTableByKey_bResult' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_GetStringFromTableByKey_String) == 0x000138, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_GetStringFromTableByKey_String' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_Conv_StringToText_ReturnValue) == 0x000148, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_Format_ReturnValue) == 0x000160, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_GetStringTablePath_ReturnValue) == 0x000178, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_GetStringTablePath_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_Conv_NameToString_ReturnValue1) == 0x000180, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_Conv_NameToString_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_Concat_StrStr_ReturnValue) == 0x000190, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams, CallFunc_BuildString_Name_ReturnValue) == 0x0001A0, "Member 'BP_AJBGrownupMessage_C_RequestMessageByGameplayTagThreeParams::CallFunc_BuildString_Name_ReturnValue' has a wrong offset!");

}

