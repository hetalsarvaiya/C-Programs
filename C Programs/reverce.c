#include<stdio.h>
main()
{
	int n,r;
	
	printf("Enter no : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
