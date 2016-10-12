#include <iostream>
#include "randN.h"

int main()
{
	int r = rand(101);

	std::cout << "Please input a number between 0 and 100: " ;
	int n = 7;
	int a = 0;
	while(--n)
	{	
		std::cin >> a;
		if(a == r)
		{
			std::cout << "Congratulations!!!You are great!" << std::endl;
			break;	
		}
		if(a < r)
			std::cout << "The number you input is too small,please input again!" << std::endl;
		else 
			std::cout << "The number you input is too large,please input again!" << std::endl;
			
	}
	if(n == 0)
	std::cout << "Sorry,you have no chances!" << std::endl;
	return 0;
}
