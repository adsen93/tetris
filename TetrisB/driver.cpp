#include "Block.h"
#include "GameBoard.h"
#include <conio.h>
#include <ctime>
#include <iostream>
#include <list>
#include <vector>
#include <Windows.h>



using namespace std;


void printBlock(int block[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << block[i][j];
		}
		cout << endl;
	}
}

void spawnRandomBlock() {

}

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77



int main()
{
	srand(time(NULL));
	//Block iBlock = Block("****", 2);
	//wstring o;
	
	//Block oBlock = Block(o, 1);
	//cout << iBlock.shape <<endl;
	//cout << oBlock.shape << endl;
	//wcout << o;

	const int width = 10;	//Width of playfield.
	const int height = 24;	//Height of playfield.

	char key = _getch();
	int value = key;
	//Creating playfield.
	/*int playfield[width][height];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			 playfield[i][j] = 0;

			 */
	/*
	for (int i = 0; i < height; i++) {
		cout << '|';
		for (int j = 0; j < width; j++) {
			//cout << playfield[i][j];
			cout << " ";
			cout << " ";
		}
		cout << '|';
		cout << endl;
	}
	for (int i = 0; i < width; i++)
		cout << "--";
	cout << "--";
	cout << endl;

	*/

	//createBlocks();

	/*vector<vector<int> > iBlock{
		{0,0,0,0},
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};
	*/

	
	
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
	


	
/*/
	Block piece = Block();
	piece.name = 'i';
	piece.rotate();
	cout << endl;
	piece.rotate();
	cout << endl;
	piece.rotate();
	cout << endl;
	piece.rotate();
	cout << endl;
	piece.rotate();
	cout << endl;
	*/
	GameBoard board = GameBoard();
//	board.factory.mixPieces();
//	board.factory.spawnPiece();
//	board.receivePiece(board.factory.name);
	board.factory.name = 'i';
	//cout << board.factory.name;
	//cout << endl;
//	cout << board.factory.currentRotation;
//	cout << endl;
	board.receivePiece('i');
	cout << endl;
	board.showField();
	/*
	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;

	board.factory.spawnPiece();
	cout << board.factory.name;
	board.receivePiece(board.factory.name);
	board.showField();
	cout << endl;
	*/
	int rotate = 0;

	
	double startTime = GetTickCount();
	
	while (!(board.getGameOver()))
	{
		double currentTime = GetTickCount() - startTime;

		if (currentTime >= 1000) //1 and a half seconds.
		{	/*
			switch (_getch()) {

			case KEY_UP:
				cout  << " GOES UP\n\n";
				break;
			case KEY_DOWN:
				cout  << " GOES DOWN\n\n";
				break;
			case KEY_LEFT:
				cout << " GOES LEFT\n\n";
				break;
			case KEY_RIGHT:
				cout  << " GOES RIGHT\n\n";
				break;
			}

			key = _getch();
			value = key;
			*/
			board.update();
			board.showField();
			cout << endl;
			//Reset the timer.
			startTime = GetTickCount();
			cin >> rotate ;
			if (rotate == 1)
				board.rotateBlock(board.factory.name,board.factory.currentRotation);
		}
		
		//Run other code here while not updating.

		
	}
	
	

	/*
	piece.mixPieces();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	piece.spawnBlock();
	*/
	getchar();
	return 0;



}

