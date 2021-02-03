/*
10) -> Spiral Matrix
 1  2  3  4  5
16 17 18 19  6
15 24 25 20  7
14 23 22 21  8
13 12 11 10  9
*/
#include<stdio.h>
#define N 9
int main()
{
	int a[N][N],rmin,rmax,cmin,cmax,r,c,k=1;
	rmin=cmin=0;
	rmax=cmax=N-1;
	
	while(k<=N*N)
	{
		for(r=rmin,c=cmin;c<=cmax;c++)
		{
			a[r][c]=k; k++;
		}
		rmin++;
		for(r=rmin,c=cmax;r<=rmax;r++)
		{
			a[r][c]=k; k++;
		}
		cmax--;
		for(r=rmax,c=cmax;c>=cmin;c--)
		{
			a[r][c]=k; k++;
		}
		rmax--;
		for(r=rmax,c=cmin;r>=rmin;r--)
		{
			a[r][c]=k; k++;
		}
		cmin++;
	}
	for(r=0;r<N;r++)
	{
		for(c=0;c<N;c++)
		{
			printf("%3d ",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}
