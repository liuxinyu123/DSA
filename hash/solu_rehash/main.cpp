#include <iostream>
#include "hash.h"

int main(int argc,char **argv)
{
	HashTable h = InitializeTable(6);

	std::cout << "The HashTable capacity is : " << h -> Capacity << std::endl;
	h =	Insert(5,h);
	h = Insert(6,h);
	h = Insert(16,h);
	
	std::cout << "The hash is: " << std::endl;
	PrintHash(h);
	 
	h = Insert(12,h);
	std::cout << "Insert 12,the HashTable is: " << std::endl;
	PrintHash(h);

	Delete(5,h);
	Delete(6,h);
	Delete(7,h);
	std::cout << "Delete 5 6 7,the HashTable is: " << std::endl;
	PrintHash(h);

	DestroyTable(h);
	return 0;
}
