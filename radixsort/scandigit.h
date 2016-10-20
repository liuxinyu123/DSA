#ifndef _SCANDIGIT_H_
#define _SCANDIGIT_H_

#include <cstring>
#include <new>
#include "getindex.h"

void ScanDigit(int arr[],int len,int index,int maxdigit = 9)
{
	if(0 == arr || len == 0 || index < 0 || 0 == maxdigit)
		return;
	int *digitArr = new int[len];//用于放置arr中对应元素指定位的数字
	memset(digitArr,0,sizeof(int) * len);
	int *countArr = new int[maxdigit + 1];
	memset(countArr,0,sizeof(int) * (maxdigit+1));
	int *resultArr = new int[len];
	memset(resultArr,0,sizeof(int) * len);

	for(int i = 0; i < len; ++i)
		digitArr[i] = GetIndex(arr[i],index);

	for(int i = 0; i < len; ++i)//对digitArr中的数字进行计数,计算0-9中出现的次数 
		countArr[digitArr[i]]++;

	for(int i = 1; i <= maxdigit + 1; ++i)//countArr[i] 为小于等于i的数（指定的位）出现的次数
		countArr[i] = countArr[i] + countArr[i - 1];

	for(int i = len - 1; i >= 0; --i)
	{
		resultArr[countArr[digitArr[i]] - 1] = arr[i];
		--countArr[digitArr[i]];
	}
	
	memcpy(arr,resultArr,sizeof(int) * len);

	delete [] digitArr;
	delete [] countArr;
	delete [] resultArr;
}
//arr为待排序数组，len为数组长度， index为位数 0表示个位 
//1表示十位  maxdigit是各位上出现的最大数 例如10进制则maxdigit为9 
#endif
