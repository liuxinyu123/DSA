#include <iostream>
#include "binheap.h"

int main(int argc,char **argv)
{
	PriorityQueue q = InitializeQueue(13);
	
	for(int i = 10; i > 0; i--)
		Insert(i,q);
	PrintQueue(q);
	DeleteMin(q);
	PrintQueue(q);
	DeleteMin(q);
	PrintQueue(q);

	std::cout << "The mininum is : " << FindMin(q) << std::endl;

	DestroyQueue(q);
	return 0;
}
