#pragma once
#include <vector>

#ifndef A8CL_LOGGER_GLOBAL
#define Global MissingHeader
namespace MissingHeader { inline static void LogA(...){} }
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{


// Custom loop to call functions after a designated timer, or to loop forever/after a certain amount. 
// Functions MUST NOT have any parameters as I currently have no idea how to program that.
class Tick
{
public:

	struct LoopStructure { void(*Function)(); int LoopFor{1}; };

private:

	std::vector<LoopStructure> LoopFunctionList;
	bool bThreadExists{false}; // If thread exists
	bool bEnabled; // If thread should run
	int TickRate; // In milliseconds

	void Init();
	static void TickThread(void* Obj);

public:

	/** Creates a separate thread to loop in.
	 * @param
	 * [optional] int - Tickrate [milliseconds]
	 */
	void Enable();
	void Disable();
	void DestroyThread();

	void SetTickRate(const int& NewTickRate);

	void AddFunction(void(*Function)());

	// If LoopAmount == -1 it will loop forever.
	void AddFunctionFor(void(*Function)(), const int& LoopAmount);

	bool bIsInList(void(*Function)());
	int GetListIterator(void(*Function)());

	// Constructor : Creates thread but does not loop until enabled.
	Tick(const int TickRate = 1000, const bool EnableLoopNow = false) :
		TickRate(TickRate), bEnabled(EnableLoopNow)
	{
		this->Init();
	};

	~Tick()
	{
		if (this->bThreadExists) this->DestroyThread();
	}
};


}