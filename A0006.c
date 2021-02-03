//printf() -> Formatted Output Function
#include<stdio.h>
int main()
{
	int i=10;
	char ch = 'A';
	float f = 12.56f;
	double d = 2445.56678;
	printf("\n i = %d",i);
	printf("\n ch = %c",ch);
	printf("\n f = %.2f",f);
	printf("\n d = %.3lf",d);
	printf("\n Name  = %s","ICT Marwadi");
	
	printf("\n");
	printf("======================\n"); //total 22 space
	printf("          MENU        \n"); // 12 space - product name
	printf("======================\n"); // 8 space to price
	printf("%-12s  %07.2f%%\n","Mobile",f);
	printf("%-12s  %07.2lf%%\n","Laptop",d);
	printf("%-12s  %07.2f%%\n","Calculator",f);
	printf("%-12s  %07.2f%%\n","Computer",f);
	printf("======================\n");
	
	printf("\n");
	printf("F = %f\n",f);
	printf("F = %12.2f\n",f);
	printf("F = %012.2f",f);
	printf("\n");
	printf("%60s","ICT");
	return 0;
}

/*
 Conversion Code
 %d - int
 %c - char
 %f - float
 %lf- double
 %s - string
*/
