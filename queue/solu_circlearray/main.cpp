#include <iostream>
#include "queue.h"

int main(int argc,char **argv)
{
	Queue q = CreateQueue(10);

	std::cout << "The queue is empty? : " << IsEmpty(q) << std::endl;

	for(int i = 0;i < 9;++i)
		Enqueue(i,q);
	std::cout << "The queue is full? : " << IsFull(q) << std::endl;
	std::cout << "The queue front is: " << Front(q) << std::endl;
	Dequeue(q);
	std::cout << "The front is : " << Front(q) << std::endl;
	Dequeue(q);
	std::cout << "The front is : " << Front(q) << std::endl;
	Enqueue(10,q);
	Enqueue(12,q);
	std::cout << "The queue is full? : " << IsFull(q) << std::endl;

	for(int i = 0; i < 9; i++)
	{
		std::cout << "The front is: " << FrontAndDequeue(q) << std::endl;
	}
	MakeEmpty(q);
	std::cout << "The queue is empty? : " << IsEmpty(q) << std::endl;
	
	DisposeQueue(q);
	return 0;
}
