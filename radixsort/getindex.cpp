#include "getindex.h"

void GetIndex(int num,int order)
{
	int div = 10;
	while(--order)
		div *= 10;
	return num % div;
}
