#include "bucketsort.h"

extern const int MaxNum;

void BucketSort(int arr[],int size,int sorted[MaxNum])
{
	//sorted = {0};
	
	for(int i = 0; i < size; ++i)
	{
		sorted[arr[i]] = arr[i];
	}	

}

