#include<stdio.h>
void printno(int n);
main()
{
	int n=1;
	printno(n);
	
}

void printno(int n)
{
	int sum=0;
	if(n<=10)
	{
		printf("natural no is : %d\n",n);
		printno(n+1);
		sum+=n*(n+1)/2; //10*(10+1)/2   10*(11)/2  110/2 55
		printf("\nsum is : %d",sum);
	}
}
