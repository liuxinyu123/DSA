#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>

const int MaxCapacity = 10;

struct StackRecord
{
	char *_Array;
	int _TopOfStack;
	int _Capacity;
};

typedef struct StackRecord *PtrToStack;
typedef PtrToStack Stack;

Stack CreateStack(int maxsize);
void MakeEmpty(Stack s);
int IsFull(Stack s);
int IsEmpty(Stack s);
void Push(char c,Stack s);
char Pop(Stack s);
char Top(Stack s);

Stack CreateStack(int maxsize)
{
	if(maxsize < MaxCapacity)
	{
		std::cout << "The given size is too small!" << std::endl;
		return nullptr;
	}
	
	Stack s = (Stack)malloc(sizeof(struct StackRecord));
	if(!s)
	{
		std::cout << "Memory alloc on stack is error!" << std::endl;
		return nullptr;
	}

	s -> _Array = (char*)malloc(sizeof(char)*maxsize);
	if(!s -> _Array)
	{
		std::cout << "Memory alloc on stack's array is error!" << std::endl;
		return nullptr;
	}
	
	s -> _Capacity = maxsize;
	MakeEmpty(s);

	return s;
}

void MakeEmpty(Stack s)
{
	s -> _TopOfStack = -1;
}

int IsFull(Stack s)
{
	return s -> _TopOfStack == s -> _Capacity - 1;
}

int IsEmpty(Stack s)
{
	return s -> _TopOfStack == -1;
}
void Push(char c,Stack s)
{
	if(IsFull(s))
	{
		std::cout << "The stack is Full, can not push!" << std::endl;
		return;
	}
	s -> _Array[s -> _TopOfStack] = c;
	s -> _TopOfStack ++;
}

char Pop(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty,can not pop!" << std::endl;
		return '\0';
	}	
	
	char c = s -> _Array[s -> _TopOfStack];
	s -> _TopOfStack --;
	return c;
}

char Top(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty!" << std::endl;
		return '\0';
	}	
	
	char c = s -> _Array[s -> _TopOfStack];
	return c;

}
#endif
