//Looping Structures : while(), do...while(), for()
#include<stdio.h>
int main()
{
	char i=10;
	while(i>1) // Condition while(i<1) -> Expression while(1+1) 
	{
		printf("1");
		if(i>20)
		{
			break;
		}
		i++;
	}
	return 0;
}
i=10,11,12,13,14,15,16,17,18,19,20,21
Output:
111 111 111 111

