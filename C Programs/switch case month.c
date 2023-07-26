#include<stdio.h>
int main()
{
	int month;
	printf("enter the month(1 to 12): ");
	scanf("%d",&month);
	switch(month)
	{
		
	case 1:
	printf("Jan");
	break;
	
	case 2:
	printf("feb");
	break;
	
	case 3:
	printf("31 days");
	break;
	
	case 4:
	printf("30 days");
	break;
	
	case 5:
	printf("31 days");
	break;

	default:
		printf("error");
    }
}
