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

void LinkedList::popFront()
{
	start = start->next;
	delete start->previous;
	start->previous = nullptr;
}

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
