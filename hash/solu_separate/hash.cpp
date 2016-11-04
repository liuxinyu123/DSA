#include <iostream>
#include <cstdlib>
#include "hash.h"

const int MinSize = 3;

struct ListNode
{
	ElemType value;
	Position next;
};

typedef Position List;

struct HashTb
{
	int TableSize;
	List *TheLists;
};

HashTable InitializeTable(int size)
{
	if(size < MinSize)
	{
		std::cout << "Table size is too small!" << std::endl;
		return nullptr;
	}	

	HashTable h = (HashTable)malloc(sizeof(struct HashTb));

	if(!h)
	{
		std::cout << "Memory alloc for HashTable is failed!" << std::endl;
		return nullptr;
	}

	h -> TableSize = NextPrime(size);
	h -> TheLists = (List*)malloc(sizeof(List) * H -> TableSize);
	
	if(!h -> TheLists)
	{
		std::cout << "Memory alloc for HashTable's List is failed!" << std::endl;
		return nullptr;
	}
	
	for(int i = 0; i < TableSize; ++i)
	{
		h -> TheLists[i] = (List)malloc(sizeof(struct ListNode));

		if(!h -> TheLists[i])
		{
			std::cout << "Memory alloc is failed!" << std::endl;
			return nullptr;
		}
	
		else
			h -> TheLists[i] -> next = nullptr;
	}

	return h;
}

Position Find(ElemType key,HashTable h)
{
	List l = h -> TheLists[Hash(key,h -> TableSize)];
	Position p = l -> next;

	while(!p && p -> value != key)
		p = p -> next;

	return p;
}

void Insert(ElemType key,HashTable h)
{
	Position p = Find(key,h);

	if(!p)
	{
		List l = h -> TheLists[Hash(key,h -> TableSize)];

		Position newcell = (Position)malloc(sizeof(struct ListNode));

		if(!newcell)
		{
			std::cout << "Memory alloc for newcell is failed!" << std::endl;
			return;
		}

		else
		{
			newcell -> next = l -> next;
			newcell -> value = key;
			l -> next = newcell;
		}

	}
}


