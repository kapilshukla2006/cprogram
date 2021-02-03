//45. print 1 3 5 7 9
#include<stdio.h>
int main()
{
	int series=1;
	for( ;series<=10;series++) // 10 times
	{
		if(series%2==1) //Odd Nos
		{
			printf(" %d",series);
		}
	}
	
	printf("\n");
	series=1; //Compulsory even
	for( ;series<=10;series=series+2) //5 times
	{
		printf(" %d",series);
	}
	
	printf("\n");
	series=1;
	for( ;series<=5;series++) //1 2 3 4 5
	{
		printf(" %d",(2*series)-1); // 1 3 5 7 9
	}
	
	printf("\n");
	series=1; //even or odd
	for( ;series<=10;series++) //5 times
	{
		if(series%2==1)
		{
			printf(" %d",series++);
		}
	}
	return 0;
}


