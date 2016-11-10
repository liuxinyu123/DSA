#ifndef _BINHEAP_H_
#define _BINHEAP_H_

struct HeapStruct;
typedef HeapStruct *PriorityQueue;
typedef int ElemType;

PriorityQueue InitializeQueue(int cap);
void DestroyQueue(PriorityQueue q);
void MakeEmpty(PriorityQueue q);
void Insert(ElemType value,PriorityQueue q);
ElemType DeleteMin(PriorityQueue q);
ElemType FindMin(PriorityQueue q);
int IsEmpty(PriorityQueue q);
int IsFull(PriorityQueue q);
void PrintQueue(PriorityQueue q);
#endif
