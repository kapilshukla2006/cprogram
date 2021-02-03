#include<stdio.h>
#include<string.h>
int main()
{
	char *first;
	int flen=0;
	first=(char *)malloc(sizeof(char)*1);
	
	printf("\n Enter Any String : ");
	scanf("%[^\n]s",first);
	first[4]='\0';
	printf("\n String = %s",first);
	printf("\n Second String = %s",first+5);
	return 0;
}
