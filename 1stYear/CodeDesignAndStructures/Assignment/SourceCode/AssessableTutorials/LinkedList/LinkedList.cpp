#include "LinkedList.h"
#include "math.h"
#include <iostream>

//start Place pointer
//push (int data)
//		-create a new LinkedListNode, set its data, and set its next and prev pointers
//Pop()
//		-removes a node from the end


LinkedList::LinkedList()
{
	start = nullptr;
}


LinkedList::~LinkedList()
{

}

//added to test
void LinkedList::pushBack(int value)
{
	LinkedListNode *NewNode = new LinkedListNode;
	NewNode->data = value;
	if (start == nullptr)
	{
		start = NewNode;
		start->next = nullptr;
		start->previous = nullptr;
	}

	else if (start != nullptr)
	{
		LinkedListNode *currNode;
		EndloopFound = false;
		currNode = start;
		while (EndloopFound == false)
		{
			if (currNode->next != nullptr)
			{
				currNode = currNode->next;
				EndloopFound = false;
			}

			else if (currNode->next == nullptr)
			{
				EndloopFound = true;
			}
		}
		currNode->next = NewNode;
		NewNode->previous = currNode;
		NewNode->next = nullptr;
	}
}

//added to test
void LinkedList::popFront()
{
	start = start->next;
	delete start->previous;
	start->previous = nullptr;
}

//added to test
void LinkedList::popBack()
{
		LinkedListNode *currNode;
		EndloopFound = false;
		currNode = start;
		while (EndloopFound == false)
		{
			if (currNode->next != nullptr)
			{
				currNode = currNode->next;
				EndloopFound = false;
			}

			else if (currNode->next == nullptr)
			{
				EndloopFound = true;
			}
		}
		currNode->previous->next = nullptr;
		delete currNode;
}

//added to test
void LinkedList::Print()
{
	LinkedListNode *currNode;
	EndloopFound = false;
	currNode = start;
	while (EndloopFound == false)
	{
		std::cout << "current node data is:"<< currNode->data << std::endl;
		if (currNode->next != nullptr)
		{
			currNode = currNode->next;
			EndloopFound = false;
		}

		else if (currNode->next == nullptr)
		{
			EndloopFound = true;
		}
	}
}

//added to test
int LinkedList::count()
{
	int count = 0;
	for (LinkedListNode *currNode = start; currNode; currNode = currNode->next)
	{
		count++;
	}
	return count;
}

int LinkedList::last()
{
	LinkedListNode *currNode;
	EndloopFound = false;
	currNode = start;
	while (EndloopFound == false)
	{
		if (currNode->next != nullptr)
		{
			currNode = currNode->next;
			EndloopFound = false;
		}

		else if (currNode->next == nullptr)
		{
			EndloopFound = true;
		}
	}
	return currNode->data;
}

//added to test
bool LinkedList::empty()
{
	return (start == nullptr);
/*
	int count = 0;
	for (LinkedListNode *currNode = start; currNode; currNode = currNode->next)
	{
		count++;
	}

	if (count == 0)
	{
		return true;
	}

	else if (count > 0)
	{
		return false;
	}*/
}