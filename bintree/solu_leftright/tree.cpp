#include <iostream>
#include <cstdlib>
#include "tree.h"

void PreOrder(Tree t)
{
	if(t)
	{
		std::cout << t -> Element << " ";
		PreOrder(t -> Left);
		PreOrder(t -> Right);
	}
}

void MidOrder(Tree t)
{
	if(t)
	{
		MidOrder(t -> Left);
		std::cout << t -> Element << " ";
		MidOrder(t -> Right);
	}
}

void PostOrder(Tree t)
{
	if(t)
	{
		PostOrder(t -> Left);
		PostOrder(t -> Right);
		std::cout << t -> Element << " ";
	}
}


