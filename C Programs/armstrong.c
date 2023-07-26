#include<stdio.h>
main()
{
	int n,r,c,sum=0;
	
	printf("enter the no : ");
	scanf("%d",&n);
	
	c=n; 
	
	while(n>0)
	{
		r=n%10;
		sum=r*r*r+sum;
		n=n/10;
	}
	if(c==sum)
	{
		printf("armstong");
	}
	else
	{
		printf("not armstrong");
	}
}
