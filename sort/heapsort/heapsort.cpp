#include "heapsort.h"

void Swap(ElemType *l,ElemType *r)
{
	ElemType *t = l;
	*l = *r;
	*r = *t;
}


void MaxHeapFixdown(ElemType *arr,int i,int len)//在第i个节点进行调整
{
	ElemType temp = arr[i];//当前值
	int j = 2 * i + 1;	//左儿子

	while(j < len)
	{
		if((j + 1 != len) && arr[j] < arr[j + 1])//最大儿子
			++j;
		
		if(arr[j] <= temp)//满足最大堆的堆序性
			break;
	
		arr[i] = arr[j];
		i = j;
		j = 2 * i + 1;

	}

	arr[i] = temp;
}


void HeapSort(ElemType *arr,int len)
{
	for(int i = len / 2; i >= 0; --i)
		MaxHeapFixdown(arr,i,len);

	for(int i = len - 1; i > 0; --i)
	{
		Swap(&arr[0],&arr[i]);
		MaxHeapFixdown(arr,0,i);
	}
}
