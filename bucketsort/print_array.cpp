#include <iostream>
#include "print_array.h"

void print_array(int a[],int size)
{
	for(int i = 0; i < size; ++i)
	{
	if(a[i] > 0)
		std::cout << a[i] << " " ;
	}

	std::cout << std::endl;
}

