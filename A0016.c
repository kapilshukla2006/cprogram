//Looping Structures : while()
#include<stdio.h>
int main()
{
	int i=1;
	//while(condition / Expression)
	while(i<=10) //Condition 
	{
		printf(" %d",i); // statements
		i=i+1; // Increment/Decrement/Update
	}
	printf("\n");
	
	//for(intialization ; Condition/Expression ; Incre/Decre )
	i=2;
	for( ;i<=100;i=i*2)
	{
		printf(" %d",i); //statements
		//printf(" Tapan");
	}
	return 0;
}
