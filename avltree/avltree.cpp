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

static int Max(int a,int b)
{
	return (a > b)? a : b;
}

void MakeEmpty(AvlTree t)
{
	if(t)
	{
		MakeEmpty(t -> left);
		MakeEmpty(t -> right);
		free(t);
	}
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
		t -> height = 0;//单节点高度为0
	}

	else if(value < t -> element)
	{
		t -> left = Insert(value,t -> left);
		
		if(Height(t -> left) - Height(t -> right) == 2)
		{
		
			if(value < t -> left -> element)//左左旋转
				t = SingleRotationWithLeft(t);
  			else
				t = DoubleRotationWithLeft(t);//左右旋转
		}	
	}

	else if(t -> element < value)
	{
		t -> right = Insert(value,t -> right);

		if(Height(t -> right) - Height(t -> left) == 2)
		{
			if(t -> right -> element < value)//右右旋转
				t = SingleRotationWithRight(t);
			else
				t = DoubleRotationWithRight(t);//右左旋转
		
		}
	}

	t -> height = Max(Height(t -> left),Height(t -> right)) + 1;
	
	return t;
}

Position SingleRotationWithLeft(Position p)
{
	Position tp = p -> left;
	p -> left = tp -> right;	
	tp -> right = p;

	p -> height = Max(Height(p -> left),Height(p -> right)) + 1;
	tp -> height = Max(Height(tp -> left),Height(tp -> right)) + 1;

	return tp;
}

Position SingleRotationWithRight(Position p)
{
	Position tp = p -> right;
	p -> right = tp -> left;
	tp -> left = p;

	p -> height = Max(Height(p -> left),Height(p -> right)) + 1;
	tp -> height = Max(Height(tp -> left),Height(tp -> right)) + 1;

	return tp;
}

Position DoubleRotationWithLeft(Position p)
{
	p -> left = SingleRotationWithRight(p -> left);

	return SingleRotationWithLeft(p);
}

Position DoubleRotationWithRight(Position p)
{
	p -> right = SingleRotationWithLeft(p -> right);

	return SingleRotationWithRight(p);
}

void MidOrder(AvlTree t)
{
	if(t)
	{
		MidOrder(t -> left);
		std::cout << t -> element << " ";
		MidOrder(t -> right);
	}
}

Position Find(ElemType value,AvlTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}
	
	if(t -> element == value)
		return t;	

	else if(value < t -> element)
	{
		return Find(value,t -> left);
	}

	else
	{
		 return Find(value,t -> right);
	}
}

Position FindMin(AvlTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}
	
	while(t -> left)
	{
		t = t -> left;
	}

	return t;
}

Position FindMax(AvlTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}

	while(t -> right)
	{
		t = t -> right;
	}

	return t;
}

ElemType Retrieve(Position p)
{
	if(!p)
	{
		std::cout << "The Position is null" << std::endl;
		return (ElemType)0;
	}

	return p -> element;
}

AvlTree Delete(ElemType value,AvlTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}

	else if(value < t -> element)
	{
		t -> left = Delete(value,t -> left);
		t = Rebalance(t);
	}

	else if(t -> element < value)
	{
		t -> right = Delete(value,t -> right);
		t = Rebalance(t);
	}

	else if(t -> left && t -> right)//相等并且有两个孩子
	{
		Position p = FindMin(t -> right);
		t -> element = p -> element;
		t -> right = Delete(t -> element,t -> right);

		free(p);
		t = Rebalance(t);
	}

	else//一个孩子或0个孩纸
	{
		Position p = t;
		if(!t -> left)
			t = t -> right;
		if(!t -> right)
			t = t -> left;
		
		free(p);
	}

	return t;
}

AvlTree Rebalance(AvlTree t)
{
	if(Height(t -> left) - Height(t -> right) >= 2)
	{
		if(Height(t -> left -> left) > Height(t -> left -> right))
			t = SingleRotationWithLeft(t);
		else
			t = DoubleRotationWithLeft(t);
	}	

	else
	{
		if(Height(t -> right) > Height(t -> left))
			t = SingleRotationWithRight(t);
		else
			t = SingleRotationWithRight(t);
	}
}
