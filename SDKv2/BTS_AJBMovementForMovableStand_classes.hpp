#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AJBMovementForMovableStand

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_AJBMovementForMovableStand.BTS_AJBMovementForMovableStand_C
// 0x0110 (0x01A8 - 0x0098)
class UBTS_AJBMovementForMovableStand_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 RO_DestinationKey;                                 // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 RO_IfArrivedKey;                                   // 0x00C8(0x0028)(Edit, BlueprintVisible)
	class UBP_AJBInGameAIInputProxy_C*            InputProxy;                                        // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                 RO_LookAtActorKey;                                 // 0x00F8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 RO_LookForDirKey;                                  // 0x0120(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 RO_LookAtTurnDeviation;                            // 0x0148(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bUseLookAtTurnDeviation;                           // 0x0170(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bFixDirection;                                     // 0x0171(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_172[0x2];                                      // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentLocation;                                   // 0x0174(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentForwardVector;                              // 0x0180(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CurrentRotation;                                   // 0x018C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBP_AJBInGameAIRecognition_C*           Recognition;                                       // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AJBInGameAIImaginaryCharacter_C*    CurrentImaginaryCharacter;                         // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTS_AJBMovementForMovableStand(int32 EntryPoint);
	void InputMovementOnFixedDirection();
	void InputMovementLookinForDir();
	void InputMovementLookingAtTarget(class AActor* LookAtTargetActor);
	void InputMovementDefault();
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	float GetYawDiffNormalizedDefault(const struct FBlackboardKeySelector& DestinationKey);
	void InputMovement(float Forward, float Right, float Turn, float LookUp);
	float GetYawDiffNormalizedLookAtTarget(class AActor* LookAtTargetActor);
	float GetYawDiffNormalizedLookAtDir(const struct FBlackboardKeySelector& LookAtDirKey);
	float GetPitchDiffNormalizedDefault(const struct FBlackboardKeySelector& DestinationKey);
	float GetPitchDiffNormalizedLookAtTarget(class AActor* LookAtTargetActor);
	float GetPitchDiffNormalizedLookAtDir(const struct FBlackboardKeySelector& LookAtDirKey);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_AJBMovementForMovableStand_C">();
	}
	static class UBTS_AJBMovementForMovableStand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_AJBMovementForMovableStand_C>();
	}
};
static_assert(alignof(UBTS_AJBMovementForMovableStand_C) == 0x000008, "Wrong alignment on UBTS_AJBMovementForMovableStand_C");
static_assert(sizeof(UBTS_AJBMovementForMovableStand_C) == 0x0001A8, "Wrong size on UBTS_AJBMovementForMovableStand_C");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, UberGraphFrame) == 0x000098, "Member 'UBTS_AJBMovementForMovableStand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, RO_DestinationKey) == 0x0000A0, "Member 'UBTS_AJBMovementForMovableStand_C::RO_DestinationKey' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, RO_IfArrivedKey) == 0x0000C8, "Member 'UBTS_AJBMovementForMovableStand_C::RO_IfArrivedKey' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, InputProxy) == 0x0000F0, "Member 'UBTS_AJBMovementForMovableStand_C::InputProxy' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, RO_LookAtActorKey) == 0x0000F8, "Member 'UBTS_AJBMovementForMovableStand_C::RO_LookAtActorKey' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, RO_LookForDirKey) == 0x000120, "Member 'UBTS_AJBMovementForMovableStand_C::RO_LookForDirKey' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, RO_LookAtTurnDeviation) == 0x000148, "Member 'UBTS_AJBMovementForMovableStand_C::RO_LookAtTurnDeviation' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, bUseLookAtTurnDeviation) == 0x000170, "Member 'UBTS_AJBMovementForMovableStand_C::bUseLookAtTurnDeviation' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, bFixDirection) == 0x000171, "Member 'UBTS_AJBMovementForMovableStand_C::bFixDirection' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, CurrentLocation) == 0x000174, "Member 'UBTS_AJBMovementForMovableStand_C::CurrentLocation' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, CurrentForwardVector) == 0x000180, "Member 'UBTS_AJBMovementForMovableStand_C::CurrentForwardVector' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, CurrentRotation) == 0x00018C, "Member 'UBTS_AJBMovementForMovableStand_C::CurrentRotation' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, Recognition) == 0x000198, "Member 'UBTS_AJBMovementForMovableStand_C::Recognition' has a wrong offset!");
static_assert(offsetof(UBTS_AJBMovementForMovableStand_C, CurrentImaginaryCharacter) == 0x0001A0, "Member 'UBTS_AJBMovementForMovableStand_C::CurrentImaginaryCharacter' has a wrong offset!");

}

