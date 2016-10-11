#include "maxsubsquence.h"

int maxsubsquence(int arr[], int size)
{
	int result = 0;
	for(int i = 0; i < size; ++i)
	{
		int sum = 0;
		int k = i;
		while(k < size)
		{
			sum += arr[k];
			if(sum > result)
				result = sum;
			++k;
		}
	}

	return result;
}

