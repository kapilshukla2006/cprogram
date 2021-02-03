//1) ASCII Codes 2) Type Conversion & Type Casting 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i = 57;
	char ch = 'b';
	char c[10];
	int v = 12;
	float f = 23.78;
	int total = 321;
	int sub = 5;
	//Implicit Conversion - Compiler (int <-> char , float <-> double)
	printf("\n%c",i);  // int  -> %c
	printf("\n%d",ch); // char -> %d
	
	// Type Casting -> Programmer
	printf("\n f = %d",(int)f);
	printf("\n v = %f",(float)v);
	
	printf("\n per = %.2f",(float)total/sub);
	
	// float <=> string 
	printf("\n String = %s",itoa(12345,c,10));
	printf("\n Float  = %.2f",atof("123.45"));
	return 0;
}

/*
 CONSTANT
 ========
char -> 'c'     -> %c
int  -> 12      -> %d
float -> 12.45f -> %f
double -> 12.45 -> %lf
string -> "abc" -> %s
*/

/*
ASCII Codes
==============
A - 65
Z - 90

a - 97
z - 122

0 - 48
9 - 57
*/
