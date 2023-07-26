
 // 	WAP to find simple interest

#include<stdio.h>
main()
{
	int p,n,r,si;
	
	printf("Enter value of P : ");
	scanf("%d",&p);
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	printf("Enter value of R : ");
	scanf("%d",&r);
	
	si=p*n*r/100;
	
	printf("Simple Intrus : %d",si);
}
