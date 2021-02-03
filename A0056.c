#include<stdio.h>
#define N 26 //pre-processor
int main()
{
	char arr[N],pos;
	for(pos=0;pos<N;pos++)
	{
		arr[pos]='A'+pos;
	}
	//Print the Values from Array
	for(pos=0;pos<N;pos++)
	{
		printf("\n arr[%d] = %c",pos+1,arr[pos]);
	}
	return 0;
}
