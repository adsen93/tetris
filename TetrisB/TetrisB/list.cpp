#include "list.h"
using namespace std;

list::list() :
	head(NULL),
	tail(NULL),
	curr(NULL),
	temp(NULL)
{
}



void list::addNode(int data[4][4]) {
	nodePtr n = new node;
	n->data = data;
	n->next = NULL;

	if (head != NULL)
		tail->next = n;
}

