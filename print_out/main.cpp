#include <iostream>
#include "print_out.h"
#include "print_digit.h"

int main()
{
	int a = 34523;
	int b = -2442;
	int c = 4;

	std::cout << a << ": " ;
	print_out(a);
	std::cout << std::endl;
	std::cout << b << ": " ;
	print_out(b);
	std::cout << std::endl;
	std::cout << c << ": " ;
	print_out(c);
	std::cout << std::endl;
	
	return 0;
}
