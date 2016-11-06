#include <iostream>
#include <cstdlib>
#include "hash.h"

const int MinSize = 3;


int IsPrime(int num)
{
	for(int i = 2; i * i <= num; ++i)
	{
		if(num % i == 0)
			return 0;
	}

	return 1;
}

int NextPrime(int num)
{
	while(!IsPrime(num))
		num++;
	return num;
}

int Hash(ElemType key,int size)
{
	return key % size;
}

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
	h -> TheLists = (List*)malloc(sizeof(List) * h -> TableSize);
	
	if(!h -> TheLists)
	{
		std::cout << "Memory alloc for HashTable's List is failed!" << std::endl;
		return nullptr;
	}
	
	for(int i = 0; i < h -> TableSize; ++i)
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

	while(p && p -> value != key)
		p = p -> next;

	return p;
}

void Insert(ElemType key,HashTable h)
{
	Position p = Find(key,h);

	if(!p)//没找到相同的
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

void DestroyTable(HashTable h)
{
	for(int i = 0; i < h -> TableSize; ++i)
	{
		List l = h -> TheLists[i];
		Position p = l -> next;
		Position q = nullptr;

		while(p)
		{
			q = p -> next;
			free(p);
			p = q;	
		}
	}

	free(h -> TheLists);
	free(h);
}

void Delete(ElemType key,HashTable h)
{
	List l = h -> TheLists[Hash(key,h -> TableSize)];
	
	Position p = l;
	
	while(p -> next && p -> next -> value != key)
	{
		p = p -> next;
	}	

	if(!p -> next)
		return;
	
	Position q = p -> next;
	p -> next = q -> next;
	free(q);
}

ElemType Retrieve(Position p)
{
	return p -> value;
}

void PrintHash(HashTable h)
{
	for(int i = 0; i < h -> TableSize; ++i)
	{
		List l = h -> TheLists[i];
		Position p = l -> next;

		while(p)
		{
			std::cout << p -> value << " ";
			p = p -> next;
		}
		std::cout << std::endl;
	}
}
