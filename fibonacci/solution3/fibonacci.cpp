#include "fibonacci.h"
#include <new>

unsigned long  fibonacci(int n)
{
	if( n < 0)
		return 0;
	if(n < 2)
		return 1;

	int first = 1;
	int second = 1;

	int current = 0;

	for(int i = 2; i <= n ;++i)
	{
		current = first + second;
		first = second;
		second = current;
	}

	return current;
}


