#include <iostream>
#include "tree.h"


void PreOrder(Tree t)
{
	if(!t)
		return;
	std::cout << t -> Element << " ";
	PreOrder(t -> FirstChild);
	PreOrder(t -> NextSibling);
}

void MidOrder(Tree t)
{
	if(!t)
		return;
	MidOrder(t -> FirstChild);
	std::cout << t -> Element << " ";
	if(t -> FirstChild)
		MidOrder(t -> FirstChild -> NextSibling);
}

void PostOrder(Tree t)
{
	if(!t)
		return;
	PostOrder(t -> FirstChild);
	std::cout << t -> Element << " ";
	PostOrder(t -> NextSibling);
}

void AddNode(Node child,Node parent)
{
	if(parent -> FirstChild)
		parent -> FirstChild -> NextSibling = child;//如果有第一个孩子，则为孩子添加兄弟
	else
		parent -> FirstChild = child;//否则直接添加孩子
}
