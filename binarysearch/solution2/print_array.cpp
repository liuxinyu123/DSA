#include <iostream>
#include "print_array.h"

void print_array(int a[],int size)
{
	for(int i = 0; i < size; ++i)
		std::cout << a[i] << " " ;

	std::cout << std::endl;
}

