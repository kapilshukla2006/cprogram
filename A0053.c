#include<stdio.h>
int main()
{
	int r,c;
	printf("\n 01 \n");
	for(r=0;r<3;r++) //Row
	{
		for(c=0;c<4;c++) //Column
		{
			printf("%d ",c+1);	//Print
		}
		printf("\n"); //Change Row
	}
	printf("\n 02 \n");
	for(r=0;r<3;r++) //Row
	{
		for(c=0;c<4;c++) //Column
		{
			printf("%d ",r+1);	//Print
		}
		printf("\n"); //Change Row
	}
	printf("\n 03 \n");
	for(r=0;r<4;r++) //Row
	{
		for(c=0;c<4;c++) //Column
		{
			printf("%d ",c+r+1);	//Print
		}
		printf("\n"); //Change Row
	}
	printf("\n 04 \n");
	for(r=0;r<4;r++) //Row
	{
		for(c=0;c<4;c++) //Column
		{
			printf("%3d",(r+1)*(c+1));	//Print
		}
		printf("\n"); //Change Row
	}
	return 0;
}
