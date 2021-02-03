#include<stdio.h>
int main()
{
	int r,c;
	for(r=0;r<4;r++) //Row
	{
		for(c=0;c<6;c++) //Column
		{
			printf("*");	//Print
		}
		printf("\n"); //Change Row
	}
	return 0;
}
