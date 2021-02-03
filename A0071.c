//Find Max and Min from Two Dimension Array
#include<stdio.h>
#define row 2
#define col 3
int main()
{
	int a[row][col];//={{1,1,1},{2,2,2}}; //{1,1,1,2,2,2}
	int r,c,max,min;
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		{
			printf("\n Enter Value at [%d][%d]",r+1,c+1);
			scanf("%d",&a[r][c]);
			//Logic
			if(r==0 && c==0)
			{
				min=a[r][c];
				max=a[r][c];
			}
			else
			{
				if(a[r][c]>max)
				{
					max=a[r][c];
				}
				if(a[r][c]<min)
				{
					min=a[r][c];
				}
			}
		}
		printf("\n");
	}
	printf("\n MIN = %d MAX = %d",min,max);
	return 0;
}
