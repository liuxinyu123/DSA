#include <iostream>
#include "hash.h"

int main(int argc,char **argv)
{
	HashTable h = InitializeTable(11);

	std::cout << "The HashTable size is : " << h -> TableSize << std::endl;
	Insert(5,h);
	Insert(6,h);
	Insert(16,h);
	Insert(14,h);
	Insert(7,h);
	Insert(27,h);
	std::cout << "The HashTable is: " << std::endl;
	PrintHash(h);
	std::cout << std::endl;

	
	Delete(16,h);
	std::cout << "After delete,the HashTable is: " << std::endl;
	PrintHash(h);
	std::cout << std::endl;
	
	int a = 27;
	std::cout << a << " = " << Retrieve(Find(a,h),h) << std::endl; 
	
	a = 222;
	std::cout << a << " = " << Retrieve(Find(a,h),h) << std::endl; 

	return 0;
}
