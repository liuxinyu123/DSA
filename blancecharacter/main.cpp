#include <iostream>
#include "bracketchecker.h"

int main(int argc,char **argv)
{
	std::string str;
	std::cout << "Please input some character: " << std::endl;

	std::cin >> str;

	BracketChecker(str);

	return 0;
}
