#include <iostream>
#include <cstring>
#include "word.h"
//#include <cstdio>

extern const int NUM;

int  find_word(char *str)
{
	int n = 0;

	while(n < NUM)
	{
		if(strcmp(word[n],str) == 0)
			return 1;
		++n;
	}

	return 0;
}

void word_puzzle(char matrix[4][4])
{
	int n = 4;

	for(int i = 0; i < n; ++i) //水平方向，从左向右
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};

			int iter = 0;
			word[iter++] = matrix[i][j];

			int k = j + 1;

			while(k < n)
			{
				word[iter++] = matrix[i][k];

				if(find_word(word))
					std::cout << word << std::endl;
				++k;
			}
		}
	}

	for(int i = 0; i < n; ++i)//水平方向，从右向左
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};
			int iter = 0;
			word[iter++] = matrix[i][j];

			int k = j - 1;

			while(k >= 0)
			{
				word[iter++] = matrix[i][k];
				if(find_word(word))
					std::cout << word << std::endl;
				--k;
			}
		}
	}

	for(int i = 0; i < n; ++i) //垂直方向，从上向下
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};

			int iter = 0;
			word[iter++] = matrix[i][j];

			int k = i + 1;

			while(k < n)
			{
				word[iter++] = matrix[k][j];

				if(find_word(word))
					std::cout << word << std::endl;
				++k;
			}
		}
	}

	for(int i = 0; i < n; ++i) //垂直方向，从下向上
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};

			int iter = 0;
			word[iter++] = matrix[i][j];

			int k = i - 1;

			while(k >= 0)
			{
				word[iter++] = matrix[k][j];

				if(find_word(word))
					std::cout << word << std::endl;
				--k;
			}
		}
	}

	for(int i = 0; i < n; ++i) //对角线方向，从左上到右下
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};
			int iter = 0;
			word[iter++] = matrix[i][j];

			int r = i + 1;
			int c = j + 1;

			while(r < n && c < n)
			{
				word[iter++] = matrix[r][c];
				if(find_word(word))
					std::cout << word << std::endl;
				++r;
				++c;
			}
		}
	}

	for(int i = 0; i < n; ++i) //对角线方向，从右下到左上
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};
			int iter = 0;
			word[iter++] = matrix[i][j];

			int r = i - 1;
			int c = j - 1;

			while(r >= 0 && c >= 0)
			{
				word[iter++] = matrix[r][c];
				if(find_word(word))
					std::cout << word << std::endl;
				--r;
				--c;
			}
		}
	}

	for(int i = 0; i < n; ++i) //对角线方向，从右上到左下
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};
			int iter = 0;
			word[iter++] = matrix[i][j];

			int r = i + 1;
			int c = j - 1;

			while(r < n && c >= 0)
			{
				word[iter++] = matrix[r][c];
				if(find_word(word))
					std::cout << word << std::endl;
				++r;
				--c;
			}
		}
	}

	for(int i = 0; i < n; ++i) //对角线方向，从左下到右上
	{
		for(int j = 0; j < n; ++j)
		{
			char word[20] = {'\0'};
			int iter = 0;
			word[iter++] = matrix[i][j];

			int r = i - 1;
			int c = j + 1;

			while(r >= 0 && c >= 0)
			{
				word[iter++] = matrix[r][c];
				if(find_word(word))
					std::cout << word << std::endl;
				--r;
				++c;
			}
		}
	}

}


