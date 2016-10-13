#include <iostream>
#include "gcd.h"
#include "diffprime.h"

const double PI = 3.1415;
int main()
{
	int N = 400;
	for(int i = 2; i <= N; ++i)
	{
		std::cout << "The probability of two diffirient prime within " << i << " is " <<
			   DiffPrime(i) << "    " << DiffPrime(i) - 6 / PI / PI << std::endl;
	}	

	return 0;
}
