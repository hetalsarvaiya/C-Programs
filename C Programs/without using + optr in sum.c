#include<stdio.h>
main()
{
	int n1,n2,i;
	
	printf("enter the first no : ");
	scanf("%d",&n1);
	
	printf("enter the second no : ");
	scanf("%d",&n2);
	
	for(i=1;i<=n2;i++)
	{
		n1++;
	}
	printf("sum is : %d",n1);
}
