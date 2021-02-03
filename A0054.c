#include<stdio.h>
int main()
{
	int r,c,N=5,k=1;
	printf("\n 86 \n");
	for(r=0;r<5;r++) 
	{
		for(c=0;c<5;c++)
		{
			printf("%3d",(r+1)*(c+1));
		}
		printf("\n");
	}
	printf("\n 87 \n");
	for(r=0;r<5;r++) 
	{
		for(c=0;c<5;c++)
		{
			printf("%c ",r+'A'); //'A' = 65 'A'+1 =66 => 'B'
		}
		printf("\n");
	}
	printf("\n 88 \n");
	for(r=0;r<5;r++) 
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",r+1); 
		}
		printf("\n");
	}
	printf("\n 89 \n");
	for(r=0;r<5;r++) 
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",c+1); 
		}
		printf("\n");
	}
	printf("\n 90 \n");
	for(r=0;r<N;r++) //N=5
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",N-c); 
		}
		printf("\n");
	}
	printf("\n 91 \n");
	for(r=0;r<N;r++) //N=5
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",r+1-c); 
		}
		printf("\n");
	}
	printf("\n 92 \n");
	for(r=0;r<N;r++) //N=5
	{
		for(c=0;c<=r;c++)
		{
			printf("%3d",k);
			k++; 
		}
		printf("\n");
	}
	printf("\n 92 \n");
	k=1;
	for(r=0;r<N;r++) //N=5
	{
		for(c=0;c<=r;c++)
		{
			printf("%3d",k%2);
			k++; 
		}
		printf("\n");
	}
	printf("\n 93 \n");
	for(r=0;r<N;r++) //N=5
	{
		for(c=0;c<=r;c++)
		{
			printf("%d",(c==0)?1:0);
		}
		printf("\n");
	}
	printf("\n 93 \n");
	for(r=0;r<N;r++) //N=5
	{
		for(c=0;c<=r;c++)
		{
			printf("%d",(c+1)%2);
		}
		printf("\n");
	}
	return 0;
}
