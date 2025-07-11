#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharaAchieve_Progressbar

#include "Basic.hpp"

#include "WB_CharaAchieve_Progressbar_classes.hpp"
#include "WB_CharaAchieve_Progressbar_parameters.hpp"


namespace SDK
{

// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.ExecuteUbergraph_WB_CharaAchieve_Progressbar
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CharaAchieve_Progressbar_C::ExecuteUbergraph_WB_CharaAchieve_Progressbar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "ExecuteUbergraph_WB_CharaAchieve_Progressbar");

	Params::WB_CharaAchieve_Progressbar_C_ExecuteUbergraph_WB_CharaAchieve_Progressbar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.PlayProgressAnimation
// (BlueprintCallable, BlueprintEvent)

void UWB_CharaAchieve_Progressbar_C::PlayProgressAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "PlayProgressAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.MakeProgressIcons
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentVictoryCount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           AllMilestoneList                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_CharaAchieve_Progressbar_C::MakeProgressIcons(int32 CurrentVictoryCount, const TArray<int32>& AllMilestoneList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "MakeProgressIcons");

	Params::WB_CharaAchieve_Progressbar_C_MakeProgressIcons Parms{};

	Parms.CurrentVictoryCount = CurrentVictoryCount;
	Parms.AllMilestoneList = std::move(AllMilestoneList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CharaAchieve_Progressbar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "PreConstruct");

	Params::WB_CharaAchieve_Progressbar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.AddSmallProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CharaAchieve_Progressbar_C::AddSmallProgress(int32 AddNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "AddSmallProgress");

	Params::WB_CharaAchieve_Progressbar_C_AddSmallProgress Parms{};

	Parms.AddNum = AddNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.AddLargeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DisplayNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CharaAchieve_Progressbar_C::AddLargeProgress(int32 DisplayNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "AddLargeProgress");

	Params::WB_CharaAchieve_Progressbar_C_AddLargeProgress Parms{};

	Parms.DisplayNumber = DisplayNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CharaAchieve_Progressbar.WB_CharaAchieve_Progressbar_C.IsFinisehdProgressAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFinisehd                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CharaAchieve_Progressbar_C::IsFinisehdProgressAnimation(bool* bFinisehd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CharaAchieve_Progressbar_C", "IsFinisehdProgressAnimation");

	Params::WB_CharaAchieve_Progressbar_C_IsFinisehdProgressAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bFinisehd != nullptr)
		*bFinisehd = Parms.bFinisehd;
}

}

