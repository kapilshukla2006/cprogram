//50. print first 100 odd numbers
#include<stdio.h>
int main()
{
	int series=1, no;
	for(no=2;series<=100;series++) // 100 times
	{
	 	printf(" %3d",(no*series)-1);
	}
	return 0;
}


