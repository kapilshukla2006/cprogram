//Ternery Operator (Conditional Operator)
#include<stdio.h>
int main()
{
	int i=5,j=8,k=6;
	printf("\n MAX (2) = %d",(i>j)?i:j);
	//Nested Conditional Operator
	printf("\n MAX (3) = %d",(i>j)?((i>k)?i:k):((j>k)?j:k));
	printf("\n MIN (3) = %d",(i<j)?((i<k)?i:k):((j<k)?j:k));
	return 0;
}
