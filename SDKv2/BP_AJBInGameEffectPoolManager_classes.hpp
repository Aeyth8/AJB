#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameEffectPoolManager

#include "Basic.hpp"

#include "E_GionSpawnedSpace_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ST_GionInfo_structs.hpp"
#include "ST_ParticleEffectInfo_structs.hpp"
#include "AJB_structs.hpp"
#include "AJB_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AJBInGameEffectPoolManager.BP_AJBInGameEffectPoolManager_C
// 0x00E8 (0x0420 - 0x0338)
class ABP_AJBInGameEffectPoolManager_C final : public AAJBInGameEffectPoolManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(Transient, DuplicateTransient)
	class UBP_EffectPool_C*                       ParticleEffectPool;                                // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_EffectPool_C*                       GionEffectPool;                                    // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_AJBInGameGionScreen_C*              EffectScreen;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             UseGionDataTable;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FST_GionInfo> GionDataTable;                                     // 0x0368(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         ParticleEffectCullDistance;                        // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BC[0x4];                                      // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             UseParticleDataTable;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, struct FST_ParticleEffectInfo> ParticleEffectData;                                // 0x03C8(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bAllowDisplayGion;                                 // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AJBInGameEffectPoolManager(int32 EntryPoint);
	void OnOpeningHUDFadeInAnimEnded();
	void ROC_RequestParticleEffectAttached(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation, class USceneComponent* AttachToComponent, class FName SocketName);
	void ROS_RequestParticleEffectAttached(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation, class USceneComponent* SceneComponentToAttach, class FName SocketName);
	void ROC_RequestGionEffect(const struct FGameplayTag& EffectType, class AActor* Owner_0, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv, const struct FVector& Location, const struct FGameplayTag& WwiseEventTag, bool bWwiseAutoPost, bool bWwiseAutoDestroy, class USceneComponent* SceneComponentToAttachWwise, bool bGionDryRun, bool bWwiseDryRun);
	void ROS_RequestGionEffect(const struct FGameplayTag& EffectType, class AActor* Owner_0, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpawnedSpaceInNotOwnersEnv, const struct FVector& Location, const struct FGameplayTag& WwiseEventTag, bool bWwiseAutoPost, bool bWwiseAutoDestroy, class USceneComponent* SceneComponentToAttachWwise, bool bGionDryRun, bool bWwiseDryRun);
	void ROC_RequestParticleEffect(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation);
	void ROS_RequestParticleEffect(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void IsOwnerEffect(class AActor* InputPin, bool* IsOwnerClient);
	void SetupEffectScreen();
	void EmitParticleEffect(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation, class ABP_AJBInGameParticleEffect_C** ParticleEffect);
	void RequestParticleEffectOnAll(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation);
	void LocalGionEffect(const struct FGameplayTag& EffectType, class AActor* Owner_0, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv, const struct FVector& Location, const struct FGameplayTag& WwiseEventTag, bool bWwiseAutoPost, bool bWwiseAutoDestroy, class USceneComponent* SceneComponentToAttachWwise, bool bGionDryRun, bool bWwiseDryRun, class UAkComponent** AkComponent_LocalOnly_, bool* bFullfilGionDisplayingCondition);
	bool ShouldDisplayGionIn3DWorldSpace(const struct FGameplayTag& EffectType, class AActor* Owner_0, E_GionSpawnedSpace GionSpawnedSpaceInOwnersEnv, E_GionSpawnedSpace GionSpawnedSpaceInNotOwnersEnv);
	void EmitParticleEffectAttached(const struct FGameplayTag& EffectTag, const struct FVector& Location, const struct FRotator& Rotation, class USceneComponent* AttachToComponent, class FName SocketName, class ABP_AJBInGameParticleEffect_C** ParticleEffect);
	void RequestParticleEffectAttachedOnAll(const struct FGameplayTag& ParticleType, const struct FVector& Location, const struct FRotator& Rotation, class USceneComponent* SceneComponentToAttach, class FName SocketName);
	void RequestGionEffect(const struct FGameplayTag& EffectTag, class AActor* Owner_0, E_GionSpawnedSpace SpawnedSpaceInOwnersEnv, E_GionSpawnedSpace SpawnedSpaceInNotOwnersEnv, const struct FVector& WorldLocation, bool bIsLocalOnly, const struct FGameplayTag& WwiseEventTag, bool bWwiseAutoPost, bool bWwiseAutoDestroy, class USceneComponent* SceneComponentToAttachWwise, bool bGionDryRun, bool bWwiseDryRun, class UAkComponent** AkComponent_LocalOnly_, bool* bFullfilDisplayCond_LocalOnly_);
	void ShouldPostWwiseEvent(const struct FGameplayTag& WwiseEventTag, const struct FVector& GionWorldLocation, const struct FST_GionInfo& GionInfo, class AActor* Owner_0, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv, bool* Result);
	void FulfillGionDisplayingConditionByDistance(const struct FVector& GionWorldLocation, const struct FST_GionInfo& GionInfo, class AActor* Owner_0, E_GionSpawnedSpace SpanwedSpaceInOwnersEnv, E_GionSpawnedSpace SpanwedSpaceInNotOwnersEnv, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AJBInGameEffectPoolManager_C">();
	}
	static class ABP_AJBInGameEffectPoolManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AJBInGameEffectPoolManager_C>();
	}
};
static_assert(alignof(ABP_AJBInGameEffectPoolManager_C) == 0x000008, "Wrong alignment on ABP_AJBInGameEffectPoolManager_C");
static_assert(sizeof(ABP_AJBInGameEffectPoolManager_C) == 0x000420, "Wrong size on ABP_AJBInGameEffectPoolManager_C");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, UberGraphFrame) == 0x000338, "Member 'ABP_AJBInGameEffectPoolManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, ParticleEffectPool) == 0x000340, "Member 'ABP_AJBInGameEffectPoolManager_C::ParticleEffectPool' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, GionEffectPool) == 0x000348, "Member 'ABP_AJBInGameEffectPoolManager_C::GionEffectPool' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, DefaultSceneRoot) == 0x000350, "Member 'ABP_AJBInGameEffectPoolManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, EffectScreen) == 0x000358, "Member 'ABP_AJBInGameEffectPoolManager_C::EffectScreen' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, UseGionDataTable) == 0x000360, "Member 'ABP_AJBInGameEffectPoolManager_C::UseGionDataTable' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, GionDataTable) == 0x000368, "Member 'ABP_AJBInGameEffectPoolManager_C::GionDataTable' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, ParticleEffectCullDistance) == 0x0003B8, "Member 'ABP_AJBInGameEffectPoolManager_C::ParticleEffectCullDistance' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, UseParticleDataTable) == 0x0003C0, "Member 'ABP_AJBInGameEffectPoolManager_C::UseParticleDataTable' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, ParticleEffectData) == 0x0003C8, "Member 'ABP_AJBInGameEffectPoolManager_C::ParticleEffectData' has a wrong offset!");
static_assert(offsetof(ABP_AJBInGameEffectPoolManager_C, bAllowDisplayGion) == 0x000418, "Member 'ABP_AJBInGameEffectPoolManager_C::bAllowDisplayGion' has a wrong offset!");

}

