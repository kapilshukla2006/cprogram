//44. print 2 4 6 8 10
#include<stdio.h>
int main()
{
	int series=1;
	for( ;series<=10;series++) // 10 times
	{
		if(series%2==0)
		{
			printf(" %d",series);
		}
	}
	
	printf("\n");
	series=2; //Compulsory even
	for( ;series<=10;series=series+2) //5 times
	{
		printf(" %d",series);
	}
	
	printf("\n");
	series=1;
	for( ;series<=5;series++) //5 times
	{
		printf(" %d",series*2);
	}
	
	printf("\n");
	series=1; //even or odd
	for( ;series<=10;series++) //5 times
	{
		if(series%2==0)
		{
			printf(" %d",series++);
		}
	}
	return 0;
}


