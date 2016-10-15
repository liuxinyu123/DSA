#include <stdlib.h>
#include <iostream>
#include "list.h"

struct Node
{
	int data;
	Node *next;
};

List creatList(int arr[],int s)
{
	Node *h = (Node*) malloc(sizeof(struct Node));
	Node *p = (Node*) malloc(sizeof(struct Node));
	h -> next = p;
	p -> data = arr[0];
	Node *nex;

	for(int i = 1; i < s; ++i)
	{
		nex = (Node*) malloc(sizeof(struct Node));
		p -> next = nex;
		nex -> data = arr[i];
		p = nex;	
	}

	p -> next = NULL;

	return h;
}

List initList()
{
	Node *h = (Node*) malloc(sizeof(struct Node));
	
	h -> next = NULL;

	return h;
}

int isEmpty(List L)
{
	return L -> next == NULL;
}

int isLast(Position p,List L)
{
	return p -> next == NULL;
}

Position findValue(int value,List L)
{
	Node *p = L -> next;

	while(p != NULL && p -> data != value)
	{
		p = p -> next;
	}

	return p;
}

void deleteValue(int value,List L)
{
	Node *pre,*cur;

	pre = findPrevious(value,L);

	if(!isLast(pre,L))
	{
		cur = pre -> next;
		pre -> next = cur -> next;
		free(cur);

	}
}

Position findNext(int value,List L)
{
	Node *p = L;

	while(!isLast(p,L) && p -> data != value)
		p = p -> next;

	return p;
}
Position findPrevious(int value,List L)
{
	Node *p = L;

	while(p -> next != NULL && p -> next -> data != value)
		p = p -> next;

	return p;
}

void insertAfter(int value,List L,Position p)
{
	Node *node = (Node*) malloc(sizeof(struct Node));

	if(!node)
		return;
	node -> data = value;
	node -> next = p -> next;
	p -> next = node;

}

void insertBefore(int value,List L,Position p)
{
	if(isEmpty(L))
		return;
	Node* pre = findPrevious(p -> data,L);
	insertAfter(value,L,pre);
}

void addBack(int value,List L)
{
	if(!isEmpty(L))
		insertAfter(value,L,last(L));
	else
	{
		Node *p = (Node*) malloc(sizeof(struct Node));
		L -> next = p;
		p -> next = NULL;
		p -> data = value; 	
	}
		
}

void addFront(int value,List L)
{
	insertAfter(value,L,head(L));
}
void deleteList(List L)
{
	Position p,t;
	p = L -> next;
	L -> next = NULL;

	while(p)
	{
		t = p -> next;
		free(p);
		p = t;
	}
}

void deletePosition(Position p,List L)
{
	deleteValue(p -> data,L);
}

Position head(List L)
{
	return L;
}

Position first(List L)
{
	if(isEmpty(L))
		return NULL;
	else
		return L -> next;
}

Position last(List L)
{
	Node *p = L -> next;

	while(p -> next)
		p = p -> next;

	return p;
}

void print(List L)
{
	Node *p = L -> next;

	while(p)
	{
		std::cout << p -> data << " " ;
		p = p -> next;
	}

	std::cout << std::endl;
}
