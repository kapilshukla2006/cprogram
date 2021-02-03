/*
38) A B C D ... Z [While]
39) A B C D ... Z [Do While]
40) A B C D ... Z [For]
*/
#include<stdio.h>
int main()
{
	char letter='a',end_letter;
	printf("\n Enter End Letter : ");
	scanf("%c",&end_letter);
	
	// Capital to Small Letter Conversion
	if(end_letter>='A' && end_letter<='Z')
	{
		// K = 75  = 75 + 32  = 107
		end_letter = end_letter + ('a'-'A'); //Capital to Samll
		//end_letter = end_letter - ('a'-'A'); //Samll to Capital
	
	
	//WHILE
	printf("\n WHILE    : ");
	while(letter<=end_letter)
	{
		printf("%c ",letter);
		letter++;
	}
	
	//DO..WHILE
	printf("\n DO WHILE : ");
	letter='a';
	do
	{
		printf("%c ",letter);
		letter++;
	}while(letter<=end_letter);
	
	//FOR
	printf("\n FOR      : ");
	for(letter='a';letter<=end_letter;letter++)
	{
		printf("%c ",letter);
	}
	return 0;
}





