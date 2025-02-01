#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: USBFinderPlugin

#include "Basic.hpp"


namespace SDK
{

// Enum USBFinderPlugin.EusbFinderError
// NumValues: 0x0009
enum class EusbFinderError : uint8
{
	NONE                                     = 0,
	DISCONNECT                               = 1,
	MANY_DONGLE                              = 2,
	DIFFERENT_TITLE_CODE_1_2                 = 3,
	DIFFERENT_TITLE_CODE_1                   = 4,
	DIFFERENT_TITLE_CODE_2                   = 5,
	DIFFERENT_AREA                           = 6,
	DIFFERENT_ACCOUNT                        = 7,
	EusbFinderError_MAX                      = 8,
};

}

