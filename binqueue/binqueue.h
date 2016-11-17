#ifndef _BINQUEUE_H_
#define _BINQUEUE_H_

typedef int ElemType;
typedef BinNode *Position;
typedef BinNode *BinTree;
typedef Collection *BinQueue;

extern const int MaxTrees;

struct BinNode
{
	ElemType Element;
	Position LeftChild;
	Position NextSibling;
};

struct Collection 
{
	int Size;
	BinTree TheTrees[MaxTrees]
}

BinQueue Merge(BinQueue t1,BinQueue t2);
BinTree CombineTree(BinTree q1,BinTree q2);//合并同样大小二项树
BinQueue InitializeBinQueue(int cap);
BinQueue Insert1(ElemType value,BinQueue q);
BinQueue DeleteMin1(BinQueue q);


#endif
