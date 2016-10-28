#ifndef _TREE_H_
#define _TREE_H_

struct TreeNode;
typedef char ElemType;
typedef TreeNode *PtrToNode;
typedef PtrToNode Node;
typedef PtrToNode Tree;

struct TreeNode
{
	ElemType Element;
	struct TreeNode *Left;
	struct TreeNode *Right;	
};

void PreOrder(Tree t);
void MidOrder(Tree t);
void PostOrder(Tree t);

#endif
