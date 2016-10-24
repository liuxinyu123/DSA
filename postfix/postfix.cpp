#include "postfix.h"
#include "stack.h"

void StackAdd(Stack s);
void StackSub(Stack s);
void StackMulti(Stack s);
void StackDiv(Stack s);

void StackAdd(Stack s)
{
	double t1 = Top(s);
	Pop(s);
	double t2 = Top(s);
	Pop(s);
	Push(t1 + t2,s);
}

void StackSub(Stack s)
{
	double t1 = Top(s);
	Pop(s);
	double t2 = Top(s);
	Pop(s);
	Push(t2 - t1,s);
}

void StackMulti(Stack s)
{
	double t1 = Top(s);
	Pop(s);
	double t2 = Top(s);
	Pop(s);
	Push(t2 * t1,s);
}

void StackDiv(Stack s)
{
	double t1 = Top(s);
	Pop(s);
	double t2 = Top(s);
	Pop(s);
	Push(t2 / t1,s);
}

double Postfix(char str[],int len)
{
	Stack s = CreateStack();

	for(int i = 0; i < len; ++i)
	{
		char c = str[i];

		switch(c)
		{
			case '+':
					StackAdd(s);
					break;
			case '-':
					StackSub(s);
					break;
			case '*':
					StackMulti(s);
					break;
			case '/':
					StackDiv(s);
					break;
			default:
					int t = int(str[i]) - 48;
					Push(t,s);
					break;
		}
	}

	double t = Top(s);
	Pop(s);
	if(IsEmpty(s))
		return t;
	else
	{
		std::cout << "It is not a reverse Polish" << std::endl;
		return -1;
	}	
}
