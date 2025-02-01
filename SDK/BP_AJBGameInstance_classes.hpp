#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBGameInstance

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_CharaSkinData_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"
#include "AmwPlugin_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ST_HighlightKillInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBGameInstance.BP_AJBGameInstance_C
// 0x01F0 (0x06C8 - 0x04D8)
class UBP_AJBGameInstance_C final : public UAJBGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D8(0x0008)(Transient, DuplicateTransient)
	int32                                         CharacterNo;                                       // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SessionLevel;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NPCNum;                                            // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NPCNumMax;                                         // 0x04F4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 SelecedNum_StartLocation;                          // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FStartLocation                         StartLocationNum;                                  // 0x0508(0x0002)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A[0x2];                                      // 0x050A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StartLocationPutMax;                               // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              StartMachingTime;                                  // 0x0510(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         SelectStartLocationMaxSecond;                      // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MatchingMaxSecond;                                 // 0x051C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              StartSelectStartLocationTime;                      // 0x0520(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        StageLevels;                                       // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                DamageAreaCenter;                                  // 0x0538(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageAreaRadius;                                  // 0x0544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SelectAreaSize;                                    // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StageMaxSize;                                      // 0x054C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DedicatedServerIP;                                 // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaTypeID;                                        // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseDamageAreaJSON;                                // 0x055C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55D[0x3];                                      // 0x055D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LogoutPlayerNum;                                   // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_564[0x4];                                      // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerIconManager_C*                PlayerIconManager;                                 // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRequestStopRecordingReplay;                      // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         LastLivingPairCountForHighlight;                   // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastLivingPlayerCountForHighlight;                 // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_HighlightKillInfo                  HighlightInfo;                                     // 0x0588(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                         Pad_594[0x4];                                      // 0x0594(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CreditSE_Tag;                                      // 0x0598(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ServiceSE_Tag;                                     // 0x05A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             AkBankSettingsDataTable;                           // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           LastPlayedWwiseBGMEventTag;                        // 0x05B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         LastPlayedWwiseBGMPlayingID;                       // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDisplayCreditNum;                               // 0x05BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRespawnableOnTraining;                          // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1[0x3];                                      // 0x05C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugNPCCharaIndex;                                // 0x05C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDamageAreaParamInitialized;                       // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLocalSessionMode;                               // 0x05C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CA[0x2];                                      // 0x05CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ValidAreaTypeIDMin;                                // 0x05CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValidAreaTypeIDMax;                                // 0x05D0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDamageAreaParamInitialized_ForDebug;              // 0x05D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D5[0x3];                                      // 0x05D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_EmoneyIcons_C*                      EmoneyIcons;                                       // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAmwPluginEventListener*                AmwEventListener;                                  // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpeakerVolumeCoefficient;                          // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadphoneVolumeCoefficient;                        // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StageTypeID;                                       // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InGameParamFileNames;                              // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                           InGameCharacterParamFileNames;                     // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAkComponent*                           EMoneySoundAkComponent;                            // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShopCompetitionMatchingMaxSecond;                  // 0x0620(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UserSettingVolumeRate;                             // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UserSettingVolumeRateDefault;                      // 0x0628(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitialPlayerCountForHighlight;                    // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugEMoneyPrice;                                  // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectionTimeOutSecForInGame;                     // 0x0634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectionTimeOutSecForOutGame;                    // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63C[0x4];                                      // 0x063C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FST_CharaSkinData>   SkinDataCache;                                     // 0x0640(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             LoadedMaterials;                                   // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         LoadingPlayerIndex;                                // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AttachmentIndex;                                   // 0x06A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ConsumeGachaPP;                                    // 0x06A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAlreadyDisplayedAnnouncements;                    // 0x06AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD[0x3];                                      // 0x06AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                UseStageMapTexture;                                // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 MatchingID;                                        // 0x06B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void OnRequestStopRecordingReplay__DelegateSignature();
	void ExecuteUbergraph_BP_AJBGameInstance(int32 EntryPoint);
	void OnResetCompensationInfo();
	void RequestLoadSkinData(class FName RequestSkinName);
	void RequestLoadSkin(const TArray<struct FMatchingPlayerInfo>& MatchingPlayerInfo);
	void OnPlayEMoneySound(const class FString& SoundPath);
	void InitializeEMoney();
	void OnCompleteLoadingSystemOptions();
	void OnServiceCredit();
	void OnCoinCredit();
	void ReceiveInit();
	void HandleTravelError(ETravelFailure FailureType);
	void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
	void JoinAWS();
	void CreateSession();
	void JoinSession();
	void OnSuccess_07489EA04CE76F0D97F45BA7F12AA00C(EAJBNetAPIResult Result, EAJBRewardReceivingStatus ReceiveingStatus, const struct FAJBGetRewardsResponse& GetRewards);
	void OnFailed_07489EA04CE76F0D97F45BA7F12AA00C(EAJBNetAPIResult Result, EAJBRewardReceivingStatus ReceiveingStatus, const struct FAJBGetRewardsResponse& GetRewards);
	void OnLoaded_6528AD4A4A330DF560B5B9AE566DE724(bool bIsSuccess, const struct FAJBGachaID& GachaID);
	void OnLoaded_B2EBF95E4779073BBCE1E8A5C9CDFFF6(class UObject* Loaded);
	void OnLoaded_3ABC71234A3D5835EF365A9B9BBC648B(class UObject* Loaded);
	void OnSuccess_903B789D45C3F7CD6A5D80A96949F47C();
	void OnFailure_903B789D45C3F7CD6A5D80A96949F47C();
	void OnSuccess_03445BE34E163FCEBE2A2A8C34A880E5();
	void OnFailure_03445BE34E163FCEBE2A2A8C34A880E5();
	void OnSuccess_40E191A64A6BA168B19E32AAC266F212(const TArray<struct FBlueprintSessionResult>& Results);
	void OnFailure_40E191A64A6BA168B19E32AAC266F212(const TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_64030A494DDA58C8248DF49674B43910();
	void OnFailure_64030A494DDA58C8248DF49674B43910();
	void ClearMatchingPlayerInfo(bool bKeepMatchingPlayers);
	bool FindMatchingPlayerInfoFromPlayerID(uint8 PlayerID, struct FMatchingPlayerInfo* Value);
	void SetupMatchingNPC();
	void FindMatchingPlayerInfoFromPlayerName(const class FString& FindName, bool* Result, struct FMatchingPlayerInfo* Value);
	void SetStartLocation_MatchingPlayerInfo(const uint8& PlayerID, const struct FStartLocation& Start_Location);
	void TrySelectStartLocation(uint8 PlayerID, const struct FStartLocation& SelectStartLocation, EResultStartLocation* Result);
	void AddMatchingPlayerInfo(const class FString& PlayerID, const struct FMatchingPlayerInfo& PlayerInfo);
	bool IsFinishMatching();
	void SetCharacterIDFromPlayerName(const class FString& FindName, uint8 CharacterID);
	bool IsFinishSelectStartLocation();
	void TryAddStartLocationNum(const struct FStartLocation& StartLocation, bool* AddResult);
	bool CheckSelecedAll();
	void BeginSelectStartLocation();
	void GetMatchingSecond(float* Second, float* MatchingMaxSecond_0);
	void GetStartLocationSelectTimeSecond(float* Second, float* SelectStartLocationMaxSecond_0);
	void CalcStartLocationTotalNum(int32* Num);
	void CalcStartLocationArrayIndex(const struct FStartLocation& StartLocation, int32* Index_0);
	void GetStartLocationNumber(struct FStartLocation* StartLocationNum_0);
	void InitializeDamageAreaParam(int32 AreaTypeID_0);
	void LogoutMatchingPlayer(ENetworkFailure Selection);
	void RandomFindStartLocation(struct FStartLocation* StartLocation);
	void FinishStartLocationSelect();
	void GotoOutGameLevel();
	void GotoTitleLevel();
	void GetLastPlayedWwiseBGMInfo(struct FGameplayTag* EventTag, int32* PlayingID);
	void SetPlayingWwiseBGMInfo(const struct FGameplayTag& EventTag, int32 PlayingID);
	int32 GetCreaditNumClamp();
	void GotoHighlight();
	void PlayModeEquals(EPlayMode PlayMode_0, bool* bResult);
	void GetPlayModeTitle(EPlayMode PlayMode_0, class FText* Result);
	void GetCurrentPlayModeTitle(class FText* Result);
	void OpenNoticeErrorLevel(ENetworkFailure Selection);
	void SwitchInGameModeForNetworkError();
	void SwitchOutGameModeForNetworkError();
	void ReflectVolumeSettings(bool bUseUserSettingVolumeRateDefault);
	void ReflectVolumeGameByTestModeValue(int32 NewVolume);
	void ReflectVolumeAttractByTestModeValue(int32 NewVolume);
	void IsDamageAreaParamInitialized(bool* bDamageAreaParamInitialized_0);
	struct FVector GetInitialDamageAreaCenter();
	float GetInitialDamageAreaRadius();
	void OverwriteDamageAreaInitialParams(int32 AreaTypeID_0, const struct FVector& DamageAreaCenter_0, float DamageAreaRadius_0);
	void GetBlockingLoadStageAssetId(TArray<struct FPrimaryAssetId>* Result);
	void InitializeSelectedStartLoacation();
	void GetPlayerControllerUserDataID(class APlayerController* PlayerController, class FString* UserDataID);
	void InitializeDamageAreaParamRandom();
	void InitializeDamageAreaParam_ForDebug(int32 AreaTypeID_0);
	void SetupDefaultLocalMatchingNPC();
	void ReflectUserOutputLevelHeadphone(float UserSettingVolumeRate_0);
	void ReflectVolumeGame(float Rate);
	void ReflectVolumeAttract(float Rate);
	void ReflectOutputLevelHeadphoneByTestModeValue(int32 NewIndex, float UserSettingVolumeRate_0);
	void GetStageID(int32* StageTypeID_0);
	void InitializeInGameParam();
	int32 GetAreaTypeID();
	int32 GetRandomAreaTypeID();
	void GetCameramanNumber(int32* Count);
	float GetUserSettingVolumeRate();
	int32 GetEMoneyPrice();
	void SetConnectionTimeOutSec(float NewTimeSec);
	void SetConnectionTimeOutSecForInGame();
	void SetConnectionTimeOutSecForOutGame();
	void ConvertToCharaNameTag(uint8 CharaID, class FString* CharaName, class FString* StandName);
	void UnloadAllSkinData();
	bool PlayModeIsPair();
	bool PlayModeIsShopCompetition();
	bool PlayModeIsSupportingCharacterAchievement();
	void RegistStageMapTexture(class UObject* UseStageMapTexture_0);
	bool PlayModeIsShopLocal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBGameInstance_C">();
	}
	static class UBP_AJBGameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AJBGameInstance_C>();
	}
};
static_assert(alignof(UBP_AJBGameInstance_C) == 0x000008, "Wrong alignment on UBP_AJBGameInstance_C");
static_assert(sizeof(UBP_AJBGameInstance_C) == 0x0006C8, "Wrong size on UBP_AJBGameInstance_C");
static_assert(offsetof(UBP_AJBGameInstance_C, UberGraphFrame) == 0x0004D8, "Member 'UBP_AJBGameInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, CharacterNo) == 0x0004E0, "Member 'UBP_AJBGameInstance_C::CharacterNo' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, SessionLevel) == 0x0004E8, "Member 'UBP_AJBGameInstance_C::SessionLevel' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, NPCNum) == 0x0004F0, "Member 'UBP_AJBGameInstance_C::NPCNum' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, NPCNumMax) == 0x0004F4, "Member 'UBP_AJBGameInstance_C::NPCNumMax' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, SelecedNum_StartLocation) == 0x0004F8, "Member 'UBP_AJBGameInstance_C::SelecedNum_StartLocation' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StartLocationNum) == 0x000508, "Member 'UBP_AJBGameInstance_C::StartLocationNum' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StartLocationPutMax) == 0x00050C, "Member 'UBP_AJBGameInstance_C::StartLocationPutMax' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StartMachingTime) == 0x000510, "Member 'UBP_AJBGameInstance_C::StartMachingTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, SelectStartLocationMaxSecond) == 0x000518, "Member 'UBP_AJBGameInstance_C::SelectStartLocationMaxSecond' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, MatchingMaxSecond) == 0x00051C, "Member 'UBP_AJBGameInstance_C::MatchingMaxSecond' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StartSelectStartLocationTime) == 0x000520, "Member 'UBP_AJBGameInstance_C::StartSelectStartLocationTime' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StageLevels) == 0x000528, "Member 'UBP_AJBGameInstance_C::StageLevels' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, DamageAreaCenter) == 0x000538, "Member 'UBP_AJBGameInstance_C::DamageAreaCenter' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, DamageAreaRadius) == 0x000544, "Member 'UBP_AJBGameInstance_C::DamageAreaRadius' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, SelectAreaSize) == 0x000548, "Member 'UBP_AJBGameInstance_C::SelectAreaSize' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StageMaxSize) == 0x00054C, "Member 'UBP_AJBGameInstance_C::StageMaxSize' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, DedicatedServerIP) == 0x000550, "Member 'UBP_AJBGameInstance_C::DedicatedServerIP' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, AreaTypeID) == 0x000558, "Member 'UBP_AJBGameInstance_C::AreaTypeID' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, bUseDamageAreaJSON) == 0x00055C, "Member 'UBP_AJBGameInstance_C::bUseDamageAreaJSON' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LogoutPlayerNum) == 0x000560, "Member 'UBP_AJBGameInstance_C::LogoutPlayerNum' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, PlayerIconManager) == 0x000568, "Member 'UBP_AJBGameInstance_C::PlayerIconManager' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, OnRequestStopRecordingReplay) == 0x000570, "Member 'UBP_AJBGameInstance_C::OnRequestStopRecordingReplay' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LastLivingPairCountForHighlight) == 0x000580, "Member 'UBP_AJBGameInstance_C::LastLivingPairCountForHighlight' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LastLivingPlayerCountForHighlight) == 0x000584, "Member 'UBP_AJBGameInstance_C::LastLivingPlayerCountForHighlight' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, HighlightInfo) == 0x000588, "Member 'UBP_AJBGameInstance_C::HighlightInfo' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, CreditSE_Tag) == 0x000598, "Member 'UBP_AJBGameInstance_C::CreditSE_Tag' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ServiceSE_Tag) == 0x0005A0, "Member 'UBP_AJBGameInstance_C::ServiceSE_Tag' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, AkBankSettingsDataTable) == 0x0005A8, "Member 'UBP_AJBGameInstance_C::AkBankSettingsDataTable' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LastPlayedWwiseBGMEventTag) == 0x0005B0, "Member 'UBP_AJBGameInstance_C::LastPlayedWwiseBGMEventTag' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LastPlayedWwiseBGMPlayingID) == 0x0005B8, "Member 'UBP_AJBGameInstance_C::LastPlayedWwiseBGMPlayingID' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, MaxDisplayCreditNum) == 0x0005BC, "Member 'UBP_AJBGameInstance_C::MaxDisplayCreditNum' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, bIsRespawnableOnTraining) == 0x0005C0, "Member 'UBP_AJBGameInstance_C::bIsRespawnableOnTraining' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, DebugNPCCharaIndex) == 0x0005C4, "Member 'UBP_AJBGameInstance_C::DebugNPCCharaIndex' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, bDamageAreaParamInitialized) == 0x0005C8, "Member 'UBP_AJBGameInstance_C::bDamageAreaParamInitialized' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, bIsLocalSessionMode) == 0x0005C9, "Member 'UBP_AJBGameInstance_C::bIsLocalSessionMode' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ValidAreaTypeIDMin) == 0x0005CC, "Member 'UBP_AJBGameInstance_C::ValidAreaTypeIDMin' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ValidAreaTypeIDMax) == 0x0005D0, "Member 'UBP_AJBGameInstance_C::ValidAreaTypeIDMax' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, bDamageAreaParamInitialized_ForDebug) == 0x0005D4, "Member 'UBP_AJBGameInstance_C::bDamageAreaParamInitialized_ForDebug' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, EmoneyIcons) == 0x0005D8, "Member 'UBP_AJBGameInstance_C::EmoneyIcons' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, AmwEventListener) == 0x0005E0, "Member 'UBP_AJBGameInstance_C::AmwEventListener' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, SpeakerVolumeCoefficient) == 0x0005E8, "Member 'UBP_AJBGameInstance_C::SpeakerVolumeCoefficient' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, HeadphoneVolumeCoefficient) == 0x0005EC, "Member 'UBP_AJBGameInstance_C::HeadphoneVolumeCoefficient' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, StageTypeID) == 0x0005F0, "Member 'UBP_AJBGameInstance_C::StageTypeID' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, InGameParamFileNames) == 0x0005F8, "Member 'UBP_AJBGameInstance_C::InGameParamFileNames' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, InGameCharacterParamFileNames) == 0x000608, "Member 'UBP_AJBGameInstance_C::InGameCharacterParamFileNames' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, EMoneySoundAkComponent) == 0x000618, "Member 'UBP_AJBGameInstance_C::EMoneySoundAkComponent' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ShopCompetitionMatchingMaxSecond) == 0x000620, "Member 'UBP_AJBGameInstance_C::ShopCompetitionMatchingMaxSecond' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, UserSettingVolumeRate) == 0x000624, "Member 'UBP_AJBGameInstance_C::UserSettingVolumeRate' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, UserSettingVolumeRateDefault) == 0x000628, "Member 'UBP_AJBGameInstance_C::UserSettingVolumeRateDefault' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, InitialPlayerCountForHighlight) == 0x00062C, "Member 'UBP_AJBGameInstance_C::InitialPlayerCountForHighlight' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, DebugEMoneyPrice) == 0x000630, "Member 'UBP_AJBGameInstance_C::DebugEMoneyPrice' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ConnectionTimeOutSecForInGame) == 0x000634, "Member 'UBP_AJBGameInstance_C::ConnectionTimeOutSecForInGame' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ConnectionTimeOutSecForOutGame) == 0x000638, "Member 'UBP_AJBGameInstance_C::ConnectionTimeOutSecForOutGame' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, SkinDataCache) == 0x000640, "Member 'UBP_AJBGameInstance_C::SkinDataCache' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LoadedMaterials) == 0x000690, "Member 'UBP_AJBGameInstance_C::LoadedMaterials' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, LoadingPlayerIndex) == 0x0006A0, "Member 'UBP_AJBGameInstance_C::LoadingPlayerIndex' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, AttachmentIndex) == 0x0006A4, "Member 'UBP_AJBGameInstance_C::AttachmentIndex' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, ConsumeGachaPP) == 0x0006A8, "Member 'UBP_AJBGameInstance_C::ConsumeGachaPP' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, bAlreadyDisplayedAnnouncements) == 0x0006AC, "Member 'UBP_AJBGameInstance_C::bAlreadyDisplayedAnnouncements' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, UseStageMapTexture) == 0x0006B0, "Member 'UBP_AJBGameInstance_C::UseStageMapTexture' has a wrong offset!");
static_assert(offsetof(UBP_AJBGameInstance_C, MatchingID) == 0x0006B8, "Member 'UBP_AJBGameInstance_C::MatchingID' has a wrong offset!");

}

