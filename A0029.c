#include<stdio.h>
int main()
{
	int no,count=0,k=7;
	printf("\n Enter Value of K : ");
	scanf("%d",&k);
	for(no=k;no<=100;no=no+k) //100
	{
		count++;
	}
	printf("\n Count  = %d",count);
	printf("\n Total Count  = %d",100 - (100/k));
	return 0;
}
