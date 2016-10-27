#include <cstdlib>
#include <iostream>
#include "queue.h"

const int MinQueueSize = 5;

struct QueueRecord
{
	int Capacity;
	int Front;
	int Rear;
	int *Array;
};

Queue CreateQueue(int maxsize)
{
	if(maxsize < MinQueueSize)
	{
		std::cout << "The maxsize you given is too small! " << std::endl;
		return nullptr;
	}

	Queue q = (Queue)malloc(sizeof(struct QueueRecord));

	if(!q)
	{
		std::cout << "Momory alloc for queue is failed!" << std::endl;
		return nullptr;
	}

	q -> Array = (int*)malloc(sizeof(int) * maxsize);
	if(!q -> Array)
	{
		std::cout << "Momory alloc for queue's array is failed!" << std::endl;
		return nullptr;
	}

	q -> Capacity = maxsize;
	MakeEmpty(q);

	return q;
}

void MakeEmpty(Queue q)
{
	q -> Front = 0;
	q -> Rear = 0;
}

int IsFull(Queue q)
{
	return ((q -> Rear + 1) % (q -> Capacity) == q -> Front);
}

int IsEmpty(Queue q)
{
	return (q -> Rear  == q -> Front);
}

void DisposeQueue(Queue q)
{
	if(!q)
	{
		free(q -> Array);
		free(q);
	}
}

void Enqueue(int value,Queue q)
{
	if(IsFull(q))
	{
		std::cout << "The queue is full!" << std::endl;
		return;
	}

	q -> Array[q -> Rear] = value;
	q -> Rear = (q -> Rear + 1) % (q -> Capacity);
}

void Dequeue(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << "The queue is empty!" << std::endl;
		return;
	}
	q -> Front = (q -> Front + 1) % (q -> Capacity);
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
