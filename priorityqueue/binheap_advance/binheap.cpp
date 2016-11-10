#include <cstdlib>
#include <iostream>
#include <string>
#include "binheap.h"

const int MinCapacity = 5;
const ElemType MinData = -1;

void Error(std::string str)
{
	std::cout << std::endl;
	std::cout << str << std::endl;
}

struct HeapStruct
{
	int capacity;
	int size;
	ElemType *Elements;
};

ElemType Min(ElemType l,ElemType r)
{
	return (l < r) ? l : r;
}

void Swap(ElemType *l,ElemType *r)
{
	ElemType t = *l;
	*l = *r;
	*r = t;
}

PriorityQueue InitializeQueue(int cap)
{
	if(cap < MinCapacity)
		Error("The capacity is too small!");
	
	PriorityQueue q = (PriorityQueue)malloc(sizeof(struct HeapStruct));
	if(!q)
		Error("Memory alloc for PriorityQueue is failed!");
	
	q -> Elements = (ElemType*)malloc(sizeof(ElemType) * cap);
	if(!q -> Elements)
		Error("Memory alloc for Elements is failed!");
	
	q -> capacity = cap;
	q -> size = 0;
	q -> Elements[0] = MinData;
		
	return q;
}

void MakeEmpty(PriorityQueue q)
{
	q -> size = 0;
}

void DestroyQueue(PriorityQueue q)
{
	if(q)
	{
		free(q -> Elements);
		free(q);
	}
}

int IsFull(PriorityQueue q)
{
	return q -> size == q -> capacity;
}

int IsEmpty(PriorityQueue q)
{
	return q -> size == 0;
}

void Insert(ElemType value,PriorityQueue q)
{
	if(q)
	{
		if(IsFull(q))
		{
			Error("The PriorityQueue is full!");
			return;
		}

		int i = ++ q -> size;
	
		while(q -> Elements[i / 2] > value)
		{
			q -> Elements[i] = q -> Elements[i / 2];
			i /= 2;
		}

		q -> Elements[i] = value;

	}
}

ElemType DeleteMin(PriorityQueue q)
{
	if(!IsEmpty(q))
	{
		ElemType t = q -> Elements[1];
		ElemType last = q -> Elements[q -> size--];

		int i = 2;
		while(i <= q -> size && q -> Elements[i] <= last)
		{
			q -> Elements[i / 2] = q -> Elements[i];
			i *= 2;
		}

		q -> Elements[i / 2] = last;

		return t;
	}

	Error("The PriorityQueue is empty!");
	return q -> Elements[0];
}

ElemType FindMin(PriorityQueue q)
{
	if(!IsEmpty(q))
	{
		return q -> Elements[1];
	}

	return q -> Elements[0];
}

void PrintQueue(PriorityQueue q)
{
	if(!IsEmpty(q))
	{
		std::cout << std::endl;
		int level = 2;
		int i = 1;
		while(i <= q -> size)
		{
			if(i == level)
			{
				std::cout << std::endl;
				level *= 2;
			}

			std::cout << q -> Elements[i] << " ";
			++i;
		}

		std::cout << std::endl;
	}
	
	else
	{
		Error("The PrintQueue is empty!");
	}

}

void IncreaseKey(Position p,ElemType offset,PriorityQueue q)
{
	if(q)
	{
		ElemType t = q -> Elements[p] + offset;

		int i = 2 * q;
		while(i <= q -> size)
		{
			while(t > Min(q -> Elements[i],q -> Elements[i + 1]))
			{
				q -> Elements[i] = t;

			}
		}
	}
}
void DecreaseKey(Position p,ElemType offset,PriorityQueue q)
{
	if(q)
	{
		ElemType t = q -> Elements[p] - offset;
		
		int i = p / 2;
		while(q -> Elements[i] > t)
		{
			q -> Elements[i] = t;
			q -> Elements[p] = q -> Elements[i];
			i /= 2;
			p /= 2;
		}
		
	}
}
