#include <iostream>
#include "hash.h"

int main(int argc,char **argv)
{
	HashTable h = InitializeTable(8);

	std::cout << h -> TableSize << std::endl;

	Insert(4,h);
	Insert(5,h);
	Insert(223,h);
	Insert(42,h);
	Insert(23,h);
	Insert(22,h);
	Insert(24,h);
	Insert(42,h);

	int a = 2;
	Position p = Find(a,h);
	if(!p)
		std::cout << "can not find " << a << std::endl;
	
	a = 23;
	p = Find(a,h);
	if(p)
		std::cout << "have found "  << a << std::endl;

	Delete(a,h);
	DestroyTable(h);
	p = Find(a,h);
	if(!p)
		std::cout << "After delete "<< a << " ,can not find " << a << std::endl;
	return 0;
}
