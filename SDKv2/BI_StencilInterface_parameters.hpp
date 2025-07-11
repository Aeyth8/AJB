#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_StencilInterface

#include "Basic.hpp"

#include "E_StencilDigit_structs.hpp"


namespace SDK::Params
{

// Function BI_StencilInterface.BI_StencilInterface_C.GetPrimitivesToChangeStencil
// 0x0018 (0x0018 - 0x0000)
struct BI_StencilInterface_C_GetPrimitivesToChangeStencil final
{
public:
	E_StencilDigit                                StencilDigit;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            PrimitiveComponents;                               // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor)
};
static_assert(alignof(BI_StencilInterface_C_GetPrimitivesToChangeStencil) == 0x000008, "Wrong alignment on BI_StencilInterface_C_GetPrimitivesToChangeStencil");
static_assert(sizeof(BI_StencilInterface_C_GetPrimitivesToChangeStencil) == 0x000018, "Wrong size on BI_StencilInterface_C_GetPrimitivesToChangeStencil");
static_assert(offsetof(BI_StencilInterface_C_GetPrimitivesToChangeStencil, StencilDigit) == 0x000000, "Member 'BI_StencilInterface_C_GetPrimitivesToChangeStencil::StencilDigit' has a wrong offset!");
static_assert(offsetof(BI_StencilInterface_C_GetPrimitivesToChangeStencil, PrimitiveComponents) == 0x000008, "Member 'BI_StencilInterface_C_GetPrimitivesToChangeStencil::PrimitiveComponents' has a wrong offset!");

}

