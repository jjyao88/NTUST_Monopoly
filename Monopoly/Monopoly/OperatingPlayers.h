#pragma once
#include<stdio.h>
#include <conio.h>
#include <iostream>
#include"Player.h"
#include"GameMap.h"
using namespace std;
class OperatingPlayers
{
private:
	
	
public:
	OperatingPlayers();
	int CheatedDice();
	int RoadBarrier();
	int  PurchaseLand(int ID, int pos, COORD Position);
	int UpdateLand (int ID, int pos, COORD Position, int index);
	void GameStart();
	~OperatingPlayers();
};

