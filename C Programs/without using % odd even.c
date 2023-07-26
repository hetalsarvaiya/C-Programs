#include<stdio.h>
main()
{
	int n,m;
	
	printf("enter the no : ");
	scanf("%d",&n);
	
	m=n/2;
	
	if(m*2==n)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
