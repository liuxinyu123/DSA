#include <iostream>
#include <cstdlib>
#include "searchtree.h"

struct TreeNode
{
	ElemType element;
	SearchTree left;
	SearchTree right;
};

SearchTree MakeEmpty(SearchTree t)
{
	if(t)
	{
		MakeEmpty(t -> left);
		MakeEmpty(t -> right);
		free(t);
	}
	return nullptr;
}

Position Find(ElemType value,SearchTree t)
{
	if(!t)
		return nullptr;
	else if(value < t -> element)
		return Find(value,t -> left);
	else if(t -> element < value)
		return Find(value,t -> right);
	else 
		return t;
}

Position FindMin(SearchTree t)
{
	if(!t)
		return nullptr;
	else if(t -> left)
		return FindMin(t -> left);
	else
		return t;
}

Position FindMax(SearchTree t)
{
	if(!t)
		return nullptr;
	SearchTree p = t;
	while(p -> right)
	{
		p = p -> right;
	}

	return p;
}

SearchTree Insert(ElemType value,SearchTree t)
{
	if(!t)//空树
	{
		t = (SearchTree)malloc(sizeof(struct TreeNode));

		if(!t)
		{
			std::cout << "Memory alloc is failed!" << std::endl;
			return nullptr;		
		}

		else
		{
			t -> element = value;
			t -> left = t -> right = nullptr;
		}
	}

	else if(value < t -> element)
		t -> left = Insert(value,t -> left);
	else if(t -> element < value)
		t -> right = Insert(value,t -> right);

	return t;//== 不做变化
}

SearchTree Delete(ElemType value,SearchTree t)
{
	if(!t)
	{
		std::cout << "The tree is empty!" << std::endl;
		return nullptr;
	}

	else if(value < t -> element)
		t -> left = Delete(value,t -> left);
	else if(t -> element < value)
		t -> right = Delete(value,t -> right);
	else if(t -> left && t -> right)//== 两个孩子
	{
		Position p = FindMin(t -> right);//在右子树中找最小节点
		t -> element = p -> element;//使当前节点等于最小节点
		t -> right = Delete(t -> element,t -> right);//删除最小节点
		free(p);
	}

	else//一个或0个孩子
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


SearchTree InsertValue(ElemType value,SearchTree t)
{
	Position p = (Position)malloc(sizeof(struct TreeNode));
	p -> element = value;
	p -> left = nullptr;
	p -> right = nullptr;

	if(!t)//空树
		return p;

	else if(value < t -> element)//左子树
	{
		if(!t -> left)//处于最左时
			t -> left = p;
		else 
			InsertValue(value,t -> left);
	}

	else if(t -> element < value)//右子树
	{
		if(!t -> right)//最右时
			t -> right = p;
		else
			InsertValue(value,t -> right);
	}

	return t;//相等或返回
}

void MidOrder(SearchTree t)
{
	if(t)
	{
		MidOrder(t -> left);
		std::cout << t -> element << " ";
		MidOrder(t -> right);
	}
}

ElemType Retrieve(Position p)
{
	if(!p)
	{
		std::cout << "The Position is not available!" << std::endl;
		return -1;
	}

	return p -> element;
}
