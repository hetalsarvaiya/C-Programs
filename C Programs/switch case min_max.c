#include<stdio.h>
 int main()
{
	int n1,n2;
	
	printf("enter n1 : ");
	scanf("%d",&n1);
	
	printf("enter n2 : ");
	scanf("%d",&n2);
	
	switch(n1>n2)
	{
		case 1:
			printf("n1 is max : %d",n1);
			break;
			
		case 0:
			printf("n2 is max : %d",n2);
			break;
				
				default:
					printf("error");
	}
	return 0;
}

