// Escape Sequence

#include<stdio.h>
int main()
{
	// \n -> at starting
	printf("Kush Jadav");
	printf("\nSurat");
	printf("\nGujarat");
	printf("\n -------- \n");
	// \n -> at ending
	printf("Kush Jadav\n");
	printf("Surat\n");
	printf("Gujarat");
	printf("\n -------- \n");
	// \t -> tab
	printf("10\t20\t30\n");
	printf("40\t70\t80\n");
	printf("50\t60\t90");
	printf("\n -------- \n");
	// \a -> alarm
	//printf("\a");
	// \b -> Backspace
	printf("ICT\b\b\bMU BTech");
	printf("\n -------- \n");
	// C:\test\new folder\A0007.c
	/* printf("\\") -> \ */
	printf("C:\\test\\new folder\\a0007.c");
	
	printf("\n -------- \n");
	// "ABC"  - 'C'
	printf("\"ABC\"\n");
	printf("\'C\'");
	
	printf("\n -------- \n");

	return 0;
}

/*
 Escape Sequence
 
 \n -> new line
 \t -> tab (multiple space)
 \a -> alarm (alert)
 \" -> Double Quote
 \' -> Single Quote
*/
