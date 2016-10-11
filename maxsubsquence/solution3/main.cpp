#include <iostream>
#include "maxsubsquence.h"
#include "print_array.h"

int main()
{
	int arr[] = {-2,11,-4,13,-5,-2};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "The array is : ";
	print_array(arr,size);

	std::cout << "In this array,the maxsubsquence is " << maxsubsquence(arr,size) << std::endl;
	
	return 0;
}
