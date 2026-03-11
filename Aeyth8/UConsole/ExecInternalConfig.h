#pragma once

// This config is for the ExecInternal system, which uses a special prefix for internal commands designed for communication between blueprints and C++.

namespace A8CL
{
namespace UConsole
{
	constexpr const wchar_t* ExecInternalPrefix = L"AJBExecInternal";
}
}