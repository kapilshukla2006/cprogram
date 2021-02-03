//Find MIN and MAX from Array
#include<stdio.h>
#define N 6 //pre-processor
int main()
{
	int no[N],pos,min,max;
	for(pos=0;pos<N;pos++)
	{
		printf("\n Enter Value [%d] : ",pos+1);
		scanf("%d",&no[pos]);
		if(pos==0)
		{
			min=no[pos];
			max=no[pos];
		}
		else
		{
			max = (max<no[pos])?no[pos]:max;
			min = (min>no[pos])?no[pos]:min;
			/*
			if(max<no[pos])
			{
				max=no[pos];
			}
			if(min>no[pos])
			{
				min=no[pos];
			}*/
		}
	}
	printf("\n MIN = %d MAX = %d",min,max);
	return 0;
}

