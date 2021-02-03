/*
getch() -> Not Display Char, Get Only one Char
getche() -> Display Char, Get Only one Char [ e - echo ]
getchar() -> Display Char, It allows to enter multiple character, Get only First Character
getc() -> Display Char, It allows to enter multiple character, Get only First Character [stdin, file]
*/

#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter Char : ");
	c=getche();
	printf("\n Char  = %d",c);
	return 0;
}
