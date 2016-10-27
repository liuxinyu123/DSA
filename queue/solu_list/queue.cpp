#include <iostream>
#include <cstdlib>
#include "queue.h"

struct QueueRecord
{
	int data;
	struct QueueRecord *next;
};

Queue CreateQueue()
{
	Queue header = (Queue)malloc(sizeof(struct QueueRecord));
	
	MakeEmpty(header);

	return header;
}

void MakeEmpty(Queue q)
{
	q -> next = nullptr;
}

int IsEmpty(Queue q)
{
	return q -> next == nullptr;
}

void DisposeQueue(Queue q)
{
	QueueRecord *p = q -> next;
	QueueRecord *t = nullptr;
	while(p)
	{
		t = p;
		free(t);
		p = p -> next;
	}

	free(q);
}

void Enqueue(int value,Queue q)
{
	QueueRecord *p = (QueueRecord*)malloc(sizeof(struct QueueRecord));
	p -> data = value;
	p -> next = nullptr;	
	
	if(IsEmpty(q))
		q -> next = p;
	else	
		Rear(q) -> next = p;
}

void Dequeue(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << " The queue is empty!" << std::endl;
		return;
	}

	QueueRecord *p = q -> next;
	q -> next = p -> next;
	free(p);
}

int Front(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << " The queue is empty!" << std::endl;
		return -1;
	}

	return q -> next -> data;
}

int FrontAndDequeue(Queue q)
{
	if(IsEmpty(q))
	{
		std::cout << " The queue is empty!" << std::endl;
		return -1;
	}

	int t = q -> next -> data;
	Dequeue(q);
	return t;
}

QueueRecord* Rear(Queue q)
{
	if(IsEmpty(q))
		return nullptr;
	QueueRecord *p = q -> next;
	while(p)
	{
		if(!p -> next)
			break;
		p = p -> next;
	}

	return p;
}
