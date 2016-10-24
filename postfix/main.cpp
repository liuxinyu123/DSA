#include <iostream>
#include "postfix.h"
#include "print_array.h"

int main(int argc,char **argv)
{
	char str[] = {'4','3','*','6','/','4','*','3','+'};
	int len = sizeof(str) / sizeof(char);

	std::cout << "The reverse polish is : " << std::endl;
	print_array(str,len);
	double t = Postfix(str,len);
	
	std::cout << "The reverse polish's value is : " << t << std::endl;

	return 0;	
}
