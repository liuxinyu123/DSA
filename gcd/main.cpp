#include <iostream>
#include "gcd.h"

int main()
{
	unsigned int arr[] = {2,4,8,18,27,81,30,63,9,70};
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < size - 1; ++i)
	{
		std::cout << "The gcd of " << arr[i] << " and " << arr[i + 1] << " is " << Gcd(arr[i],arr[i + 1]);
		std::cout << std::endl;
	}
	
	for(int i = 1; i < size - 2; ++i)
	{
		std::cout << "The gcd of " << arr[i - 1] << " and " << arr[i] << " and " << arr[i + 1] 
				<< " is " << Gcd3(arr[i - 1],arr[i],arr[i + 1]);
		std::cout << std::endl;
	}

	return 0;
}
