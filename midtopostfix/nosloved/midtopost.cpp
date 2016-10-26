#include <iostream>
#include "midtopost.h"
#include "stack.h"

int OperaterCompare(char a,char b)
{
	if(a == '+' || a == '-')
	{
		if(b == '*' || b == '/')
			return -1;
		else 
			return 0;
	}

	else 
		return 1;
} 

int IsOperator(char c)
{
	return (c == '*' || c == '/' || c == '-' || c == '+');
}

void MidToPost(char arr[],int len)
{
	Stack s = CreateStack();
	
	for(int i = 0;i < len; ++i)
	{
		char c = arr[i];

		if(IsOperator(c))//如果是蒜子  按优先级比较
		{
			while(OperaterCompare(Top(s),c) >= 0)//符号栈中优先级大于等于c 则直接输出
			{
				std::cout << Top(s) << " " ;
				Pop(s);
			}

			if(OperaterCompare(Top(s),c) == -1)
			{
				Push(c,s);
			}
		}
		else//如果不是算子 则直接输出
		{
			std::cout << c << " ";
		}
	}	

	while(!IsEmpty(s))//依次输出
	{
		std::cout << Top(s) << " ";
		Pop(s);
	}
	
}
