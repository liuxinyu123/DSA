#include "balancecharacter.h"
//#include "stack.h"

int main(int argc,char **argv)
{
	char *word = "sgfs()[]{}()";
	int len = sizeof(word) / sizeof(word[0]);

	//Stack s = CreateStack(20);	
	BracketChecker(word,len);

	return 0;

}
