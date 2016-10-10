#include <iostream>
#include "print_out.h"
#include "print_digit.h"

void print_out(int a)
{
	if(a < 0)
	{
		std::cout << "-" << " ";
	}
	
	int t = (a > 0) ? a : -a;
	if(t >= 10)
		print_out(t / 10);
	print_digit(t % 10);
}

