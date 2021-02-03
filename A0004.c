//Declaration, Assignment, Intialization
#include<stdio.h>
int main()
{
	int marks=100, total_sub=1;    //Declaration + Intialization
	int per;                       //Declaration               
	printf("\n Enter Marks : ");
	scanf("%d",&marks);
	per = marks/total_sub;        //Assignment of Value
	printf("\n Percentage = %d",per);
	return 0;
}
