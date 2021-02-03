/*
20)
z
Y x
W v U
t S r Q
p O n M l
*/
#include<stdio.h>
#define N 5
int main()
{
	int r,c,ch='z';
	for(r=0;r<N;r++)
	{
		for(c=0;c<=r;c++)
		{
			if(ch%2==0)
			{
				printf("%c ",ch);
			}
			else
			{
				printf("%c ",(ch-('a'-'A')));
			}
			ch--;
			
		}
		printf("\n");
	}
	return 0;
}
