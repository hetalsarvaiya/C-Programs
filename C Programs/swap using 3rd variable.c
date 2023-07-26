#include<stdio.h>
main()
{
	int a,b,temp;
	
	printf("enter no of A : ");
	scanf("%d",&a);
	
	printf("enter no of b : ");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("swap is :a=%d b=%d",a,b);
}
