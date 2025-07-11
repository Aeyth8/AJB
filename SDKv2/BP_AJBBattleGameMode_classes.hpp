#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBBattleGameMode

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBBattleGameMode.BP_AJBBattleGameMode_C
// 0x0130 (0x0550 - 0x0420)
class ABP_AJBBattleGameMode_C final : public AAJBBattleGameMode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(Transient, DuplicateTransient)
	class UBP_AJBInGameAIDirector_C*              BP_AJBInGameAIDirector;                            // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInGameItemSpawnerMaster_C*       BP_AJBInGameItemSpawnerMaster;                     // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GameFlowStateManager_C*             BP_GameFlowStateManager;                           // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInGameMessageManagerProxy_C*     MessageManagerProxy;                               // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBDamageAreaMaster_C*              BP_AJBDamageAreaMaster;                            // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        StartLocation;                                     // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int32                                         StartIndex;                                        // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBattleRoyale;                                   // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStartLocationInfo>             StartLocationData;                                 // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FDateTime                              LastLoginTime;                                     // 0x0480(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         LoginWaitSecond;                                   // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C[0x4];                                      // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CheckRedisServerTimer;                             // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           OutputLogMatchingInfoTimer;                        // 0x0498(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bLoadedStartPointLevel;                            // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A1[0x3];                                      // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShutdownTimeoutSecond;                             // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              FinishGameTime;                                    // 0x04A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckLogoutPlayerTimer;                            // 0x04B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         ExpendStatusSecond;                                // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoginTimeOutSecond;                                // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LoginTimeoutTimerHandle;                           // 0x04C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                                StartPointOffset;                                  // 0x04C8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0xC];                                      // 0x04D4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CameraModeStartTransform;                          // 0x04E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         PairNPCLevel;                                      // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511[0x3];                                      // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AJBKillZUpper_cm_;                                 // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AJBKillZLower_cm_;                                 // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandleCheckAJBKillZ;                          // 0x0520(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bDebugDrawAJBKillZRange;                           // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529[0x7];                                      // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ExpendTimer;                                       // 0x0530(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         BOTAILevel;                                        // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539[0x3];                                      // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RetryCheckStandbySecond;                           // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RetryCheckStandbySpan;                             // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseTimeLimit;                                     // 0x0544(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBBattleGameMode(int32 EntryPoint);
	void BindNPCEvents();
	void OnNPCSpawned(class ABP_AJBInGameCharacter_C* Character);
	void OnEnd_Gameplay(const struct FGameplayTag& NextState);
	void OnTick_Exit(float DeltaSecond);
	void OnEnd_Victory(const struct FGameplayTag& NextState);
	void OnTick_Victory(float DeltaSecond);
	void OnBegin_Victory(const struct FGameplayTag& PrevState);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnLogout(class AController* ExitingController);
	void OnTick_Gameplay(float DeltaSecond);
	void OnBegin_Exit(const struct FGameplayTag& PrevState);
	void OnBegin_Gameplay(const struct FGameplayTag& PrevState);
	void OnEnd_Standby(const struct FGameplayTag& NextState);
	void OnTick_Standby(float DeltaSecond);
	void OnBegin_Standby(const struct FGameplayTag& PrevState);
	void FlowStateBind();
	void EntryPlayer(class ABP_AJBInGamePlayerController_C* PlayerController);
	void ReceiveBeginPlay();
	void DebugDamageArea(int32 AreaTypeID);
	void ResetGame();
	void DebugReset();
	void OnTimeOutLoginPlayer();
	void OnCallExpendStatus();
	void OnCheckRedisServer();
	void UserConstructionScript();
	void GetBattleGameState(class ABP_AJBBattleGameState_C** AsBP_AJBBattle_Game_State);
	class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	void AddNPCDefault(uint8 AILevel);
	void FindNextStartLocation(struct FVector* Output);
	void CheckAllStandby();
	void LocationArrayShuffle();
	void DebugNPCNum(int32 NPCNum);
	void GetCurrentFlowStateGameplayTag(struct FGameplayTag* CurrentState);
	void ResetDamageArea();
	void InitializeNPC();
	void GetSelecedStartLocation(const struct FStartLocation& StartLocation_0, struct FVector* Location, struct FRotator* Rotation);
	void InitializeStartLocation();
	bool CheckExitGame();
	void StopDamageArea();
	void StartDamageArea();
	void ChangeServerStatusToRedisServer(EInGameServerStatus Status);
	void OutputLogMatichingInfo();
	void CheckLogoutPlayer();
	void ResetLoginTimeoutTimer();
	void SetupPairID();
	void SetPairCharacter(const class FString& TeamHostUserID, class ABP_AJBInGameCharacter_C* HostCharacter, class ABP_AJBInGameCharacter_C* GuestCharacter);
	void SetupPartnerNPC();
	void UpdateMatchingPlayerStartLocation();
	void GetSelecedPlayerStartLocation(const struct FStartLocation& StartLocation_0, uint8 PlayerID, struct FVector* Location, struct FRotator* Rotation);
	void GetStartCameraModeTransform(struct FTransform* Transform);
	void CheckAJBKillZ();
	void SetupBOTPlayer();
	void GetNoneBotPlayerNum(const TMap<class FString, struct FMatchingPlayerInfo>& TargetMap, int32* Result);
	void ChangeGameFlowState(const struct FGameplayTag& NextStateTag, bool* bReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBBattleGameMode_C">();
	}
	static class ABP_AJBBattleGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBBattleGameMode_C>();
	}
};
static_assert(alignof(ABP_AJBBattleGameMode_C) == 0x000010, "Wrong alignment on ABP_AJBBattleGameMode_C");
static_assert(sizeof(ABP_AJBBattleGameMode_C) == 0x000550, "Wrong size on ABP_AJBBattleGameMode_C");
static_assert(offsetof(ABP_AJBBattleGameMode_C, UberGraphFrame) == 0x000420, "Member 'ABP_AJBBattleGameMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, BP_AJBInGameAIDirector) == 0x000428, "Member 'ABP_AJBBattleGameMode_C::BP_AJBInGameAIDirector' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, BP_AJBInGameItemSpawnerMaster) == 0x000430, "Member 'ABP_AJBBattleGameMode_C::BP_AJBInGameItemSpawnerMaster' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, BP_GameFlowStateManager) == 0x000438, "Member 'ABP_AJBBattleGameMode_C::BP_GameFlowStateManager' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, MessageManagerProxy) == 0x000440, "Member 'ABP_AJBBattleGameMode_C::MessageManagerProxy' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, BP_AJBDamageAreaMaster) == 0x000448, "Member 'ABP_AJBBattleGameMode_C::BP_AJBDamageAreaMaster' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, DefaultSceneRoot) == 0x000450, "Member 'ABP_AJBBattleGameMode_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, StartLocation) == 0x000458, "Member 'ABP_AJBBattleGameMode_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, StartIndex) == 0x000468, "Member 'ABP_AJBBattleGameMode_C::StartIndex' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, bIsBattleRoyale) == 0x00046C, "Member 'ABP_AJBBattleGameMode_C::bIsBattleRoyale' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, StartLocationData) == 0x000470, "Member 'ABP_AJBBattleGameMode_C::StartLocationData' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, LastLoginTime) == 0x000480, "Member 'ABP_AJBBattleGameMode_C::LastLoginTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, LoginWaitSecond) == 0x000488, "Member 'ABP_AJBBattleGameMode_C::LoginWaitSecond' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, CheckRedisServerTimer) == 0x000490, "Member 'ABP_AJBBattleGameMode_C::CheckRedisServerTimer' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, OutputLogMatchingInfoTimer) == 0x000498, "Member 'ABP_AJBBattleGameMode_C::OutputLogMatchingInfoTimer' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, bLoadedStartPointLevel) == 0x0004A0, "Member 'ABP_AJBBattleGameMode_C::bLoadedStartPointLevel' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, ShutdownTimeoutSecond) == 0x0004A4, "Member 'ABP_AJBBattleGameMode_C::ShutdownTimeoutSecond' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, FinishGameTime) == 0x0004A8, "Member 'ABP_AJBBattleGameMode_C::FinishGameTime' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, CheckLogoutPlayerTimer) == 0x0004B0, "Member 'ABP_AJBBattleGameMode_C::CheckLogoutPlayerTimer' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, ExpendStatusSecond) == 0x0004B8, "Member 'ABP_AJBBattleGameMode_C::ExpendStatusSecond' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, LoginTimeOutSecond) == 0x0004BC, "Member 'ABP_AJBBattleGameMode_C::LoginTimeOutSecond' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, LoginTimeoutTimerHandle) == 0x0004C0, "Member 'ABP_AJBBattleGameMode_C::LoginTimeoutTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, StartPointOffset) == 0x0004C8, "Member 'ABP_AJBBattleGameMode_C::StartPointOffset' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, CameraModeStartTransform) == 0x0004E0, "Member 'ABP_AJBBattleGameMode_C::CameraModeStartTransform' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, PairNPCLevel) == 0x000510, "Member 'ABP_AJBBattleGameMode_C::PairNPCLevel' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, AJBKillZUpper_cm_) == 0x000514, "Member 'ABP_AJBBattleGameMode_C::AJBKillZUpper_cm_' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, AJBKillZLower_cm_) == 0x000518, "Member 'ABP_AJBBattleGameMode_C::AJBKillZLower_cm_' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, TimerHandleCheckAJBKillZ) == 0x000520, "Member 'ABP_AJBBattleGameMode_C::TimerHandleCheckAJBKillZ' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, bDebugDrawAJBKillZRange) == 0x000528, "Member 'ABP_AJBBattleGameMode_C::bDebugDrawAJBKillZRange' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, ExpendTimer) == 0x000530, "Member 'ABP_AJBBattleGameMode_C::ExpendTimer' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, BOTAILevel) == 0x000538, "Member 'ABP_AJBBattleGameMode_C::BOTAILevel' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, RetryCheckStandbySecond) == 0x00053C, "Member 'ABP_AJBBattleGameMode_C::RetryCheckStandbySecond' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, RetryCheckStandbySpan) == 0x000540, "Member 'ABP_AJBBattleGameMode_C::RetryCheckStandbySpan' has a wrong offset!");
static_assert(offsetof(ABP_AJBBattleGameMode_C, bUseTimeLimit) == 0x000544, "Member 'ABP_AJBBattleGameMode_C::bUseTimeLimit' has a wrong offset!");

}

