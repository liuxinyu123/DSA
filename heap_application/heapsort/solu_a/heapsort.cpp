#include <iostream>
#include <cstdlib>
#include "heapsort.h"
#include <string>

const ElemType MinElement = -1;

void Error(std::string str)
{
	std::cout << std::endl;
	std::cout << str << std::endl;
}

void Swap(ElemType *l,ElemType *r)
{
	ElemType t = *l;
	*l = *r;
	*r = t;
}

ElemType Min(ElemType l,ElemType r)
{
	return (l > r) ? r : l;
}

void PrintHeap(BinHeap h)
{
	if(IsEmpty(h))
		return;

	int cnt = 2;

	std::cout << std::endl;

	for(int i = 1; i <= h -> size; ++i)
	{
		if(i == cnt)
		{
			std::cout << std::endl;
			cnt *= 2;
		}
		std::cout << h -> element[i] << " " ;
	}

	std::cout << std::endl;
}

int IsFull(BinHeap h)
{
	return h -> size == h -> capacity;
}

int IsEmpty(BinHeap h)
{
	return h -> size == 0;
}

BinHeap BuildMinHeap(ElemType *arr,int len,int cap)
{
	
	BinHeap h = (BinHeap)malloc(sizeof(struct BinHeapStruct));
	if(!h)
		Error("Memory alloc for BinHeap is failed!");
	h -> capacity = cap;
	h -> size = len;
	h -> element = (ElemType*)malloc(sizeof(ElemType) * h -> size);

	if(!h -> element)	
		Error("Memory alloc for BinHeap's array is failed!");
	h -> element[0] = MinElement;

	for(int i = 1; i <= len; ++i)
	{
		h -> element[i] = arr[i - 1];
	}
	
	for(int i = h -> size / 2; i > 0 ; --i)
		PercolateDown(i,h);
	
	return h;
}

ElemType DeleteMin(BinHeap h)
{
	if(IsEmpty(h))
	{			
		Error("The heap is empty!");
		return h -> element[0];
	}

	ElemType last = h -> element[h -> size--];
	ElemType first = h -> element[1];
		
	h -> element[1] = last;
	PercolateDown(1,h);
		
	return first;
}

void PercolateDown(Position p,BinHeap h)
{
	if(2 * p > h -> size)//不存在孩子
		return;
	else if(2 * p == h -> size)//只有一个左孩子
	{
		if(h -> element[p] > h -> element[2 * p])
		{
			Swap(&h -> element[p],&h -> element[2 * p]);
			PercolateDown(2 * p,h);
		}
	}

	else//两个孩子
	{
		if(h -> element[p] > Min(h -> element[2 * p],h -> element[2 * p + 1]))
		{
			if(h -> element[2 * p] > h -> element[2 * p + 1])
			{
				Swap(&h -> element[p],&h -> element[2 * p + 1]);
				PercolateDown(2 * p + 1,h);
			}
			else
			{
				Swap(&h -> element[p],&h -> element[2 * p]);
				PercolateDown(2 * p,h);
			
			}
		}
	}
}
