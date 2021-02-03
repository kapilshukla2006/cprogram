/*
Write a C-Program to Print Number in Reverse.
INPUT: 1002
OUTPUT: 2001

[Just print, Don’t Create Reverse Number]
*/
#include<stdio.h>
int main()
{
	int no,sum=0;
	printf("\n Enter Number to Find Reverse : ");
	scanf("%d",&no);
	
	while(no>0)
	{
		printf("%d",no%10);
		no=no/10;
	}
	return 0;
}









