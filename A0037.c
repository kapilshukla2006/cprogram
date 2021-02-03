//Palindrome Number
// no=121 == rev_no=121 => Palindrome
// no=122 != rev_no=221 => Not Palindrome
#include<stdio.h>
int main()
{
	int no,sum=0,k,num;
	printf("\n Enter Number to Check Palindrome : ");
	scanf("%d",&no); 
	num=no;
	while(no>0)
	{
		k=no%10;
		sum=(sum*10)+k;
		no=no/10;
	}
	if(sum==num)
	{
		printf("\n Palindrome");
	}
	else
	{
		printf("\n NOT Palindrome");
	}
	return 0;
}





