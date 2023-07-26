#include<stdio.h>
main()
{
	int day;
	
	printf("enter the day : ");
	scanf("%d",&day);
	
	switch(day)
	{
	case 1:
		printf("monday");
		break;
	case 2:
		printf("tuesday");
		break;
	default:
		printf("error");
    }
}
