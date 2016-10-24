#include <iostream>
#include "balancecharacter.h"
#include "stack.h"

void BracketChecker(char word[],int size)
{
	int Capacity = 20;
	
	Stack s = CreateStack(Capacity);
	int i = 0;
	for( ; i < size; ++i)
	{
		char c = word[i];

		switch(c)
		{
				case '(':
				case '[':
				case '{':
						{
							Push(c,s);
							break;
						}

				case ']':
				case ')':
				case '}':
						{
							if(IsEmpty(s))
							{
								std::cout << "Not Matched!" << std::endl;
								return;
							}

							if((c == ']'&&Pop(s) == '[') || (c == ')'&&Pop(s) == '(') || 
											(c == '}' && Pop(s) == '{') )
								break;
						}
				default:
						break;
		}

	}
		if(i == size)
		{
			if(IsEmpty(s))
			{
				std::cout << "Matched!" << std::endl;
				return;
			}

			std::cout << "Not Matched!" << std::endl;
		}
}
