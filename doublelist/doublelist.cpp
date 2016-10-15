#include <stdlib.h>
#include <iostream>
#include "doublelist.h"

struct DoubleLinkListNode
{
	int data;
	struct DoubleLinkListNode *next;
	struct DoubleLinkListNode *prev;
};

DoubleList initDoubleList()//带有首尾哨兵
{
	Node *head = (Node*) malloc(sizeof(struct DoubleLinkListNode));
	Node *tail = (Node*) malloc(sizeof(struct DoubleLinkListNode));

	head -> prev = NULL;
	head -> next = tail;
	tail -> prev = head;
	tail -> next = NULL;

	return head;
}

DoubleList makeDoubleList(int arr[],int s)
{
	Node *head = (Node*) malloc(sizeof(struct DoubleLinkListNode));

	Node *p = (Node*) malloc(sizeof(struct DoubleLinkListNode));
	head -> next = p;
	head -> prev = NULL;
	p -> prev = head;
 	p -> data = arr[0];
	Node *nex;

	for(int i = 1; i < s; ++i)
	{
		nex = (Node*) malloc(sizeof(struct DoubleLinkListNode));
		nex -> data = arr[i];
		nex -> prev = p;
		p -> next = nex;
		p = nex;
	}
	
	Node* t = (Node*) malloc(sizeof(struct DoubleLinkListNode));
	p -> next = t;
	t -> prev = p;
	t -> next = NULL;

	return head;
}

void print(DoubleList L)
{
	if(isEmpty(L))
	{
		std::cout << std::endl;
		return;
	}

	Node *p = L -> next;
	while(p -> next -> next) //到倒数第二个元素
	{
		std::cout << p -> data << " ";
		p = p -> next;		
	}
	std::cout << p -> data;//倒数第一个元素
	std::cout << std::endl;
}

int isEmpty(DoubleList L)
{
	if(L -> next -> next)
		return 0;
	else
		return 1;
}

Position head(DoubleList L)
{
	return L;
}

int last(DoubleList L)
{
	return tail(L) -> prev -> data;
}

int first(DoubleList L)
{
	return L -> next -> data;
}

Position tail(DoubleList L)
{
	Node *p = L;

	while(p -> next)
		p = p -> next;

	return p;
	
}
void insertBefore(int value,DoubleList L,Position p)
{
	Node *cur = (Node*) malloc(sizeof(struct DoubleLinkListNode));

	cur -> data = value;
	cur -> next = p;
	cur -> prev = p -> prev;
	p -> prev -> next = cur;
	p -> prev = cur;
}

void insertAfter(int value,DoubleList L,Position p)
{
	Node *cur = (Node*) malloc(sizeof(struct DoubleLinkListNode));

	cur -> data = value;
	cur -> next = p -> next;
	cur -> prev = p;
	p -> next -> prev = cur;
	p -> next = cur;
}

void addBack(int value,DoubleList L)
{
	insertBefore(value,L,tail(L));
}

void addFront(int value,DoubleList L)
{
	insertAfter(value,L,head(L));
}

void deleteValue(int value,DoubleList L)
{
	Node *p = findValue(value,L);
	if(!p)
		return;
	p -> prev = p -> next;
	p -> next -> prev = p -> prev;
	free(p);
}

Position findValue(int value,DoubleList L)//找不到则返回NULL
{
	if(isEmpty(L))
		return NULL;

	Node *p = L -> next;

	while(p -> next && p -> data != value)
		p = p -> next;
	
	if(!p -> next)//遍历了哨兵
		return NULL;
	else 
		return p;
}

void deleteDoubleList(DoubleList L)
{
	Node *p = L -> next;

	while(p)
	{
		deletePosition(p,L);
		p = p -> next;	
	}

	free(L);
	free(L -> next);
}

void deletePosition(Position p,DoubleList L)
{
	p -> prev = p -> next;
	p -> next -> prev = p -> prev;

	free(p);
}
