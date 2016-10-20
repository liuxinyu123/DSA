#include <iostream>
#include "radixsort.h"
#include "print_array.h"

int main()
{
	int arr[] = {23,4325,534,2,23,5454,23,53,43,232,654,632,6435,334,233,5433};
	int len = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Before radix sort,the array is: "<< std::endl; 
	print_array(arr,len);

	RadixSort(arr,len,3);

	std::cout << "After radix sort,the array is: "<< std::endl; 
	print_array(arr,len);

	return 0;
}
