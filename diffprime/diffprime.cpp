#include "diffprime.h"
#include "gcd.h"

double DiffPrime(unsigned int N)
{	
	if (N < 2)
		return 0;
	int cnt = 0;// 计数
	int sum = 0;//总数
	for(int i = 1; i <= N; ++i)
	{
		for(int j = i + 1; j <= N; ++j)
		{
			++sum;

			if(Gcd(i,j) == 1 )
				++cnt;
		}
	}

	return static_cast<double>(cnt) / sum;
}
