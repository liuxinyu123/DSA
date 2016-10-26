#include <iostream>
#include "midtopostfix.h"
#include "stack.h"

int PropToNum(char c);//将给定运算符转化为一个整数
int IsOperator(char c);//判断是否为运算符

void MidToPostfix(string str)
{
	Stack s = CreateStack();

	for(int i = 0; i < str.size(); ++i)
	{
		char c = str[i];
	
		if(IsOperator(c))
		{
			if(c == ')')// )时 弹出（之前的所有运算符
			{
				while(Top(s) != '(')
				{
					std::cout << Top(s) << " ";
					Pop(s);
				}

				Pop(s);//弹出（
			}

			else if(c == '(')
				Push(c,s);
			else//加减乘除时
			{
				if(Top(s) == '(' || IsEmpty(s))
					Push(c,s);
				
				else
				{
					while(PropToNum(Top(s)) >= PropToNum(c))
		   			{
						std::cout << Top(s) << " " ;
						Pop(s);
					}
						
					Push(c,s);
				}
			}
		}
		else//	非运算符时
			std::cout << c << " ";
	}

	if(!IsEmpty(s))
	{
		std::cout << Top(s) << " ";
		Pop(s);
	}

	std::cout << std::endl;
}

int PropToNum(char c)
{
	if(c == '+' || c == '-')
		return 1;
	if(c == '*' || c == '/')
		return 2;
}

int IsOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')');
}
