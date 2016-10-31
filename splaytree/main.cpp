#include <iostream>
#include "splaytree.h"

int main(int argc,char **argv)
{
	SplayTree t = nullptr;

	for(int i = 0; i < 10; ++i)
		t = Insert(i,t);

	std::cout << "The Midorder is : " ;
	MidOrder(t);
	std::cout << std::endl;
	
	int a = 5;
	std::cout << "The mininum in the tree is: " << Retrieve(FindMin(t)) << std::endl;
	std::cout << "The maxinum in the tree is: " << Retrieve(FindMax(t)) << std::endl;
	std::cout << a << " = " << Retrieve(Find(a,t)) << std::endl;
	//std::cout << "After delete " << a << " ,MidOrder is: " ;
	//MidOrder(Delete(a,t));
	//std::cout << std::endl;
	MakeEmpty(t);

	return 0;
}
