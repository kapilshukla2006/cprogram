//do-while()
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10) // Entry Controlled Loop
	{
		printf(" %d",i);
		i++;
	}
	
	printf("\n");
	
	i=1;
	do //Exit Controlled Loop
	{
		printf(" %d",i);
		i++;
	}while(i<=10); //Semicolon is Compulsory
	return 0;
}
