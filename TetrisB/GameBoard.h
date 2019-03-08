#pragma once
#include "Block.h";
#include <iostream>
#include <thread>
#include <Windows.h>
using namespace std;

struct point {
		int x;
		int y;

public:
	void operator = (point p1) {
		this->x = p1.x;
		this->y = p1.y;
	}
	};

class GameBoard {
private:
	const int width = 10;	//Width of playfield.	
	const int height = 20;	//Height of playfield.
	int score = 0;			//Score of the player.
	point p1;				//Points p1, p2 ,p3 and p4 are used to track the current block.
	point p2;
	point p3;
	point p4;
	void shiftPoints(char name, int rotation);	//Method that shifts the points after a successful rotation.
	void shiftBlocks(int currentRow, int cleared);	//Method that shifts all the blocks after a successful line clear.
	bool bRotateHold = true;
	bool gameOver = false;
public:
	
	Block factory = Block();
	 int **field;
	 GameBoard();
	 void showField();
	 void receiveBlock(char name);
	 void update();
	 void forceDown();
	 bool movementPossible(int direction, char name, int rotation);
	 void move(int);
	 void moveD();
	 void moveL();
	 void moveR();
	 bool collisionCheck(char name, int rotation);
	 bool rotationOutOfBounds();
	 void rotateBlock(char name, int rotation);
	 bool lineFull(int row);
	 int clearLine(int row);
	 int findLowestPoint();
	 int findHighestPoint();
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