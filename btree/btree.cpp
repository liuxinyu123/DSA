#include <cstdlib>
#include "btree.h"

result Search(ElemType value,BTree t)
{
	result res;
	res.ptr = nullptr;
	res.pos = 0;

	int i = 0;
	while(i < t -> keyNum && value > t -> key[i])
		++i;

	if(i < keyNum && t -> key[i] == value)//在当前节点中找到关键字
	{
		res.ptr = t;
		res.pos = i;
		return res;
	}

	else if(t -> isLeaf)//叶子节点返回null
	{
		return res;
	}

	else
		return Search(value,t -> key[i]);//搜索下一级
}




