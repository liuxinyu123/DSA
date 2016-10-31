#ifndef _AVLTREE_H_
#define _AVLTREE_H_

struct AvlTreeNode;
typedef AvlTreeNode *Position;
typedef Position AvlTree;

typedef int ElemType;

void MakeEmpty(AvlTree t);
Position Find(ElemType value,AvlTree t);
Position FindMin(AvlTree t);
Position FindMax(AvlTree t);
AvlTree Insert(ElemType value,AvlTree t);
AvlTree Delete(ElemType value,AvlTree t);
ElemType Retrieve(Position p);
static int Height(Position p);
Position SingleRotationWithLeft(Position p);
Position SingleRotationWithRight(Position p);
Position DoubleRotationWithLeft(Position p);
Position DoubleRotationWithRight(Position p);
static int Max(int a,int b);
void MidOrder(AvlTree t);
AvlTree Rebalance(Position p);

#endif
