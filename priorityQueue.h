#pragma once
#include "BinaryTreeNode.h"
#include "Comparator.h"
#include <iostream>
#include <queue>

using namespace std;

class priorityQueue
{
public: //functions declarations
	priorityQueue();
	~priorityQueue();
	void queueInserter();
	void printOutput();
	void removeFoo();

private:	//private data members declarations
	priority_queue<BinaryTreeNode*, vector<BinaryTreeNode*>, Comparator>* myQueue;
	BinaryTreeNode* n0;
	BinaryTreeNode* n1;
	BinaryTreeNode* n2;
	BinaryTreeNode* n3;
	BinaryTreeNode* n4;
	BinaryTreeNode* nPtr;

};