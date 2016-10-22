#include <iostream>
#include <cstdlib>
#include "stack.h"

extern const int MinStackSize;

struct StackRecord
{
	int Capacity;
	int TopOfStack;
	int *Array;
};

Stack CreateStack(int maxsize)
{
	Stack s;

	if(maxsize < MinStackSize)
	{
		std::cout << "Stack size is too small!" << std::endl;
		return nullptr;
	}
	
	s = (Stack)malloc(sizeof(struct StackRecord));
	if(s == nullptr)
	{
		std::cout << "Malloc error!" << std::endl;
		return nullptr;
	}
	s -> Capacity = maxsize;
	s -> Array = (int*) malloc(sizeof(int) * maxsize);

	if(s -> Array == nullptr)
	{
		std::cout << "Out of space!" << std::endl;
		return nullptr;
	}

	s -> TopOfStack = -1;

	return s;
}

int IsEmpty(Stack s)
{
	return s -> TopOfStack == -1;
}

int IsFull(Stack s)
{
	return s -> TopOfStack + 1 == s -> Capacity;
}

void DisposeStack(Stack s)
{
	if(!s)
	{
		free(s->Array);
		free(s);
	}
}

void MakeEmpty(Stack s)
{
	s -> TopOfStack = -1;
}

void Push(int value,Stack s)
{
	if(IsFull(s))
		return;
	s -> TopOfStack ++;
	s -> Array[s -> TopOfStack] = value;
}

void Pop(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty,Error! " << std::endl;
		return;
	}
	s -> TopOfStack --;
}

int Top(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty!" << std::endl;
		return -1;
	}
	return s -> Array[s -> TopOfStack];
}

int TopAndPop(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty!" << std::endl;
		return -1;
	}
	
	int t = Top(s);
	Pop(s);

	return t;
}
