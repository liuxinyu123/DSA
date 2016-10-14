#ifndef _LIST_H_
#define _LIST_H_

struct Node
{
	int data;
	Node *next;
}

typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List makeEmpty(List L);
int isEmpty(List L);
Position find()
#endif
