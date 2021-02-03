//MAKE Reverse of Given Number
// no = 1462  rev_no = 2641
#include<stdio.h>
int main()
{
	int no,sum=0,k,c=0;
	printf("\n Enter Number to Find Reverse : ");
	scanf("%d",&no); //100
	
	while(no>0)
	{
		k=no%10;
		sum=(sum*10)+k;
		no=no/10;
		c++;
	}
	
	printf("\n Reverse = %0*d",c,sum); //%0*d <- * will be replaced by variable c
	return 0;
}
/*
//no = 1462
    SUM=0     ( )   
2 = 2     = (0*10)+2
6 = 26    = (2*10) + 6
4 = 264   = (26*10)+ 4
1 = 2641  = (264*10)+1
*/









