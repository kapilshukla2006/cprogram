#include<stdio.h>
int main()
{
	int i, j=1;
	printf("\n Which No Table you want to Print ?");
	scanf("%d",&i);
	Shruti:
		printf("\n%4d X %4d = %4d",i,j,i*j);
		if(j!=10)
		{
			j++; // 4
			goto Shruti;
		}
		
	for(j=1;j<=10;j++)
	{
		printf("\n%4d X %4d = %4d",i,j,i*j);
	}
	return 0;
}
