#ifndef _HEAPSORT_H_
#define _HEAPSORT_H_

typedef int ElemType;

void MakeMaxHeap(ElemType *arr,int len);
void MaxHeapFixdown(ElemType *arr,int i,int len);
void HeapSort(ElemType *arr,int len);

#endif
