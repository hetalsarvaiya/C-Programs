#include<stdio.h>
main()
{
	int a[10],i,odd=0,even=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter the value a[%d] :",i);
		scanf("%d",&a[i]);
	
	if(a[i]%2==0)
		{
		even++;
		printf("even\n");
		
     	}
     	else
     	{
     		odd++;
     		printf("Odd\n");
     		
		}
    }
        printf("total number of even a[%d] :",even);
		printf("\ntotal number of odd a[%d] :",odd);

	printf("\n");
	
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	
}

