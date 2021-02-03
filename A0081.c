/*

8)
1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1

Innovative Way N = 3
1 1 1  1 1 1
1 2 2  2 2 1
1 2 3  3 2 1

1 2 3  3 2 1 N-(r>c)
1 2 2  2 2 1
1 1 1  1 1 1

N=5 => N=7 and N=9
*/
#include<stdio.h>
int main()
{
	int r,c,N;
	printf("\n Enter How Many Rows you want : ");
	scanf("%d",&N);
	for(r=0;r<=N/2;r++)
	{
		for(c=0;c<N;c++)
		{
			if( (c<=(N/2) || r<(N/2)-1) && ((N-r>c))) //r==0
			{
				printf("%d ",(c<r)?c+1:r+1);
			}
			else
			{
				printf("%d ",N-((r>c)?r:c));
			}
		}
		printf("\n");
	}
	for(r=(N/2)-1;r>=0;r--)
	{
		for(c=0;c<N;c++)
		{
			if( (c<=(N/2) || r<(N/2)-1 ) && ((N-r>c))) //r==0
			{
				printf("%d ",(c<r)?c+1:r+1);
			}
			else
			{
				printf("%d ",N-((r>c)?r:c));
			}
		}
		printf("\n");
	}
	
	return 0;
}
