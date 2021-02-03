/*
17)
 1
 3  2
 4  5  6
10  9  8  7
*/
#include<stdio.h>
#define N 5
int main()
{
	int r,c,k=0;
	for(r=0;r<N;r++)
	{
		k=(r%2==0)?k+r+1:k+r;
		for(c=0;c<=r;c++)
		{
			printf("%3d ",(r%2==0)?k++:k--);
			/*
			if(r%2==0)
			{
				printf("%3d ",k);
				k++;
			}
			else
			{
				printf("%3d ",k);
				k--;
			}*/
		}
		printf("\n");
	}
	return 0;
}
