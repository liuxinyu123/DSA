#include <iostream>
#include "hash.h"

int main(int argc,char **argv)
{
	HashTable h = InitializeTable(20);

	std::cout << "The HashTable size is : " << h -> TableSize << std::endl;
	Insert(27,h);
	Insert(12,h);
	Insert(33,h);
	Insert(22,h);
	Insert(13,h);
	Insert(31,h);
	Insert(23,h);
	Insert(64,h);

	for(int i = 100; i < 110; ++i)
		Insert(i,h);
	std::cout << "The HashTable is: " << std::endl;
	PrintHash(h);
	std::cout << std::endl;

	Delete(12,h);
	Delete(22,h);
	std::cout << "After delete,the HashTable is: " << std::endl;
	PrintHash(h);
	std::cout << std::endl;
	
	int a = 13;
	std::cout << a << " = " << Retrieve(Find(a,h),h) << std::endl; 

	return 0;
}
