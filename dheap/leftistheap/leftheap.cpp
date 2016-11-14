#include <iostream>
#include <cstdlib>
#include "leftheap.h"

PriorityQueue InitializeQueue(void)
{
	return nullptr;
}

int IsEmpty(PriorityQueue q)
{
	return q == nullptr;
}

ElemType FindMin(PriorityQueue q)
{
	if(IsEmpty(q))
	{
		std::cout << "The PriorityQueue is empty!" << std::endl;
		return -1;
	}

	return q -> element;
}

void SwapChildren(PriorityQueue q)
{
	PriorityQueue t = q -> left;
	q -> left = q -> right;
	q -> right = t;
}
