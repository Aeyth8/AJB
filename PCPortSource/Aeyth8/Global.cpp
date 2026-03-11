#include "Global.hpp"
#include "Logger.hpp"

#include <sstream>


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;


uintptr_t Global::GBA{0};

bool Global::bConstructedUConsole{false};

/*
		Utils
*/


void Global::FatalErrorBox(const std::string& Message)
{
	const int Box = MessageBoxA(0, "Fatal Error!", Message.c_str(), MB_OK);
}

void Global::LogWin()
{
	AllocConsole();

	// Opens for read and write permissions.
	FILE* Window;
	freopen_s(&Window, "CONOUT$", "w", stdout); 
	freopen_s(&Window, "CONIN$", "r", stdin);
}

std::string Global::HexToString(const uintptr_t& Hex)
{ 
	std::ostringstream Stream;	
	Stream << std::hex << std::uppercase << Hex;

	return Stream.str();
}

DWORD __stdcall Global::ConstructThread(LPVOID Function, LPVOID Parameter)
{
	HANDLE Thread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Function, Parameter, 0, 0);
	if (Thread != nullptr) CloseHandle(Thread);

	return 0;
}

/*

	Loggers

*/

void Global::InitLog()
{
	Logger::Init();
}

void Global::LogA(const std::string& Header, const std::string& Body)
{
	std::cout << "[" + Header + "]" << " - [" + Body + "]\n";
	Logger::DebugLog(Header, Body);
}

void Global::Log(const std::string& Header, const std::string& Body)
{

}

void Global::Log(const std::string& Body)
{

}

void Global::CloseLog()
{
	Logger::Close();
}