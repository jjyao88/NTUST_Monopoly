#include "Menu.h"
#include "Utility.h"
#include "Bank.h"
#include "Stack.h"
#include "mainScreen.h"
#include "GameMap.h"
#include "InfoPanel.h"
#include "OperatingPlayers.h"

Menu theMenu;

void Menu::printMenu()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	SetCursorPosistion(98, 29);
	wcout << L"1.繼續遊戲";
	SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	SetCursorPosistion(98, 30);
	wcout << L"2.儲存遊戲";
	SetCursorPosistion(98, 31);
	wcout << L"3.進入銀行";
	SetCursorPosistion(98, 32);
	wcout << L"4.股票市場";
	SetCursorPosistion(98, 33);
	wcout << L"5.回主選單";
	pos.Y = 29;
	SetConsoleCursorPosition(hOut, pos);
	char command;
	command = _getch();
	while (command != EOF)
	{
		if (command == 80)//down
		{
			if (pos.Y != 33)
			{
				pos.Y++;
				SetCursorPosistion(98,pos.Y);
				printWord(pos.Y);
			}
		}
		else if (command == 72)//up
		{
			if (pos.Y != 29)
			{
				pos.Y--;
				SetCursorPosistion(98, pos.Y);
				printWord(pos.Y);
			}
		}
		else if (command == 13)//Enter
		{
			if (pos.Y == 29)//繼續遊戲
			{
				printWord(0);
				break;
			}
			else if (pos.Y == 30)//儲存遊戲
			{
				TheMap.WriteMap("SaveGame.txt");
				theBank.writeAM();
				TheMap.WriteMap("store.txt");
				SetCursorPosistion(113, 29);
				wcout << L"!!儲存成功!!";
				Sleep(600);
				theBank.printWord(0);
				break;
			}
			else if (pos.Y == 31)//進入銀行
			{
				theBank.printATM();
				break;
			}
			else if (pos.Y == 32)//股票市場
			{
				theStack.buyStacks();
				break;
			}
			else if (pos.Y == 33)//回主選單
			{
				theBank.restore();
				theScreen.printMainScreen();
			}
		}
		command = _getch();
	}
}

void Menu::printWord(int y)
{
	if (y == 29)
	{
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 29);
		wcout << L"1.繼續遊戲";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 30);
		wcout << L"2.儲存遊戲";
		SetCursorPosistion(98, 31);
		wcout << L"3.進入銀行";
		SetCursorPosistion(98, 32);
		wcout << L"4.股票市場";
		SetCursorPosistion(98, 33);
		wcout << L"5.回主選單";
		SetCursorPosistion(98, 29);
	}
	else if (y == 30)
	{
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 29);
		wcout << L"1.繼續遊戲";
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 30);
		wcout << L"2.儲存遊戲";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 31);
		wcout << L"3.進入銀行";
		SetCursorPosistion(98, 32);
		wcout << L"4.股票市場";
		SetCursorPosistion(98, 33);
		wcout << L"5.回主選單";
		SetCursorPosistion(98, 30);
	}
	else if(y == 31)
	{
		SetCursorPosistion(98, 29);
		wcout << L"1.繼續遊戲";
		SetCursorPosistion(98, 30);
		wcout << L"2.儲存遊戲";
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 31);
		wcout << L"3.進入銀行";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 32);
		wcout << L"4.股票市場";
		SetCursorPosistion(98, 33);
		wcout << L"5.回主選單";
		SetCursorPosistion(98, 31);
	}
	else if (y == 32)
	{
		SetCursorPosistion(98, 29);
		wcout << L"1.繼續遊戲";
		SetCursorPosistion(98, 30);
		wcout << L"2.儲存遊戲";
		SetCursorPosistion(98, 31);
		wcout << L"3.進入銀行";
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 32);
		wcout << L"4.股票市場";
		SetCursorPosistion(98, 33);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"5.回主選單";
		SetCursorPosistion(98, 32);
	}
	else if (y == 33)
	{
		SetCursorPosistion(98, 29);
		wcout << L"1.繼續遊戲";
		SetCursorPosistion(98, 30);
		wcout << L"2.儲存遊戲";
		SetCursorPosistion(98, 31);
		wcout << L"3.進入銀行";
		SetCursorPosistion(98, 32);
		wcout << L"4.股票市場";
		SetCursorPosistion(98, 33);
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		wcout << L"5.回主選單";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 33);
	}
	else if (y == 0)
	{
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 29);
		wcout << L"          ";
		SetCursorPosistion(98, 30);
		wcout << L"          ";
		SetCursorPosistion(98, 31);
		wcout << L"          ";
		SetCursorPosistion(98, 32);
		wcout << L"          ";
		SetCursorPosistion(98, 33);
		wcout << L"          ";
		SetCursorPosistion(98, 29);
	}
}

void Menu::winningScreen(int who)
{
	COORD pos;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED |BACKGROUND_INTENSITY |FOREGROUND_RED);
	pos.X = 50;
	pos.Y = 14;
	SetConsoleCursorPosition(hOut, pos);
	for (int i = 0; i < 3; i++)
	{
		wcout << L"         ";
	}
	SetCursorPosistion(50, 15);
	for (int i = 0; i < 3; i++)
	{
		wcout << L"         ";
	}
	SetCursorPosistion(50, 16);
	for (int i = 0; i < 3; i++)
	{
		wcout << L"         ";
	}
	SetCursorPosistion(50, 17);
	for (int i = 0; i < 3; i++)
	{
		wcout << L"         ";
	}
	SetCursorPosistion(50, 18);
	for (int i = 0; i < 3; i++)
	{
		wcout << L"         ";
	}
	SetCursorPosistion(57, 15);
	if (who == 1)
	{
		wcout << L"恭喜玩家1獲勝!!";
	}
	else if (who == 2)
	{
		wcout << L"恭喜玩家2獲勝!!";
	}
	else if (who == 3)
	{
		wcout << L"恭喜玩家3獲勝!!";
	}
	else if (who == 4)
	{
		wcout << L"恭喜玩家4獲勝!!";
	}
	else if (who == 5)
	{
		wcout << L"...這是場平局...";
	}
	SetCursorPosistion(54, 17);
	wcout << L"是否重新開始?  是 否";
	pos.Y = 17;
	pos.X = 69;
	SetConsoleCursorPosition(hOut, pos);
	char command;
	command = _getch();
	while (command != EOF)
	{
		if (command == 77)
		{
			if (pos.X == 69)
			{
				pos.X += 3;
				SetConsoleCursorPosition(hOut, pos);
			}
		}
		else if (command == 75)
		{
			if (pos.X == 72)
			{
				pos.X -= 3;
				SetConsoleCursorPosition(hOut, pos);
			}
		}
		else if (command == 13)//enter
		{
			if (pos.X == 72)
			{
				theScreen.printMainScreen();
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);

				system("cls");
				TheMap.ReadMap("Taiwan.txt");
				TheMap.PrintMap();
				PlayerPanel.PrintPanel();
				for (int i = 0; i < 4; i++)
				{
					theBank.AccMoney[i] = 10000;
					theBank.AccDebt[i] = 0;
					theBank.AccPay[i] = 0;
				}
				theBank.restore();
				theBank.printMoney();
				theStack.printTheScreen();
				theStack.readStackFile("Stacks.txt");
				OperatingPlayers start;
				start.GameStart();
			}
		}
		command = _getch();
	}
	
}