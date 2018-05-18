#pragma once
#include "LinkedListNode.h"

class LinkedList
{
public:
	using Iterator = LinkedListNode * ;
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
	Iterator begin();
	Iterator end();
	void insert(Iterator& iter, int value);
	void erase(Iterator& iter);
	void increment(Iterator& iter, int count);
};
