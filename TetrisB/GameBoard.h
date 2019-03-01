#pragma once
#include "Block.h";
#include <iostream>
using namespace std;

class GameBoard {
private:
	const int width = 10;	//Width of playfield.
	const int height = 10;	//Height of playfield.
	struct point {
		int x;
		int y;
	};
	point p1;
	point p2;
	point p3;
	point p4;
	void shiftPoints(char name, int rotation);
	bool gameOver = false;
public:
	Block factory = Block();
	 int **field;
	 GameBoard();
	 void showField();
	 void receivePiece(char);
	 void update();
	 bool collisionCheck(char, int);
	// bool rotationCheck(char, int);
	 void rotateBlock(char, int);
	 bool getGameOver();
};