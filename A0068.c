/*
1) strcmp 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char *first,*second;
	int flen=0,slen=0;
	
	//Memory Allocation
	first=(char *)malloc(sizeof(char)*1);
	second=(char *)malloc(sizeof(char)*1);
	
	printf("\n Enter First String : ");
	scanf("%[^\n]s",first);
	fflush(stdin);
	printf("\n Enter Second String : ");
	scanf("%[^\n]s",second);
	//String Comparision
	while(first[flen]!='\0' && second[flen]!='\0')
	{
		if(first[flen]!=second[flen])
		{
			break;
		}
		flen++;
	}
	if(first[flen]=='\0' && second[flen]=='\0')
	{
		printf("\n String are EQUAL");
	}
	else
	{
		printf("\n String are NOT EQUAL");
	}
	return 0;
}
