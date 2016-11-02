#ifndef _BTREE_H_
#define _BTREE_H_

const int MinDegree = 2;
typedef int bool;
typedef int ElemType;

struct BTreeNode;
typedef BTreeNode *Node;
typedef Node BTree;

struct SearchResult;
typedef SearchResult result;

struct BTreeNode
{
	int keyNum;
	ElemType key[2 * MinDegree - 1] ;
	struct BTreeNode *ptr[2 * MinDegree];
	bool isLeaf;
};

struct SearchResult
{
	struct BTreeNode *ptr;
	int pos;
};

result Search(ElemType value,BTree t);

#endif
