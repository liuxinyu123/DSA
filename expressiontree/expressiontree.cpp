#include <iostream>
#include <cstdlib>
#include "expressiontree.h"

Stack CreateStack()
{
	Stack s = (Stack)malloc(sizeof(struct StackNode));
	
	if(!s)
	{
		std::cout << "Memory alloc for stack is failed!" << std::endl;
		return nullptr;
	}

	MakeEmpty(s);

	return s;
}

void MakeEmpty(Stack s)
{
	s -> next = nullptr;
}

int IsEmpty(Stack s)
{
	return (s -> next == nullptr);
}

void Push(StackElemType elem,Stack s)
{
	Node p = (Node)malloc(sizeof(struct StackNode));

	if(!p)
	{
		std::cout << "Memory alloc for stacknode is failed!" << std::endl;
		return;
	}

	p -> data = elem;
	p -> next = s -> next;
	
	s -> next = p;
}

void Pop(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty,can not pop!" << std::endl;
		return;
	}

	s -> next = s -> next -> next;
}

StackElemType Top(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty,can not top!" << std::endl;
		return (StackElemType)0;
	}

	return s -> next -> data;
}

StackElemType TopAndPop(Stack s)
{
	if(IsEmpty(s))
	{
		std::cout << "The stack is empty,can not top and pop!" << std::endl;
		return (StackElemType)0;
	}

	StackElemType t = s -> next -> data ;
	Pop(s);

	return t;
}



Tree CreateExpressionTree(const char *str,int len)
{
	Stack s = CreateStack();

	for(int i = 0; i < len; ++i)
	{
		if(!IsOperator(str[i]))//不是运算符，则压栈
			Push(CreateTree(str[i]),s);

		else
		{
			Tree t = CreateTree(str[i]);
			t -> right = TopAndPop(s);
			t -> left = TopAndPop(s);
			Push(t,s);			
		}
			
	}

	return Top(s);
}

int IsOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

Tree CreateTree(char c)
{
	Tree t = (Tree)malloc(sizeof(struct TreeNode));
	
	if(!t)
	{
		std::cout << "Memory alloc for creating tree is failed!" << std::endl;
		return nullptr;
	}

	t -> data = c;
	t -> left = nullptr;
	t -> right = nullptr;

	return t;
}

void PreOrder(Tree t)
{
	if(t)
	{
		std::cout << t -> data << " ";
		PreOrder(t -> left);
		PreOrder(t -> right);
	}
}

void MidOrder(Tree t)
{
	if(t)
	{
		MidOrder(t -> left);
		std::cout << t -> data << " ";
		MidOrder(t -> right);
	}
}

void PostOrder(Tree t)
{
	if(t)
	{
		PostOrder(t -> left);
		PostOrder(t -> right);
		std::cout << t -> data << " ";
	}
}

