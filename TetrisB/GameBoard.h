#pragma once
#include "Block.h";
#include <iostream>
#include <Windows.h>
using namespace std;

class GameBoard {
private:
	const int width = 10;	//Width of playfield.
	const int height = 20;	//Height of playfield.
	struct point {
		int x;
		int y;
	};
	point p1;
	point p2;
	point p3;
	point p4;
	void shiftPoints(char name, int rotation);
	bool bRotateHold = true;
	bool gameOver = false;
public:
	Block factory = Block();
	 int **field;
	 GameBoard();
	 void showField();
	 void receivePiece(char);
	 void update();
	 bool movementPossible(int, char, int);
	 bool collisionCheck(char, int);
	 void move(int);
	 void moveD();
	 void moveL();
	 void moveR();
	// bool rotationCheck(char, int);
	 void rotateBlock(char, int);
	 bool getGameOver();
	 void checkKeyState();
};