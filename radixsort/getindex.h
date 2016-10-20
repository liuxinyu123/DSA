#ifndef _GETINDEX_H_
#define _GETINDEX_H_

int GetIndex(int num,int index)
{
	
	while(index > 0)
	{
		num /= 10;	
		--index;	
	}
	return num % 10;
}
//获取各位上的数字  index= 0 对应个位 	1对应十位
#endif
