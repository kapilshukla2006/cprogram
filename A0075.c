//Array of String
#include<stdio.h>
#define No 4
#define Len 10
int main()
{
	//name[no of string][length of string]
	char *(name[Len]);// **name = *name[] = name[][]
	int pos,i;

	for(i=0;i<No;i++)
	{
		name[i]=(char *)malloc(sizeof(char)*Len);
		printf("\n Enter Name of Student - %d : ",i+1);
		scanf("%s",name[i]);
		fflush(stdin);
	}
	//Printing the Name
	for(i=0;i<No;i++)
	{
		printf("\n Student - %d Name is : %s",i+1,name[i]);
	}
	return 0;
}
