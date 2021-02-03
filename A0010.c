//5. Ternary Operator (Conditional Operator)
// _1_?_2_:_3_ 
// (Condtional Statement) ? (TRUE) : (FALSE)
#include<stdio.h>
int main()
{
	float discount;
	int i=-5;
	(i>0)?printf("I is Postitive"):printf("I is Negative");
	printf("\n Enter Discount : ");
	scanf("%f",&discount);
	(discount>99.0f)?printf("\a"):printf("Valid Discount");
	return 0;
}

/*
(Binary) a + b  -> a and b are Operands and + is an Operator
(Unary) -5     -> 5 is an Operand and - is an Operator
*/
