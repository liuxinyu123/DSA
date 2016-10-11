#include "max3.h"

int max3(int a, int b, int c)
{
	int t = (a > b) ? a : b;
	return (t > c) ? t : c;
}

