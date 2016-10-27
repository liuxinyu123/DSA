#ifndef _TREE_H_
#define _TREE_H_

typedef char ElemType;
typedef TreeNode *PtrToNode;
typedef PtrToNode Node;
typedef PtrToNode Tree;

struct TreeNode
{
	ElemType Element;
	Node Left;
	Node Right;	
};

void PreOrder(Tree t);
void MidOrder(Tree t);
void PostOrder(Tree t);
void AddAsLeftChild(Node child,Tree t);
void AddAsRightChild(Node child,Tree t);

#endif
