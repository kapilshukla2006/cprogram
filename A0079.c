/*
6)
1 1 1 1 1
1 2 2 2 2
1 2 3 3 3
1 2 3 4 4
1 2 3 4 5
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
			printf("%d ",(c<r)?c+1:r+1);
		}
		printf("\n");
	}
	return 0;
}
