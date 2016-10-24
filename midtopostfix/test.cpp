#include "stack.h"

int main()
{
	Stack s  = CreateStack();
	Push('s',s);
	Push('a',s);
	std::cout << Top(s) << " ";
	Pop(s);
	std::cout << Top(s) << " ";
	Pop(s);
	std::cout<< " The stack is empty : " << IsEmpty(s) << std::endl;

	return 0;
}
