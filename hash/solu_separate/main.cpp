#include <iostream>
#include "hash.h"

int main(int argc,char **argv)
{
	HashTable h = InitializeTable(8);

	std::cout << "The HashTable size is " << h -> TableSize << std::endl;

	Insert(4,h);
	Insert(5,h);
	Insert(223,h);
	Insert(42,h);
	Insert(23,h);
	Insert(22,h);
	Insert(24,h);
	Insert(52,h);
	Insert(56,h);

	for(int i = 100; i < 130; ++i)
		Insert(i,h);

	std::cout << "The HashTable is : " << std::endl;
	PrintHash(h);
	std::cout << std::endl;

	int a = 2;
	Position p = Find(a,h);
	if(!p)
		std::cout << "can not find " << a << std::endl;
	
	a = 23;
	p = Find(a,h);
	if(p)
		std::cout << "have found "  << a << std::endl;

	std::cout << a << " = " << Retrieve(Find(a,h)) << std::endl; 

	Delete(a,h);
	p = Find(a,h);
	if(!p)
		std::cout << "After delete "<< a << " ,can not find " << a << std::endl;


	DestroyTable(h);
	return 0;
}
