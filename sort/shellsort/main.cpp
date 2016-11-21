#include <iostream>
#include "shellsort.h"

int main(int argc,char **argv)
{
	ElemType a[] = {23,243,12,5435,222,11,22,1,231,22,32,12,432,2,-3,-23};
	int sz = sizeof(a) / sizeof(ElemType);
	
	std::cout << "The array is: " << std::endl;
	PrintArray(a,sz);
	//ShellSort(a,sz);
	ShellSort1(a,sz);
	std::cout << "After sort,the array is: " << std::endl;
	PrintArray(a,sz);	

	return 0;
}
