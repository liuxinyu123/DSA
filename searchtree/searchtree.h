#ifndef _SEARCHTREE_H_
#define _SEARCHTREE_H_

typedef int ElemType;
struct TreeNode;
typedef struct TreeNode *Position;
typedef Position SearchTree;

SearchTree MakeEmpty(SearchTree t);
Position Find(ElemType value,SearchTree t);
Position FindMin(SearchTree t);
Position FindMax(SearchTree t);
SearchTree Insert(ElemType value,SearchTree t);
SearchTree Delete(ElemType value,SearchTree t);
ElemType Retrieve(Position p);
SearchTree InsertValue(ElemType value,SearchTree t);
void MidOrder(SearchTree t);

#endif
