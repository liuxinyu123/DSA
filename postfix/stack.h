#ifndef _STACK_H_
#define _STACK_H_

#include <cstdlib>
#include <iostream>

struct Node//用带有表头的链表实现的栈
{
	double _data;
	struct Node *_next;
};

typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

Stack CreateStack();
void MakeEmpty(Stack s);
int IsEmpty(Stack s);
void Pop(Stack s);
void Push(double value,Stack s);
double Top(Stack s);

Stack CreateStack()
{
	Stack s = (Stack)malloc(sizeof(struct Node));
	if(!s)
	{
		std::cout << "CreateStack error!" << std::endl;
		return nullptr;
	}

	s -> _next = nullptr;
	return s;
}

void MakeEmpty(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is already empty!" << std::endl;
		return;
	}

	while(!IsEmpty(s))
		Pop(s);
}

int IsEmpty(Stack s)
{
	return s -> _next == nullptr;
}

void Push(double value,Stack s)
{
	PtrToNode p = (PtrToNode)malloc(sizeof(struct Node));
	if(!p)
	{
		std::cout << "memory alloc errored!" << std::endl;
		return;
	}

	p -> _data = value;
	p -> _next = s -> _next;
	s -> _next = p;
}

void Pop(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty,can not pop!" << std::endl;
		return;
	}

	PtrToNode p = s -> _next;
	s -> _next = p -> _next;
	free(p);
}

double Top(Stack s)
{
	return s -> _next -> _data;
}
#endif
