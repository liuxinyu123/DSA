#include <iostream>
#include <cstdlib>
#include <string>
#include "binqueue.h"

const int MaxCapacity = 20;

void Error(std::string str)
{
	std::cout << str << std::endl;
}

BinTree CombineTree(BinTree t1,BinTree t2)
{
	if(t1 -> Element > t2 -> Element)
		return CombineTree(t2,t1);

	t2 -> NextSibling = t1 -> LeftChild;
	t1 -> LeftChild = t2;
	return t1;
}

BinQueue Merge(BinQueue q1,BinQueue q2)
{
	if(q1 -> Size + q2 -> Size > MaxTrees)
	{
		Error("Exceed capacity!");
		return nullptr;
	}	

	q1 -> Size += q2 -> Size;

	BinTree t1 = nullptr;
	BinTree t2 = nullptr;
	BinTree carry = nullptr;

	for(int i = 0,int j = 1;j < q1 -> Size; ++i,j *= 2)
	{
		t1 = q1 -> TheTrees[i];
		t2 = q2 -> TheTrees[i];
		
		switch(!!t1 + 2 * !!t2 + 4 * !!carry)
		{
			case 0://没有树
			case 1://只有t1
				break;
			case 2://只有t2
				q1 -> TheTrees[i] = t2;
				q2 -> TheTrees[i] = nullptr;
				break;
			case 4://只有carry
				q1 -> TheTrees[i] = carry;
				carry = nullptr;
				break;
			case 3://t1 t2
				carry = CombineTree(t1,t2);
				q1 -> TheTrees[i] = nullptr;
				q2 -> TheTrees[i] = nullptr;
				break;
			case 5:
				carry = CombineTree(t1,carry);
				q1 -> TheTrees[i] = nullptr;
				break;
			case 6:
				carry = CombineTree(t2,carry);
				q2 -> TheTrees[i] = nullptr;
				break;
			case 7:
				q1 -> TheTrees[i] = carry;
				carry = CombineTree(t1,t2);
				q2 -> TheTrees[i] = nullptr;
		}

		return q1;
	}

}

BinQueue InitializeBinQueue(int sz)
{
	if(sz < 0)
	{
		Error("The size could not be negative!");
		return nullptr;
	}

	if(sz > MaxCapacity)
	{
		Error("Exceed the maximum capacity!");
		return nullptr;
	}

	BinQueue q = (BinQueue)malloc(sizeof(struct Collection));
	if(!q)
	{
		Error("Memory alloc for BinQueue is failed!");
		return nullptr;
	}

	q -> forest = (BinTree*)malloc(sizeof(struct TreeNode) * sz);
	if(!q -> TheTrees)
	{
		Error("Memory alloc for TheTrees is failed!");
		return nullptr;
	}

	for(int i = 0; i < sz; ++i)
	{
		q -> TheTrees[i] -> LeftChild = nullptr;
		q -> TheTrees[i] -> NextSibling = nullptr;
	}

	q -> size = sz;
	q -> current = 0;

}

BinQueue Insert1(ElemType value,BinQueue q)
{
	BinQueue t
}
