#ifndef _CPLAYER
#define _CPLAYER

#include "CServer.h"

class CServer;

class CPlayer {

	public:
		unsigned char id;

		float X;
		float Y;

		string Name;
		string Town;
		string UniqID;
		string IPAddress;

		int isAdmin;
		unsigned char displayTank;
		unsigned char Tank;
		unsigned char Tank2;
		unsigned char Tank3;
		unsigned char Tank4;
		unsigned char Tank5;
		unsigned char Tank6;
		unsigned char Tank7;
		unsigned char Tank8;
		unsigned char Tank9;
		unsigned char Red;
		unsigned char Green;
		unsigned char Blue;
		unsigned char Member;
		unsigned char RentalCity;

		int Points;
		int Orbs;
		int Assists;
		int Deaths;
		int MonthlyPoints;
		int City;
		int Mayor;
		int State;
		float lastMove;
		float lastShot;

		int Socket;
		char Buffer[2048];
		int BufferLength;

		void setMayor(int set);
		void JoinGame();
		void StartJoin();
		void LeaveGame(int showmessage);
		void LoggedIn(string User);
		void Death(int killer);
		void Clear();
		int FindApplyMayor();
		bool isInApply();
		bool isInChat();
		bool isConnected();
		bool isInGame();
		bool isInGameApplyOrChat();

		bool isDead;
		float timeDeath;

		CPlayer(CServer *Server);
		~CPlayer();

	private:
		CServer *p;
		void ResetPlayer();

};

#endif
