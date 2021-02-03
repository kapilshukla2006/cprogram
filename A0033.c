//do-while()
#include<stdio.h>
int main()
{
	int i,j,choice;
	do
	{
		printf("\n==================");
		printf("\n 1 - ( + ) ");
		printf("\n 2 - ( - ) ");
		printf("\n 3 - ( * ) ");
		printf("\n 4 - ( / ) ");
		printf("\n 5 - EXIT ");
		printf("\n==================");
		printf("\n Select Operation : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\n Enter Two Values i and j:");
				scanf("%d %d",&i,&j);
				printf("\n ADD = %d",i+j);
				break;
			case 2:
				printf("\n Enter Two Values i and j:");
				scanf("%d %d",&i,&j);
				printf("\n SUB = %d",i-j);
				break;
			case 3:
				printf("\n Enter Two Values i and j:");
				scanf("%d %d",&i,&j);
				printf("\n MUL = %d",i*j);
				break;
			case 4:
				printf("\n Enter Two Values i and j:");
				scanf("%d %d",&i,&j);
				if(j!=0)
				{
					printf("\n DIV = %d",i/j);
				}
				else
				{
					printf("\n j can not be Zero");
				}
				break;
			case 5:
				printf("\n THANKS for USING MY CALC");
				break;
			default:
				printf("\n Your Choice is NOT valid");
		}
	}while(choice!=5);
	return 0;
}
