#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AchievementTriggerSender_PlayerController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController
// 0x0190 (0x0190 - 0x0000)
struct BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAJBGameInstance_bSuccess;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AJBGameInstance_C*                  CallFunc_GetAJBGameInstance_AJB_Game_Instance;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FTimespan& WatchingTime)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGamePlayerController_C*        K2Node_DynamicCast_AsBP_AJBIn_Game_Player_Controller; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FTimespan& LivingTime)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimespan                              K2Node_CustomEvent_LivingTime;                     // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 BattleGameRank, int32 BattleGameRankWithoutCPU)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_BattleGameRank;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_BattleGameRankWithoutCPU;       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x00A8(0x0018)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue1;                    // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue1;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_AJBInGamePlayerController_C*        K2Node_DynamicCast_AsBP_AJBIn_Game_Player_Controller1; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue1;               // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_WatchingTime;                   // 0x0108(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue1;             // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue1;                      // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue1;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue1;               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0120(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue3;              // 0x0138(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue2;           // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue3;           // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue2;               // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue3;               // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController) == 0x000008, "Wrong alignment on BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController");
static_assert(sizeof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController) == 0x000190, "Wrong size on BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, EntryPoint) == 0x000000, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_GetAJBGameInstance_bSuccess) == 0x000004, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_GetAJBGameInstance_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_GetAJBGameInstance_AJB_Game_Instance) == 0x000008, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_GetAJBGameInstance_AJB_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_DynamicCast_AsBP_AJBIn_Game_Player_Controller) == 0x000028, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_DynamicCast_AsBP_AJBIn_Game_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_IsLocalPlayerController_ReturnValue) == 0x000031, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CreateDelegate_OutputDelegate1) == 0x000038, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CustomEvent_LivingTime) == 0x000048, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CustomEvent_LivingTime' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_GetTotalSeconds_ReturnValue) == 0x000050, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CreateDelegate_OutputDelegate2) == 0x000058, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_FTrunc_ReturnValue) == 0x000068, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CustomEvent_BattleGameRank) == 0x00006C, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CustomEvent_BattleGameRank' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CustomEvent_BattleGameRankWithoutCPU) == 0x000070, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CustomEvent_BattleGameRankWithoutCPU' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Percent_IntInt_ReturnValue) == 0x000074, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Divide_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_IntToText_ReturnValue1) == 0x0000A8, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_GetOwner_ReturnValue1) == 0x0000C0, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_GetOwner_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_TextToString_ReturnValue1) == 0x0000C8, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_TextToString_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_DynamicCast_AsBP_AJBIn_Game_Player_Controller1) == 0x0000D8, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_DynamicCast_AsBP_AJBIn_Game_Player_Controller1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_DynamicCast_bSuccess1) == 0x0000E0, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E8, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Concat_StrStr_ReturnValue1) == 0x0000F8, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Concat_StrStr_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, K2Node_CustomEvent_WatchingTime) == 0x000108, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::K2Node_CustomEvent_WatchingTime' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_GetTotalSeconds_ReturnValue1) == 0x000110, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_GetTotalSeconds_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_FTrunc_ReturnValue1) == 0x000114, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_FTrunc_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Percent_IntInt_ReturnValue1) == 0x000118, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Percent_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Divide_IntInt_ReturnValue1) == 0x00011C, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Divide_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_IntToText_ReturnValue2) == 0x000120, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_IntToText_ReturnValue3) == 0x000138, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_IntToText_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_TextToString_ReturnValue2) == 0x000150, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_TextToString_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Conv_TextToString_ReturnValue3) == 0x000160, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Conv_TextToString_ReturnValue3' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Concat_StrStr_ReturnValue2) == 0x000170, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Concat_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController, CallFunc_Concat_StrStr_ReturnValue3) == 0x000180, "Member 'BP_AchievementTriggerSender_PlayerController_C_ExecuteUbergraph_BP_AchievementTriggerSender_PlayerController::CallFunc_Concat_StrStr_ReturnValue3' has a wrong offset!");

// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnDetermineBattleGameRank
// 0x0008 (0x0008 - 0x0000)
struct BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank final
{
public:
	int32                                         BattleGameRank;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BattleGameRankWithoutCPU;                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank) == 0x000004, "Wrong alignment on BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank");
static_assert(sizeof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank) == 0x000008, "Wrong size on BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank, BattleGameRank) == 0x000000, "Member 'BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank::BattleGameRank' has a wrong offset!");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank, BattleGameRankWithoutCPU) == 0x000004, "Member 'BP_AchievementTriggerSender_PlayerController_C_OnDetermineBattleGameRank::BattleGameRankWithoutCPU' has a wrong offset!");

// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnDetermineLivingTime
// 0x0008 (0x0008 - 0x0000)
struct BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime final
{
public:
	struct FTimespan                              LivingTime;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime) == 0x000008, "Wrong alignment on BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime");
static_assert(sizeof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime) == 0x000008, "Wrong size on BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime, LivingTime) == 0x000000, "Member 'BP_AchievementTriggerSender_PlayerController_C_OnDetermineLivingTime::LivingTime' has a wrong offset!");

// Function BP_AchievementTriggerSender_PlayerController.BP_AchievementTriggerSender_PlayerController_C.OnDetermineWatchingTime
// 0x0008 (0x0008 - 0x0000)
struct BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime final
{
public:
	struct FTimespan                              WatchingTime;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime) == 0x000008, "Wrong alignment on BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime");
static_assert(sizeof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime) == 0x000008, "Wrong size on BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime");
static_assert(offsetof(BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime, WatchingTime) == 0x000000, "Member 'BP_AchievementTriggerSender_PlayerController_C_OnDetermineWatchingTime::WatchingTime' has a wrong offset!");

}

