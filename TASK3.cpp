// TASK3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BinaryTreeNode.h"
#include "priorityQueue.h"
#include "Comparator.h"

using namespace std;
int main()
{
	priorityQueue* myObject = new priorityQueue; //creating dynamic object for priorityQueue class

	myObject->queueInserter();
	myObject->printOutput();
	myObject->queueInserter();
	
	myObject->removeFoo();
	
	myObject->printOutput();

	return 0;
}

