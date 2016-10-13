#include <iostream>
#include "pow.h"
#include "iseven.h"

int main()
{
	int a = 2;

	for(int i = 0; i < 20; ++i)
		std::cout << "Pow" << "( " << a << " , " << i << " )" << " = " << 
				Pow(a,i) << std::endl;

	return 0;
}
