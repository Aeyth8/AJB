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
#include <map>

#include "Aeyth8/Global.hpp"
#include "MinHook/MinHook.h"
#include "SDK.hpp"
#include "Aeyth8/Hooks/Offsets.hpp"

#include "UnrealContainers.hpp"
#include "PropertyFixup.hpp"
#include "NameCollisions.inl"

#include "Aeyth8/Structs.hpp"
#include "Aeyth8/Logger.hpp"
#include "Aeyth8/Pointers.hpp"
#include "Aeyth8/Hooks/Hooks.hpp"

#endif //PCH_H
