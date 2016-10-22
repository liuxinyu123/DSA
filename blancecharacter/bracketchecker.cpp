#include <iostream>
#include <string>
#include "bracketchecker.h"
#include "stack.h"

void BracketChecker(std::string str)
{
	Stack s = CreateStack(50);

	for(int i = 0; i < str.size(); ++i)
	{
		switch(static_cast<char>(str[i]))
			case '(':
			case '[':
			case '{':
				Push(str[i],s);//	开放符号压栈
				break;
			case ')':
			case '}':
			case ']':
				if (!IsEmpty(s))
				{
					if(str[i] == ')' && Pop(s) == '(' || str[i] == ']' && Pop(s) == '[' || 
									str[i] == '}' && Pop(s) == '{')
				}
				else
				{
					std::cout << "Error!" << std::endl;
					return;
				}
	}

	if(IsEmpty(s))
		std::cout << "Matched!" << std::end;
}
