#ifndef _QUEUE_H_
#define _QUEUE_H_

struct QueueRecord;
typedef  struct QueueRecord *Queue;

Queue CreateQueue();
void MakeEmpty(Queue q);
void DisposeQueue(Queue q);
int IsEmpty(Queue q);
int IsFull(Queue q);
void Enqueue(int value,Queue q);
void Dequeue(Queue q);
int Front(Queue q);
int FrontAndDequeue(Queue q);
QueueRecord* Rear(Queue q);

#endif
