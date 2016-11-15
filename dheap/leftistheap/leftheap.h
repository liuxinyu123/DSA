#ifndef _LEFTHEAP_H_
#define _LEFTHEAP_H_

typedef int ElemType;

struct TreeNode
{
	ElemType element;
	struct TreeNode *left;
	struct TreeNode *right;
	int npl;
};

typedef struct TreeNode *PriorityQueue;

PriorityQueue InitializeQueue();
ElemType FindMin(PriorityQueue q);
int IsEmpty(PriorityQueue q);
PriorityQueue Merge(PriorityQueue q1,PriorityQueue q2);
PriorityQueue Merge1(PriorityQueue q1,PriorityQueue q2);
#define Insert(value,q) (q = Insert1((value),q))
#define DeleteMin(q) (q = DeleteMin1(q)) 
PriorityQueue Insert1(ElemType value,PriorityQueue q);
PriorityQueue DeleteMin1(PriorityQueue q);
void SwapChildren(PriorityQueue q);
void PrintHeap(PriorityQueue q);

#endif
