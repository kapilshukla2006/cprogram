//Find Armstrong Nos 
// 153 = (1)^3 + (5)^3 + (3)^3 = 1 + 125 + 27 = 153
#include<stdio.h>
int main()
{
	int no,sum,temp,r;
	//printf("\n Enter No : ");
	//scanf("%d",&no);
	for(no=1;no<=1000;no=temp+1)
	{
		//no=2
		temp=no; //temp=2
		sum=0;
		while(no>0)
		{
			r = no%10;
			sum = sum + (r*r*r);
			no = no/10;
		}
		if(temp==sum)
		{
			printf("\n %d is an Armstrong No ",temp);
		} //no=0
		/*
		else
		{
			printf("\n %d is NOT an Armstrong No ",temp);
		}*/
	}
	return 0;
}
