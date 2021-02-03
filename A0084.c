/*
18) ch='A' (0+1) * (0+1) + ch - 1 =A
A
B D
C F I
D H L P
*/
#include<stdio.h>
#define N 5
int main()
{
	int r,c,ch='A';
	for(r=0;r<N;r++)
	{
		for(c=0;c<=r;c++)
		{
			printf("%c ",(r+1)*(c+1)+ch-1);
		}
		printf("\n");
	}
	return 0;
}
