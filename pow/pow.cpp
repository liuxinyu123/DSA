#include "pow.h"
#include "iseven.h"

long int Pow(int value,unsigned int n)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return value;
	if(IsEven(n))
		return Pow(value * value,n / 2);
	else 
		return Pow(value * value,n / 2) * value;
}

