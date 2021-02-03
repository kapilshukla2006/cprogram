//Palindrome
#include<stdio.h>
int main()
{
	char *str;
	int len=0,pos=0;
	str=(char *)malloc(sizeof(char)*5);
	printf("\n Enter String : ");
	scanf("%[^\n]s",str);
	
	//Logic
	while(str[len]!='\0')
	{
		len++;
	}
	len--; //To Shift from null to last character of String
	
	while(str[pos]==str[len])
	{
		pos++; len--;
		if(pos>=len)
		{
			printf("\n String is Palindrome");
			break;
		}
	}
	if(pos<len)
	{
		printf("\n String is NOT Palindrome");
	}
	return 0;
}
