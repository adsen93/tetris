#pragma once
#include <iostream>
#include <string>
using namespace std;

class Block {
public:
	int shape[4][4];		//Space required for shape of the block.
	void rotate();	
	string rotations[4][4][4];	//Array that holds rotations of the block.
	//Block(int shape[][]);
};