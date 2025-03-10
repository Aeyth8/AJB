#pragma once
#undef LC_MAX

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AJB_CommonExtension

#include "Basic.hpp"


namespace SDK
{

// Enum AJB_CommonExtension.ELocationCondition
// NumValues: 0x0004
enum class ELocationCondition : uint8
{
	LC_InNextSafeArea                        = 0,
	LC_InCurrentSafeArea                     = 1,
	LC_InDamageArea                          = 2,
	LC_MAX                                   = 3,
};

}

