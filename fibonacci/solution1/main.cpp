#include <iostream>
#include "fibonacci.h"

int main()
{
	for(int i = 0; i < 30; ++i)
		std::cout << fibonacci(i) << " " ;
	std::cout << std::endl;

	return 0;
}


