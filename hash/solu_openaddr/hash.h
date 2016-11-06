#ifndef _HASH_H_
#define _HASH_H_

enum KindOfEntry {Legitimated,Empty,Removed};

typedef unsigned int Index;
typedef Index Position;
typedef int ElemType;

struct HashEntry
{
	ElemType value;
	enum KindOfEntry info;
};

typedef HashEntry Cell;

struct HashTb
{
	int TableSize;
	Cell *TheCells;
};

typedef HashTb *HashTable;

HashTable InitializeTable(int size);
void DestroyTable(HashTable h);
Position Find(ElemType key,HashTable h);
void Insert(ElemType key,HashTable h);
void Delete(ElemType key,HashTable h);
ElemType Retrieve(Index idx,HashTable h);
int IsPrime(int num);
int NextPrime(int num);
Index Hash(ElemType key,int size);
void PrintHash(HashTable h);

#endif
