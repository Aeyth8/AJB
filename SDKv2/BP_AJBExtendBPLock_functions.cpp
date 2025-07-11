#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AJBExtendBPLock

#include "Basic.hpp"

#include "BP_AJBExtendBPLock_classes.hpp"
#include "BP_AJBExtendBPLock_parameters.hpp"


namespace SDK
{

// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.ExecuteUbergraph_BP_AJBExtendBPLock
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::ExecuteUbergraph_BP_AJBExtendBPLock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "ExecuteUbergraph_BP_AJBExtendBPLock");

	Params::BP_AJBExtendBPLock_C_ExecuteUbergraph_BP_AJBExtendBPLock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.ExtendBPLockOnce
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::ExtendBPLockOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "ExtendBPLockOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.StartExtend
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::StartExtend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "StartExtend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.EndServerAlive
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::EndServerAlive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "EndServerAlive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.EndExtend
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::EndExtend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "EndExtend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnTimer_ServerAlive
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::OnTimer_ServerAlive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnTimer_ServerAlive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.StartServerAlive
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::StartServerAlive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "StartServerAlive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnTime_ExtendBPLock
// (BlueprintCallable, BlueprintEvent)

void UBP_AJBExtendBPLock_C::OnTime_ExtendBPLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnTime_ExtendBPLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnSuccess_EED4777E43895CCF25E6458A00C156D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBNetAPIResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextExtendSpan                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::OnSuccess_EED4777E43895CCF25E6458A00C156D7(EAJBNetAPIResult Result, int32 NextExtendSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnSuccess_EED4777E43895CCF25E6458A00C156D7");

	Params::BP_AJBExtendBPLock_C_OnSuccess_EED4777E43895CCF25E6458A00C156D7 Parms{};

	Parms.Result = Result;
	Parms.NextExtendSpan = NextExtendSpan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnFailed_EED4777E43895CCF25E6458A00C156D7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBNetAPIResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextExtendSpan                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::OnFailed_EED4777E43895CCF25E6458A00C156D7(EAJBNetAPIResult Result, int32 NextExtendSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnFailed_EED4777E43895CCF25E6458A00C156D7");

	Params::BP_AJBExtendBPLock_C_OnFailed_EED4777E43895CCF25E6458A00C156D7 Parms{};

	Parms.Result = Result;
	Parms.NextExtendSpan = NextExtendSpan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnSuccess_791251A64772546BFE11A39E14D98DB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBNetAPIResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextExtendSpan                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::OnSuccess_791251A64772546BFE11A39E14D98DB1(EAJBNetAPIResult Result, int32 NextExtendSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnSuccess_791251A64772546BFE11A39E14D98DB1");

	Params::BP_AJBExtendBPLock_C_OnSuccess_791251A64772546BFE11A39E14D98DB1 Parms{};

	Parms.Result = Result;
	Parms.NextExtendSpan = NextExtendSpan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnFailed_791251A64772546BFE11A39E14D98DB1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBNetAPIResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextExtendSpan                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::OnFailed_791251A64772546BFE11A39E14D98DB1(EAJBNetAPIResult Result, int32 NextExtendSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnFailed_791251A64772546BFE11A39E14D98DB1");

	Params::BP_AJBExtendBPLock_C_OnFailed_791251A64772546BFE11A39E14D98DB1 Parms{};

	Parms.Result = Result;
	Parms.NextExtendSpan = NextExtendSpan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnSuccess_3D3C7C5945F352C2BD3B3CB70BF3A2F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBNetAPIResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::OnSuccess_3D3C7C5945F352C2BD3B3CB70BF3A2F7(EAJBNetAPIResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnSuccess_3D3C7C5945F352C2BD3B3CB70BF3A2F7");

	Params::BP_AJBExtendBPLock_C_OnSuccess_3D3C7C5945F352C2BD3B3CB70BF3A2F7 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AJBExtendBPLock.BP_AJBExtendBPLock_C.OnFailed_3D3C7C5945F352C2BD3B3CB70BF3A2F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAJBNetAPIResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AJBExtendBPLock_C::OnFailed_3D3C7C5945F352C2BD3B3CB70BF3A2F7(EAJBNetAPIResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AJBExtendBPLock_C", "OnFailed_3D3C7C5945F352C2BD3B3CB70BF3A2F7");

	Params::BP_AJBExtendBPLock_C_OnFailed_3D3C7C5945F352C2BD3B3CB70BF3A2F7 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}

}

