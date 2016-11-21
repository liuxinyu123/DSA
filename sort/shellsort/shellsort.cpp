#include <iostream>
#include "shellsort.h"

void ShellSort(ElemType *arr,int len)
{
	for(int step = len / 2; step > 0; step /= 2)//设定步长
	{
		for(int j = step; j < len; ++j)	//从第一组第二个数开始
		{
			ElemType t = arr[j];
			int i = 0;
			for(i = j - step; i >= 0; i -= step)
			{
				if(arr[i] > t)
					arr[i + step] = arr[i];
				else
					break;
			}

			arr[i + step] = t;
		}
	}
}

void ShellSort1(ElemType *arr,int len)
{
	for(int step = len / 2; step > 0; step /= 2)//设定步长
	{
		for(int j = step; j < len; ++j)	//从第一组第二个数开始
		{
			ElemType t = arr[j];
			int i = 0;
			for(i = j - step; i >= 0 && arr[i] > t; i -= step)
			{
				arr[i + step] = arr[i];
			}

			arr[i + step] = t;
		}
	}
}

void PrintArray(ElemType *arr,int len)
{
	for(int i = 0; i < len; ++i)
		std::cout << arr[i] << " " ;

	std::cout << std::endl;
}
