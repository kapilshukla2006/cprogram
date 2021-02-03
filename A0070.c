//Matrix Addition (Direct Printing and Storing in 3rd Matrix)
#include<stdio.h>
#define row 2
#define col 3
int main()
{
	int a[row][col],b[row][col],ans[row][col];//={{1,1,1},{2,2,2}}; //{1,1,1,2,2,2}
	int r,c;
	printf("\n Enter Values for Matrix - 1 : \n");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("\n Enter Value at [%d][%d]",r+1,c+1);
			scanf("%d",&a[r][c]);
		}
		printf("\n");
	}
	printf("\n Enter Values for Matrix - 2 : \n");
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("\n Enter Value at [%d][%d]",r+1,c+1);
			scanf("%d",&b[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			ans[r][c]=a[r][c]+b[r][c];
			printf("%3d ",ans[r][c]);
		}
		printf("\n");
	}
	return 0;
}
