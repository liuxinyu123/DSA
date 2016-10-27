#include <iostream>
#include <cstdlib>
#include "tree.h"

int main(int argc,char **argv)
{
	int NodeSize = 7;
	Node t = (Node)malloc(sizeof(TreeNode) * NodeSize);
	char c = 'A';

	for(int i = 0; i < NodeSize; ++i)//设定各节点的元素值
	{
		t[i].Element = c;
		t[i].FirstChild = nullptr;
		t[i].NextSibling = nullptr;
		++c;
	}

	AddNode(&t[1],&t[0]);// A->B
	AddNode(&t[2],&t[0]);//A->C
	AddNode(&t[3],&t[1]);//B->D
	AddNode(&t[4],&t[1]);//B->E
	AddNode(&t[5],&t[2]);//C->F
	AddNode(&t[6],&t[2]);//C->G

	std::cout << "PreOrder is: " << std::endl;
	PreOrder(t);
	std::cout << std::endl;

	std::cout << " MidOrder is: " << std::endl;
	MidOrder(t);
	std::cout << std::endl;

	std::cout << "PostOrder is:" << std::endl;
	PostOrder(t);
	std::cout << std::endl;

	return 0;


}
