//do-while()
#include<stdio.h>
int main()
{
	int i=1;
	while(i>2) // Entry Controlled Loop
	{
		printf("\n WHILE");
	}
	
	i=1;
	do //Exit Controlled Loop
	{
		printf("\n DO-WHILE");
	}while(i>2); //Semicolon is Compulsory
	return 0;
}
