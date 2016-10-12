#include "binarysearch.h"

int BinarySearch(int arr[],int lo,int hi,int value)
{
	int mid = (lo + hi) / 2;
	
	if(lo > hi)
		return -1;
	if(value == arr[mid])
		return mid;
	else if(value < arr[mid])
		return BinarySearch(arr,lo,mid-1,value);
	else if(arr[mid] < value) 
		return BinarySearch(arr,mid+1,hi,value);
}

