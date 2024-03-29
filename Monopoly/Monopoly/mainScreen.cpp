#include "mainScreen.h"
#include "GameMap.h"
#include "InfoPanel.h"
#include "Utility.h"
#include "Stack.h"
#include "Bank.h"
#include "OperatingPlayers.h"

mainScreen theScreen;

void mainScreen::printMainScreen()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | 0x5d);
	for (int i = 0; i < 37; i++)
	{
		pos.Y = i;
		pos.X = 0;
		SetConsoleCursorPosition(hOut, pos);
		for (int j = 0; j <= 142; j++)
		{
			cout << " ";
		}
	}
	{
		SetConsoleTextAttribute(hOut, BACKGROUND_GREEN);
		pos.X = 76, pos.Y = 0;
		SetConsoleCursorPosition(hOut, pos);
		cout << "    \n";
		pos.X = 72, pos.Y = 1;
		SetConsoleCursorPosition(hOut, pos);
		cout << "           \n";
		pos.X = 68, pos.Y = 2;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                 \n";
		pos.X = 67, pos.Y = 3;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                  \n";
		pos.X = 66, pos.Y = 4;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                 \n";
		pos.X = 65, pos.Y = 5;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                 \n";
		pos.X = 63, pos.Y = 6;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                    \n";
		pos.X = 62, pos.Y = 7;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                     \n";
		pos.X = 60, pos.Y = 8;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                      \n";
		pos.X = 59, pos.Y = 9;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                       \n";
		pos.X = 58, pos.Y = 10;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                       \n";
		pos.X = 57, pos.Y = 11;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                       \n";
		pos.X = 56, pos.Y = 12;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                       \n";
		pos.X = 55, pos.Y = 13;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                        \n";
		pos.X = 54, pos.Y = 14;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                         \n";
		pos.X = 53, pos.Y = 15;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                         \n";
		pos.X = 52, pos.Y = 16;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                          \n";
		pos.X = 52, pos.Y = 17;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                         \n";
		pos.X = 52, pos.Y = 18;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                         \n";
		pos.X = 52, pos.Y = 19;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                         \n";
		pos.X = 51, pos.Y = 20;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                         \n";
		pos.X = 51, pos.Y = 21;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                        \n";
		pos.X = 51, pos.Y = 22;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                       \n";
		pos.X = 53, pos.Y = 23;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                    \n";
		pos.X = 53, pos.Y = 24;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                   \n";
		pos.X = 54, pos.Y = 25;
		SetConsoleCursorPosition(hOut, pos);
		cout << "                 \n";
		pos.X = 55, pos.Y = 26;
		SetConsoleCursorPosition(hOut, pos);
		cout << "              \n";
		pos.X = 55, pos.Y = 27;
		SetConsoleCursorPosition(hOut, pos);
		cout << "             \n";
		pos.X = 59, pos.Y = 28;
		SetConsoleCursorPosition(hOut, pos);
		cout << "        \n";
		pos.X = 61, pos.Y = 29;
		SetConsoleCursorPosition(hOut, pos);
		cout << "      \n";
		pos.X = 62, pos.Y = 30;
		SetConsoleCursorPosition(hOut, pos);
		cout << "     \n";
		pos.X = 62, pos.Y = 31;
		SetConsoleCursorPosition(hOut, pos);
		cout << "     \n";
		pos.X = 62, pos.Y = 32;
		SetConsoleCursorPosition(hOut, pos);
		cout << "    \n";
	}

	{ {
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			pos.X = 3;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ◢███████◣\n";
			pos.Y = 8;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ██   ██   ██\n";
			pos.Y = 9;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ██   ██   ██\n";
			pos.Y = 10;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ██   ██   ██\n";
			pos.Y = 11;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ██   ██   ██\n";
			pos.Y = 12;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ██   ██   ██\n";
			pos.Y = 13;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ██   ██   ██\n";
			pos.Y = 14;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"     ◥█   ██   █◤\n";

			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			pos.X = 27;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢█████◣\n";
			pos.Y = 8;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 9;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 10;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 11;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 12;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 13;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 14;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◥█████◤\n";

			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			pos.X = 42;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢█\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██████◣\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◥█      █◤\n\n";

			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			pos.X = 57;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢";
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE | BACKGROUND_GREEN);
			pos.X = 59;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"█████◣\n";
			pos.X = 57;
			pos.Y = 8;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 9;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 10;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 11;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 12;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 13;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 14;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◥█████◤\n";

			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
			pos.X = 72;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢████";
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			wcout << L"◣\n";
			pos.Y = 8;
			SetConsoleCursorPosition(hOut, pos);
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
			wcout << L"██    ██\n";
			pos.Y = 9;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██    ██\n";
			pos.Y = 10;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██    ██\n";
			pos.Y = 11;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"█████";
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			wcout << L"◤\n";
			pos.Y = 12;
			SetConsoleCursorPosition(hOut, pos);
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
			wcout << L"██\n";
			pos.Y = 13;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██\n";
			pos.Y = 14;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██◣\n";

			SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			pos.X = 85;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢█████◣\n";
			pos.Y = 8;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 9;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 10;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 11;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 12;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 13;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██      ██\n";
			pos.Y = 14;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◥█████◤\n";

			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			pos.X = 100;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢█\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██        ▄\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"███████\n";

			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | FOREGROUND_INTENSITY);
			pos.X = 115;
			pos.Y = 7;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢█    █◣\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██    ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██████\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"        ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◢█    ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██    ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"██    ██\n";
			pos.Y++;
			SetConsoleCursorPosition(hOut, pos);
			wcout << L"◥████◤\n";
		}}


	{
		pos.Y = 25;
		pos.X = 114;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"新 的 遊 戲";

		pos.Y = 27;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"規 則 說 明";

		pos.Y = 29;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"讀 取 地 圖";

		pos.Y = 31;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"離 開 遊 戲";

	}

	char command;
	command = _getch();
	pos.Y = 25;
	SetConsoleCursorPosition(hOut, pos);
	while (command != EOF)
	{
		if (command == 80)//down
		{
			if (pos.Y != 31)
			{
				pos.Y += 2;
				printWord(pos.Y);
			}
		}
		if (command == 72)//up
		{
			if (pos.Y != 25)
			{
				pos.Y -= 2;
				printWord(pos.Y);
			}

		}
		if (command == 13)//enter
		{
			if (pos.Y == 25)
			{
				pressStart();
			}
			else if (pos.Y == 27)
			{
				pressExp();
			}
			else if (pos.Y == 29)
			{
				pressRead();
			}
			else if (pos.Y == 31)
			{
				exit(1);
			}
		}
		command = _getch();
	}
}

