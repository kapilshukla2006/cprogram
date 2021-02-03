/*
51. Write a C-Program 
to find nth prime in the given range

INPUT: 10 30 9
OUTPUT: 17
			11 13 17 19 23 29
			6   5  4  3  2  1 
[Because in Primes in Given range 17 is 3rd Prime]
*/
int main()
{
	int no,i=2,start,end,pos;
	printf("\n Enter Number Range : ");
	scanf("%d %d",&start,&end);
	printf("\n Enter Position : ");
	scanf("%d",&pos); //3
	
	//no = 10 .... 30
	for(no=start;(no<=end) && (pos>0);no++)
	{
		//To Find Single Number is Prime or NOT
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			{
				//printf("\n %d is NOT Prime",no);
				break; 
			}	
		}
		if(no==i)
		{
			pos--; //11-2 13-1 17-0
		}
		if(pos==0)
		{
			printf("%d ",no);
			//break;
		}
	}
	if(pos>0)
	{
		printf("\n Given Postion is Not Found in Range");
	}
	return 0;
}

