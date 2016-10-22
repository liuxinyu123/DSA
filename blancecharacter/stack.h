#ifndef _STACK_H_
#define _STACK_H_

#include <cstdlib>

struct StackRecord;
typedef struct StackRecord *Stack;

const int MinStackSize = 30;

int IsEmpty(Stack s);
int IsFull(Stack s);
Stack CreateStack(int maxsize);
void DisposeStack(Stack s);
void MakeEmpty(Stack s);
void Push(int value,Stack s);
void Pop(Stack s);
int Top(Stack s);
int TopAndPop(Stack s);

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
#endif
