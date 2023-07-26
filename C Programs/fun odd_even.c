#include<stdio.h>
int even(num)
{
	return(num%2==0);
}
int main()
{
	int num,e;
	printf("enter the number:");
	scanf("%d",&num);
	e=even(num);
	if(even (num))
	{
		printf("num is even");
	}
	else
	{
		printf("num is odd");
	}
	return 0;
}

