#include <iostream>
#include <cstdlib>
#include "avltree.h"

struct AvlTreeNode
{
	ElemType element;
	struct AvlTreeNode *left;
	struct AvlTreeNode *right;
	int height;
};

AvlTreeNode MakeEmpty()
{
	
}

static int Height(Position p)
{
	if(!p)
		return -1;
	else
		return p -> height;
}

AvlTree Insert(ElemType value,AvlTree t)
{
	if(!t)
	{
		t = (AvlTree)malloc(sizeof(struct AvlTreeNode));

		if(!t)
		{
			std::cout << "Memory for alloc for avltree is failed!" << std::endl;
			return nullptr;
		}

		t -> element = value;
		t -> left = t -> right = nullptr;
		t -> height = 0;
	}

	else if(value < t -> element)
	{
		t -> left = Insert(value,t -> left);
		
		if(Height(t -> left) - Height(t -> right) == 2)
			if(value < t -> left -> element)
				SingleRotationWithLeft(t);
  			else
				DoubleRotationWithLeft(t);
	}

	else if(t -> element < value)
	{
		t -> right = Insert(value,t -> right);

		if(Height(t -> right) - Height(t -> left))
			SingleRotationWithRight(t);
		else
			DoubleRotationWithRight(t);
	}

	t -> height = Max(Height(t -> left),Height(t -> right)) + 1;
	
	return t;
}
