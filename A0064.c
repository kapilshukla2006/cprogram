/*
Get String Like Password
*/

#include<stdio.h>
int main()
{
	char *password;
	int pos=-1;
	password=(char *)malloc(sizeof(char)*1);
	printf("\n ENTER YOUR PASSWORD : ");
	do
	{
		pos++;
		password[pos]=getch();
		if(password[pos]!=13 && password[pos]!=8) //Enter and Backspace
		{
			putch('*');
		}
		if(password[pos]==8) //Backspace Code
		{
			printf("\b \b");
			pos=pos-2;
		}
	}while(password[pos]!=13); //13-Enter 8 - backspace
	password[pos]='\0';
	
	pos=0;
	printf("\n YOUR PASSWORD = %s",password);
	/*
	printf("\n YOUR PASSWORD : ");
	while(password[pos]!='\0')
	{
		putch(password[pos]+3);
		pos++;
	}
	*/
	return 0;
}
