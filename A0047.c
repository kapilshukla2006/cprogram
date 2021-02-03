/*
45. Write a C-Program to find GCD and LCM of two nos
INPUT: 4 6
OUTPUT:
LCM = 12  | 6
GCD = 2  | 4
*/
int main()
{
	int n1,n2,lcm,gcd;
	printf("\n Enter Two Numbers : ");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		lcm=n1;
		gcd=n2;
	}
	else
	{
		lcm=n2;
		gcd=n1;
	}
	while(lcm%n1!=0 || lcm%n2!=0) // lcm%n1==0 && lcm%n2==0
	{
		lcm++;
	}
	printf("\n LCM = %d",lcm);
	while(n1%gcd!=0 || n2%gcd!=0) // lcm%n1==0 && lcm%n2==0
	{
		gcd--;
	}
	printf("\n GCD = %d",gcd);
	return 0;
}

