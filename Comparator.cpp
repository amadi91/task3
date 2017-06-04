#include "stdafx.h"
#include "Comparator.h"
#include "BinaryTreeNode.h"

using namespace std;

bool Comparator::operator()( BinaryTreeNode *a, BinaryTreeNode *b) //comparator function definition responsible for comparing two values and returning them sorted
{
	return a->get_freq() < b->get_freq();
}


