/*
1) strlen 2) strrev 3) strcat 4) strcmp
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char *first,*second;
	int flen=0,slen=0;
	first=(char *)malloc(sizeof(char)*1);
	second=(char *)malloc(sizeof(char)*1);
	printf("\n Enter Any String : ");
	scanf("%[^\n]s",first);
	//Length of String
	while(first[flen]!='\0')
	{
		flen++;
	}
	printf("\n Length of String  = %d",flen);
	printf("\n Length of String  = %d",strlen(first));
	//Reverse of String
	printf("\n Reverse String  = ");
	flen--; //to shift position from '\0' null to previous character
	while(flen>=0)
	{
		second[slen]=first[flen];
		flen--;
		slen++;
	}
	second[slen]='\0';
	printf("%s",second);
	printf("\n My WAY = %s",second+1);
	return 0;
}
