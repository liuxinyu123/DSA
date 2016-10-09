#include <iostream>
#include "insert_array.h"
#include "print_array.h"
#include "bubble_sort.h"

int main()
{
	int a[] = {24,42,1,-23,-254,0,23,41,65};
	int s = sizeof(a)  / sizeof(a[0]);//数组长度

	int k = s / 2;	//取数组中间长度
	int b[k];//初始化中间数组，用于存放原始数组前k个元素
	for(int i = 0; i < k; ++i)
		b[i] = a[i]; //读入前k个元素
	//print_array(b,k);
	
	bubble_sort(b, k);//降序排序
	//print_array(b,k);
	for(int i = k; i < s; ++i)
	{
		insert_array(b, k, a[i]);
	}
	
	std::cout << "The array is : " ;
	print_array(a, s);
	std::cout << std::endl;
	//print_array(b,k);
	std::cout << "In the array,the " << k << "th maximum number is : " << b[k - 1] << std::endl;

	return 0;
}
