#include "gcd.h"

unsigned int Gcd(unsigned int M ,unsigned int N)
{
	if(M < N)
		Gcd(N,M);
	unsigned int temp = 0;

	while(N > 0)
	{
		temp = M % N;
		M = N;
		N = temp;
	}

	return M;
}

unsigned int Gcd3(unsigned int a,unsigned int b,unsigned int c)
{
	return Gcd(Gcd(a,b),c);

}

