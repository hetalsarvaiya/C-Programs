#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter value of A: ");
	scanf("%d",&a);
	
	printf("enter value of B: ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap is : a=%d b=%d",a,b);
}
