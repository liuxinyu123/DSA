#include "bubble_sort.h"

void swap(int &a, int &b)
{
	int t = b;
	b = a;
	a = t;
}
void bubble_sort(int a[],int size)
{
	for(int i = size; i > 0; --i)
	{
		for(int j = 0; j < i - 1; ++j)
		{
			if(a[j] > a[j + 1])
				swap(a[j],a[j + 1]);			
		}
	}
}
