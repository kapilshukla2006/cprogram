//Count the Number of Words in Given Statement
#include<stdio.h>
int main()
{
	char *line;
	int pos=0,count=0,flag=0;
	line=(char *)malloc(sizeof(char)*1);
	printf("\n Enter String : ");
	scanf("%[^\n]s",line);
	//LOGIC f=0 n=0 -> ICT_ _ MU _ _ _ 2020 _
	printf("\n POS  Char Flag Count");
	while(line[pos]!='\0')
	{
		//For First Character of Word
		if(line[pos]!=' ' && flag==0)
		{
			count++;
			flag=1;
		}
		//For First Space after word
		else if(line[pos]==' ' && flag==1)
		{
			flag=0;
		}
		printf("\n %2d - %c - %2d - %2d",pos,line[pos],flag,count);
		pos++;
	}
	printf("\n %2d - %c - %2d - %2d",pos,line[pos],flag,count);
	printf("\n No of Words in Statement : %d",count);
	return 0;
}
