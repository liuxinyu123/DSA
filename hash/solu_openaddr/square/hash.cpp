#include <iostream>
#include <cstdlib>
#include "hash.h"

const int MinTableSize = 5;

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
	if(!IsPrime(num))
		++num;
	return num;
}

Index Hash(ElemType key,int size)
{
	return key % size + 1;
}

void PrintHash(HashTable h)
{
	for(int i = 1; i <= h -> TableSize; ++i)
	{
		if(h -> TheCells[i].info == Legitimated)
		{
			std::cout << i << ":" << h -> TheCells[i].value << std::endl;
		}
		else
			std::cout << i << ":" << std::endl;
	}
}

ElemType Retrieve(Index idx,HashTable h)
{
	if(!idx)
		return static_cast<ElemType> (0);
	else if(h -> TheCells[idx].info == Legitimated)
		return h -> TheCells[idx].value;
	else
		return static_cast<ElemType> (0);

}

HashTable InitializeTable(int size)
{
	if(size < MinTableSize)
	{
		std::cout << "The size is too small!" << std::endl;
		return nullptr;
	}

	HashTable h = (HashTable)malloc(sizeof(struct HashTb));
	
	if(!h)
	{
		std::cout << "Memory alloc for HashTable is failed!" << std::endl;
		return nullptr;
	}

	h -> TableSize = NextPrime(size);
	h -> TheCells = (Cell*)malloc(sizeof(struct HashEntry) * h -> TableSize);

	if(!h -> TheCells)
	{
		std::cout << "Memory alloc for HashTable is failed!" << std::endl;
		return nullptr;
	}

	for(int i = 0; i <= h -> TableSize; ++i)
	{
		h -> TheCells[i].info = Empty;
	}	

	return h;
}

Index Find(ElemType key,HashTable h)
{
	Index idx = Hash(key,h -> TableSize);
	
	while(h -> TheCells[idx].info != Empty)
	{
		if(h -> TheCells[idx].value == key)
		{
			if(h -> TheCells[idx].info == Legitimated)
				return idx;
			else
			{
				std::cout << key << " is removed!" << std::endl;
				return 0;
			}
		}

		++idx;
	}
		std::cout << "Can not find " << key << std::endl;
		return 0;
}

void Insert(ElemType key,HashTable h)
{
	Index idx = Hash(key,h -> TableSize);
	Index t = idx;
	int i = 0;

	while(h -> TheCells[idx].info != Empty)
	{
		if(h -> TheCells[idx].info == Removed)
		{
			h -> TheCells[idx].value = key;
			h -> TheCells[idx].info = Legitimated;
			return;
		}

		else//Legitimated
		{
			if(h -> TheCells[idx].value == key)
				return;
			else
			{
				++i;					
				idx = ((t + i * i) % h -> TableSize);
			}
		}
	}

	h -> TheCells[idx].value = key;
	h -> TheCells[idx].info = Legitimated;
}

void Delete(ElemType key,HashTable h)
{
	if(Index idx = Find(key,h))
		h -> TheCells[idx].info = Removed;

}

void DestroyTable(HashTable h)
{
	if(h)
	{
		free(h -> TheCells);
		free(h);
	}
		
}
