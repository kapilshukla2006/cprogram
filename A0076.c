/*
3)
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
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
			if(r<(N/2))
			{
				printf("%d ",r+1);
			}
			else
			{
				printf("%d ",N-r);
			}
		}
		printf("\n");
	}
	return 0;
}
