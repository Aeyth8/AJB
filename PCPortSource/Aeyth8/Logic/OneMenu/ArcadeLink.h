#pragma once
#include <string>

// Link to the local arcade server (ajbserver.py, 127.0.0.1:47811): profile, match results, ticket draws.
// All HTTP runs on worker threads; the game thread only reads the cached results.
namespace ArcadeLink
{
	void		Start();						// once: launch ajbserver if it is not answering, start the 5 s health poll
	bool		Alive();						// last poll answered within 5 s
	bool		Polled();						// at least one poll finished
	void		Login(const std::wstring& Name);// async
	void		Result(int Kills, int Rank);	// async, once per match
	void		Draw(int Kind);					// async, 1 = Lucky (1 ticket), 3 = Premium (3 tickets)
	std::string	Status();						// "Lv 2  PP 175  Tickets 4" or ""
	std::string	TakeMessage();					// last draw/result line for the menu, cleared on read
	std::wstring SteamName();					// Steam persona name, "" without Steam
	bool		SteamRunning();
}
