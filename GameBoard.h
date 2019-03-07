#pragma once
#include "Block.h";
#include <iostream>
#include <thread>
#include <Windows.h>
using namespace std;

struct point {
		int x;
		int y;
	};
class GameBoard {
private:
	const int width = 10;	//Width of playfield.	//2 extra for side walls
	const int height = 20;	//Height of playfield.
	
	point p1;
	point p2;
	point p3;
	point p4;
	void shiftPoints(char name, int rotation);
	void shiftBlocks(int currentRow, int cleared);
	bool bRotateHold = true;
	bool gameOver = false;
public:
	
	Block factory = Block();
	 int **field;
	 GameBoard();
	 void showField();
	 void receivePiece(char name);
	 void update();
	 bool movementPossible(int direction, char name, int rotation);
	 void move(int);
	 void moveD();
	 void moveL();
	 void moveR();
	 bool collisionCheck(char name, int rotation);
	 bool lineFull(int row);
	 int clearLine(int row);
	 int findLowestPoint();
	// bool rotationCheck(char, int);
	 void rotateBlock(char name, int rotation);
	 bool getGameOver();
	 bool bgameOver();
	 void checkKeyState();
	 int getHeight();
	 int getWidth();
	 point getP1();
	 point getP2();
	 point getP3();
	 point getP4();
};