#ifndef _HASH_H_
#define _HASH_H_

struct ListNode;
typedef struct ListNode *Position;
struct HashTb;
typedef struct HashTb *HashTable;

typedef int ElemType;

HashTable InitializeTable(int size);
void DestroyTable(HashTable h);
Position Find(ElemType key,HashTable h);
void Insert(ElemType key,HashTable h);
ElemType Retrieve(Position p);
#endif
