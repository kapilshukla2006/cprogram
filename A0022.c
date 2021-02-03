//48. print 1 10 2 9 3 8 4 7 5 6
#include<stdio.h>
int main()
{
	int series=1, no=1, i=1, j=10;
	for(series=10;series>0;series--)
	{
		if(series%2==0)
		{
			printf(" %d",no);
			no = no + (series-1); //10
		}
		else
		{
			printf(" %d",no);
			no = no - (series-1);
		}
	}
	printf("\n");
	for(series=1;series<=5;series++) // 5 times
	{
		printf("%d %d ",i++,j--); // 1 10, 2 9, 3 8, 
	}
	
	return 0;
}


