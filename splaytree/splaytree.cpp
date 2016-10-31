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
