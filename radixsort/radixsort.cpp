#include "radixsort.h"
#include "scandigit.h"

void RadixSort(int arr[],int len,int nDigit)
{
	for(int i = 0; i <= nDigit; ++i)
		ScanDigit(arr,len,i,9);
}
