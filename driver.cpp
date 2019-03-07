//#include "Block.h"
#include "GameBoard.h"
#include "olcGameConsoleEngineGL.h"
//#include"EngineExample.h"
#include <conio.h>
#include <ctime>
#include <iostream>
#include <list>
#include <thread>
#include <vector>
//#include <Windows.h>

/*
class example : public olcConsoleGameEngine {
public:
	GameBoard board = GameBoard();
	example() {}

	virtual bool OnUserCreate() {
		ConstructConsole(160, 100, 8, 8);
		Fill(0, 0, 0, 100, '*', 0x0009);
		board.factory.mixPieces();
		board.factory.spawnPiece();
		board.receivePiece(board.factory.name);
		return true;
	}

	virtual bool OnUserUpdate(float fElapsedTime) {
		Draw(25, 25, '*', 0x0008);
		return true;
	}
};
*/
using namespace std;


int main()
{
	srand(time(NULL));
	const int width = 10;	//Width of playfield.
	const int height = 20;	//Height of playfield.
	GameBoard board = GameBoard();
	board.factory.mixPieces();
	board.factory.spawnPiece();
	board.receivePiece(board.factory.name);
	//example demo;
	//demo.ConstructConsole(160,100, 8,8);
	//demo.Draw(0, 0, '|', 0x000F);
	//demo.Start();
	//EngineExample demo;
	//demo.ConstructConsole(160, 100, 8, 8);
	//demo.Start();
	//int currentBlock[4][4];

	

	/*
	//All tetris blocks initialized.
	int iBlock[4][4] = {
		{0,0,0,0},
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};

	int oBlock[4][4] = {
		{0,0,0,0},
		{0,1,1,0},
		{0,1,1,0},
		{0,0,0,0}
	};

	int tBlock[4][4] = {
		{0,1,0,0},
		{1,1,1,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	int sBlock[4][4] = {
		{0,1,1,0},
		{1,1,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	int zBlock[4][4] = {
		{1,1,0,0},
		{0,1,1,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	int jBlock[4][4] = {
		{1,0,0,0},
		{1,1,1,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	int lBlock[4][4] = {
		{0,0,1,0},
		{1,1,1,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	//Initializing all block rotations.

	//iBlock rotations
	int iBlock2[4][4] = {
		{0,0,1,0},
		{0,0,1,0},
		{0,0,1,0},
		{0,0,1,0}
	};

	int iBlock3[4][4] = {
		{0,0,0,0},
		{0,0,0,0},
		{1,1,1,1},
		{0,0,0,0}
	};

	int iBlock4[4][4] = {
		{0,1,0,0},
		{0,1,0,0},
		{0,1,0,0},
		{0,1,0,0}
	};

	//oBlock has no rotations.

	//tBlock rotations.
	int tBlock2[4][4] = {
		{0,1,0,0},
		{0,1,1,0},
		{0,1,0,0},
		{0,0,0,0}
	};

	int tBlock3[4][4] = {
		{0,0,0,0},
		{1,1,1,0},
		{0,1,0,0},
		{0,0,0,0}
	};
	
	int tBlock4[4][4] = {
		{0,1,0,0},
		{1,1,0,0},
		{0,1,0,0},
		{0,0,0,0}
	};

	//sBlock rotations.
	int sBlock2[4][4] = {
		{1,0,0,0},
		{1,1,0,0},
		{0,1,0,0},
		{0,0,0,0}
	};

	//zBlock rotations.
	int zBlock2[4][4] = {
		{0,1,0,0},
		{1,1,0,0},
		{1,0,0,0},
		{0,0,0,0}
	};

	//jBlock rotations.
	int jBlock2[4][4] = {
		{0,1,1,0},
		{0,1,0,0},
		{0,1,0,0},
		{0,0,0,0}
	};

	int jBlock3[4][4] = {
		{0,0,0,0},
		{1,1,1,0},
		{0,0,1,0},
		{0,0,0,0}
	};

	int jBlock4[4][4] = {
		{0,1,0,0},
		{0,1,0,0},
		{1,1,0,0},
		{0,0,0,0}
	};

	//lBlock rotations.
	int lBlock2[4][4] = {
		{0,1,0,0},
		{0,1,0,0},
		{0,1,1,0},
		{0,0,0,0}
	};

	int lBlock3[4][4] = {
		{0,0,0,0},
		{1,1,1,0},
		{1,0,0,0},
		{0,0,0,0}
	};

	int lBlock4[4][4] = {
		{1,1,0,0},
		{0,1,0,0},
		{0,1,0,0},
		{0,0,0,0}
	};
	*/


/*
int nScreenWidth = 80;			// Console Screen Size X (columns)
int nScreenHeight = 30;			// Console Screen Size Y (rows)
wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
for (int i = 0; i < nScreenWidth*nScreenHeight; i++) screen[i] = L' ';
HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
SetConsoleActiveScreenBuffer(hConsole);
DWORD dwBytesWritten = 0;
*/
	

//	int rotate = 0;

	//bool bKey[4];
	double prevTime = GetTickCount();
	double elapsedTime;
	double currentTime;
	
	while (!(board.getGameOver()))
	{	
		this_thread::sleep_for(50ms);
		//WriteConsoleOutputCharacter(hConsole, a, 1, { board.getP1().x,board.getP1().y }, &dwBytesWritten);
		//WriteConsoleOutputCharacter(hConsole, a, 1, { board.getP2().x,board.getP2().y }, &dwBytesWritten);
		//WriteConsoleOutputCharacter(hConsole, a, 1, { board.getP3().x,board.getP3().y }, &dwBytesWritten);
		//WriteConsoleOutputCharacter(hConsole, a, 1, { board.getP4().x,board.getP4().y }, &dwBytesWritten);
		board.checkKeyState();
		currentTime = GetTickCount();
		elapsedTime = currentTime - prevTime;
		//prevTime = currentTime;
		
		
		

		if (elapsedTime >= 1000) //1 and a half seconds.
		{	
			system("CLS");
		//board.checkKeyState();
			board.update();
			board.showField();
			// Display Frame
			//WriteConsoleOutputCharacter(hConsole, row, width *height, { 0,0 }, &dwBytesWritten);
			cout << endl;
			prevTime = currentTime;

			//Reset the timer.
			//startTime = GetTickCount();
			//cin >> rotate ;
			//if (rotate == 1)
			//	board.rotateBlock(board.factory.name,board.factory.currentRotation);
		}
		
		
	
		

	}
	
	cout << "oops game over\n";

	

	
	getchar();
	return 0;



}

