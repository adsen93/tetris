#include "GameBoard.h"
#include <conio.h>
#include <ctime>
#include <iostream>
#include <list>
#include <thread>
#include <vector>
#include <Windows.h>


using namespace std;


int main()
{
	srand(time(NULL));
	GameBoard board = GameBoard();
	board.factory.mixBlocks();
	board.factory.spawnBlock();
	board.receiveBlock(board.factory.name);
	double prevTime = GetTickCount();
	double elapsedTime;
	double currentTime;
	int difficulty = 1;

	while (!(board.getGameOver()))
	{	
		board.checkKeyState();
		this_thread::sleep_for(50ms);
		system("CLS");
		board.update();
		board.showField();
		
		currentTime = GetTickCount();
		elapsedTime = currentTime - prevTime;
		if (elapsedTime >= 1000 / difficulty)	//First level forces the pieces down every second.
		{	
			board.forceDown();
			prevTime = currentTime;
			if (board.factory.numBlocks % 50 == 0) {	//Increase the difficulty every 50 pieces.
				difficulty += .25;
			}
		}
	}
	
	cout << "oops game over\n";
	getchar();
	return 0;



}

