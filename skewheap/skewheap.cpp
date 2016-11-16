#include <iostream>
#include <cstdlib>
#include "skewheap.h"

ElemType FindMin(SkewHeap h)
{
	return h -> element;
}

SkewHeap Merge(SkewHeap h1,SkewHeap h2)
{
	if(!h1)
		return h2;
	if(!h2)
		return h1;
	if(h1 -> element < h2 -> element)
		return Merge1(h1,h2);
	else
		return Merge1(h2,h1);
}

SkewHeap Merge1(SkewHeap h1,SkewHeap h2)
{
	
}
