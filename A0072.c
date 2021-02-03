//Matrix Multiplication
#include<stdio.h>
#define N 10
int main()
{
	int a[N][N],b[N][N],c[N][N];
	int i,j,k;
	int r1,c1,r2,c2;
	printf("\n How many rows and cols you need for Mat - 1 : ");
	scanf("%d %d",&r1,&c1);
	printf("\n How many rows and cols you need for Mat - 2 : ");
	scanf("%d %d",&r2,&c2);
	if(c1==r2)
	{
		printf("\n Enter Matrix - 1 Values : ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("\n Enter Value [%d][%d]",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n Enter Matrix - 2 Values : ");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\n Enter Value [%d][%d]",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		//Matrix Multiplication
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					//c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		//Printing Matrix
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%3d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n Matrix Multiplication is not Possible");
	}
	return 0;
}
