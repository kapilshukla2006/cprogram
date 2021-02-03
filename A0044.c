/*
11. Write a C-Program which accepts marital status, gender and age of driver 
and finds the driver is insured or not.

A company insures its drivers in the following cases:

i) If the driver is married.
ii) If the driver is unmarried, male & above 30 years of age.
iii) If the driver is unmarried, female & above 25 years of age.

In all other cases the driver is not insured.
*/
#include<stdio.h>
int main()
{
	char marital_status, gender;
	int age;
	printf("\n Enter Marital Status [M - Married, U - Unmarried]: ");
	scanf("%c",&marital_status);
	fflush(stdin);
	printf("\n Enter Gender [M - Male, F - Female] : ");
	scanf("%c",&gender);
	printf("\n Enter Age : ");
	scanf("%d",&age);
	/*
	if(marital_status=='M' || marital_status=='m')
	{
		printf("\n The driver is Insured");
	}
	else
	{
	   //marital_status='U'
	   if((gender=='M' || gender=='m') && age>30)
	   {
	   		printf("\n The driver is Insured");
	   }
	   else if((gender=='F' || gender=='f') && age>25)
	   {
	   		printf("\n The driver is Insured");
	   }
	   else
	   {
	   		printf("\n The driver is NOT Insured");
	   }
	}*/
	
	
	//Long Long Conditions
	if((marital_status=='M' || marital_status=='m') || ((gender=='M' || gender=='m') && age>30) || ((gender=='F' || gender=='f') && age>25))
	{
		printf("\n The driver is Insured");
	}
	else
	{
		printf("\n The driver is NOT Insured");
	}
	return 0;
}





