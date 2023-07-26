#include<stdio.h>
int addofele();

main()
{

	addofele();
}

int addofele()
{
	int a[5],i,add,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the number a[%d] : ",i);
	    scanf("%d",&a[i]);
	    
	    add=a[i]+2;
	    
	    printf("Add number of element : %d\n",add);
	    
	    
	}
	sum=a[0]+a[1]+a[2];
	printf("sum number of element : %d\n",sum);
	    return add;
}
