#ifndef _SKEWHEAP_H_
#define _SKEWHEAP_H_

#define DeleteMin(h) (h = DeleteMin1(h))
#define Insert(value,h) (h = Insert1(value,h))

typedef int ElemType;
struct TreeNode
{
	ElemType element;
	struct TreeNode *left;
	struct TreeNode *right;
};

typedef TreeNode *SkewHeap;

SkewHeap InitializeHeap();
ElemType FindMin(SkewHeap h);
SkewHeap DeleteMin1(SkewHeap h);
SkewHeap Insert1(ElemType value,SkewHeap h);
SkewHeap Merge(SkewHeap h1,SkewHeap h2);
SkewHeap Merge1(SkewHeap h1,SkewHeap h2);
void PrintHeap(SkewHeap h);
#endif
