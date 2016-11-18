#ifndef _BINQUEUE_H_
#define _BINQUEUE_H_

typedef int ElemType;
struct BinQueueNode;
struct Collection;
typedef BinQueueNode *Position;
typedef BinQueueNode *BinTree;
typedef Collection *BinQueue;

extern const int MaxTrees;

struct BinQueueNode
{
	ElemType Element;
	Position LeftChild;
	Position NextSibling;
};

struct Collection 
{
	int size;
	int current;
	BinTree *forest;
};

BinQueue Merge(BinQueue t1,BinQueue t2);
BinTree CombineTree(BinTree q1,BinTree q2);//合并同样大小二项树
BinQueue InitializeBinQueue(int sz);
BinQueue Insert1(ElemType value,BinQueue q);
BinQueue DeleteMin1(BinQueue q);


#endif
