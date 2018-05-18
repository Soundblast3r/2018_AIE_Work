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
	void pushFront(int value);
	void popFront();
	void popBack();

	void Print();
	int count();
	int last();
	int & first();
	bool empty();
	void remove(int NodeValue);
	void clear();
	//void begin();
};
