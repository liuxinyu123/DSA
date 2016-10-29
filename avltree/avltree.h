#ifndef _AVLTREE_H_
#define _AVLTREE_H_

struct AvlTreeNode;
typedef AvlTreeNode *Position;
typedef Position AvlTree;

typedef int ElemType;

AvlTree MakeEmpty();
Position Find(ElemType value,AvlTree t);
Position FindMin(AvlTree t);
Position FindMax(AvlTree t);
AvlTree Insert(ElemType value,AvlTree t);
AvlTree Delete(ElemType value,AvlTree t);
ElemType Retrieve(Position p);
static int Height(Position p);
void SingleRotationWithLeft(AvlTree t);
void SingleRotationWithRight(AvlTree t);
void DoubleRotationWithLeft(AvlTree t);
void DoubleRotationWithRight(AvlTree t);
static int Max(int a,int b);
#endif
