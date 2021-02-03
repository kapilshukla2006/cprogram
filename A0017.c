//43. print 1 to 10
#include<stdio.h>
int main()
{
	int series=1;
	for( ;series<=10;series++)
	{
		printf(" %d",series);
	}
	
	
	printf("\n");
	series=1;
	for( ; ; )
	{
		printf(" %d",series);
		if(series==10)
		{
			break;
		}
		series++;
	}
	return 0;
}


