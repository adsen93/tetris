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
	if (currentRotation == 3) 
		currentRotation = 0;

	else currentRotation++;

}

void Block::mixPieces() {
	unsigned seed =::chrono::system_clock::now().time_since_epoch().count();
	shuffle(pieces.begin(), pieces.end(), std::default_random_engine(seed));
}

void Block::spawnPiece() {
	if (currentPiece < 7) {
		name = pieces[currentPiece];
		currentPiece++;	
		currentRotation = 0;
	}

	else {
		mixPieces();
		currentPiece = 0;
		name = pieces[currentPiece];
		currentPiece++;
	}
}

Block::Block(){
}

