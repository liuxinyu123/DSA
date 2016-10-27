#include <iostream>
#include <cstdlib>
#include "tree.h"

void PreOrder(Tree t)
{
	std::cout << t -> Element << " ";
	PreOrder(t -> Left);
	PreOrder(t -> Right);
}

void MidOrder(Tree t)
{
	MidOrder(t -> Left);
	std::cout << t -> Element << " ";
	MidOrder(t -> Right);
}

void PostOrder(Tree t)
{
	PostOrder(t -> Left);
	PostOrder(t -> Right);
	std::cout << t -> Element << " ";
}

void AddAsLeftChild(Node child,Tree t)
{
	t -> Left = child;
}

void AddAsRightChild(Node child,Tree t)
{
	t -> Right = child;
}

