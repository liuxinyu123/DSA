#include <iostream>
#include "heapsort.h"
#include "print_array.h"

int main(int argc,char **argv)
{
	ElemType arr[] = {3,52,212,33,11,24,54,645,23,2,1,543,34,66};
	int len = sizeof(arr) / sizeof(arr[0]);
	int cap = len << 1;

	std::cout << "The array is : " << std::endl;
	print_array(arr,len);

	BinHeap h = BuildMinHeap(arr,len,cap);
	//std::cout << "The BinHeap is: " << std::endl;
	//PrintHeap(h);
	
	int k = 5;
	for(int i = 0; i < k - 1; ++i)
		DeleteMin(h);
	std::cout << "The " << k << "th mininum in the array is : " << DeleteMin(h) << std::endl;

	return 0;
}
