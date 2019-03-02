#include "Block.h"
using namespace std;


void Block::printBlock(int block[4][4][4]) {
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << block[currentRotation][i][j];
		}
		cout << endl;
	}
}

void Block::printBlock(int block[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << block[i][j];
		}
		cout << endl;
	}
}

void Block::rotate()
{
	if (currentRotation < 4) 
		currentRotation++;

	else currentRotation = 0;

	/*
	switch (name) {
	case 'i': { if (currentRotation != 3) {
		currentRotation++;
		printBlock(iBlock);
	}
			  else {
		currentRotation = 0;
		printBlock(iBlock);
	}
			  break;
	}

	case 'j': { if (currentRotation != 3) {
		currentRotation++;
		printBlock(jBlock);
	}
			  else {
		currentRotation = 0;
		printBlock(jBlock);
	}
			  break;
	}

	case 'l': { if (currentRotation != 3) {
		currentRotation++;
		printBlock(lBlock);
	}
			  else {
		currentRotation = 0;
		printBlock(lBlock);
	}
			  break;
	}

	case 'o': { printBlock(oBlock);
		printBlock(oBlock);
		break;
	}

	case 's': {if (currentRotation != 3) {
		currentRotation++;
		printBlock(sBlock);
	}
			  else {
		currentRotation = 0;
		printBlock(sBlock);
	}
			  break;
	}
	case 't': { if (currentRotation != 3) {
		currentRotation++;
		printBlock(tBlock);
	}
			  else {
		currentRotation = 0;
		printBlock(tBlock);
	}
			  break;
	}

	case 'z': {if (currentRotation != 3) {
		currentRotation++;
		printBlock(zBlock);
	}
			  else {
		currentRotation = 0;
		printBlock(zBlock);
	}
			  break;
	}

	}
	*/
}

void Block::mixPieces() {
	unsigned seed =::chrono::system_clock::now().time_since_epoch().count();
	shuffle(pieces.begin(), pieces.end(), std::default_random_engine(seed));
}

void Block::spawnPiece() {
	if (currentPiece < 7) {
		name = pieces[currentPiece];
		currentPiece++;	//might have to add rotation =0 later
	}

	else {
		cout << endl;
		cout << "mixing the bag"; cout<<endl;
		mixPieces();
		currentPiece = 0;
		name = pieces[currentPiece];
		currentPiece++;
	}
}

Block::Block(){
}

//Block::Block(int shape[][]) {
	
	
//}
