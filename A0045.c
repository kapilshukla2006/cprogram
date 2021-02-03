/*
15. Write a C-Program which accepts price and quantity 
from the user and based on total bill give the following 
discount and calculate net amount. 

i) Total_Amount < 1000 then NO-DISCOUNT 
ii) Total_Amount between 1000 & 2000 then 5%
iii) Total_Amount between 2001 & 3000 -  10%
iv) Total_Amount between 3001 & 5000 -  15% 
v) Total_Amount > 5000 -  25%
*/
#include<stdio.h>
int main()
{
	float price,amount;
	int quantity;
	printf("\n Enter Price : ");
	scanf("%f",&price);
	printf("\n Enter Quantity : ");
	scanf("%d",&quantity);
	amount=price*quantity;
	printf("\n Amount     : %.2f",amount);
	if(amount<1000.00f)
	{
		printf("\n Discount   : %.2f",(amount*0.00));
		printf("\n Net Amount : %.2f",amount);
	}
	else if(amount<=2000.00f)
	{
		printf("\n Discount   : %.2f",(amount*0.05));
		printf("\n Net Amount : %.2f",amount - (amount*0.05));
	}
	else if(amount<=3000.00f)
	{
		printf("\n Discount   : %.2f",(amount*0.10));
		printf("\n Net Amount : %.2f",amount - (amount*0.10));
	}
	else if(amount<=5000.00f)
	{
		printf("\n Discount   : %.2f",(amount*0.15));
		printf("\n Net Amount : %.2f",amount - (amount*0.15));
	}
	else
	{
		printf("\n Discount   : %.2f",(amount*0.25));
		printf("\n Net Amount : %.2f",amount - (amount*0.25));
	}
	return 0;
}





