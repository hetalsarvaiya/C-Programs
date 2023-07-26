#include<stdio.h>
int Factorialnum();
main()
{
	int number;
	number=10;
	number=number+Factorialnum();
	printf("\nAns is : %d",number);
}

int Factorialnum()
{
	int n,i,fact=1;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial Of Given Number : %d",fact);

	return fact;
}
