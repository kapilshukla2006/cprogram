/*
4)
1 2 3 2 1
1 2 3 2 1
1 2 3 2 1
1 2 3 2 1
1 2 3 2 1
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
			if(c<(N/2))
			{
				printf("%d ",c+1);
			}
			else
			{
				printf("%d ",N-c);
			}
		}
		printf("\n");
	}
	return 0;
}
