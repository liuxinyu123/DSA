#include <iostream>
#include "maxsubsquence.h"
#include "print_array.h"

int main()
{
	int a[] = {-2,11,-4,13,-5,-2};
	int size = sizeof(a) / sizeof(a[0]);

	std::cout << "The array is : " ;
	print_array(a,size);

	std::cout << "The maximum subsquence is " << maxsubsquence(a,size) << std::endl;

	return 0;

}
