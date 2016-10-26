#include <iostream>
#include <string>
#include "printstring.h"


void PrintString(string str)
{
	for(int i = 0; i < str.size(); ++i)
	{
		std::cout << str[i] << " "; 
	}

	std::cout << std::endl;
}
