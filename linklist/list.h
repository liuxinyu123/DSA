#ifndef _LIST_H_
#define _LIST_H_

template <typename T>
class Node
{
	T data;
	Node *next;
};

typedef Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Postion;

template <typename T>
class List
{
	public:
			List()
	private:
			Node *header;

};
#endif
