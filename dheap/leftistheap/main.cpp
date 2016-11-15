#include <iostream>
#include "leftheap.h"

int main(int argc,char **argv)
{
	PriorityQueue q1 = InitializeQueue();
	PriorityQueue q2 = InitializeQueue();
	
	int arr1[] = {42,34,12,22,445,21};
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	for(int i = 0; i < len1; ++i)
		Insert(arr1[i],q1);

	std::cout << "The PriorityQueue q1 is: " << std::endl; 
	PrintHeap(q1);
	std::cout << std::endl;

	int arr2[] = {23,5343,13,11,534,333,2};
	int len2 = sizeof(arr2) / sizeof(arr2[0]); 
	for(int i = 0; i < len2; ++i)
		Insert(arr2[i],q2);

	std::cout << "The PriorityQueue q2 is: " << std::endl; 
	PrintHeap(q2);
	std::cout << std::endl;

	std::cout << "After merge q1 and q2,the PriorityQueue is : " << std::endl;
	PriorityQueue q3 = Merge(q1,q2);
	PrintHeap(q3);
	std::cout << std::endl;
	
	DeleteMin(q3);
	std::cout << "After DeleteMin,the PriorityQueue is: " << std::endl;
	PrintHeap(q3);
	std::cout << std::endl;

	std::cout << "The mininum element in PriorityQueue is : " << FindMin(q3) << std::endl;

	return 0;
}
