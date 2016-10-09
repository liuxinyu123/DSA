#include "insert_array.h"

extern void swap(int &a, int &b);
//{
//	int t = b;
//	b = a;
//	a = t;
//}

void insert_array(int a[],int size,int value)
{
	if(a[size - 1] >= value)
		return;
	a[size - 1] = value;
	for(int i = size - 1; i > 0; --i)
	{
		if(a[i - 1] >= a[i])
			break;
		swap(a[i - 1],a[i]);
			
	}
}
