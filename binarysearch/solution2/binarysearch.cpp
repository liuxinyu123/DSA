#include "binarysearch.h"

int BinarySearch(const int arr[],int value,int size)
{
	int lo = 0;
	int hi = size - 1;

	while(lo <= hi)
	{
		int mid = (hi + lo) / 2;

		if(value < arr[mid])
			hi = mid - 1;
		else if(arr[mid] < value)
			lo = mid + 1;
		else 
			return mid;
	}

	return -1;
}
