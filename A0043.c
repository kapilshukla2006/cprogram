/*
8. Write a C-Program which accepts weekly_hours that worker 
worked and hourly_rate.

Based on input, calculate the earnings by workers 
who are paid an hourly wage, with

weekly hours greater than 40 being paid time and a half.
*/
#include<stdio.h>
int main()
{
	float weekly_hours, hourly_rate;
	printf("\n Enter Hours : ");
	scanf("%f",&weekly_hours);
	printf("\n Enter Rate : ");
	scanf("%f",&hourly_rate);
	if(weekly_hours>=40) //50
	{
		printf("\n Earnings by workers : %.2f",(40*hourly_rate)+((weekly_hours-40)*1.5*hourly_rate));
	}
	else
	{
		printf("\n Earnings by workers : %.2f",weekly_hours*hourly_rate);
	}
	return 0;
}





