//Continue
#include<stdio.h>
int main()
{
	int i=1;
	while(i<10) //i=5
	{
		i++;
		printf("A");
		if(i%5==0) // i=5
			continue;//break; //continue

	}
	//End of Loop
	return 0;
}
