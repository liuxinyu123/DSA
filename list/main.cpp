#include <iostream>
#include "list.h"
#include "print_array.h"

int main()
{
	int arr[] = {46,88,90,54};
	int s = sizeof(arr) / sizeof(arr[0]);

	std::cout << "The array is : " ;
	print_array(arr,s);

	List l1 = creatList(arr,s);
	List l2 = initList();

	std::cout << "The list 1 is: " ;
	print(l1);
	std::cout << "The list 2 is: ";
	print(l2);
	
	std::cout << "The list 1 is empty : " << isEmpty(l1) << std::endl;
	std::cout << "The list 2 is empty : " << isEmpty(l2) << std::endl;
	
	for(int i = 0;i <= 10;++i)
	{
		addBack(i,l1);
		addBack(i,l2);	
	}
	std::cout << "After add end 0-10,the list 1 is: " ;
	print(l1);
	std::cout << "After add end 0-10,the list 2 is: " ;
	print(l2);

	deleteList(l1);
	deleteList(l2);
	std::cout << "After delete list,the list 1 is : ";
	print(l1);
	std::cout << "After delete list,the list 2 is : ";
	print(l2);

	for(int i = 0;i <= 10;++i)
	{
		addFront(i,l1);
		addFront(i,l2);	
	}
	std::cout << "After add front,the list 1 is : ";
	print(l1);
	std::cout << "After add front,the list 2 is : ";
	print(l2);

	insertAfter(0,l1,findValue(4,l1));
	std::cout << "After insert 0 after 4,the list 1 is: ";
	print(l1);	

	insertBefore(8,l2,findValue(2,l2));
	std::cout << "After insert 8 before 2,the list 2 is: ";
	print(l2);
	
	deleteValue(8,l1);
	deleteValue(8,l2);
	std::cout << "After delete 8 form list 1 and list 2 : " << std::endl;
	std::cout << "The list 1 is : " ;
	print(l1);
	std::cout << "The list 2 is : " ;
	print(l2);
	
	deleteValue(8,l1);
	deleteValue(8,l2);
	std::cout << "After delete 8 form list 1 and list 2 : " << std::endl;
	std::cout << "The list 1 is : " ;
	print(l1);
	std::cout << "The list 2 is : " ;
	print(l2);
		
	
	return 0;	
}
