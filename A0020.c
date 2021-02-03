//46. print 1 2 4 8 16 32 64
#include<stdio.h>
int main()
{
	int series=0,n;
	printf("\n Enter How many numbers you want to print : ");
	scanf("%d",&n);
	for( ;series<n;series++)
	{
		printf(" %d",1<<series); //left shift (Bit wise Operator)
	}

	return 0;
}


