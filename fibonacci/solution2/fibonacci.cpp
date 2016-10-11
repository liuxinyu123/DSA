#include "fibonacci.h"
#include <new>

unsigned long  fibonacci(int n)
{
	if( n < 0)
		return 0;
	if(n < 2)
		return 1;

	int *arr = new int[n + 1];
   	arr[0] = arr[1] = 1;
	
	for(int i = 2; i <= n; ++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}	

	int t = arr[n];
	delete [] arr;
	return t;
}


