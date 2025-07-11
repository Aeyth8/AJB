#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBInGameLastSurvivorSceneCameraCut2

#include "Basic.hpp"

#include "BP_AJBInGameLastSurvivorSceneCameraCut2_classes.hpp"
#include "BP_AJBInGameLastSurvivorSceneCameraCut2_parameters.hpp"


namespace SDK
{

// Function BP_AJBInGameLastSurvivorSceneCameraCut2.BP_AJBInGameLastSurvivorSceneCameraCut2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBInGameLastSurvivorSceneCameraCut2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameLastSurvivorSceneCameraCut2_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBInGameLastSurvivorSceneCameraCut2.BP_AJBInGameLastSurvivorSceneCameraCut2_C.SearchProperLocationAndRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAJBInGameCharacterBase*          TargetCharacterBase                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             StartTargetSocketName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EndTargetSocketName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          StartLocation_0                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         StartRotation_0                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                          EndLocation_0                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         EndRotation_0                                          (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABP_AJBInGameLastSurvivorSceneCameraCut2_C::SearchProperLocationAndRotation(class AAJBInGameCharacterBase* TargetCharacterBase, class FName StartTargetSocketName, class FName EndTargetSocketName, bool* bFound, struct FVector* StartLocation_0, struct FRotator* StartRotation_0, struct FVector* EndLocation_0, struct FRotator* EndRotation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBInGameLastSurvivorSceneCameraCut2_C", "SearchProperLocationAndRotation");

	Params::BP_AJBInGameLastSurvivorSceneCameraCut2_C_SearchProperLocationAndRotation Parms{};

	Parms.TargetCharacterBase = TargetCharacterBase;
	Parms.StartTargetSocketName = StartTargetSocketName;
	Parms.EndTargetSocketName = EndTargetSocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (StartLocation_0 != nullptr)
		*StartLocation_0 = std::move(Parms.StartLocation_0);

	if (StartRotation_0 != nullptr)
		*StartRotation_0 = std::move(Parms.StartRotation_0);

	if (EndLocation_0 != nullptr)
		*EndLocation_0 = std::move(Parms.EndLocation_0);

	if (EndRotation_0 != nullptr)
		*EndRotation_0 = std::move(Parms.EndRotation_0);
}

}

