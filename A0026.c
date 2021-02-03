//Sum of 1 to 10
#include<stdio.h>
int main()
{
	int series=1, no=10, sum=0;
	for( ;series<=10;series++) // 10 times
	{
	 	sum = sum + series;
	}
	printf("\n SUM of (1..10) = %d",sum);
	//Without Loop
	printf("\n SUM of (1..10) = %d",((no*(no+1))/2));
	
	//= (n/2)*(n+1)
	return 0;
}


