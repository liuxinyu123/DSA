#ifndef _HEAPSORT_H_
#define _HEAPSORT_H_

typedef int ElemType;

struct BinHeapStruct
{
	int capacity;
	int size;
	ElemType *element;	
};

typedef BinHeapStruct *BinHeap;
typedef int Position;

BinHeap BuildMaxHeap(ElemType *arr,int len,int cap);
BinHeap BuildMinHeap(ElemType *arr,int len,int cap);
void Insert(ElemType value,BinHeap h);
ElemType DeleteMin(BinHeap h);
void DeleteMax(BinHeap h);
void PercolateDown(Position p,BinHeap h);
int Isfull(BinHeap h);
int IsEmpty(BinHeap h);
void Swap(ElemType *l,ElemType *r);
ElemType Min(ElemType l,ElemType r);
void PrintHeap(BinHeap h);

#endif
