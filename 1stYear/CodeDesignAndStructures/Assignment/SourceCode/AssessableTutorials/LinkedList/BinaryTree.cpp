#include "BinaryTree.h"
#include <iostream>



BinaryTree::BinaryTree()
{
	root = nullptr;
}


BinaryTree::~BinaryTree()
{
}

void BinaryTree::push(int value)
{
	BinaryTreeNode *NewNode = new BinaryTreeNode;
	NewNode->data = value;
	NewNode->Left = nullptr;
	NewNode->Right = nullptr;

	if (root == nullptr)
	{
		root = NewNode;
	}

	else if (root != nullptr)
	{
		BinaryTreeNode *currNode;
		EndloopFound = false;
		currNode = root;
		while (EndloopFound == false)
		{
			if (value <= currNode->data)
			{
				if (currNode->Left == nullptr)
				{
					currNode->Left = NewNode;
					EndloopFound = true;
				}

				else
				{
					currNode = currNode->Left;
				}
			}

			else if (value > currNode->data)
			{
				if (currNode->Right == nullptr)
				{
					currNode->Right = NewNode;
					EndloopFound = true;
				}
				else
				{
					currNode = currNode->Right;
				}
			}
		}
	}
}

void BinaryTree::remove(int value)
{
	//delete leaf
	{
		BinaryTreeNode *currNode;
		EndloopFound = false;
		currNode = root;
		while (EndloopFound == false)
		{
			if (value <= currNode->data)
			{
				if (currNode->Left == nullptr)
				{
					
					EndloopFound = true;
				}

				else
				{
					currNode = currNode->Left;
				}
			}

			else if (value > currNode->data)
			{
				if (currNode->Right == nullptr)
				{
					
					EndloopFound = true;
				}
				else
				{
					currNode = currNode->Right;
				}
			}
		}
	//delete node with one child
	//delete node with two children
}