void mainScreen::pressStart()
{
	int maxPlayer = selectPeople();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);

	system("cls");
	TheMap.ReadMap("Taiwan.txt", maxPlayer);
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

void mainScreen::pressRead()
{
	pos.Y = 25;
	pos.X = 126;
	SetConsoleCursorPosition(hOut, pos);
	SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
	wcout << L"台灣地圖";
	pos.Y = 27;
	pos.X = 126;
	SetConsoleCursorPosition(hOut, pos);
	wcout << L"其他地圖";
	pos.Y = 25;
	SetConsoleCursorPosition(hOut, pos);
	char command;
	command = _getch();
	while (command != EOF)
	{
		if (command == 80)//down
		{
			if (pos.Y == 25)
			{
				pos.Y += 2;
				SetCursorPosistion(126, pos.Y);
			}
		}
		else if (command == 72)//up
		{
			if (pos.Y == 27)
			{
				pos.Y -= 2;
				SetCursorPosistion(126, pos.Y);
			}
		}
		else if (command == 13)//Enter
		{
			if (pos.Y == 25) //Taiwan
			{
				int maxPlayer = selectPeople();

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
				system("cls");
				TheMap.ReadMap("Taiwan.txt", maxPlayer);
				TheMap.PrintMap();
				PlayerPanel.PrintPanel();
				for (int i = 0; i < 4; i++)
				{
					theBank.AccMoney[i] = 10000;
					theBank.AccDebt[i] = 0;
					theBank.AccPay[i] = 0;
				}
				theBank.printMoney();
				theStack.printTheScreen();
				theStack.readStackFile("Stacks.txt");
				OperatingPlayers start;
				start.GameStart();
			}
			else if (pos.Y == 27) //輸入檔名
			{
				pos.Y = 29;
				pos.X = 126;
				SetConsoleCursorPosition(hOut, pos);
				SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
				wcout << L"              ";
				pos.Y = 29;
				pos.X = 126;
				SetConsoleCursorPosition(hOut, pos);
				string fileName;
				cin >> fileName;

				try
				{
					TheMap.ReadMap(fileName);
				}
				catch (const std::exception&)
				{
					wcout << "檔案不存在！";
					return;
				}

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
				system("cls");
				TheMap.PrintMap();
				PlayerPanel.PrintPanel();
				for (int i = 0; i < 4; i++)
				{
					theBank.AccMoney[i] = 10000;
					theBank.AccDebt[i] = 0;
					theBank.AccPay[i] = 0;
				}
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

void mainScreen::pressExp()
{
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	for (int i = 0; i < 37; i++)
	{
		pos.Y = i;
		pos.X = 0;
		SetConsoleCursorPosition(hOut, pos);
		for (int j = 0; j <= 142; j++)
		{
			cout << " ";
		}
	}
	/*wifstream in("ex.txt");
	wstring temp;
	pos.X = 0;
	pos.Y = 0;
	SetConsoleCursorPosition(hOut, pos);
	while (getline(in, temp))
	{
		wcout << temp;
		pos.Y++;
		SetConsoleCursorPosition(hOut, pos);
	}
	char command;
	command = _getch();
	printMainScreen();*/
	pos.Y = 0;
	pos.X = 0;
	SetConsoleCursorPosition(hOut, pos);
	wcout << L"按B使用遙控骰子\n\n";
	wcout << L"按N使用路障\n\n";
	wcout << L"按ESC叫出選單\n\n";
	wcout<< L"基本規則：\n";
	wcout<< L"　　玩家每回合移動隨機步數(1~6)、\n";
	wcout<< L"　　經過無人地地產可購買該地產(一地產限一人擁有)、\n";
	wcout<< L"　　若再次經過地產可升級(至多３次)、\n";
	wcout<< L"　　經過他人地產需付過路費、\n";
	wcout<< L"　　20回合制、\n";
	wcout<< L"　　1~4人遊玩\n\n";
	wcout<< L"勝利規則：\n";
	wcout<< L"　　回合結束剩餘金錢最多者、\n";
	wcout<< L"　　回合未結束除獲勝者其餘人全部破產\n";
	wcout<< L"\n";
	wcout<< L"\n\n\n\n\n\n";
	wcout<< L"...按任意鍵回主選單...\n";
	char command;
	command = _getch();
	printMainScreen(); 
}

void mainScreen::printWord(int y)
{
	COORD pos;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (y == 27)
	{
		pos.Y = 25;
		pos.X = 114;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"新 的 遊 戲";

		pos.Y = 27;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"規 則 說 明";

		pos.Y = 29;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"讀 取 地 圖";

		pos.Y = 31;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"離 開 遊 戲";
	}
	else if (y == 29)
	{
		pos.Y = 25;
		pos.X = 114;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"新 的 遊 戲";

		pos.Y = 27;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"規 則 說 明";

		pos.Y = 29;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"讀 取 地 圖";

		pos.Y = 31;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"離 開 遊 戲";
	}
	else if (y == 25)
	{
		pos.Y = 25;
		pos.X = 114;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"新 的 遊 戲";

		pos.Y = 27;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"規 則 說 明";

		pos.Y = 29;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"讀 取 地 圖";

		pos.Y = 31;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"離 開 遊 戲";
	}
	else if (y == 31)
	{
		pos.Y = 25;
		pos.X = 114;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"新 的 遊 戲";

		pos.Y = 27;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"規 則 說 明";

		pos.Y = 29;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
		wcout << L"讀 取 地 圖";

		pos.Y = 31;
		SetConsoleCursorPosition(hOut, pos);
		SetConsoleTextAttribute(hOut, 0 | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		wcout << L"離 開 遊 戲";
	}

	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}

int mainScreen::selectPeople()
{
	ShowConsoleCursor(true);
	pos.Y = 29;
	pos.X = 126;
	SetConsoleCursorPosition(hOut, pos);
	SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
	wcout << L"選擇人數";
	SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	wcout << "        ";
	pos.Y = 30;
	pos.X = 127;
	SetConsoleCursorPosition(hOut, pos);
	SetConsoleTextAttribute(hOut, 0 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
	wcout << L"1 2 3 4";
	pos.X = 127;
	SetConsoleCursorPosition(hOut, pos);
	char command;
	command = _getch();
	while (command != EOF)
	{
		if (command == 75)//left
		{
			if (pos.X != 127)
			{
				pos.X -= 2;
				SetConsoleCursorPosition(hOut, pos);
			}
		}
		else if (command == 77)//right
		{
			if (pos.X != 133)
			{
				pos.X += 2;
				SetConsoleCursorPosition(hOut, pos);
			}
		}
		else if (command == 13)//Enter
		{
			if (pos.X == 127) //1人
			{
				return 1;
			}
			else if (pos.X == 129) //2人
			{
				return 2;
			}
			else if (pos.X == 131) //3人
			{
				return 3;
			}
			else if (pos.X == 133) //4人
			{
				return 4;
			}
		}
		command = _getch();
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}