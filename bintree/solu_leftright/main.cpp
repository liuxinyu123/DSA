#include <iostream>
#include <cstdlib>
#include "tree.h"

int main(int argc,char **argv)
{
	int NodeSize = 7;
	//Tree *t = (Tree*)malloc(sizeof(struct TreeNode) * NodeSize);
	Tree t = (Tree)malloc(sizeof(struct TreeNode) * NodeSize);
	char c = 'A';
	
	for(int i = 0; i < NodeSize; ++i)
	{
		t[i].Element = c;
		t[i].Left = nullptr;
		t[i].Right = nullptr;
		++c;
	}	

	t[0].Left = &t[1];
	t[0].Right = &t[2];
	t[1].Left = &t[3];
	t[1].Right = &t[4];
	t[2].Left = &t[5];
	t[2].Right = &t[6];

	std::cout << "Preorder is: " << std::endl;
	PreOrder(t);
	std::cout << std::endl;

	std::cout << "Midorder is: " << std::endl;
	MidOrder(t);
	std::cout << std::endl;

	std::cout << "Postorder is: " << std::endl;
	PostOrder(t);
	std::cout << std::endl;

	return 0;
}

