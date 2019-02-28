#include "GameBoard.h"
using namespace std;

GameBoard::GameBoard() {
	field = new int*[height];
	for (int i = 0; i < height; i++) 
		field[i] = new int[width];

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			field[i][j] = 0;


}

void GameBoard::showField() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}

}

void GameBoard::receivePiece(char name) {
	/*
	p1.x = 1;
	p1.y = 3;
	
	p2.x =  1;
	p2.y = 6;
	
	p3.x =  4;
	p3.y = 3;
	
	p4.x = 4;
	p4.y = 6;
	*/
	switch (name) {
	case 'i': {
		field[2][3] = 1;
		field[2][4] = 1;
		field[2][5] = 1;
		field[2][6] = 1;
		p1.x = 2;
		p1.y = 3;
		p2.x = 2;
		p2.y = 4;
		p3.x = 2;
		p3.y = 5;
		p4.x = 2;
		p4.y = 6;
		break;
	}

	case 'j': {
		field[2][3] = 1;
		field[2][4] = 1;
		field[2][5] = 1;
		field[1][3] = 1;
		p1.x = 2;
		p1.y = 3;
		p2.x = 2;
		p2.y = 4;
		p3.x = 2;
		p3.y = 5;
		p4.x = 1;
		p4.y = 3;
		break;
	}

	case 'l': {
		field[2][3] = 1;
		field[2][4] = 1;
		field[2][5] = 1;
		field[1][5] = 1;
		p1.x = 2;
		p1.y = 3;
		p2.x = 2;
		p2.y = 4;
		p3.x = 2;
		p3.y = 5;
		p4.x = 1;
		p4.y = 5;
		break;
	}

	case 'o': {
		field[2][4] = 1;
		field[1][4] = 1;
		field[2][5] = 1;
		field[1][5] = 1;
		p1.x = 2;
		p1.y = 4;
		p2.x = 1;
		p2.y = 4;
		p3.x = 2;
		p3.y = 5;
		p4.x = 1;
		p4.y = 5;
		break;
	}
	case 's': {
		field[2][5] = 1;
		field[2][4] = 1;
		field[3][4] = 1;
		field[3][3] = 1;
		p1.x = 2;
		p1.y = 5;
		p2.x = 2;
		p2.y = 4;
		p3.x = 3;
		p3.y = 4;
		p4.x = 3;
		p4.y = 3;
		break;
	}
	case 't': {
		field[2][3] = 1;
		field[2][4] = 1;
		field[2][5] = 1;
		field[1][4] = 1;
		p1.x = 2;
		p1.y = 3;
		p2.x = 2;
		p2.y = 4;
		p3.x = 2;
		p3.y = 5;
		p4.x = 1;
		p4.y = 4;
		break;
	}
	case 'z': {
		field[2][3] = 1;
		field[2][4] = 1;
		field[3][4] = 1;
		field[3][5] = 1;
		p1.x = 2;
		p1.y = 3;
		p2.x = 2;
		p2.y = 4;
		p3.x = 3;
		p3.y = 4;
		p4.x = 3;
		p4.y = 5;
		break;
	}
	}
	

	
}

bool GameBoard::collisionCheck(char name, int rotation) {
	switch (name) {
	case 'i': {
		if (rotation == 0) {
			//if (p1.x == height) 
			//	return true;
			//cout << "inside"; cout << endl;
			//cout << field[p1.x+1][p1.y]; cout << endl;
			//cout << (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1); cout << endl;
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}

		break;
	}

	case 'j': {
		if (rotation == 0) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1)
				return true;
			else return false;
		}
		break;
	}

	case 'l': {
		if (rotation == 0) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1)
				return true;
			else return false;
		}
		break;
	}

	case 'o': {
		//if (rotation == 0) {
			if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1)
				return true;
			else return false;
		//}
		break;
	}
	case 's': {
		if (rotation == 0) {
			if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1 ||field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}
		break;
	}
	case 't': {
		if (rotation == 0) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1)
				return true;
			else return false;
		}
		break;
	}
	case 'z': {
		if (rotation == 0) {
			if (field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1 || field[p1.x + 1][p1.y] == 1)
				return true;
			else return false;
		}
		break;
	}
	}
	return false;
}
/*
void GameBoard::update() {
	bool done = false;
	for (int i = p4.x ; i >= p1.x ; i--)
		for (int j = p4.y; j >= p1.y; j--) {
			try {
				if (p4.x == height - 1) {
					for (int i = p4.y; i >= p1.y; i--) {
						if (field[height - 1][i] == 1) {
						factory.spawnPiece();
						receivePiece(factory.name);
						return;
						}

						
					}
				
					p4.x = height - 2;
					//i = height - 2;
					//done = true;
				}

				if (field[i][j] != 0) {
					if (field[i + 1][j] != 1) {

						field[i][j] = 0;
						field[i + 1][j] = 1;
					}
						else {
						for (int i = p4.y; i >= p1.y; i--) {
							if (field[height - 1][i] == 1) {
								factory.spawnPiece();
								receivePiece(factory.name);
								return;
							}

						}
						}
					
				}


			}
			catch (int e) {
				
			}
		}

	
	p4.x++;
	p1.x++;
	if (done) {
		factory.spawnPiece();
		receivePiece(factory.name);
		return;
	}

	cout << p4.x;
	cout << endl;
	cout << p1.x;
	cout << endl;
	}

	*/

void GameBoard::update() {
	if (( p2.x == 2 || p3.x == 2 ) && (/*field[p1.x + 1][p1.y] == 1 ||*/ field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1 /*|| field[p4.x + 1][p4.y] == 1*/) ) {
		cout << "game over";
		cout << endl;
		gameOver = true;
		return;
	}

	if (p1.x == height - 1 || p2.x == height - 1 || p3.x == height - 1 || p4.x == height - 1) {
		factory.spawnPiece();
		receivePiece(factory.name);
		//receivePiece('j');
		return;
	}

	if (collisionCheck(factory.name, factory.currentRotation)) {
		factory.spawnPiece();
		receivePiece(factory.name);
	//	receivePiece('j');
		return;
	}
	
	else {
		field[p1.x][p1.y] = 0;
		field[p2.x][p2.y] = 0;
		field[p3.x][p3.y] = 0;
		field[p4.x][p4.y] = 0;
		p1.x++;
		p2.x++;
		p3.x++;
		p4.x++;
		field[p1.x][p1.y] = 1;
		field[p2.x][p2.y] = 1;
		field[p3.x][p3.y] = 1;
		field[p4.x][p4.y] = 1;
		

	}
}

bool GameBoard::getGameOver() {
	return gameOver;
}