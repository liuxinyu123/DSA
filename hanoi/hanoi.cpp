#include <iostream>
#include "hanoi.h"

void Hanoi(int N,char X,char Y,char Z)//N个 从X到Y Z作为中转
{
	if (N > 1)
	{
		Hanoi(N - 1,X,Z,Y);//N-1个 从X到Z Y作为中转
		std::cout << X << " --> " << Y << std::endl;
		Hanoi(N - 1,Z,Y,X); //	N-1个 从Z到Y X作为中转		
	}

	else
		std::cout << X << " --> " << Y << std::endl;
}
