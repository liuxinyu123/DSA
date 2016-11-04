#ifndef _HASH_H_
#define _HASH_H_

struct ListNode;
typedef struct ListNode *Position;
struct HashTb;
typedef struct HashTb *HashTable;

typedef int ElemType;

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

HashTable InitializeTable(int size);
void DestroyTable(HashTable h);
Position Find(ElemType key,HashTable h);
void Insert(ElemType key,HashTable h);
void Delete(ElemType key,HashTable h);
ElemType Retrieve(Position p);
int IsPrime(int num);
int NextPrime(int num);
int Hash(ElemType key,int size);

#endif
