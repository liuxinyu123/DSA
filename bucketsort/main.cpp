#include <iostream>
#include "print_array.h"
#include "bucketsort.h"

extern const int MaxNum;

int main()
{
	int arr[] = {3,4,23,66,44,1,7,34,22,55,32};
	int s = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "The array is : " << std::endl;
	print_array(arr,s);

	int sorted[MaxNum] = {0};
    BucketSort(arr,s,sorted);
	std::cout << "After BucketSort,the array is:" << std::endl;
	print_array(sorted,100);

	return 0;

}
