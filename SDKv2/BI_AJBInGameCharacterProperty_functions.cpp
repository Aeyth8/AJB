#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_AJBInGameCharacterProperty

#include "Basic.hpp"

#include "BI_AJBInGameCharacterProperty_classes.hpp"
#include "BI_AJBInGameCharacterProperty_parameters.hpp"


namespace SDK
{

// Function BI_AJBInGameCharacterProperty.BI_AJBInGameCharacterProperty_C.SetSerialNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SerialNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_AJBInGameCharacterProperty_C::SetSerialNumber(int32 SerialNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AJBInGameCharacterProperty_C", "SetSerialNumber");

	Params::BI_AJBInGameCharacterProperty_C_SetSerialNumber Parms{};

	Parms.SerialNumber = SerialNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_AJBInGameCharacterProperty.BI_AJBInGameCharacterProperty_C.GetPropertyOwnerCharacterBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AJBInGameCharacter_C*         CharacterBP                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_AJBInGameCharacterProperty_C::GetPropertyOwnerCharacterBP(class ABP_AJBInGameCharacter_C** CharacterBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AJBInGameCharacterProperty_C", "GetPropertyOwnerCharacterBP");

	Params::BI_AJBInGameCharacterProperty_C_GetPropertyOwnerCharacterBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterBP != nullptr)
		*CharacterBP = Parms.CharacterBP;
}


// Function BI_AJBInGameCharacterProperty.BI_AJBInGameCharacterProperty_C.GetPropertyType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBCharacterPropertyType               PropertyType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_AJBInGameCharacterProperty_C::GetPropertyType(EAJBCharacterPropertyType* PropertyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_AJBInGameCharacterProperty_C", "GetPropertyType");

	Params::BI_AJBInGameCharacterProperty_C_GetPropertyType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PropertyType != nullptr)
		*PropertyType = Parms.PropertyType;
}

}

