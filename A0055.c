#include<stdio.h>
#define N 10 //pre-processor
int main()
{
	int arr[N],pos;// 0 - 9
	/*
	printf("\n Enter Value at pos 5: ");
	scanf("%d",&arr[4]);
	printf("\n Value at position 5 is : %d",arr[4]);
	*/
	//Get the values in Array
	for(pos=0;pos<N;pos++)
	{
		printf("\n Enter Value at pos [%d]",pos+1);
		scanf("%d",&arr[pos]);
	}
	//Print the Values from Array
	for(pos=0;pos<N;pos++)
	{
		printf("\n arr[%d] = %d",pos+1,arr[pos]);
	}
	return 0;
}
