#pragma once
#include "LinkedListNode.h"

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	LinkedListNode* start;

	bool EndloopFound;

	void pushBack(int value);
	void popFront();
	void popBack();

	void Print();
	int count();
	int last();
	bool empty();
};
