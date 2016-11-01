#include <iostream>
#include <cstdlib>
#include "splaytree.h"

struct SplayTreeNode
{
	ElemType element;
	struct SplayTreeNode *left;
	struct SplayTreeNode *right;
};

void MakeEmpty(SplayTree t)
{
	if(t)
	{
		MakeEmpty(t -> left);
		MakeEmpty(t -> right);
		free(t);
	}
}

Position FindMin(SplayTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}

	while( t -> left)
		t = t -> left;

	return t;
}

Position FindMax(SplayTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}
	
	while(t -> right)
		t = t -> right;
	
	return t;
}

Position Find(ElemType value,SplayTree t)
{
	if(!t || t -> element == value)
		return t;
	else if(value < t -> element)
		return Find(value,t -> left);
	else
		return Find(value,t -> right);
}

void InOrder(SplayTree t)
{
	if(t)
	{
		InOrder(t -> left);
		std::cout << t -> element << " ";
		InOrder(t -> right);
	}
}

ElemType Retrieve(Position p)
{
	if(p)
		return p -> element;
	else
		return (ElemType)0;
}

SplayTree Insert(ElemType value,SplayTree t)
{
	t = InsertValue(value,t);
	
}

SplayTree InsertValue(ElemType value,SplayTree t)
{
	Position p = (Position)malloc(sizeof(struct SplayTreeNode));

	if(!p)
	{
		std::cout << "Memory for alloc for SplayTreeNode is failed!" << std::endl;
		return nullptr;
	}
	p -> element = value;
	p -> left = p -> right = nullptr;

	if(!t)
		return p;
	else if(value < t -> element)
		t -> left = InsertValue(value,t -> left);
	else if(t -> element < value)
		t -> right = InsertValue(value,t -> right);
	
	return t;//相等不做处理
}

Position Splay(ElemType value,SplayTree t)
{
	if(!t || t -> element == value)//空树或者等于根的情况
		return t;

	Position p = Find(value,t);//查找位置
	
	if(!p)//没找到
		return t;

	while()
}

Position ZigZigLeft(Position t,Position p,Position g)
{
	g -> left = p -> right;
	p -> left = t -> right;
	t -> right = p;
	p -> right = g;

	return t;
}

Position ZigZigRight(Position t,Position p,Position g)
{
	g -> right = p -> left;
	p -> right = t -> left;
	t -> left = p;
	p -> left = g;

	return t;
}

Position ZigZagLeft(Position t,Position p,Position g)
{
	g -> left = t -> right;
	p ->right = t -> left;
	t -> left = p;
	t -> right = g;

	return t;
}

Position ZigZagRight(Position t,Position p,Position g)
{
	g -> right = t -> left;
	p -> left = t -> right;
	t -> left = g;
	t -> right = p;

	return t;
}
