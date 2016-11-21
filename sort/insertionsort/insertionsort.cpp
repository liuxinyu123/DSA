#include <iostream>
#include "insertionsort.h"

void InsertionSort(ElemType *arr,int len)
{
	for(int i = 1; i < len; ++i)
	{
		ElemType t = arr[i];

		int j = 0;
		for(j = i - 1; j >= 0 && arr[j] > t; --j)
		{
			arr[j + 1] = arr[j];	
		}

		arr[j + 1] = t;

	}
}

void PrintArray(ElemType *arr,int len)
{
	for(int i = 0; i < len; ++i)
		std::cout << arr[i] << " " ;
	std::cout << std::endl;	
}
