#include <iostream>
#include <string>
#include "expressiontree.h"

using std::string;

int main(int argc,char **argv)
{
	char str[] = {'a','b','+','c','d','e','+','*','*'};
	int len = sizeof(str)/sizeof(char);
	//Stack s = CreateStack();
	//std::cout << "is empty: " << IsEmpty(s) << std::endl;

	//for(int i = 0; i < len; ++i)
	//{
		//Push(CreateTree(str[i]),s);
	//}
	//for(int i = 0; i < len; ++i)
	//{
		//std::cout << TopAndPop(s) -> data << " ";
	//}

	Tree t = CreateExpressionTree(str,len);
	
	std::cout << "PreOrder is: " << std::endl;
	PreOrder(t);	
	std::cout << std::endl;

	std::cout << "MidOrder is: " << std::endl;
	MidOrder(t);
	std::cout << std::endl;

	std::cout << "PostOrder is: " << std::endl;
	PostOrder(t);
	std::cout << std::endl;

//	std::cout << t -> data << std::endl;
	//std::cout << t -> left -> data << std::endl;
	//std::cout << t -> right -> data << std::endl;

	//std::cout << t -> left -> left -> data << std::endl;
	//std::cout << t -> left -> right -> data << std::endl;

	return 0;
}
