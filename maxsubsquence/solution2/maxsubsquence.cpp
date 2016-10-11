#include "maxsubsquence.h"
#include "max3.h"

int maxsubsquence(int arr[],int l,int r)
{
	if(l > r) 
		return 0;
	if(l == r)
		return arr[l];
	int m = (l + r) / 2;
	
	int lmax = arr[l];
	int lsum = 0;
	for(int i = m; i >= l; --i)
	{
		lsum += arr[i];

		if(lsum > lmax)
			lmax = lsum;
	}	

	int rsum = 0;
	int rmax = arr[m + 1];
	for(int i = m + 1; i <= r; ++i)
	{
		rsum += arr[i];

		if(rsum > rmax)
			rmax = rsum;
	}

	return max3(lmax + rmax, maxsubsquence(arr,l,m),maxsubsquence(arr,m+1,r));
}

