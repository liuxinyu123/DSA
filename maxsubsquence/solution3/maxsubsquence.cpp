#include "maxsubsquence.h"

int maxsubsquence(int arr[],int size)
{
	int max = arr[0];
	int sum = arr[0];

	for(int i = 1; i < size; ++i)
	{
		if(sum <= 0)  //如果前面的和不为正，则抛弃，只取当前值
			sum = arr[i];
		else         	//否则，加上当前元素
			sum += arr[i];

		if(sum > max)
			max = sum;
	}

	return max;
}

