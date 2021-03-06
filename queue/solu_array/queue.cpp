#include <iostream>
#include <cstdlib>
#include "queue.h"

const int MinQueueSize = 5;

struct QueueRecord
{
	int Capacity;
	int Front;
	int Rear;
	int Size;
	int *Array;
};

int IsEmpty(Queue q)
{
	return q -> Size == 0;
}

int IsFull(Queue q)
{
	return q -> Size == q -> Capacity;
}

Queue CreateQueue(int maxsize)
{
	if(maxsize < MinQueueSize)
		return nullptr;
	Queue q = (Queue) malloc(sizeof(struct QueueRecord));
	if(!q)
	{
		std::cout << "Memory alloc for creating queue is failed!" << std::endl;
		return nullptr;
	}

	q -> Array = (int*)malloc(sizeof(int) * maxsize);
	if(!q -> Array)
	{
		std::cout << "Memory alloc for creating queue's array is failed!" << std::endl;
		return nullptr;
	}
	
	q -> Capacity = maxsize;
	MakeEmpty(q);

	return q;
}

void MakeEmpty(Queue q)
{
	q -> Size = 0;
	q -> Front = 1;
	q -> Rear = 0;
}

void DisposeQueue(Queue q)
{
	if(!q)
	{
		free (q -> Array);
		free (q);	
	}
}

void Enqueue(int value,Queue q)
{
	if(IsFull(q))
	{
		std::cout << "The queue is full!" << std::endl;
		return;
	}

	q -> Array[++q -> Rear] = value;
	q -> Size ++;
}

void Dequeue(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << "The queue is empty!" << std::endl;
		return;
	}

	q -> Front ++;
	q -> Size --;
}

int Front(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << "The queue is empty!" << std::endl;
		return -1;
	}

	return q -> Array[q -> Front];
}

int FrontAndDequeue(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << "The queue is empty!" << std::endl;
		return -1;
	}

	int t = q -> Array[q -> Front];
	Dequeue(q);
	return t;
}
