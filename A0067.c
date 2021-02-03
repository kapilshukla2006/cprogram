/*
1) strcat
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char *first,*second,*third;
	int flen=0,slen=0,tlen=0;
	//Memory Allocation
	first=(char *)malloc(sizeof(char)*1);
	second=(char *)malloc(sizeof(char)*1);
	third=(char *)malloc(sizeof(char)*1);
	
	printf("\n Enter First String : ");
	scanf("%[^\n]s",first);
	fflush(stdin);
	printf("\n Enter Second String : ");
	scanf("%[^\n]s",second);
	
	//String Concate
	while(first[flen]!='\0')
	{
		third[tlen]=first[flen];
		flen++;
		tlen++;
	}
	while(second[slen]!='\0')
	{
		third[tlen]=second[slen];
		slen++;
		tlen++;
	}
	third[tlen]='\0';
	printf("\ Third String  = %s",third);
	
	strcat(first,second);
	printf("\n %s - %s",first,second);
	return 0;
}
