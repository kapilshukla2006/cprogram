#include<stdio.h>
#include<conio.h>
#include "D:/MU/ICP/myHeader.h"
#define P 10
#define p printf
#define s scanf
// after include we need to provide path of file
/*
1) Direct path           : "D:/MU/ICP/myHeader.h"
2) Current Directory     : "myHeader.h"
3) Pre Defined Directory : <myHeader.h>
*/
// Line of Code of stdio.h, conio.h is going to be added here
int main()
{
	int m = 10, M=20, _=30, __=20; // _ is valid character for Variable Name
	m = _ + __;
	p("Sum = %d",m); // C is Case Sensitive Language
	return 0;
}
// Case Sensitive -> ICT, iCT, icT, ict, Ict, ICt

// variable Name : _ = 10, a_b = 10, A_b = 20, 
// Dont Do  : 1_2, 1a ,
