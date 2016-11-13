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

#define Insert(value,q) ()
PriorityQueue Insert1(ElemType value,PriorityQueue q);
PriorityQueue DeleteMin(PriorityQueue q);


#endif
