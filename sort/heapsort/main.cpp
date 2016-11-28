#include <iostream>
#include "heapsort.h"
#include "printarray.h"

int main(int argc,char **argv)
{
	int arr[] = {13,12,545,32,12,532,21,2,-23,323};
	int len = sizeof(arr) / sizeof(int);
	std::cout << "The array is :" << std::endl;
	PrintArray(arr,len);

	HeapSort(arr,len);
	std::cout << "After sort,the array is :" << std::endl;
	PrintArray(arr,len);
	

	return 0;
}
