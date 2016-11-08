#include <iostream>
#include "hash.h"

const int MinTableSize = 5;

void Error(char *str)
{
	std::cout << std::endl;
	std::cout << str << std::endl;
}

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
	return key % size;
}

HashTable Rehash(HashTable h)
{
	HashTable hh = InitializeTable(NextPrime(h -> Capacity * 2));
	
	for(int i = 0; i < h -> Capacity; ++i)
	{
		if(h -> TheCells[i].info == Legitimated)
			Insert(h -> TheCells[i].value,hh);
	}

	free(h -> TheCells);
	free(h);
	
	return hh;
}

HashTable InitializeTable(int size)
{
	if(size < MinTableSize)
		Error("The HashTable size is too small!");
	
	int cap = NextPrime(size);
	HashTable h = (HashTable)malloc(sizeof(struct HashTb));
	if(!h)	
		Error("Memory alloc for HashTable is failed!");

	h -> Capacity = cap;
	h -> Size = 0;

	h -> TheCells = (Cell*)malloc(sizeof(struct HashEntry) * cap);
	if(!h -> TheCells)
		Error("Memory alloc for HashEntry is failed!");

	for(int i = 0; i < cap; ++i)
	{
		h -> TheCells[i].info = Empty;
	}

	return h;
}

void DestroyTable(HashTable h)
{
	if(h)
	{
		free(h -> TheCells);
		free(h);
	}
}

void PrintHash(HashTable h)
{
	if(h)
	{
		for(int i = 0; i < h -> Capacity; ++i)
		{
			if(h -> TheCells[i].info != Legitimated)
			{
				std::cout << i << ":" << std::endl;
			}
			else
				std::cout << i << ": " << h -> TheCells[i].value << std::endl;
		}
		
		std::cout << std::endl;
	}
}

Position Find(ElemType key,HashTable h)//找到返回key所在位置 找不到返回下一个空位置
{
	int offset = 0;
	Index idx = Hash(key,h -> Capacity);
	int factor = -1;
	Index t = idx;

	while(h -> TheCells[idx].info != Empty && h -> TheCells[idx].value != key)
	{
		if(factor == -1)
			++offset;
		factor *= -1;

		idx = (t + factor * offset * offset) % h -> Capacity;
	}

	return idx;
}

HashTable Insert(ElemType key,HashTable h)
{
	if(h)
	{
		Position p = Find(key,h);
		double LoadFactor = 0.5;

		if(h -> TheCells[p].info != Legitimated)
		{
			h -> TheCells[p].info = Legitimated;
			h -> TheCells[p].value = key;
			++ h -> Size;
		}

		if(double(h -> Size) / h -> Capacity > LoadFactor)
			h = Rehash(h);
	}

	return h;
}

void Delete(ElemType key,HashTable h)
{
	Position p = Find(key,h);

	if(h -> TheCells[p].info == Legitimated)
		h -> TheCells[p].info = Removed;
}

ElemType Retrieve(Index idx,HashTable h)
{
	if(h)
	{
		return h -> TheCells[idx].value;
	}
}

