/*
49. Write a C-Program to 
find the given no is prime no or not
*/
int main()
{
	int no,i=2;
	printf("\n Enter Number : ");
	scanf("%d",&no);
	// no=13 Loop [i=2...12]
	for(i=2;i<no;i++) //1st Way i=13
	{
		if(no%i==0)
		{
			printf("\n %d is NOT Prime",no);
			break; // 2nd way
		}
	}
	if(no==i)
	{
		printf("\n %d is Prime",no);
	}
	return 0;
}

