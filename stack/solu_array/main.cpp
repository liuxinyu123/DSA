#include <iostream>
#include "stack.h"

int main(int argc,char **argv)
{
	Stack s = CreateStack(40);

	std::cout << "The stack is empty? " << "     : " << IsEmpty(s) << std::endl;
	int a = 20;
	for(int i = 0; i < a; ++i)
		Push(i,s);
	std::cout << "The stack is: " << std::endl;

	for(int i = 0;i < a; ++i)
	{
		std::cout << TopAndPop(s) << " ";
	}	

	std::cout << std::endl;
	
	Pop(s);
	Pop(s);
	Pop(s);


	DisposeStack(s);

	return 0;
}
