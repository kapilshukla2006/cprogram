//Password - Create Strong Password
#include<stdio.h>
int main()
{
	char *password;
	int pos=0,upper=0,lower=0,digit=0,special=0,flag=1;
	password=(char *)malloc(sizeof(char)*1);
	
do
{
	pos=0; upper=0; lower=0; digit=0; special=0; flag=1;
	fflush(stdin);
	printf("\n Enter Your Password : ");
	scanf("%[^\n]s",password);
	
	while(password[pos]!='\0')
	{
		if(password[pos]>='A' && password[pos]<='Z')
		{
			upper++;
		}
		else if(password[pos]>='a' && password[pos]<='z')
		{
			lower++;
		}
		else if(password[pos]>='0' && password[pos]<='9')
		{
			digit++;
		}
		else
		{
			special++;
		}
		pos++;
	}
	
	if(pos<8)
	{
		printf("\n Your Password is too small ..! Plz Re-Enter");
	}
	else if(upper>0 && lower>0 && digit>0 && special>0)
	{
		printf("\n Your password is STRONG");
		flag=0;
	}
	else
	{
		printf("\n Your password is WEAK");
	}
}while(flag==1);
	return 0;
}
