#ifndef _QUEUE_H_
#define _QUEUE_H_

struct QueueRecord;
typedef  struct QueueRecord *Queue;

Queue CreateQueue(int maxsize);
void MakeEmpty(Queue q);
void DisposeQueue(Queue q);
int IsEmpty(Queue q);
int IsFull(Queue q);
void Enqueue(int value,Queue q);
void Dequeue(Queue q);
int Front(Queue q);
int FrontAndDeque(Queue q);

#endif
