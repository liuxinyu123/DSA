#include <iostream>
#include "stack.h"

int main()
{
	Stack s = CreateStack();

	for(int i = 0; i <= 10; ++i)
		Push(i,s);
	for(int i = 0; i <= 10; ++i)
	{
		int a = Top(s);
		Pop(s);
		std::cout << a << " " ;
	}

	std::cout << std::endl;

	MakeEmpty(s);
	for(int i = 0; i <= 10; ++i)
		Push(i,s);
	for(int i = 0; i <= 10; ++i)
	{
		int a = Top(s);
		Pop(s);
		std::cout << a << " " ;
	}
	std::cout << std::endl;
	DisposeStack(s);

	return 0;
}
