#include <iostream>
#include <string>
#include <cstdlib>
#include "skewheap.h"

void Error(std::string str)
{
	std::cout << str << std::endl;
}

ElemType FindMin(SkewHeap h)
{
	return h -> element;
}

SkewHeap Merge(SkewHeap h1,SkewHeap h2)
{
	if(!h1)
		return h2;
	if(!h2)
		return h1;
	if(h1 -> element < h2 -> element)
		return Merge1(h1,h2);
	else
		return Merge1(h2,h1);
}

SkewHeap Merge1(SkewHeap h1,SkewHeap h2)
{
	if(!h1 -> left)
		h1 -> left = h2;
	else
	{
		h1 -> right = Merge(h1 -> right,h2);
	}	

	return h1;
}

SkewHeap Insert1(ElemType value,SkewHeap h)
{
	SkewHeap node = (SkewHeap)malloc(sizeof(struct TreeNode));

	if(!node)
	{
		Error("Memory alloc for TreeNode is failed!");
		return nullptr;
	}

	node -> element = value;
	node -> left = node -> right = nullptr;
	return Merge(node,h);
}

SkewHeap DeleteMin1(SkewHeap h)
{
	SkewHeap leftheap = h -> left;
	SkewHeap rightheap = h -> right;

	free(h);

	return Merge(leftheap,rightheap); 
}

void PrintHeap(SkewHeap h)
{
	if(h)
	{
		std::cout << h -> element << " " ;
		PrintHeap(h -> left);
		PrintHeap(h -> right);
	}
}

SkewHeap InitializeHeap()
{
	return nullptr;
}
