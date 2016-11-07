#include <iostream>
#include "hash.h"

int main(int argc,char **argv)
{
	HashTable h = InitializeTable(7);

	std::cout << "The HashTable size is : " << h -> TableSize << std::endl;
	Insert(13,h);
	Insert(7,h);
	Insert(20,h);
	Insert(14,h);

	std::cout << "The HashTable is: " << std::endl;
	PrintHash(h);
	std::cout << std::endl;

	
	Delete(7,h);
	std::cout << "After delete,the HashTable is: " << std::endl;
	PrintHash(h);
	std::cout << std::endl;
	
	int a = 13;
	std::cout << a << " = " << Retrieve(Find(a,h),h) << std::endl; 
	
	a = 222;
	std::cout << a << " = " << Retrieve(Find(a,h),h) << std::endl; 

	return 0;
}
