//Two Dimension Array
#include<stdio.h>
#define row 2
#define col 3
int main()
{
	int a[row][col];//={{1,1,1},{2,2,2}}; //{1,1,1,2,2,2}
	int r,c;
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("\n Enter Value at [%d][%d]",r+1,c+1);
			scanf("%d",&a[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}
