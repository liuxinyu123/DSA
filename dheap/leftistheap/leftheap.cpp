#include <iostream>
#include <cstdlib>
#include <string>
#include "leftheap.h"

void Error(std::string str)
{
	std::cout << str << std::endl;
}

PriorityQueue InitializeQueue()
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

PriorityQueue Insert1(ElemType value,PriorityQueue q)
{
	PriorityQueue node = (PriorityQueue)malloc(sizeof(struct TreeNode));
	if(!node)
	{
		Error("Memory alloc for PriorityQueue is failed!");
		return nullptr;
	}

	node -> element = value;
	node -> left = node -> right = nullptr;
	node -> npl = 0;
	q = Merge(node,q);

	return q;
}

PriorityQueue Merge1(PriorityQueue q1,PriorityQueue q2)
{
	if(!q1 -> left)//q1没有孩子
		q1 -> left = q2;
	else
	{
		q1 -> right = Merge(q1 -> right,q2);
		if(q1 -> left -> npl < q1 -> right -> npl)
		{
			SwapChildren(q1);
			q1 -> npl = q1 -> right -> npl + 1;
		}
	}

	return q1;
}

PriorityQueue Merge(PriorityQueue q1,PriorityQueue q2)
{
	if(!q1)
		return q2;
	if(!q2)
		return q1;
	if(q1 -> element < q2 -> element)
		return Merge1(q1,q2);
	else
		return Merge1(q2,q1);
}

PriorityQueue DeleteMin1(PriorityQueue q)
{
	if(IsEmpty(q))
	{
		Error("The PriorityQueue is empty!");
		return nullptr;
	}

	PriorityQueue leftheap = q -> left;
	PriorityQueue rightheap = q -> right;
	free(q);
	return Merge(leftheap,rightheap);
}

void PrintHeap(PriorityQueue q)
{
	if(!IsEmpty(q))
	{
		std::cout << q -> element << " ";
		PrintHeap(q -> left);
		PrintHeap(q -> right);
	}
}
