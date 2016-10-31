#ifndef _SPLAYTREE_H_
#define _SPLAYTREE_H_

struct SplayTreeNode;
typedef SplayTreeNode *Position;
typedef Position SplayTree;

typedef int ElemType;

void MakeEmpty(SplayTree t);
Position FindMin(SplayTree t);
Position FindMax(SplayTree t);
Position Find(ElemType value,SplayTree t);
SplayTree Insert(ElemType value,SplayTree t);
SplayTree Delete(ElemType value,SplayTree t);
void InOrder(SplayTree t);
ElemType Retrieve(Position p);

#endif
