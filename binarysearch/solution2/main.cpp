#include <iostream>
#include "binarysearch.h"
#include "print_array.h"
#include "bubble_sort.h"

const int N = 10;

int main()
{
 	int arr[] = {4,-34,-3,53,2,5,64,0,43,1};
	int N = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,N);
	std::cout << "After sort,the array is: ";
	print_array(arr,N);

	int value = 0;
	while(1)
	{
		std::cout << "Please input a number: " ;
		std::cin >> value;
		
		std::cout << "The index of " << value << " in the array is : " << BinarySearch(arr,value,N);
		std::cout << std::endl;
	
	}

	return 0;
}
