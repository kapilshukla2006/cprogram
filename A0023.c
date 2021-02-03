//49. print 1 11 20 28 35 41 46 50 53 55 56 
#include<stdio.h>
int main()
{
	int series=10, no=1;
	for(;series>=0;series--) // 11 times
	{
	 	printf(" %d",no);
	 	no=no+series;
	}
	return 0;
}


