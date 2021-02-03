//Search Value from Array
#include<stdio.h>
#define N 6 //pre-processor
int main()
{
	int no[N],pos,value,lo=-1,found=0;
	for(pos=0;pos<N;pos++)
	{
		printf("\n Enter Value [%d] : ",pos+1);
		scanf("%d",&no[pos]);
	}
	printf("\n Enter Value to Search : ");
	scanf("%d",&value);
	// 8 4 2 8 8 2 value=8
	//Searching : 1st Occurence of Value
	for(pos=0;pos<N;pos++)
	{
		if(value==no[pos])
		{
			printf("\n %d 's First Occurence at position [%d]",value,pos+1);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("\n Value is NOT FOUND");
	}
	
	//Searching : Last Occurence of Value
	found=0;
	for(pos=0;pos<N;pos++)
	{
		if(value==no[pos])
		{
			lo=pos;
			found=1;
		}
	}
	if(found==0)
	{
		printf("\n Value is NOT FOUND");
	}
	else
	{
		printf("\n %d 's Last Occurence at position [%d]",value,lo+1);
	}
	
	//Searching : Count total no of occurence
	found=0;
	for(pos=0;pos<N;pos++)
	{
		if(value==no[pos])
		{
			found++;
		}
	}
	if(found==0)
	{
		printf("\n Value is NOT FOUND");
	}
	else
	{
		printf("\n %d is found %d Times in an Array",value,found);
	}
	return 0;
}

