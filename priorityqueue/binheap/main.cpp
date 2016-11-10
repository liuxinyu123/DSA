#include <iostream>
#include "binheap.h"

int main(int argc,char **argv)
{
	PriorityQueue q = InitializeQueue(13);
	Insert(2,q);
	Insert(1,q);
	Insert(66,q);
	Insert(34,q);

	PrintQueue(q);
	return 0;
}
