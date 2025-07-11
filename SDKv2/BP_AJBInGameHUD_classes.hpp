#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_ShopCompetitionTeamInfo_structs.hpp"
#include "ETutorialType_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameHUD.BP_AJBInGameHUD_C
// 0x01F0 (0x0780 - 0x0590)
class ABP_AJBInGameHUD_C final : public AAJBInGameHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(Transient, DuplicateTransient)
	class UBP_AJBShotNGPointHUD_C*                BP_AJBShotNGPointHUD;                              // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBRadioChat_C*                     BP_AJBRadioChat;                                   // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBSkillPassiveUIHandler_C*         BP_AJBSkillPassiveUIHandler;                       // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBInteractActionProgressBar_C*     BP_AJBInteractActionProgressBar;                   // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBTrainingSequence_C*              BP_AJBTrainingSequence;                            // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBReticle_C*                       BP_AJBReticle;                                     // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBSkillGuide_C*                    BP_AJBSkillGuide;                                  // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBTheWorldHandler_C*               BP_AJBTheWorldHandler;                             // 0x05D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBTutorialTriggerSender_HUD_C*     BP_AJBTutorialTriggerSender_HUD;                   // 0x05D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBDevMouseCursorController_C*      BP_AJBDevMouseCursorController;                    // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBCompass_C*                       BP_AJBCompass;                                     // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBPassiveMessage_C*                BP_AJBPassiveMessage;                              // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBGrownupMessage_C*                BP_AJBGrownupMessage;                              // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBTutorialTriggerAggregator_C*     TutorialTriggerAggregator;                         // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBSkillIconHandler_C*              SkillIconHandlerR2;                                // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBSkillIconHandler_C*              SkillIconHandlerR1;                                // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBSkillIconHandler_C*              SkillIconHandlerL2;                                // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AJBSkillIconHandler_C*              SkillIconHandlerL1;                                // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   RestartCharaSelectPtr;                             // 0x0630(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   DebugMenuPtr;                                      // 0x0658(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsDebugHUD;                                       // 0x0680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInitializedInGameUI;                              // 0x0681(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_682[0x6];                                      // 0x0682(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AAJBInGameCharacter*                    MyTargetCharacter;                                 // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         CreateWidgets;                                     // 0x0690(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                          bGameStartFade;                                    // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A1[0x7];                                      // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnActiveDispatcher;                                // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnInactiveDispatcher;                              // 0x06B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bLoadedMenuBGLevel;                                // 0x06C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bActivateInGameUI;                                 // 0x06C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFinishedBattleGame;                               // 0x06CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CB[0x1];                                      // 0x06CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameramanResultWaitTimer;                          // 0x06CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBUIMapManager_C*                  MapManager;                                        // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnChangedTournamentWatcherPlayerDispatcher;        // 0x06D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCachedShopCompetitionDisplayWatcherMode;          // 0x06E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E9[0x7];                                      // 0x06E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnStartTrainingEndGameConfirmDispatcher;           // 0x06F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnReturnInGameFromTrainingDispatcher;              // 0x0700(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bHighlightPlayBegin;                               // 0x0710(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_711[0x7];                                      // 0x0711(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           PairCharaCheckPollingTimer;                        // 0x0718(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWB_TournamentMode_Main_C*              CachedTournamentWidget;                            // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnEndInGameOpeningCountDownDispatcher;             // 0x0728(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnStartInGameOpeningCountDownDispatcher;           // 0x0738(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnTimeupVictoryShotShotPhaseDispatcher;            // 0x0748(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnReleasedTouchOnPlayerByTournamentWatcherDispatcher; // 0x0758(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FST_ShopCompetitionTeamInfo>    ShopCompetitionTeamInfoList;                       // 0x0768(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                           WaitForReplicatingInGameCharacterTimer;            // 0x0778(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnActiveDispatcher__DelegateSignature();
	void OnInactiveDispatcher__DelegateSignature();
	void OnChangedTournamentWatcherPlayerDispatcher__DelegateSignature(int32 NewWatcherPlayerID);
	void OnStartTrainingEndGameConfirmDispatcher__DelegateSignature();
	void OnReturnInGameFromTrainingDispatcher__DelegateSignature();
	void OnEndInGameOpeningCountDownDispatcher__DelegateSignature();
	void OnStartInGameOpeningCountDownDispatcher__DelegateSignature();
	void OnTimeupVictoryShotShotPhaseDispatcher__DelegateSignature();
	void OnReleasedTouchOnPlayerByTournamentWatcherDispatcher__DelegateSignature(class AActor* TouchedPlayerActor);
	void ExecuteUbergraph_BP_AJBInGameHUD(int32 EntryPoint);
	void ShowSkillUnavailable_HereCanNotAction(class AActor* SenderCharacter);
	void ShowSkillUnavailable_IronsandCamouflagePair(class AActor* SenderCharacter);
	void ShowSkillUnavailable_TorrentialRainSelf(class AActor* SenderCharacter);
	void ShowSkillUnavailable_TorrentialRainPair(class AActor* SenderCharacter);
	void ShowSkillUnavailable_AlreadyAvailablePoisonDartFrog(class AActor* SenderCharacter);
	void StickedWatcherMarker(const struct FVector2D& NormalizedPosition, const struct FGameplayTag& SignalTypeTag);
	void SpawnPairWatcherSignalPin(const struct FVector& Spawn_Transform_Location, const struct FGameplayTag& SignalPinTag, bool bIsRemove, bool bWithSound);
	void SpawnWatcherSignalPin(const struct FVector& Spawn_Transform_Location, const struct FGameplayTag& SignalPinTag, bool bIsRemove, bool bWithSound);
	void RequestShopCompetition_UltimateLog(int32 PlayerID, const struct FGameplayTag& SkillTag);
	void SpawnPairSignalPin(const struct FVector& Spawn_Transform_Location, const struct FGameplayTag& SignalPinTag, bool bIsRemove, bool bWithSound);
	void ShowSkillUnavailable_AlreadyAvailable(class AActor* SenderCharacter);
	void ShowSkillUnavailable_CrimsonDimension(class AActor* SenderCharacter);
	void ShowSkillUnavailable_CanNotUseHere_InteactTickTime(class AActor* SenderCharacter);
	void ShowSkillUnavailable_NowCanNotUse(class AActor* SenderCharacter);
	void ShowRewardPair_CharaCardProfile(const struct FAJBPairProfileCardDetail& PairProfileCardDetail);
	void OnFinishedAssignKeyFromDataTable();
	void ShowReward_CharaCardProfile(const struct FAJBProfileCardDetail& ProfileCardDetail);
	void SetupValidMatchingPlayerIndexList(const TArray<struct FST_ShopCompetitionTeamInfo>& TeamInfoList);
	void HideLastSurvivorRetire();
	void ShowLastSurvivorRetire(int32 NewPlayerID);
	void TryToCloseFullMap(bool bPlayCloseSE);
	void HideTutorialMessage();
	void ToggleShopCompetition_PlayerNames();
	void ReceiveTick(float DeltaSeconds);
	void OnHighlightPlayBegin();
	void OnClosedHighlightConfirm(class UAJBWindowWidget* TargetWidget);
	void ToggleShopCompetition_PlayerList();
	void ShowSkillUnavailable_TheWorld(class AActor* SenderCharacter);
	void InvalidStickedPairMarker();
	void ShowSkillUnavailable_Dash(class AActor* SenderCharacter);
	void ShowSkillUnavailable_CanNotThru(class AActor* SenderCharacter);
	void StickedPairMarker(const struct FVector2D& NormalizedPosition, const struct FGameplayTag& SignalTypeTag);
	void SpawnManagers();
	void ShowSkillUnavailable_Indoor(class AActor* SenderCharacter);
	void ShowSkillUnavailable_MaxUpperLimit(class AActor* SenderCharacter);
	void ShowSkillUnavailable_CanNotUsedOnlyOnce(class AActor* SenderCharacter);
	void ShowSkillUnavailable_Separate(class AActor* SenderCharacter);
	void ShowSkillUnavailable_Shot(class AActor* SenderCharacter);
	void ShowSkillUnavailable_Prohibit(class AActor* SenderCharacter);
	void ShowSkillUnavailable_NotYetAvailable(class AActor* SenderCharacter);
	void ShowSkillUnavailable_HereCanNotUse(class AActor* SenderCharacter);
	void ShowSkillUnavailable_CanNotUse(class AActor* SenderCharacter);
	void ShowSkillUnavailable_CanNotBeSetUpHere(class AActor* SenderCharacter);
	void HideEmoteSelect();
	void ShowEmoteSelect();
	void ShowReward(const TArray<struct FAJBGameRewardInfo>& RewardInfos);
	void ShowAchievement(const TArray<struct FAJBGameRewardInfo>& RewardInfos);
	void ShowHighlightSave();
	void HideGuide();
	void ShowGuide(const struct FAJBSkillGuideInfo& GuideInfo);
	void OnNotifyTheWorld(EGeneralTiming Timing);
	void InitializeReplayUI();
	void ShowLevelUp(int32 Level, int32 Ticket);
	void PlaySEOnWindowToggled(const struct FGameplayTag& SETag);
	void SetVisibilityTimeCountDown(bool bVisible);
	void UpdateTimeCountDown(float Time, float MaxTime);
	void OnStartFadeIn(float FadeTime);
	void OnStartFadeOut(float FadeTime);
	void RequestChangeStateFromPlayerController(const struct FGameplayTag& NextState);
	void ShowTutorialMessage(ETutorialType Type, const class FText& DisplayText, float DisplayTime, bool bEnablePadIcon, EAJBPadIconType PadType, bool bEnableReticleArrow);
	void OnChangedViewTargetCharacter(class AAJBInGameCharacterBase* ViewCharacter);
	void RequestActionLog(const class FText& MessageBase, const int32& MessageType, const int32& Value1, const int32& Value2);
	void OnToggleFullMapVisibility();
	void ShowKillReportMessage(uint8 KillCount, int32 DeadPlayerID);
	void ShowWindowMessage(const class FText& Message);
	void OnShowDebugMenu();
	void ReceiveBeginPlay();
	void DebugCreateShopCompetitionFlowComponent();
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void OnSpawnSignalPin(const struct FVector& Location, const struct FGameplayTag& SignalPinType, bool bIsRemove, bool bWithSound);
	void CancelInteractAllCharacter();
	void OnClosedExchangeEndConfirm(class UAJBWindowWidget* TargetWidget);
	void SetupUITargetInGameCharacter(class ABP_AJBInGameCharacter_C* TargetInGameCharacterBP);
	void WaitForReplicatingTargetInGameCharacter();
	void OnOpeningFullMap(class UAJBWindowWidget* TargetWidget);
	void OnReleasedTouchOnPlayer(class AActor* TouchedPlayerActor);
	void OnStopConsumePP();
	void OnStartConsumePP();
	void OnEndOpeningCountDown();
	void OnStartLastSurvivorScene();
	void OnChangeLivingPlayer(int32 Count, float LivingPlayerRate, int32 PairCount);
	void OnClosingInGameOpeningEffectWindow(class UAJBWindowWidget* TargetWidget);
	void OnClosedInGameOpeningWindow(class UAJBWindowWidget* TargetWidget);
	void OnOpendInGameOpeningWindow(class UAJBWindowWidget* TargetWidget);
	void PostSetupPairCharacterUI();
	void ForceSetupUITargetInGameCharacter(class AAJBInGameCharacter* TargetCharacter);
	void OnDamageAreaPreAnnounceReduction(int32 Timespan_Until_Start_Reduction);
	void OnDamageAreaStartReduction();
	void OnChangedWatcherPlayer(int32 PlayerID);
	void BindMapManagerEvents(class ABP_AJBUIMapManager_C* Target);
	void OnSetPlayerMarker(const struct FVector2D& NormalizedPosition, class UWB_LandmarkableMap_C* MapWidget, const struct FGameplayTag& SignalTypeTag, bool FromMap);
	void BindWidgetEvents();
	void OnSelectedEmoteIndex(int32 EmoteIndex);
	void OnTimupVictoryShot_Shot();
	void OnTimupVictoryShot_Posing();
	void UnbindVictoryShot_TimeupShot();
	void UnbindVictoryShot_TimeupPosing();
	void UnbindVictoryShot_TimeupFinish();
	void OnTimeupVictoryShot_Finish();
	void OnSetupUITargetInGameCharacter(class AAJBInGameCharacterBase* TargetCharacter);
	void Unbind_OnBegin_Victory();
	void OnClosedWindEffect(class UAJBWindowWidget* TargetWidget);
	void OnStartBattleGame();
	void OnFinishedBattleGame();
	void BindGameStateEvents();
	void OnClosedPlayerWatching(class UAJBWindowWidget* TargetWidget);
	void OnEnd_SelectCharacter(const struct FGameplayTag& NextState);
	void OnBegin_SelectCharacter(const struct FGameplayTag& PrevState);
	void BindInteractMessage(class UBP_AJBInteractAction_C* Target);
	void OnClosedRetire(class UAJBWindowWidget* TargetWidget);
	void OnBegin_VictoryFinish(const struct FGameplayTag& PrevState);
	void OnBegin_VictoryPosing(const struct FGameplayTag& PrevState);
	void OnBegin_VictoryShot(const struct FGameplayTag& PrevState);
	void OnBegin_Victory(const struct FGameplayTag& PrevState);
	void ONBegin_Result(const struct FGameplayTag& PrevState);
	void OnBegin_Spector(const struct FGameplayTag& PrevState);
	void OnBegin_Retire(const struct FGameplayTag& PrevState);
	void OnBegin_Gameplay(const struct FGameplayTag& PrevState);
	void OnBegin_Standby(const struct FGameplayTag& PrevState);
	void BindFlowStateEvents();
	void BindCharacterEvents();
	void BndEvt__BP_AJBTrainingSequence_K2Node_ComponentBoundEvent_7_OnRequestGameResultDispatcher__DelegateSignature();
	void BndEvt__BP_AJBTrainingSequence_K2Node_ComponentBoundEvent_6_OnShowEndConfirmDispatcher__DelegateSignature();
	void BndEvt__BP_AJBTrainingSequence_K2Node_ComponentBoundEvent_5_OnBuyPPDispatcher__DelegateSignature();
	void BndEvt__BP_AJBTrainingSequence_K2Node_ComponentBoundEvent_4_OnStartPPBuySequenceDispatcher__DelegateSignature();
	void TryCreateDebugOnlyMenu();
	void Finished_31C1850E497979242EA50EA4A0A76EC9();
	void Finished_50B1BC3B4033C7B7D5B1E498B9C29D52();
	void Finished_05800F8246786DBA56140FBD72AB6220();
	void Finished_6EE0D81841663AD5F6D4F38911A71268();
	void Finished_181526C24119A4936792CE9CE3995654();
	void Finished_BC112C71491D0EF729AA17AECE69A81D();
	void OnLoaded_C030BCC845BA3BC9CAB8F3998505E35D(class UClass* Loaded);
	void OnLoaded_827CC24A4F968CB4CF0FFFBE224D4967(class UClass* Loaded);
	void UserConstructionScript();
	void PostSetupInGameWidgets(class AAJBInGameCharacter* MyCharacter);
	void PreSetupInGameWidgets();
	void OnCharaActiveBehaviorChanged(class AAJBInGameCharacter* TargetCharacter, ECharacterActiveBehavior OldBehavior, ECharacterActiveBehavior NextBehavior, bool bSpecialBreakDown);
	void OnCharaSkillActivated(class UBP_AJBSkillBase_C* ActivatedSkill);
	void OnCharaSkillInactivated(class UBP_AJBSkillBase_C* InactivatedSkill);
	void OnCharaAttackHit(bool bHeadShot, bool bFInishBlow);
	void OnCharaCameraChanged();
	void OnCharaSkillNumUpdated(const struct FGameplayTag& SkillTag, int32 LeftNum);
	void OnCharaSkillGrownup(const struct FGameplayTag& Tag, float Value);
	void OnCharaConditionAdded(const struct FGameplayTag& AddTag);
	void OnCharaConditionRemoved(const struct FGameplayTag& RemoveTag, class ABP_AJBInGameCharacter_C* CharacterBP);
	void Get_UI_TargetCharacter(class AAJBInGameCharacter** TargetCharacter);
	void BindsCharacter(class AAJBInGameCharacter* TargetCharacter);
	void UnbindsCharacter(class AAJBInGameCharacter* TargetCharacter);
	void IsInitialized(bool* bInitialized);
	void IsActiveUI(bool* bActive);
	void IsGameFinished(bool* bActive);
	void IsShowingEmoteSelect(bool* bShow);
	void OnCharaDown(int32 DownPlayerId);
	void OnCharaRessurect();
	void OnCharaReceiveDamage();
	void OnCharaKill(uint8 KillCount, int32 DeadPlayerID, bool bIsLastDefeated);
	class UWB_UI_FollowPairInfo_C* TryGetShopCompetitionFlowWidget(int32 FollowPlayerID);
	void IsShopCompetitionWatcherMode(bool* bDisplayWatcherMode);
	bool IsHighlightPlayBegin();
	void OnCharaOtherGrownup(const struct FGameplayTag& GrowupTag, float Value01, float Value02, float Value03);
	void OnCharaDie(bool bWillRessurect, bool bIsLastDefeated, bool bDiedOfKillZ);
	void IsConditionAddPairFlowUI(bool* bClear);
	struct FST_ShopCompetitionUITeamInfo GetShopCompetitionUITeamInfo(int32 TeamIndex, bool* bSuccess);
	void GetShopCompetitionTeamIndexByPlayerID(int32 PlayerID, int32* TeamIndex);
	struct FST_ShopCompetitionUITeamInfo GetShopCompetitionUITeamInfoByPlayerID(int32 PlayerID, bool* bSuccess);
	class UWB_UI_FollowPairInfo_C* TryGetCharacterInfoFlowWidget();
	class UWB_OnDeathCamera_C* GetUIOnDeathCamera();
	class UWB_BattleRecord_C* GetBattleRecord();
	void OnCharaDown_Pair(int32 DownPlayerId);
	void OnCharaKill_Pair(uint8 KillCount, int32 DeadPlayerID, bool bIsLastDefeated);
	void BindsPairCharacter(class AAJBInGameCharacter* TargetCharacter);
	void UnbindsPairCharacter(class AAJBInGameCharacter* TargetCharacter);
	void GetGionScreenWidget(class UWB_AJBInGameGionScreen_C** GionScreen);
	void GetUIMapManager(class ABP_AJBUIMapManager_C** Manager);
	void RegisterNewPassiveSkill(class UBP_AJBPassiveSkillBase_C* NewPassiveSkill, bool* bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameHUD_C">();
	}
	static class ABP_AJBInGameHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameHUD_C>();
	}
};
static_assert(alignof(ABP_AJBInGameHUD_C) == 0x000008, "Wrong alignment on ABP_AJBInGameHUD_C");
static_assert(sizeof(ABP_AJBInGameHUD_C) == 0x000780, "Wrong size on ABP_AJBInGameHUD_C");
static_assert(offsetof(ABP_AJBInGameHUD_C, UberGraphFrame) == 0x000590, "Member 'ABP_AJBInGameHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBShotNGPointHUD) == 0x000598, "Member 'ABP_AJBInGameHUD_C::BP_AJBShotNGPointHUD' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBRadioChat) == 0x0005A0, "Member 'ABP_AJBInGameHUD_C::BP_AJBRadioChat' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBSkillPassiveUIHandler) == 0x0005A8, "Member 'ABP_AJBInGameHUD_C::BP_AJBSkillPassiveUIHandler' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBInteractActionProgressBar) == 0x0005B0, "Member 'ABP_AJBInGameHUD_C::BP_AJBInteractActionProgressBar' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBTrainingSequence) == 0x0005B8, "Member 'ABP_AJBInGameHUD_C::BP_AJBTrainingSequence' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBReticle) == 0x0005C0, "Member 'ABP_AJBInGameHUD_C::BP_AJBReticle' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBSkillGuide) == 0x0005C8, "Member 'ABP_AJBInGameHUD_C::BP_AJBSkillGuide' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBTheWorldHandler) == 0x0005D0, "Member 'ABP_AJBInGameHUD_C::BP_AJBTheWorldHandler' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBTutorialTriggerSender_HUD) == 0x0005D8, "Member 'ABP_AJBInGameHUD_C::BP_AJBTutorialTriggerSender_HUD' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBDevMouseCursorController) == 0x0005E0, "Member 'ABP_AJBInGameHUD_C::BP_AJBDevMouseCursorController' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBCompass) == 0x0005E8, "Member 'ABP_AJBInGameHUD_C::BP_AJBCompass' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBPassiveMessage) == 0x0005F0, "Member 'ABP_AJBInGameHUD_C::BP_AJBPassiveMessage' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, BP_AJBGrownupMessage) == 0x0005F8, "Member 'ABP_AJBInGameHUD_C::BP_AJBGrownupMessage' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, TutorialTriggerAggregator) == 0x000600, "Member 'ABP_AJBInGameHUD_C::TutorialTriggerAggregator' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, SkillIconHandlerR2) == 0x000608, "Member 'ABP_AJBInGameHUD_C::SkillIconHandlerR2' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, SkillIconHandlerR1) == 0x000610, "Member 'ABP_AJBInGameHUD_C::SkillIconHandlerR1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, SkillIconHandlerL2) == 0x000618, "Member 'ABP_AJBInGameHUD_C::SkillIconHandlerL2' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, SkillIconHandlerL1) == 0x000620, "Member 'ABP_AJBInGameHUD_C::SkillIconHandlerL1' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, DefaultSceneRoot) == 0x000628, "Member 'ABP_AJBInGameHUD_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, RestartCharaSelectPtr) == 0x000630, "Member 'ABP_AJBInGameHUD_C::RestartCharaSelectPtr' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, DebugMenuPtr) == 0x000658, "Member 'ABP_AJBInGameHUD_C::DebugMenuPtr' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bIsDebugHUD) == 0x000680, "Member 'ABP_AJBInGameHUD_C::bIsDebugHUD' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bInitializedInGameUI) == 0x000681, "Member 'ABP_AJBInGameHUD_C::bInitializedInGameUI' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, MyTargetCharacter) == 0x000688, "Member 'ABP_AJBInGameHUD_C::MyTargetCharacter' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, CreateWidgets) == 0x000690, "Member 'ABP_AJBInGameHUD_C::CreateWidgets' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bGameStartFade) == 0x0006A0, "Member 'ABP_AJBInGameHUD_C::bGameStartFade' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnActiveDispatcher) == 0x0006A8, "Member 'ABP_AJBInGameHUD_C::OnActiveDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnInactiveDispatcher) == 0x0006B8, "Member 'ABP_AJBInGameHUD_C::OnInactiveDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bLoadedMenuBGLevel) == 0x0006C8, "Member 'ABP_AJBInGameHUD_C::bLoadedMenuBGLevel' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bActivateInGameUI) == 0x0006C9, "Member 'ABP_AJBInGameHUD_C::bActivateInGameUI' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bFinishedBattleGame) == 0x0006CA, "Member 'ABP_AJBInGameHUD_C::bFinishedBattleGame' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, CameramanResultWaitTimer) == 0x0006CC, "Member 'ABP_AJBInGameHUD_C::CameramanResultWaitTimer' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, MapManager) == 0x0006D0, "Member 'ABP_AJBInGameHUD_C::MapManager' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnChangedTournamentWatcherPlayerDispatcher) == 0x0006D8, "Member 'ABP_AJBInGameHUD_C::OnChangedTournamentWatcherPlayerDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bCachedShopCompetitionDisplayWatcherMode) == 0x0006E8, "Member 'ABP_AJBInGameHUD_C::bCachedShopCompetitionDisplayWatcherMode' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnStartTrainingEndGameConfirmDispatcher) == 0x0006F0, "Member 'ABP_AJBInGameHUD_C::OnStartTrainingEndGameConfirmDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnReturnInGameFromTrainingDispatcher) == 0x000700, "Member 'ABP_AJBInGameHUD_C::OnReturnInGameFromTrainingDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, bHighlightPlayBegin) == 0x000710, "Member 'ABP_AJBInGameHUD_C::bHighlightPlayBegin' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, PairCharaCheckPollingTimer) == 0x000718, "Member 'ABP_AJBInGameHUD_C::PairCharaCheckPollingTimer' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, CachedTournamentWidget) == 0x000720, "Member 'ABP_AJBInGameHUD_C::CachedTournamentWidget' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnEndInGameOpeningCountDownDispatcher) == 0x000728, "Member 'ABP_AJBInGameHUD_C::OnEndInGameOpeningCountDownDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnStartInGameOpeningCountDownDispatcher) == 0x000738, "Member 'ABP_AJBInGameHUD_C::OnStartInGameOpeningCountDownDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnTimeupVictoryShotShotPhaseDispatcher) == 0x000748, "Member 'ABP_AJBInGameHUD_C::OnTimeupVictoryShotShotPhaseDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, OnReleasedTouchOnPlayerByTournamentWatcherDispatcher) == 0x000758, "Member 'ABP_AJBInGameHUD_C::OnReleasedTouchOnPlayerByTournamentWatcherDispatcher' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, ShopCompetitionTeamInfoList) == 0x000768, "Member 'ABP_AJBInGameHUD_C::ShopCompetitionTeamInfoList' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameHUD_C, WaitForReplicatingInGameCharacterTimer) == 0x000778, "Member 'ABP_AJBInGameHUD_C::WaitForReplicatingInGameCharacterTimer' has a wrong offset!");

}

