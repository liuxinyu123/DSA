#include <cstdlib>
#include <iostream>
#include "stack.h"

struct Node 
{
	int data;
	PtrToNode next;
};

Stack CreateStack()
{
	Stack s = (Stack)malloc(sizeof(struct Node));
	if(!s)
	{
		std::cout << "Can not malloc!" << std::endl;
		return 0;
	}
	s -> next = 0;

	return s;
}

int IsEmpty(Stack s)
{
	return s -> next == 0;
}

void DisposeStack(Stack s)
{
	if(IsEmpty(s))
		return;
	PtrToNode p = s;
	PtrToNode t = 0;
	while(p)
	{
		t = p;
		free(t);
		p = p -> next;
	}
}

void MakeEmpty(Stack s)
{
	while(!IsEmpty(s))
		Pop(s);
}

void Push(int value,Stack s)
{
	PtrToNode p = (PtrToNode)malloc(sizeof(struct Node));
	if(!p)
	{
		std::cout << "Can not push data into Stack!" << std::endl;
		return;
	}
	p -> data = value;
	p -> next = s -> next;
	s -> next = p;
}

void Pop(Stack s)
{
	if(IsEmpty(s))
		return;
	PtrToNode p = s -> next;
	s -> next = p -> next;
	free(p);
}

int Top(Stack s)
{
	if(!IsEmpty(s))
		return s -> next -> data;
	else
	{
		std::cout << "The Stack is empty!" << std::endl;
		return -1;
	}
}

