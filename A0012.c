//break statement, goto statement, label
#include<stdio.h>
int main()
{
	int i;
	
	Dhruvi:
		printf("\n Enter Any Number :");
		scanf("%d",&i);
		if(i!=99)
		{
			goto Dhruvi; 
		}
		printf("\n DONE");
		
	/*
	AB: //Label
		printf("\n Enter Any Number :");
		scanf("%d",&i);
		if(i==99)
		{
			printf("\n DONE");
		}
		else
		{
			goto AB; //Goto Statements
		}
	*/
	return 0;
}
