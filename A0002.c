//Structure of C Program

//Documentation Section
/*
Program : Find Area of Circle
Developed by :  Kapil Shukla
Date : 23-Nov-2020
*/

//Link Section
#include<stdio.h>

//Definition Section
double areaOfCircle(double);

//Global Declaration Section
double pi=3.14; //Global Variable

//Main Function
int main()
{
	//Declaration Part
	double r; //Local variable
	
	//Executable Part
	scanf("%lf",&r);
	printf("Area = %lf",areaOfCircle(r));
	return 0;
}

//Sub Program (Function Definition) Section
double areaOfCircle(double r)
{
	// Global Variable -> pi
	// Local variable  -> r
	return pi*r*r;
}





