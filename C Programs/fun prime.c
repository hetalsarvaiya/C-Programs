#include<stdio.h>
int prime(int num)
{
	int i,k;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			k++;
		}
	}
}
int main()
{
	int n,p,k;
	printf("enter the num: ");
	scanf("%d",&n);
	p=prime(n);
	if(k==2)
	{
		printf("num is prime");
	}
	else
	{
		printf("num is not prime");
	}
	return 0;
}
