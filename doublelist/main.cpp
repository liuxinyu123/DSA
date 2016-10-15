#include <iostream>
#include "doublelist.h"


int main()
{
	int arr[] = {1,2,3,4};
	int len = sizeof(arr) / sizeof(arr[0]);

	DoubleList l1 = initDoubleList();
	DoubleList l2 = makeDoubleList(arr,len);
	
	std::cout << "The list 1 is : " ;
	print(l1);
	std::cout << "The list 2 is : ";
	print(l2);

	std::cout << "The list 1 is empty : " << isEmpty(l1) << std::endl;   
	std::cout << "The list 2 is empty : " << isEmpty(l2) << std::endl;

	for(int i = 0; i <= 10; ++i)
	{
		addBack(i,l1);
		addBack(i,l2);
	}	

	std::cout << "After add back 0-10 : " << std::endl;
	std::cout << "The list 1 is : " ;
	print(l1);
	std::cout << "The list 2 is : " ;
	print(l2);

	std::cout << "In the list 1,the first element and last element is : " << first(l1) 
		   << " " << last(l1) << std::endl;
	std::cout << "In the list 2,the first element and last element is : " << first(l2)
		   << " " << last(l2) << std::endl;
	
	for(int i = 0; i <= 10; ++i)
	{
		addFront(i,l1);
		addFront(i,l2);
	}	

	std::cout << "After add front 0-10 : " << std::endl;
	std::cout << "The list 1 is : " ;
	print(l1);
	std::cout << "The list 2 is : " ;
	print(l2);

	//deleteValue(4,l1);
	//deleteValue(5,l2);
	std::cout << "After delete 4 from list 1,the list 1 is : ";
	print(l1);
	std::cout << "After delete 5 from list 1,the list 1 is : ";
	print(l2);

	insertBefore(33,l1,findValue(5,l1));
	std::cout << "After insert 33 before 5 ,the list 1 is : ";
	print(l1);
	insertAfter(42,l2,findValue(2,l2));
	std::cout << "After insert 42 after 2 in list 2 ,the list 2 is : ";
	print(l2);

	deleteDoubleList(l1);
	std::cout << "After delete list 1,the list 1 is: ";
	print(l1);
	return 0;
}
