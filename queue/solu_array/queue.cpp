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
}

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
	
}
