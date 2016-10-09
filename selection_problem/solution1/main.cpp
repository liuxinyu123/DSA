#include <iostream>
#include "bubble_sort.h"
#include "print_array.h"

int main()
{
	int a[] = {32,53,1,-31,-11,33,12};
	std::cout << "Before sort,the array is : " ;
	int s = sizeof(a)/sizeof(a[0]);
	print_array(a,s);

	bubble_sort(a,s);
	std::cout << "After sort,the array is : " ;
	print_array(a,s);
	
	int k = s / 2;
	std::cout << "In the array,the " << k << "th maximum number is : " << a[k - 1] << std::endl;

	return 0;	
}
