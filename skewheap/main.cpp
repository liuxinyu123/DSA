#include <iostream>
#include "skewheap.h"

int main(int argc,char **argv)
{
	SkewHeap h1 = InitializeHeap();
	SkewHeap h2 = InitializeHeap();
	
	int arr1[] = {42,34,12,22,445,21};
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	for(int i = 0; i < len1; ++i)
		Insert(arr1[i],h1);

	std::cout << "The SkewHeap h1 is: " << std::endl; 
	PrintHeap(h1);
	std::cout << std::endl;

	int arr2[] = {23,5343,13,11,534,333,2};
	int len2 = sizeof(arr2) / sizeof(arr2[0]); 
	for(int i = 0; i < len2; ++i)
		Insert(arr2[i],h2);

	std::cout << "The SkewHeap h2 is: " << std::endl; 
	PrintHeap(h2);
	std::cout << std::endl;

	std::cout << "After merge h1 and h2,the SkewHeap is : " << std::endl;
	SkewHeap q3 = Merge(h1,h2);
	PrintHeap(q3);
	std::cout << std::endl;
	
	DeleteMin(q3);
	std::cout << "After DeleteMin,the SkewHeap is: " << std::endl;
	PrintHeap(q3);
	std::cout << std::endl;

	std::cout << "The mininum element in SkewHeap is : " << FindMin(q3) << std::endl;

	return 0;
}
