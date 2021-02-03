//Array of String
#include<stdio.h>
#define No 3
#define Len 5
int main()
{
	//name[no of string][length of string]
	char name[No][Len];// 4 Strings Length Max 10 for every string
	int pos,i;
	//Getting Name from User
	for(i=0;i<No;i++)
	{
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
