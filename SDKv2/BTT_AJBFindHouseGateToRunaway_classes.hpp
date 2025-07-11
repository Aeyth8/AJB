#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_AJBFindHouseGateToRunaway

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_AJBFindHouseGateToRunaway.BTT_AJBFindHouseGateToRunaway_C
// 0x00D0 (0x0170 - 0x00A0)
class UBTT_AJBFindHouseGateToRunaway_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 RO_EnemyFocusingOnKey;                             // 0x00A8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlackboardKeySelector                 GateActorKey;                                      // 0x00D0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlackboardKeySelector                 PathToGateActorKey;                                // 0x00F8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlackboardKeySelector                 FinalDestinationKey;                               // 0x0120(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlackboardKeySelector                 LookForDirKey;                                     // 0x0148(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	void ExecuteUbergraph_BTT_AJBFindHouseGateToRunaway(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	class AActor* ChooseAppropreateHouseToRunaway(class AAIController* AI_Controller, TArray<class AActor*>& HouseInfos, const struct FBlackboardKeySelector& EnemyKey);
	void ChooseAppropreateDoorOrWindow(class AAIController* AI_Controller, class ABP_AJBAIHouseInfo_C* HouseInfo, class AActor** Actor, class UNavigationPath** Path);
	void Protected_AddActorIfAppropreate(class AAIController* AI_Controller, class AActor* TargetActor, const struct FVector& TargetLocation, const struct FVector& SelfLocation, const TArray<class AActor*>& TargetArray, TArray<class UNavigationPath*>& PathsToTargetActors);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_AJBFindHouseGateToRunaway_C">();
	}
	static class UBTT_AJBFindHouseGateToRunaway_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_AJBFindHouseGateToRunaway_C>();
	}
};
static_assert(alignof(UBTT_AJBFindHouseGateToRunaway_C) == 0x000008, "Wrong alignment on UBTT_AJBFindHouseGateToRunaway_C");
static_assert(sizeof(UBTT_AJBFindHouseGateToRunaway_C) == 0x000170, "Wrong size on UBTT_AJBFindHouseGateToRunaway_C");
static_assert(offsetof(UBTT_AJBFindHouseGateToRunaway_C, UberGraphFrame) == 0x0000A0, "Member 'UBTT_AJBFindHouseGateToRunaway_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_AJBFindHouseGateToRunaway_C, RO_EnemyFocusingOnKey) == 0x0000A8, "Member 'UBTT_AJBFindHouseGateToRunaway_C::RO_EnemyFocusingOnKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBFindHouseGateToRunaway_C, GateActorKey) == 0x0000D0, "Member 'UBTT_AJBFindHouseGateToRunaway_C::GateActorKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBFindHouseGateToRunaway_C, PathToGateActorKey) == 0x0000F8, "Member 'UBTT_AJBFindHouseGateToRunaway_C::PathToGateActorKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBFindHouseGateToRunaway_C, FinalDestinationKey) == 0x000120, "Member 'UBTT_AJBFindHouseGateToRunaway_C::FinalDestinationKey' has a wrong offset!");
static_assert(offsetof(UBTT_AJBFindHouseGateToRunaway_C, LookForDirKey) == 0x000148, "Member 'UBTT_AJBFindHouseGateToRunaway_C::LookForDirKey' has a wrong offset!");

}

