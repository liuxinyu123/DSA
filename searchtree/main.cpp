#include <iostream>
#include "searchtree.h"

int main(int argc,char **argv)
{
	SearchTree t = nullptr;

	for(int i = 0; i < 10; ++i)
		t = InsertValue(i,t);

	std::cout << "Midorder is: " << std::endl;
	MidOrder(t);
	std::cout << std::endl;

	int b = 4;
	Delete(b,t);
	std::cout << "After delete " << b <<  " ,Midorder is: " << std::endl;
	MidOrder(t);
	std::cout << std::endl;

	int a = 22;
	Insert(a,t);
	std::cout << "After insert " << a << " ,Midorder is: " << std::endl;
	MidOrder(t);
	std::cout << std::endl;

	std::cout << "The minimum is : " << Retrieve(FindMin(t)) << std::endl;
	std::cout << "The maximum is : " << Retrieve(FindMax(t)) << std::endl;
	
	int c = 3;
	//std::cout << Retrieve(Find(c,t)) << " is in SearchTree " << std::endl; 

	return 0;
}
