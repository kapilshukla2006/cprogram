//SUM of DIGITs
#include<stdio.h>
int main()
{
	int no,sum=0,k;
	printf("\n Enter Number to Find Sum of Digit : ");
	scanf("%d",&no);
	
	while(no>0)
	{
		k=no%10;
		sum=sum+k;
		no=no/10;
	}
	
	printf("\n SUM OF DIGITs = %d",sum);
	return 0;
}
