#pragma once
#include <iostream>
using namespace std;

class list {
private:
	typedef struct node {
		int data[4][4] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
		};
		node* next;

	}*nodePtr;

	nodePtr head;
	nodePtr tail;
	nodePtr curr;
	nodePtr temp;

public:
	list();
	void addNode(int data[4][4]);
	void printList();

};