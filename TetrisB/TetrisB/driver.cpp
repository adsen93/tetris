#include <iostream>
#include "Block.h"
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


int main()
{
	
	//Block iBlock = Block("****", 2);
	//wstring o;
	
	//Block oBlock = Block(o, 1);
	//cout << iBlock.shape <<endl;
	//cout << oBlock.shape << endl;
	//wcout << o;

	const int width = 10;	//Width of playfield.
	const int height = 24;	//Height of playfield.

	//Creating playfield.
	int playfield[width][height];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			 playfield[i][j] = 0;


	for (int i = 0; i < height; i++) {
		cout << '*';
		for (int j = 0; j < width; j++) {
			cout << playfield[i][j];
			cout << " ";
		}
		cout << '*';
		cout << endl;
	}
	for (int i = 0; i < width; i++)
		cout << "* ";
	cout << "* *";
	cout << endl;

	//All tetris blocks initialized.
	int iBlock[4][4] = {
		{0,0,0,0},
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};

	int oBlock[4][4] = {
		{0,0,0,0},
		{0,0,1,1},
		{0,0,1,1},
		{0,0,0,0}
	};

	int tBlock[4][4] = {
		{0,0,1,0},
		{0,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};

	int sBlock[4][4] = {
		{0,0,1,1},
		{0,1,1,0},
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
		{0,0,0,1},
		{0,1,1,1},
		{0,0,0,0},
		{0,0,0,0}
	};


	printBlock(iBlock);
	getchar();
	return 0;



}

