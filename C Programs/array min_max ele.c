#include<stdio.h>
main()
{
	int a[50],n,i,max,min;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max is : %d\n",max);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("min is : %d\n",min);
}








