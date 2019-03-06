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
	factory.currentRotation = 0;
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
		field[1][4] = 1;
		field[2][4] = 1;
		field[1][5] = 1;
		field[2][5] = 1;

		p1.x = 1;
		p1.y = 4;

		p2.x = 2;
		p2.y = 4;

		p3.x = 1;
		p3.y = 5;

		p4.x = 2;
		p4.y = 5;
		break;
	}
	case 's': {
		field[1][5] = 1;
		field[1][4] = 1;
		field[2][4] = 1;
		field[2][3] = 1;

		p1.x = 1;
		p1.y = 5;

		p2.x = 1;
		p2.y = 4;

		p3.x = 2;
		p3.y = 4;

		p4.x = 2;
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
		field[1][3] = 1;
		field[1][4] = 1;
		field[2][4] = 1;
		field[2][5] = 1;

		p1.x = 1;
		p1.y = 3;

		p2.x = 1;
		p2.y = 4;

		p3.x = 2;
		p3.y = 4;

		p4.x = 2;
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


		else if (rotation == 1){
			if (field[p4.x + 1][p3.y] == 1)
				return true;
			else return false;
		}
		
		else if (rotation == 2) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;

		
		}
		else if (rotation == 3) {
			if (field[p4.x + 1][p1.y] == 1)
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

		else if (rotation == 1) {
			if (field[p3.x + 1][p3.y] == 1 || field[p4.x+1][p4.y] == 1)
				return true;
			else return false;
		}

		else if (rotation == 2) {
			if (field[p2.x + 1][p2.y] == 1 || field[p3.x + 1][p3.y] == 1 ||  field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;


		}
		else if (rotation == 3) {
			if (field[p1.x + 1][p1.y] == 1 || field[p4.x + 1][p4.y] == 1)
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

		else if (rotation == 1) {
			if (field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}

		else if (rotation == 2) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;


		}
		else if (rotation == 3) {
			if (field[p1.x + 1][p1.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}
		break;
	}

	case 'o': {
		//if (rotation == 0) {
			if (field[p2.x + 1][p1.y] == 1 || field[p4.x + 1][p3.y] == 1)
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

		else if (rotation == 1) {
			if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1)
				return true;
			else return false;
		}

		else if (rotation == 2) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}

		else if (rotation == 3) {
			if (field[p2.x + 1][p2.y] == 1 || field[p4.x + 1][p4.y] == 1)
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
		else if (rotation == 1) {
			if (field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}
		else if (rotation == 2) {
			if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}
		else if (rotation == 3) {
			if (field[p1.x + 1][p1.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}
		break;
	}
	case 'z': {
		if (rotation == 0) {
			if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}

		if (rotation == 1) {
			if (field[p2.x + 1][p2.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}

		if (rotation == 2) {
			if (field[p1.x + 1][p1.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p4.x + 1][p4.y] == 1)
				return true;
			else return false;
		}

		if (rotation == 3) {
			if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1 )
				return true;
			else return false;
		}
		break;
	}
	}
	return false;
}

void GameBoard::shiftPoints(char name, int rotation) {
	field[p1.x][p1.y] = 0;
	field[p2.x][p2.y] = 0;
	field[p3.x][p3.y] = 0;
	field[p4.x][p4.y] = 0;


	switch (name) {
	case 'i': { 
		if (rotation == 0) {
			p1.x = p1.x - 1;
			p1.y = p1.y + 2;

			p2.x = p2.x;
			p2.y = p2.y + 1;

			p3.x = p3.x + 1;
			p3.y = p3.y;

			p4.x = p4.x + 2;
			p4.y = p4.y - 1;
		  }
		else if (rotation == 1) {
			p1.x = p1.x + 2;
			p1.y = p1.y - 2;

			p2.x = p2.x + 1;
			p2.y = p2.y - 1;

			p3.x = p3.x;
			p3.y = p3.y;

			p4.x = p4.x - 1;
			p4.y = p4.y + 1;
		}

		else if (rotation == 2) {
			p1.x = p1.x - 2;
			p1.y = p1.y + 1;

			p2.x = p2.x - 1;
			p2.y = p2.y;

			p3.x = p3.x;
			p3.y = p3.y - 1;

			p4.x = p4.x + 1;
			p4.y = p4.y - 2;
		}

		else if (rotation == 3) {
			p1.x = p1.x + 1;
			p1.y = p1.y - 1;

			p2.x = p2.x;
			p2.y = p2.y;

			p3.x = p3.x - 1;
			p3.y = p3.y + 1;

			p4.x = p4.x - 2;
			p4.y = p4.y + 2;
		}
		break;
	}

	case 'j': { 
		if (rotation == 0) {
			p1.x = p1.x - 1;
			p1.y = p1.y + 1;

			//p2.x = p2.x;
			//p2.y = p2.y + 1;

			p3.x = p3.x + 1;
			p3.y = p3.y - 1;

			p4.x = p4.x;
			p4.y = p4.y + 2;
		}
		else if (rotation == 1) {
			p1.x = p1.x + 1;
			p1.y = p1.y + 1;

			//p2.x = p2.x + 1;
			//p2.y = p2.y - 1;

			p3.x = p3.x - 1;
			p3.y = p3.y - 1;

			p4.x = p4.x + 2;
			p4.y = p4.y;
		}

		else if (rotation == 2) {
			p1.x = p1.x + 1;
			p1.y = p1.y - 1;

			//p2.x = p2.x - 1;
			//p2.y = p2.y;

			p3.x = p3.x - 1;
			p3.y = p3.y + 1;

			p4.x = p4.x;
			p4.y = p4.y - 2;
		}

		else if (rotation == 3) {
			p1.x = p1.x - 1;
			p1.y = p1.y - 1;

			//p2.x = p2.x;
			//p2.y = p2.y;

			p3.x = p3.x + 1;
			p3.y = p3.y + 1;

			p4.x = p4.x - 2;
			p4.y = p4.y;
		}
		break;
	}

	case 'l': {
		if (rotation == 0) {
			p1.x = p1.x - 1;
			p1.y = p1.y + 1;

			//p2.x = p2.x;
			//p2.y = p2.y + 1;

			p3.x = p3.x + 1;
			p3.y = p3.y - 1;

			p4.x = p4.x + 2;
			p4.y = p4.y;
		}
		else if (rotation == 1) {
			p1.x = p1.x + 1;
			p1.y = p1.y + 1;

			//p2.x = p2.x + 1;
			//p2.y = p2.y - 1;

			p3.x = p3.x - 1;
			p3.y = p3.y - 1;

			p4.x = p4.x;
			p4.y = p4.y - 2;
		}

		else if (rotation == 2) {
			p1.x = p1.x + 1;
			p1.y = p1.y - 1;

			//p2.x = p2.x - 1;
			//p2.y = p2.y;

			p3.x = p3.x - 1;
			p3.y = p3.y + 1;

			p4.x = p4.x - 2;
			p4.y = p4.y;
		}

		else if (rotation == 3) {
			p1.x = p1.x - 1;
			p1.y = p1.y - 1;

			//p2.x = p2.x;
			//p2.y = p2.y;

			p3.x = p3.x + 1;
			p3.y = p3.y + 1;

			p4.x = p4.x;
			p4.y = p4.y + 2;
		}
		break;
	}

	case 'o': {
		break;
	}

	case 's': {
		if (rotation == 0) {
			p1.x = p1.x +2;
			p1.y = p1.y;

			p2.x = p2.x + 1;
			p2.y = p2.y + 1;

			//p3.x = p3.x + 1;
			//p3.y = p3.y - 1;

			p4.x = p4.x - 1;
			p4.y = p4.y + 1;
		}
		else if (rotation == 1) {
			p1.x = p1.x;
			p1.y = p1.y -2;

			p2.x = p2.x + 1;
			p2.y = p2.y - 1;

			//p3.x = p3.x - 1;
			//p3.y = p3.y - 1;

			p4.x = p4.x + 1;
			p4.y = p4.y + 1;
		}

		else if (rotation == 2) {
			p1.x = p1.x - 2;
			p1.y = p1.y;

			p2.x = p2.x - 1;
			p2.y = p2.y - 1;

			//p3.x = p3.x - 1;
			//p3.y = p3.y + 1;

			p4.x = p4.x + 1;
			p4.y = p4.y - 1;
		}

		else if (rotation == 3) {
			p1.x = p1.x;
			p1.y = p1.y + 2;

			p2.x = p2.x - 1;
			p2.y = p2.y + 1;

			//p3.x = p3.x + 1;
			//p3.y = p3.y + 1;

			p4.x = p4.x - 1;
			p4.y = p4.y - 1;
		}
		break;
	}
	case 't': { 
		if (rotation == 0) {
			p1.x = p1.x - 1;
			p1.y = p1.y + 1;

			//p2.x = p2.x;
			//p2.y = p2.y + 1;

			p3.x = p3.x + 1;
			p3.y = p3.y - 1;

			p4.x = p4.x + 1;
			p4.y = p4.y + 1;
		}
		else if (rotation == 1) {
			p1.x = p1.x + 1;
			p1.y = p1.y + 1;

			//p2.x = p2.x + 1;
			//p2.y = p2.y - 1;

			p3.x = p3.x - 1;
			p3.y = p3.y - 1;

			p4.x = p4.x+ 1;
			p4.y = p4.y - 1;
		}

		else if (rotation == 2) {
			p1.x = p1.x + 1;
			p1.y = p1.y - 1;

			//p2.x = p2.x - 1;
			//p2.y = p2.y;

			p3.x = p3.x - 1;
			p3.y = p3.y + 1;

			p4.x = p4.x - 1;
			p4.y = p4.y - 1;
		}

		else if (rotation == 3) {
			p1.x = p1.x - 1;
			p1.y = p1.y - 1;

			//p2.x = p2.x;
			//p2.y = p2.y;

			p3.x = p3.x + 1;
			p3.y = p3.y + 1;

			p4.x = p4.x - 1;
			p4.y = p4.y + 1;
		}
		break;
	}

	case 'z': {
		if (rotation == 0) {
			p1.x = p1.x;
			p1.y = p1.y + 2;

			p2.x = p2.x + 1;
			p2.y = p2.y + 1;

			//p3.x = p3.x + 1;
			//p3.y = p3.y - 1;

			p4.x = p4.x + 1;
			p4.y = p4.y - 1;
		}
		else if (rotation == 1) {
			p1.x = p1.x + 2;
			p1.y = p1.y;

			p2.x = p2.x + 1;
			p2.y = p2.y - 1;

			//p3.x = p3.x - 1;
			//p3.y = p3.y - 1;

			p4.x = p4.x - 1;
			p4.y = p4.y - 1;
		}

		else if (rotation == 2) {
			p1.x = p1.x ;
			p1.y = p1.y - 2;

			p2.x = p2.x - 1;
			p2.y = p2.y - 1;

			//p3.x = p3.x - 1;
			//p3.y = p3.y + 1;

			p4.x = p4.x - 1;
			p4.y = p4.y + 1;
		}

		else if (rotation == 3) {
			p1.x = p1.x - 2;
			p1.y = p1.y;

			p2.x = p2.x - 1;
			p2.y = p2.y + 1;

			//p3.x = p3.x + 1;
			//p3.y = p3.y + 1;

			p4.x = p4.x + 1;
			p4.y = p4.y + 1;
		}
		break;
	}

	}
	

	field[p1.x][p1.y] = 1;
	field[p2.x][p2.y] = 1;
	field[p3.x][p3.y] = 1;
	field[p4.x][p4.y] = 1;
}

void GameBoard::rotateBlock(char name, int rotation) {
	switch (name) {
		case 'i': {
			if (rotation == 0) {
				if (field[p1.x - 1][p1.y + 2] == 1 || field[p3.x + 1][p3.y] == 1 || field[p4.x + 2][p4.y - 1] == 1)
					return;
				else {

					shiftPoints(name, rotation);
					//factory.currentRotation++;
					factory.rotate();
					return;
				};
			}

			else if (rotation == 1) {
				if (field[p1.x + 2][p1.y - 2] == 1 || field[p2.x + 1][p2.y - 1] == 1 || field[p4.x - 1][p4.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					// factory.currentRotation++;
					factory.rotate();
					return;
				}
			}

			else if (rotation == 2) {
				if (field[p1.x - 2][p1.y + 1] == 1 || field[p2.x - 1][p2.y] == 1 || field[p4.x + 1][p4.y - 2] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					// factory.currentRotation++;
					factory.rotate();
				}
			}

			else if (rotation == 3) {
				if (field[p1.x + 1][p1.y - 1] == 1 || field[p3.x - 1][p3.y + 1] == 1 || field[p4.x - 2][p4.y + 2] == 1)
					return;

				else {
					shiftPoints(name, rotation);
					factory.rotate();
					// factory.currentRotation++;
				}
			}

			break;
		}

		case 'j': {
			if (rotation == 0) {
				if (field[p2.x - 1][p2.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p2.x + 1][p2.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			else if (rotation == 1) {
				if (field[p2.x][p2.y - 1] == 1 || field[p2.x][p2.y + 1] == 1 || field[p2.x + 1][p2.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			else if (rotation == 2) {
				if (field[p2.x - 1][p2.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p2.x + 1][p2.y - 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			else if (rotation == 3) {
				if (field[p2.x][p2.y - 1] == 1 || field[p2.x][p2.y + 1] == 1 || field[p2.x - 1][p2.y - 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}
			break;


		}

		case 'l': {
			if (rotation == 0) {
				if (field[p2.x - 1][p2.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p2.x + 1][p2.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			else if (rotation == 1) {
				if (field[p2.x][p2.y - 1] == 1 || field[p2.x][p2.y + 1] == 1 || field[p2.x - 1][p2.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			else if (rotation == 2) {
				if (field[p2.x - 1][p2.y] == 1 || field[p2.x + 1][p2.y] == 1 || field[p2.x - 1][p2.y - 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			else if (rotation == 3) {
				if (field[p2.x][p2.y - 1] == 1 || field[p2.x][p2.y - 1] == 1 || field[p2.x - 1][p2.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}
			break;


		}

		case 'o': {
			//if (rotation == 0) {
			//if (field[p1.x + 1][p1.y] == 1 || field[p3.x + 1][p3.y] == 1)
			//	return;
			//else return;
			//}
			break;
		}
		case 's': {
			if (rotation == 0) {
				if (field[p3.x][p3.y + 1] == 1 || field[p3.x + 1][p3.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 1) {
				if (field[p3.x + 1][p3.y] == 1 || field[p3.x + 1][p3.y - 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 2) {
				if (field[p3.x][p3.y - 1] == 1 || field[p3.x - 1][p3.y - 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 3) {
				if (field[p3.x - 1][p3.y] == 1 || field[p3.x - 1][p3.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}
			break;
		}
		case 't': {
			if (rotation == 0) {
				if (field[p2.x + 1][p2.y] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 1) {
				if (field[p2.x][p2.y - 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 2) {
				if (field[p2.x - 1][p2.y] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 3) {
				if (field[p2.x][p2.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}
			break;
		}
		case 'z': {
			if (rotation == 0) {
				if (field[p3.x - 1][p3.y + 1] == 1 || field[p3.x + 1][p3.y] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 1) {
				if (field[p3.x][p3.y - 1] == 1 || field[p3.x + 1][p3.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 2) {
				if (field[p3.x + 1][p3.y - 1] == 1 || field[p3.x - 1][p3.y] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}

			if (rotation == 3) {
				if (field[p3.x - 1][p3.y - 1] == 1 || field[p3.x][p3.y + 1] == 1)
					return;
				else {
					shiftPoints(name, rotation);
					factory.rotate();
					return;
				}
			}
			break;
		}
			  //return;
	}
}
/*
void GameBoard::rotateBlock() {
	if (rotationCheck(factory.name, factory.currentRotation)) 
		factory.rotate();
	
		
}
*/
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
	//checkKeyState();
	//cout << p1.x + "\n";
	//cout << p1.y + "\n";
	if (p1.x == height - 1 || p2.x == height - 1 || p3.x == height - 1 || p4.x == height - 1) {
		factory.spawnPiece();
		receivePiece(factory.name);
		//receivePiece('l');
		return;
	}

	if (collisionCheck(factory.name, factory.currentRotation)) {
		factory.spawnPiece();
		receivePiece(factory.name);
	//	receivePiece('l');
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

void GameBoard::checkKeyState() {
	if (GetAsyncKeyState(VK_LEFT)) {
		//cout << "left\n";
		if (movementPossible(VK_LEFT, factory.name, factory.currentRotation)) {
			//move(25);
			moveL();
		}
	}
	
	if (GetAsyncKeyState(VK_RIGHT)) {
		//cout << "right\n";
		if (movementPossible(VK_RIGHT, factory.name, factory.currentRotation)) {
			moveR();
			//move(27);
		}
	}
		
	if (GetAsyncKeyState(VK_DOWN)) {
		//cout << "down\n";
		if (movementPossible(VK_DOWN, factory.name, factory.currentRotation)) {
			if (!collisionCheck(factory.name, factory.currentRotation)) {
				moveD();
			}
		}
	}
		if (GetAsyncKeyState(VK_SPACE)) {
			cout << factory.currentRotation ;
			cout << endl;
			if (bRotateHold) {
				rotateBlock(factory.name, factory.currentRotation);
				bRotateHold = false;
			}
			else
				bRotateHold = true;
		}
	
}
void GameBoard::moveR() {
	field[p1.x][p1.y] = 0;
	field[p2.x][p2.y] = 0;
	field[p3.x][p3.y] = 0;
	field[p4.x][p4.y] = 0;

	p1.y++;
	p2.y++;
	p3.y++;
	p4.y++;


	field[p1.x][p1.y] = 1;
	field[p2.x][p2.y] = 1;
	field[p3.x][p3.y] = 1;
	field[p4.x][p4.y] = 1;
}

void GameBoard::moveL() {
	field[p1.x][p1.y] = 0;
	field[p2.x][p2.y] = 0;
	field[p3.x][p3.y] = 0;
	field[p4.x][p4.y] = 0;

	p1.y--;
	p2.y--;
	p3.y--;
	p4.y--;


	field[p1.x][p1.y] = 1;
	field[p2.x][p2.y] = 1;
	field[p3.x][p3.y] = 1;
	field[p4.x][p4.y] = 1;
}

void GameBoard::moveD() {
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
void GameBoard::move(int direction) {
	switch (direction) {
		case 25: {
			field[p1.x][p1.y] = 0;
			field[p2.x][p2.y] = 0;
			field[p3.x][p3.y] = 0;
			field[p4.x][p4.y] = 0;

			p1.y--;
			p2.y--;
			p3.y--;
			p4.y--;


			field[p1.x][p1.y] = 1;
			field[p2.x][p2.y] = 1;
			field[p3.x][p3.y] = 1;
			field[p4.x][p4.y] = 1;

		}
			
		case 27: {
			field[p1.x][p1.y] = 0;
			field[p2.x][p2.y] = 0;
			field[p3.x][p3.y] = 0;
			field[p4.x][p4.y] = 0;

			p1.y++;
			p2.y++;
			p3.y++;
			p4.y++;


			field[p1.x][p1.y] = 1;
			field[p2.x][p2.y] = 1;
			field[p3.x][p3.y] = 1;
			field[p4.x][p4.y] = 1;
		}
	}
}

bool GameBoard::movementPossible(int direction, char name, int rotation) {
	switch (direction) {
		case VK_LEFT: {// left
			if (p1.y - 1 < 0 || p2.y - 1 < 0 || p3.y - 1 < 0 || p4.y - 1 < 0) {
				return false;
			}

			switch (name) {
				case 'i': {
					if (rotation == 0 || rotation == 2) {
						return (field[p1.x][p1.y - 1] == 0);
					}
					else if (rotation == 1 || rotation == 3) {
						return (field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);
					}
				//	else if (rotation == 2) {

//					}
	//				else if (rotation == 3) {

		//			}
					break;
				}
				case 'j': {
					if (rotation == 0) {
						return (field[p1.x][p1.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	//j and l
					}
					else if (rotation == 1) {
						return (field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p3.x][p3.y - 1] == 0);	// j and l
					}
					else if (rotation == 2) {
						return(field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	//j and l
					}
					else if (rotation == 3) {
						return(field[p2.x][p2.y - 1] == 0 && field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);

					}
					break;
				}
				case 'l': {
					if (rotation == 0) {
						return (field[p1.x][p1.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	// j and l
					}
					else if (rotation == 1) {
						return (field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p3.x][p3.y - 1] == 0);	// j and l
					}
					else if (rotation == 2) {
						return(field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	 // j and l
					}
					else if (rotation == 3) {
						return(field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);
					}
					break;
				}
				case 'o': {
					return(field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0);
					break;
				}
				case 's': {
					if (rotation == 0) {
						return (field[p2.x][p2.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);
					}
					else if (rotation == 1) {
						return (field[p1.x][p1.y - 1] == 0 && field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	//s and z
					}
					else if (rotation == 2) {
						return(field[p1.x][p1.y - 1] == 0 && field[p3.x][p3.y - 1] == 0);
					}
					else if (rotation == 3) {
						return(field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	//s and z

					}
					break;
				}
				case 't': {
					if (rotation == 0) {
						return (field[p1.x][p1.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);
					}
					else if (rotation == 1) {
						return (field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p3.x][p3.y - 1] == 0);
					}
					else if (rotation == 2) {
						return(field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);
					}
					else if (rotation == 3) {
						return(field[p1.x][p1.y - 1] == 0 && field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);

					}
					break;
				}
				case 'z': {
					if (rotation == 0) {
						return (field[p1.x][p1.y - 1] == 0 && field[p3.x][p3.y - 1] == 0);
					}
					else if (rotation == 1) {
						return (field[p1.x][p1.y - 1] == 0 && field[p3.x][p3.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	// s and z
					}
					else if (rotation == 2) {
						return(field[p2.x][p2.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);
					}
					else if (rotation == 3) {
						return(field[p1.x][p1.y - 1] == 0 && field[p2.x][p2.y - 1] == 0 && field[p4.x][p4.y - 1] == 0);	// s and z

					}
					break;
				}

			}
		}
	
		case VK_RIGHT: {// right
			if (p1.y + 1 > width || p2.y + 1 > width || p3.y + 1 > width || p4.y + 1 > width) {
				return false;
			}
		
			switch (name) {
			case 'i': {
				if (rotation == 0 || rotation == 2) {
					return (field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 1 || rotation == 3) {
					return (field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				//	else if (rotation == 2) {

	//					}
		//				else if (rotation == 3) {

			//			}
				break;
			}
			case 'j': {
				if (rotation == 0) {
					return (field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	// j and l
				}
				else if (rotation == 1) {
					return (field[p2.x][p2.y + 1] == 0 && field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 2) {
					return (field[p1.x][p1.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	//j and l
				}
				else if (rotation == 3) {
					return (field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p3.x][p3.y + 1] == 0);	 // j and l
				}
				break;
			}
			case 'l': {
				if (rotation == 0) {
					return (field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	// j and l
				}
				else if (rotation == 1) {
					return (field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 2) {
					return (field[p1.x][p1.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	 // j and l
				}
				else if (rotation == 3) {
					return (field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p3.x][p3.y + 1] == 0);	// j and l
				}
				break;
			}
			case 'o': {
				return(field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				break;
			}
			case 's': {
				if (rotation == 0) {
					return (field[p1.x][p1.y + 1] == 0 && field[p3.x][p3.y + 1] == 0);
				}
				else if (rotation == 1) {
					return (field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	//s and z
				}
				else if (rotation == 2) {
					return(field[p2.x][p2.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 3) {
					return(field[p1.x][p1.y + 1] == 0 && field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	//s and z

				}
				break;
			}
			case 't': {
				if (rotation == 0) {
					return (field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 1) {
					return (field[p1.x][p1.y + 1] == 0 && field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	//s and z
				}
				else if (rotation == 2) {
					return(field[p1.x][p1.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 3) {
					return(field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p3.x][p3.y + 1] == 0);	//s and z

				}
				break;
			}
			case 'z': {
				if (rotation == 0) {
					return (field[p2.x][p2.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);
				}
				else if (rotation == 1) {
					return (field[p1.x][p1.y + 1] == 0 && field[p2.x][p2.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	//s and z
				}
				else if (rotation == 2) {
					return(field[p1.x][p1.y + 1] == 0 && field[p3.x][p3.y + 1] == 0);
				}
				else if (rotation == 3) {
					return(field[p1.x][p1.y + 1] == 0 && field[p3.x][p3.y + 1] == 0 && field[p4.x][p4.y + 1] == 0);	//s and z

				}
				break;
			}

			}

		}
	
		case VK_DOWN: {
			return !(p1.x + 1 >= height || p2.x + 1 >= height || p3.x + 1 >= height || p4.x + 1 >= height);
		}
	}
	return false;
}