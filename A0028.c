//Perfect No
// no = 18 : 1 + 2 + 3 + 6 + 9 = 21=sum => Not Perfect No
// no = 28 : 1 + 2 + 4 + 7 + 14 = 28=sum => Perfect No
#include<stdio.h>
int main()
{
	int no,i,sum=0;
	//printf("\n Enter No : ");
	//scanf("%d",&no);
	for(no=1;no<=10000;no++) // 1...44 no=50
	{
		sum=0;
		for(i=1;i<=no/2;i++) //18 = 1...17 => 1...9
		{
			if(no%i==0)
			{
				sum = sum + i;
			}
		}
		if(sum==no)
		{
			printf("\n %d is Perfect No",no);
		}
	}
	return 0;
}
