#include "Logger.h"
#include "../NTSurfer/NTSurfer.hpp"
#include "../../Proxy8/Entry/ProxyEntry.hpp"

namespace A8CL { namespace Global { FileSystem* Sys; } }

void A8CL::Logger::Init()
{
	Proxy8::NTDLL = NTS::NTSurfer::FindDLLAddress(Proxy8::PEB, L"ntdll.dll");

	static A8CL::FileSystem FS{Proxy8::NTDLL, Proxy8::GBA, Proxy8::PEB};
	Global::Sys = &FS;

	FSHandle RootFolder = Global::Sys->CreateDirectory(L"Aeyth8", false);
	FSHandle SecondFolder = Global::Sys->CreateDirectory(&RootFolder, L"Configs");

	RootFolder.CloseHandle();
	SecondFolder.CloseHandle();
}