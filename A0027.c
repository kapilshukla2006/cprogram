//Find Factors of Given No.
// 18 : 1 2 3 6 9 18      1-18 => i
#include<stdio.h>
int main()
{
	int no,i;
	printf("\n Enter No : ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			printf(" %d",i);
		}
	}
	
	return 0;
}
