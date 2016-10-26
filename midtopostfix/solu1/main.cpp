#include <iostream>
#include <string>
#include "midtopostfix.h"
#include "printstring.h"

int main(int argc,char **argv)
{
	std::string str;
	std::cout << "Please input a midfix expression: " << std::endl;
	std::cin >> str;
	std::cout << "The midfix expression is : " << std::endl;
	PrintString(str);

	std::cout << "The postfix expression is : " << std::endl;
	MidToPostfix(str);
//	std::cout << str.size() << std::endl;
	return 0;
}

