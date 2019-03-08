#include "Block.h"
using namespace std;



//Sets the rotation of the block to the next variation.
void Block::rotate()
{
	if (currentRotation == 3) 
		currentRotation = 0;

	else currentRotation++;

}

//Mixes the bag of blocks before spawning them. This tetris uses the 14 bag system. The bag contains 2 instances of each block: i, j, l, o, s, t and z. The order is mixed and the blocks are sent out.
void Block::mixBlocks() {
	unsigned seed =::chrono::system_clock::now().time_since_epoch().count();
	shuffle(blocks.begin(), blocks.end(), std::default_random_engine(seed));
}


void Block::spawnBlock() {
	if (currentBlock < blocks.size()) {	//If we have not reached the end of the bag, send the piece.
		name = blocks[currentBlock];
		currentBlock++;	
		numBlocks++;
		currentRotation = 0;
	}

	else {		//Else mix the bag again then send the piece.
		mixBlocks();
		currentBlock = 0;
		name = blocks[currentBlock];
		currentBlock++;
		numBlocks++;
		currentRotation = 0;
	}
}

Block::Block(){
}

