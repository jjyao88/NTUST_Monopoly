#include "Menu.h"
#include "Utility.h"
#include "Bank.h"
#include "Stack.h"
#include "mainScreen.h"

Menu theMenu;

void Menu::printMenu()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	SetCursorPosistion(98, 29);
	wcout << L"1.�~��C��";
	SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	SetCursorPosistion(98, 30);
	wcout << L"2.�x�s�C��";
	SetCursorPosistion(98, 31);
	wcout << L"3.�i�J�Ȧ�";
	SetCursorPosistion(98, 32);
	wcout << L"4.�Ѳ�����";
	SetCursorPosistion(98, 33);
	wcout << L"5.���}�C��";
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
			if (pos.Y == 29)//�~��C��
			{
				printWord(0);
				break;
			}
			else if (pos.Y == 30)//�x�s�C��
			{
				theBank.writeAM();
			}
			else if (pos.Y == 31)//�i�J�Ȧ�
			{
				theBank.printATM();
				break;
			}
			else if (pos.Y == 32)//�Ѳ�����
			{
				theStack.buyStacks();
				break;
			}
			else if (pos.Y == 33)//���}�C��
			{
				theBank.restore();
				exit(1);
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
		wcout << L"1.�~��C��";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 30);
		wcout << L"2.�x�s�C��";
		SetCursorPosistion(98, 31);
		wcout << L"3.�i�J�Ȧ�";
		SetCursorPosistion(98, 32);
		wcout << L"4.�Ѳ�����";
		SetCursorPosistion(98, 33);
		wcout << L"5.���}�C��";
		SetCursorPosistion(98, 29);
	}
	else if (y == 30)
	{
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 29);
		wcout << L"1.�~��C��";
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 30);
		wcout << L"2.�x�s�C��";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 31);
		wcout << L"3.�i�J�Ȧ�";
		SetCursorPosistion(98, 32);
		wcout << L"4.�Ѳ�����";
		SetCursorPosistion(98, 33);
		wcout << L"5.���}�C��";
		SetCursorPosistion(98, 30);
	}
	else if(y == 31)
	{
		SetCursorPosistion(98, 29);
		wcout << L"1.�~��C��";
		SetCursorPosistion(98, 30);
		wcout << L"2.�x�s�C��";
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 31);
		wcout << L"3.�i�J�Ȧ�";
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		SetCursorPosistion(98, 32);
		wcout << L"4.�Ѳ�����";
		SetCursorPosistion(98, 33);
		wcout << L"5.���}�C��";
		SetCursorPosistion(98, 31);
	}
	else if (y == 32)
	{
		SetCursorPosistion(98, 29);
		wcout << L"1.�~��C��";
		SetCursorPosistion(98, 30);
		wcout << L"2.�x�s�C��";
		SetCursorPosistion(98, 31);
		wcout << L"3.�i�J�Ȧ�";
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		SetCursorPosistion(98, 32);
		wcout << L"4.�Ѳ�����";
		SetCursorPosistion(98, 33);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"5.���}�C��";
		SetCursorPosistion(98, 32);
	}
	else if (y == 33)
	{
		SetCursorPosistion(98, 29);
		wcout << L"1.�~��C��";
		SetCursorPosistion(98, 30);
		wcout << L"2.�x�s�C��";
		SetCursorPosistion(98, 31);
		wcout << L"3.�i�J�Ȧ�";
		SetCursorPosistion(98, 32);
		wcout << L"4.�Ѳ�����";
		SetCursorPosistion(98, 33);
		SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		wcout << L"5.���}�C��";
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