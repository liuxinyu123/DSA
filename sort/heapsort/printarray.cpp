#include <iostream>
#include "printarray.h"

void PrintArray(int *arr,int len)
{
	for(int i = 0; i < len; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}
