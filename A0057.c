//Find SUM and AVG of Values stored in Array
#include<stdio.h>
#define N 6 //pre-processor
int main()
{
	int no[N],pos,sum=0;
	float avg;
	for(pos=0;pos<N;pos++)
	{
		printf("\n Enter Value [%d] : ",pos+1);
		scanf("%d",&no[pos]); //15
		sum=sum+no[pos];
	}
	avg = (sum*1.0)/N;
	printf("\n SUM = %d AVG = %f",sum,avg);
	return 0;
}

//Implicit Conversion
//int -> <- char
//float -> <- double
// int a = 'A'  => a=65
// char c = 65 => c='A'
