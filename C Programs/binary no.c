#include<stdio.h>
main()
{
	int n,i;
	
	printf("enter the no : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		i=n%10;
		if(i!=0 && i!=1)
		{
			printf("not binary");
			break;
		}
		n=n/10;
		if(n==0)
		{
			printf("binary");
		}
	}
}
