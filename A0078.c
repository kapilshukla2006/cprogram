/*
5)
1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4
*/
#include<stdio.h>
int main()
{
	int r,c,N;
	printf("\n Enter How Many Rows you want : ");
	scanf("%d",&N);
	for(r=0;r<N;r++)
	{
		for(c=0;c<N;c++)
		{
			if(r+c+1<=N)
			{
				printf("%d ",r+c+1);
			}
			else
			{
				printf("%d ",(r+c+1)-N);
			}
		}
		printf("\n");
	}
	return 0;
}
