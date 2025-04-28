#include "Tick.hpp"
#include <Windows.h>

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;

void Tick::Init()
{
	if (bThreadExists)
	{
		Global::LogA("Tick", "Tick thread is already created!");
		return;
	}

	void* hTickThread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)TickThread, this, 0, 0);
	if (hTickThread != nullptr)
	{
		bThreadExists = true;

		Global::LogA("Tick", "Tick thread has been created.");
		CloseHandle(hTickThread);
		return;
	}
	Global::LogA("Tick", "Failed to create the tick thread! (This should never happen)");
}


void Tick::TickThread(void* Obj) {  
	Tick* Ptr((Tick*)Obj);
	while (Ptr->bThreadExists)
	{
		if (Ptr->bEnabled)
		{
			for (int i{0}; i < Ptr->LoopFunctionList.size(); ++i)
			{
				if (Ptr->LoopFunctionList[i].Function != nullptr)
				{
					if (Ptr->LoopFunctionList[i].LoopFor == -1 || Ptr->LoopFunctionList[i].LoopFor > 0)
						Ptr->LoopFunctionList[i].Function();

					if (Ptr->LoopFunctionList[i].LoopFor != -1) --Ptr->LoopFunctionList[i].LoopFor;
				}
			}
		}
		Sleep(Ptr->TickRate);
	}
}


/*
		Public
*/


void Tick::Enable()
{
	this->bEnabled = true;
}

void Tick::Disable()
{
	this->bEnabled = false;
}

void Tick::DestroyThread()
{
	this->Disable();
	this->bThreadExists = false;
}

void Tick::SetTickRate(const int& NewTickRate)
{
	this->TickRate = NewTickRate;
}

void Tick::AddFunction(void(*Function)())
{
	if (this->Tick::bIsInList(Function))
	{
		Global::LogA("Tick", "Failed to add function to the array since it's already in the array.");
		return;
	}

	this->Tick::LoopFunctionList.push_back({Function});
}

void Tick::AddFunctionFor(void(*Function)(), const int& LoopAmount)
{
	if (this->Tick::bIsInList(Function))
	{
		Global::LogA("Tick", "Failed to add function to the array since it's already in the array.");
		return;
	}

	this->Tick::LoopFunctionList.push_back({Function, LoopAmount});
}

bool Tick::bIsInList(void(*Function)())
{
	for (int i{0}; i < LoopFunctionList.size(); ++i)
	{
		if (this->LoopFunctionList[i].Function == Function) return true;
	}
	return false;
}

int Tick::GetListIterator(void(*Function)())
{
	for (int i{0}; i < LoopFunctionList.size(); ++i)
	{
		if (this->LoopFunctionList[i].Function == Function) return i;
	}
	return -1;
}