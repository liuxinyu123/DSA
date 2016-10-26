#include <iostream>
#include "midtopost.h"
#include "print_array.h"

int main(int argc,char **argv)
{
	char arr[] = {'a','+','b','*','c'};
	int len  = sizeof(arr) / sizeof(char);

	std::cout << "The midfix expression is: " << std::endl;
	print_array(arr,len);
	
	MidToPost(arr,len);


	return 0;
	
}
