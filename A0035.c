//Tracing Example
#include<stdio.h>
int main()
{
	int no,sum=0,r,i;
	printf("\n Enter Number : ");
	scanf("%d",&no);
	//no = 134587,sum=0,r,i;
	// 2, 3, 5, 7
	while(no>0)
	{
		r = no%10;
		for(i=2;i<r;i++)
		{
			if(r%i==0)
			{
				break;
			}
		}
		if(i==r)
		{
			sum = sum + r;
		}
		no = no/10;
	}
	printf("\n Sum = %d",sum); //sum = 
	return 0;
}
