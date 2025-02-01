// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H
#ifndef COUT
#define COUT std::cout
#endif
#ifndef WCOUT
#define WCOUT std::wcout
#endif

#include <windows.h>
#include <vector>
#include <ranges>

#if defined _M_X64
#pragma comment(lib, "libMinHook.x64.lib")
#endif

//#include "Kiero/includes.h"
#include "MinHook/MinHook.h"
#include "SDK.hpp"

#include "UnrealContainers.hpp"
#include "PropertyFixup.hpp"
#include "NameCollisions.inl"
#include "Aeyth8/Structs.hpp"

#include "Aeyth8/Logger.hpp"
#include "Aeyth8/Pointers.hpp"
#include "Aeyth8/Proxy/Proxy.hpp"
#include "Aeyth8/Logic/CustomLogic.hpp"
#include "Aeyth8/FunctionHooks.hpp"

#endif //PCH_H
