#include <iostream>
#include "queue.h"

int main(int argc,char **argv)
{
	Queue q = CreateQueue();

	std::cout << "The queue is empty? : " << IsEmpty(q) << std::endl;
	for(int i = 0; i < 10; i++)
		Enqueue(i,q);
	
	std::cout << "The front is: " << Front(q) << std::endl;
   	Dequeue(q);	
	std::cout << "The front is: " << Front(q) << std::endl;

	for(int i = 0; i < 9; i++)
		std::cout << "The front is : " << FrontAndDequeue(q) << std::endl;
	
	std::cout << "The queue is empty? : " << IsEmpty(q) << std::endl;
	
	return 0;

}
