#ifndef _TREE_H_
#define _TREE_H_

typedef char ElemType;

typedef struct TreeNode *PtrToNode;
typedef PtrToNode Node;
typedef PtrToNode Tree;

struct TreeNode
{
	ElemType Element;
	Node FirstChild;
	Node NextSibling;
};

void PreOrder(Tree t);
void PostOrder(Tree t);
void MidOrder(Tree t);
void AddNode(Node child,Node parent);

#endif
