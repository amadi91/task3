#include "stdafx.h"
#include "priorityQueue.h"

using namespace std;

priorityQueue::priorityQueue() //constructor builts dynamic priority queue 
{
	myQueue = new priority_queue<BinaryTreeNode*, vector<BinaryTreeNode*>, Comparator >;
}

priorityQueue::~priorityQueue() //deconstructor deletes all of the object from the heap
{
	delete myQueue;
	delete nPtr;
	delete n0;
	delete n1;
	delete n2;
	delete n3;
	delete n4;
}

void priorityQueue::queueInserter() // queueInserter function responsible for populating dynamically alocated nodes
{
	n0 = new BinaryTreeNode('A', 2, NULL, NULL);
	n1 = new BinaryTreeNode('B', 4, NULL, NULL);
	n2 = new BinaryTreeNode('C', 6, NULL, NULL);
	n3 = new BinaryTreeNode('D', 8, NULL, NULL);
	n4 = new BinaryTreeNode('E', 10, NULL, NULL);

	myQueue->push(n3); //pushing nodes on the priorityQueue, purposely in RANDOM order
	myQueue->push(n1);
	myQueue->push(n4);
	myQueue->push(n0);
	myQueue->push(n2);

}

void priorityQueue::printOutput() // printOutput function responsible for displaying  displaying output in to the console
{
	cout << "Node frequencies stored in priority queue: " << endl;
	while (!myQueue->empty())	//iterating through myQueue untill it's empty 
	{
		nPtr = myQueue->top();	//then storing all of the values in nPtr to print out frequency rather than address of the pointer stored on priority_queue
		cout << nPtr->get_freq() << endl;

		myQueue->pop();			
	}
	
}

void priorityQueue::removeFoo() //remove function responsible for deleting the values(created for testing purposes- can be called as many times as required to remove items from priority queue)
{
	cout << endl;
	cout << "Remove Function trigerred(!)" << endl<<endl;
	myQueue->pop();
}