//Strong No:
// 145 : 1! + 4! + 5! = 1 + 24 + 120 = 145
#include<stdio.h>
int main()
{
	int no,fact=1,sum=0,r,num;
	printf("\n Enter No to Check Strong No : ");
	scanf("%d",&no);
	num=no;
	while(no>0)
	{
		r = no%10; //1
		//r will be a digit of number 5
		fact=1; //re-initialized
		while(r>=1) //r=1
		{
			fact=fact*r;
			r--; 
		}
		sum=sum+fact; //1!=1 => 144+1 = 145
		no=no/10;//1
	} 
	if(sum==num)
	{
		printf("\n Strong Number");
	}
	else
	{
		printf("\n NOT Strong Number");
	}
	return 0;
}





