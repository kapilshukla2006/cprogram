//Factorial 
// no = 3 : 3! = 3 X 2 X 1 = 6
#include<stdio.h>
int main()
{
	int no,fact=1;
	printf("\n Enter N0 : ");
	scanf("%d",&no);
	
	while(no>=1) //no=2
	{
		fact=fact*no; //6
		no--;  //0
	}
	
	printf("\n Fact = %d",fact);
	return 0;
}





