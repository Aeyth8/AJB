#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ModeSelect

#include "Basic.hpp"

#include "AJB_structs.hpp"
#include "AJB_classes.hpp"
#include "EModeSelectNextFlowEvent_structs.hpp"
#include "EModeSelectInnerState_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "ERewardDisplayType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ModeSelect.WB_ModeSelect_C
// 0x01F0 (0x04B0 - 0x02C0)
class UWB_ModeSelect_C final : public UAJBWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Close;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GameModeView_C*                     WB_GameModeView;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MenuTitle_C*                        WB_MenuTitle;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_EndGame_C*        WB_ModeSelect_Button_EndGame;                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_PAIR_C*           WB_ModeSelect_Button_PAIR;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_PremiumDraw_C*    WB_ModeSelect_Button_PremiumDraw;                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_Reward_C*         WB_ModeSelect_Button_Reward;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_RewardPercent_C*  WB_ModeSelect_Button_RewardPercent;                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_Shop_C*           WB_ModeSelect_Button_Shop;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_SOLO_C*           WB_ModeSelect_Button_SOLO;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_Training_C*       WB_ModeSelect_Button_Training;                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_Button_Tutorial_C*       WB_ModeSelect_Button_Tutorial;                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ModeSelect_VolumeChangeButton_C*    WB_VolumeChangeButton;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EModeSelectInnerState                         CurrentInnerState;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EModeSelectNextFlowEvent                      NextFlow;                                          // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAJBCreditDisplayType                         CachedCreditDisplayType;                           // 0x0332(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_333[0x5];                                      // 0x0333(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AJBOutGameHUD_C*                    CachedOutGameHUD;                                  // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Credit_C*                           CachedCredit;                                      // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PpBuyWindow_C*                      CachedPPBuyWindow;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PPBuyButton_C*                      CachedPPBuyButton;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CommonWIndow_S_C*                   CachedLastPPBuyConfirmButton;                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CommonWIndow_S_C*                   CachedLastWarningWindow;                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ModeSelect_EndTheGame_C*            CachedLastGameEndConfirm;                          // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAJBWindowWidget*                       CachedLastEndGameRankupWindow;                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ModeSelect_EmissionRateWindow_C*    CachedLastRewardPercent;                           // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ModeSelectButtonBase_C*             CachedLastModeSelectButtonBase;                    // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableUpdateTimeCountDown;                        // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnableUpdateTimeCountDownByAnimation;             // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnableUpdateViewTimeCountDown;                    // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEnableExecOuterDispatchers;                       // 0x038B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ElapsedTime;                                       // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountDownMaxTime_ModeSelect;                       // 0x0390(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountDownMaxTime_TimeupConfirm;                    // 0x0394(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountDownMaxTime_TimeupUnselectButtonWarning;      // 0x0398(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountDownMaxTime_TimeupEndGameRankupWindow;        // 0x039C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugIgnorePP;                                    // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDebugIgnoreTimeCount;                             // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedModeNeedPP;                                // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectingWindowWaitTimer;                         // 0x03A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AC[0x4];                                      // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ConnectingWindowTimerHandle;                       // 0x03B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWB_CommonWIndow_S_C*                   ErrorAlertConfirm;                                 // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadedMenuBGLevel;                                 // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RequestedOutGameProxy;                             // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShowOfflineConfim;                                // 0x03C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C3[0x5];                                      // 0x03C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_CommonWIndow_S_C*                   OfflineConfirm;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CommonWIndow_S_C*                   CachedCompensationConfirm;                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountDownMaxTime_ShopCompetition;                  // 0x03D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC[0x4];                                      // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAJBGachaDetail                        LuckyDetail;                                       // 0x03E0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAJBGachaDetail                        PremiumDetail;                                     // 0x0420(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         UpdateCheckGachaDetailsTimer;                      // 0x0460(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle_UpdateCheckGachaDetails;               // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWB_CommonWIndow_S_C*                   PremiumConfirm;                                    // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAJBGetRewardsResponse                 CachedRequesetReward;                              // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EAJBRewardReceivingStatus                     CachedReceiveingStatus;                            // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_489[0x3];                                      // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FailedGachaIdErrorCount;                           // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ModeSelect_AnnouncementsParentWindow_C* CachedAnnouncementsParent;                         // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_ChallengeEventProgressWindow_C*     ChallengeEventWindow;                              // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_GameOver_C*                         GameOverWidget;                                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGuestPlay;                                       // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A9[0x3];                                      // 0x04A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TakeOverElapsedTime;                               // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ModeSelect(int32 EntryPoint);
	void OnClosedWindowEndGameRankupWindow(class UAJBWindowWidget* TargetWidget);
	void OnClosedGameEndConfirm(class UAJBWindowWidget* TargetWidget);
	void OnDecidedWindowEndGameConfirm(EAJBConfirmResult Result, bool IsRankup, int32 AddedRank, int32 Ticket);
	void ForceOpenEndGameForArcadeTerminate();
	void OnGetExpInfoOnEndGame();
	void OnStartChallengeEvent();
	void OnClosedChallengeEventWindow(class UAJBWindowWidget* TargetWidget);
	void OnFInishedChallengeEvent();
	void OnFinishedLogout();
	void OnClosedWindowTimeoutGameOverConfirmText(class UAJBWindowWidget* TargetWidget);
	void OnClosedWindowTimeoutConfirmText(class UAJBWindowWidget* TargetWidget);
	void OnOpenedOrClosedAnyWindow(class UAJBWindowWidget* TargetWidget);
	void OnOpeningOrClosingAnyWindow(class UAJBWindowWidget* TargetWidget);
	void OnClosedOfflineMessageWindow(class UAJBWindowWidget* TargetWidget);
	void OpenAllAnnouncementWindows();
	void OnAllAnnouncementWindowsClosed(class UAJBWindowWidget* TargetWidget);
	void OnAnnouncementFinished(bool bSucceededInGettingAnnouncement);
	void OnFinishedRewardRequest();
	void RetryGacha();
	void OnFinishRequestGetReward();
	void OnFinishedPremiumConfirm(EAJBConfirmResult Result);
	void BndEvt__WB_ModeSelect_Button_PremiumDraw_K2Node_ComponentBoundEvent_16_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_PremiumDraw_K2Node_ComponentBoundEvent_15_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void OtherCloseWindow();
	void OnClosedCompensationConfirm(class UAJBWindowWidget* TargetWidget);
	void OnClosedAlertConfirm(class UAJBWindowWidget* TargetWidget);
	void OnFinishedAllReward();
	void OnShowConnectingWindow();
	void OnRequestGetReward(bool bPremiumMode);
	void DisablePlayerInput();
	void EnablePlayerInput();
	void BndEvt__WB_ModeSelect_Button_RewardPercent_K2Node_ComponentBoundEvent_14_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Reward_K2Node_ComponentBoundEvent_13_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Training_K2Node_ComponentBoundEvent_12_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Tutorial_K2Node_ComponentBoundEvent_11_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_PAIR_K2Node_ComponentBoundEvent_10_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Shop_K2Node_ComponentBoundEvent_9_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_SOLO_K2Node_ComponentBoundEvent_8_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void OnResetedPPBuyTimeCountdown();
	void TakeOverPPBuyTimeCountdown();
	void OnFinishedConfirmBuyPPForLocationTest(EAJBConfirmResult Result);
	void StartTimeCountDown();
	void StopTimeCountDown();
	void SetPressableVisibilityAllButtons(bool bIsPressable);
	void OnGameOver();
	void OnOpeningGameOverWindow(class UAJBWindowWidget* TargetWidget);
	void OnClosedWindowRewardPercent(class UAJBWindowWidget* TargetWidget);
	void OpenRewardPercentWindow();
	void OnFinishedUnselectButtonWarning(class UAJBWindowWidget* TargetWidget);
	void OpenUnselectButtonWarning(const class FText& Text);
	void Destruct();
	void OnOpeningPPBuyWindow(class UAJBWindowWidget* TargetWidget);
	void SetTimeCountDownElapsedTime(float ElapsedTime_0);
	void OnClosingPPBuyWindow(class UAJBWindowWidget* TargetWidget);
	void Construct();
	void OpenBuyPPConfirmPopupWindow();
	void OnFinishedConfirmBuyPP(EAJBConfirmResult Result);
	void GotoTutorial();
	void GotoTraining();
	void GotoSOLO();
	void GotoShop();
	void GotoReward();
	void GotoPAIR();
	void GotoEndGame();
	void BndEvt__WB_ModeSelect_Button_Tutorial_K2Node_ComponentBoundEvent_7_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Training_K2Node_ComponentBoundEvent_6_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_SOLO_K2Node_ComponentBoundEvent_5_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Shop_K2Node_ComponentBoundEvent_4_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_RewardPercent_K2Node_ComponentBoundEvent_3_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_Reward_K2Node_ComponentBoundEvent_2_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_PAIR_K2Node_ComponentBoundEvent_1_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void BndEvt__WB_ModeSelect_Button_EndGame_K2Node_ComponentBoundEvent_0_OnAJBButtonEvent__DelegateSignature(class UAJBButtonWidget* OwnerWidget, class UAJBButton* TargetButton);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnCloseAnimationFinished();
	void OnClosingWindow();
	void OnOpeningWindow();
	void RetryRequestSysNationalMatchInfo();
	void OnUpdateCheckGachaDetails();
	void EndOutGameProxy();
	void OnUpdateTenpoRoom();
	void StartOutGameProxy();
	void OnSuccess_F1B8F70E4F525BC161CB33927A8E4699(EAJBNetAPIResult Result, const TArray<struct FAJBAnnouncement>& Announcements);
	void OnFailed_F1B8F70E4F525BC161CB33927A8E4699(EAJBNetAPIResult Result, const TArray<struct FAJBAnnouncement>& Announcements);
	void OnSuccess_611625DF416A554B6AF14FA0464F8823(EAJBNetAPIResult Result, EAJBRewardReceivingStatus ReceiveingStatus, const struct FAJBGetRewardsResponse& GetRewards);
	void OnFailed_611625DF416A554B6AF14FA0464F8823(EAJBNetAPIResult Result, EAJBRewardReceivingStatus ReceiveingStatus, const struct FAJBGetRewardsResponse& GetRewards);
	void OnSuccess_C7EF459E4F11203F68CA97AA0D9AEFAB(EAJBNetAPIResult Result, const struct FAJBGachaID& GachaID);
	void OnFailed_C7EF459E4F11203F68CA97AA0D9AEFAB(EAJBNetAPIResult Result, const struct FAJBGachaID& GachaID);
	void OnSuccess_F7BBDDB24F925C6B4F665893F1A48BCB(EAJBNetAPIResult Result, EAJBRewardReceivingStatus ReceiveingStatus, const struct FAJBGetRewardsResponse& GetRewards);
	void OnFailed_F7BBDDB24F925C6B4F665893F1A48BCB(EAJBNetAPIResult Result, EAJBRewardReceivingStatus ReceiveingStatus, const struct FAJBGetRewardsResponse& GetRewards);
	void Finished_1A4B4AE74709A848171FBB9851856300();
	void OnSuccess_A54B54EA4A3D73BA46A773B4B5CD6BCD(EAJBNetAPIResult Result);
	void OnFailed_A54B54EA4A3D73BA46A773B4B5CD6BCD(EAJBNetAPIResult Result);
	void OnSuccess_E9209B2B4F05F9A17883AD8EDEBFD7E5(EAJBNetAPIResult Result);
	void OnFailed_E9209B2B4F05F9A17883AD8EDEBFD7E5(EAJBNetAPIResult Result);
	void OnSuccess_6007A7E545F50C1823986C832EBD9F99(EAJBNetAPIResult Result);
	void OnFailed_6007A7E545F50C1823986C832EBD9F99(EAJBNetAPIResult Result);
	void OnSuccess_4FF5EC644FBF269D75F4E3B584758A8C(EAJBNetAPIResult Result);
	void OnFailed_4FF5EC644FBF269D75F4E3B584758A8C(EAJBNetAPIResult Result);
	void OnSuccess_11A745E249C40444A8CF7EB6FFE82A60(EAJBNetAPIResult Result);
	void OnFailed_11A745E249C40444A8CF7EB6FFE82A60(EAJBNetAPIResult Result);
	void OpenGameOverWindow(bool bPlayOpenSE);
	void CanOpenModeSelect(bool* bCan);
	void GetHttp(class UNetHttp** NetHttp);
	void ChangeButtonZoder(class UWB_ModeSelectButtonBase_C* TopZOrderButtonWidget);
	void IsPossibleRetryGachaRequest(bool* bPossible);
	bool OnInputTurnRate(float Value);
	bool OnInputReleasedUp();
	bool OnInputReleasedTouch();
	bool OnInputReleasedRight();
	bool OnInputReleasedLeft();
	bool OnInputReleasedDown();
	bool OnInputReleasedDecide();
	bool OnInputReleasedCancel();
	bool OnInputPressedUp();
	bool OnInputPressedTouch(const float LocationX, const float LocationY);
	bool OnInputPressedRight();
	bool OnInputPressedLeft();
	bool OnInputPressedDown();
	bool OnInputPressedDecide();
	bool OnInputPressedCancel();
	bool OnInputMoveRight(float Value);
	bool OnInputMoveForward(float Value);
	bool OnInputLookupRate(float Value);
	bool IsModeless();
	bool OnInputReleasedR2();
	bool OnInputReleasedR1();
	bool OnInputReleasedL2();
	bool OnInputReleasedL1();
	bool OnInputPressedR2();
	bool OnInputPressedR1();
	bool OnInputPressedL2();
	bool OnInputPressedL1();
	bool OnInputReleasedL3();
	bool OnInputPressedL3();

	bool IsHaveAnyPP() const;
	bool IsAnyButtonDecisioning() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ModeSelect_C">();
	}
	static class UWB_ModeSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ModeSelect_C>();
	}
};
static_assert(alignof(UWB_ModeSelect_C) == 0x000008, "Wrong alignment on UWB_ModeSelect_C");
static_assert(sizeof(UWB_ModeSelect_C) == 0x0004B0, "Wrong size on UWB_ModeSelect_C");
static_assert(offsetof(UWB_ModeSelect_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_ModeSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, Anim_Close) == 0x0002C8, "Member 'UWB_ModeSelect_C::Anim_Close' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_GameModeView) == 0x0002D0, "Member 'UWB_ModeSelect_C::WB_GameModeView' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_MenuTitle) == 0x0002D8, "Member 'UWB_ModeSelect_C::WB_MenuTitle' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_EndGame) == 0x0002E0, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_EndGame' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_PAIR) == 0x0002E8, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_PAIR' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_PremiumDraw) == 0x0002F0, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_PremiumDraw' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_Reward) == 0x0002F8, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_Reward' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_RewardPercent) == 0x000300, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_RewardPercent' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_Shop) == 0x000308, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_Shop' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_SOLO) == 0x000310, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_SOLO' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_Training) == 0x000318, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_Training' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_ModeSelect_Button_Tutorial) == 0x000320, "Member 'UWB_ModeSelect_C::WB_ModeSelect_Button_Tutorial' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, WB_VolumeChangeButton) == 0x000328, "Member 'UWB_ModeSelect_C::WB_VolumeChangeButton' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CurrentInnerState) == 0x000330, "Member 'UWB_ModeSelect_C::CurrentInnerState' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, NextFlow) == 0x000331, "Member 'UWB_ModeSelect_C::NextFlow' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedCreditDisplayType) == 0x000332, "Member 'UWB_ModeSelect_C::CachedCreditDisplayType' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedOutGameHUD) == 0x000338, "Member 'UWB_ModeSelect_C::CachedOutGameHUD' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedCredit) == 0x000340, "Member 'UWB_ModeSelect_C::CachedCredit' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedPPBuyWindow) == 0x000348, "Member 'UWB_ModeSelect_C::CachedPPBuyWindow' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedPPBuyButton) == 0x000350, "Member 'UWB_ModeSelect_C::CachedPPBuyButton' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedLastPPBuyConfirmButton) == 0x000358, "Member 'UWB_ModeSelect_C::CachedLastPPBuyConfirmButton' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedLastWarningWindow) == 0x000360, "Member 'UWB_ModeSelect_C::CachedLastWarningWindow' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedLastGameEndConfirm) == 0x000368, "Member 'UWB_ModeSelect_C::CachedLastGameEndConfirm' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedLastEndGameRankupWindow) == 0x000370, "Member 'UWB_ModeSelect_C::CachedLastEndGameRankupWindow' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedLastRewardPercent) == 0x000378, "Member 'UWB_ModeSelect_C::CachedLastRewardPercent' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedLastModeSelectButtonBase) == 0x000380, "Member 'UWB_ModeSelect_C::CachedLastModeSelectButtonBase' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bEnableUpdateTimeCountDown) == 0x000388, "Member 'UWB_ModeSelect_C::bEnableUpdateTimeCountDown' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bEnableUpdateTimeCountDownByAnimation) == 0x000389, "Member 'UWB_ModeSelect_C::bEnableUpdateTimeCountDownByAnimation' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bEnableUpdateViewTimeCountDown) == 0x00038A, "Member 'UWB_ModeSelect_C::bEnableUpdateViewTimeCountDown' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bEnableExecOuterDispatchers) == 0x00038B, "Member 'UWB_ModeSelect_C::bEnableExecOuterDispatchers' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, ElapsedTime) == 0x00038C, "Member 'UWB_ModeSelect_C::ElapsedTime' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CountDownMaxTime_ModeSelect) == 0x000390, "Member 'UWB_ModeSelect_C::CountDownMaxTime_ModeSelect' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CountDownMaxTime_TimeupConfirm) == 0x000394, "Member 'UWB_ModeSelect_C::CountDownMaxTime_TimeupConfirm' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CountDownMaxTime_TimeupUnselectButtonWarning) == 0x000398, "Member 'UWB_ModeSelect_C::CountDownMaxTime_TimeupUnselectButtonWarning' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CountDownMaxTime_TimeupEndGameRankupWindow) == 0x00039C, "Member 'UWB_ModeSelect_C::CountDownMaxTime_TimeupEndGameRankupWindow' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bDebugIgnorePP) == 0x0003A0, "Member 'UWB_ModeSelect_C::bDebugIgnorePP' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bDebugIgnoreTimeCount) == 0x0003A1, "Member 'UWB_ModeSelect_C::bDebugIgnoreTimeCount' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, SelectedModeNeedPP) == 0x0003A4, "Member 'UWB_ModeSelect_C::SelectedModeNeedPP' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, ConnectingWindowWaitTimer) == 0x0003A8, "Member 'UWB_ModeSelect_C::ConnectingWindowWaitTimer' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, ConnectingWindowTimerHandle) == 0x0003B0, "Member 'UWB_ModeSelect_C::ConnectingWindowTimerHandle' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, ErrorAlertConfirm) == 0x0003B8, "Member 'UWB_ModeSelect_C::ErrorAlertConfirm' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, LoadedMenuBGLevel) == 0x0003C0, "Member 'UWB_ModeSelect_C::LoadedMenuBGLevel' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, RequestedOutGameProxy) == 0x0003C1, "Member 'UWB_ModeSelect_C::RequestedOutGameProxy' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, bShowOfflineConfim) == 0x0003C2, "Member 'UWB_ModeSelect_C::bShowOfflineConfim' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, OfflineConfirm) == 0x0003C8, "Member 'UWB_ModeSelect_C::OfflineConfirm' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedCompensationConfirm) == 0x0003D0, "Member 'UWB_ModeSelect_C::CachedCompensationConfirm' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CountDownMaxTime_ShopCompetition) == 0x0003D8, "Member 'UWB_ModeSelect_C::CountDownMaxTime_ShopCompetition' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, LuckyDetail) == 0x0003E0, "Member 'UWB_ModeSelect_C::LuckyDetail' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, PremiumDetail) == 0x000420, "Member 'UWB_ModeSelect_C::PremiumDetail' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, UpdateCheckGachaDetailsTimer) == 0x000460, "Member 'UWB_ModeSelect_C::UpdateCheckGachaDetailsTimer' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, TimerHandle_UpdateCheckGachaDetails) == 0x000468, "Member 'UWB_ModeSelect_C::TimerHandle_UpdateCheckGachaDetails' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, PremiumConfirm) == 0x000470, "Member 'UWB_ModeSelect_C::PremiumConfirm' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedRequesetReward) == 0x000478, "Member 'UWB_ModeSelect_C::CachedRequesetReward' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedReceiveingStatus) == 0x000488, "Member 'UWB_ModeSelect_C::CachedReceiveingStatus' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, FailedGachaIdErrorCount) == 0x00048C, "Member 'UWB_ModeSelect_C::FailedGachaIdErrorCount' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, CachedAnnouncementsParent) == 0x000490, "Member 'UWB_ModeSelect_C::CachedAnnouncementsParent' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, ChallengeEventWindow) == 0x000498, "Member 'UWB_ModeSelect_C::ChallengeEventWindow' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, GameOverWidget) == 0x0004A0, "Member 'UWB_ModeSelect_C::GameOverWidget' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, IsGuestPlay) == 0x0004A8, "Member 'UWB_ModeSelect_C::IsGuestPlay' has a wrong offset!");
static_assert(offsetof(UWB_ModeSelect_C, TakeOverElapsedTime) == 0x0004AC, "Member 'UWB_ModeSelect_C::TakeOverElapsedTime' has a wrong offset!");

}

