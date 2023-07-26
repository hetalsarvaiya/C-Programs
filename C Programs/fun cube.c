#include<stdio.h>
int cube(int a);
main()
{
	cube(5);
}
int cube(int a)
{
	int i,n,cube=0;
	
	printf("enter the no : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		cube = n*n*n;
	}
	printf("cube is : %d",cube);
}
