#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBSHA3DGuide

#include "Basic.hpp"

#include "BP_AJBSHA3DGuide_classes.hpp"
#include "BP_AJBSHA3DGuide_parameters.hpp"


namespace SDK
{

// Function BP_AJBSHA3DGuide.BP_AJBSHA3DGuide_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AJBSHA3DGuide_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHA3DGuide_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBSHA3DGuide.BP_AJBSHA3DGuide_C.UpdateGuide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  PathPositions                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_AJBSHA3DGuide_C::UpdateGuide(TArray<struct FVector>& PathPositions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBSHA3DGuide_C", "UpdateGuide");

	Params::BP_AJBSHA3DGuide_C_UpdateGuide Parms{};

	Parms.PathPositions = std::move(PathPositions);

	UObject::ProcessEvent(Func, &Parms);

	PathPositions = std::move(Parms.PathPositions);
}

}

