#pragma once
#include "BinaryTreeNode.h"

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	BinaryTreeNode* root;

	bool EndloopFound;

	void push(int value);
	void remove(int value);

};


