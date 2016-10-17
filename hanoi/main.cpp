#include <iostream>
#include "hanoi.h"

int main()
{
	int N = 10;
	char src = 'A';
	char des = 'C';
	char mid = 'B';

	std::cout << N << " 个盘子: 从 " <<  src << " 到 " << des << " ," << mid << 
			"作为中转" << std::endl;
	
	Hanoi(N,'A','B','C');
}
