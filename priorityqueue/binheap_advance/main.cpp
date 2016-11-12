#include <iostream>
#include "binheap.h"

int main(int argc,char **argv)
{
	PriorityQueue q = InitializeQueue(13);
	
	for(int i = 10; i > 0; i--)
		Insert(i,q);

	PrintQueue(q);
	
	DeleteMin(q);
	std::cout << "After DeleteMin,the PrintQueue is: " << std::endl;
	PrintQueue(q);
	
	DeleteMin(q);
	std::cout << "After DeleteMin,the PrintQueue is: " << std::endl;
	PrintQueue(q);

	std::cout << "The mininum is : " << FindMin(q) << std::endl;
	
	Insert(23,q);
	PrintQueue(q);
	IncreaseKey(1,30,q);
	PrintQueue(q);
	
	DecreaseKey(4,7,q);
	PrintQueue(q);
	DestroyQueue(q);
	return 0;
}
