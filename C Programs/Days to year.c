
//  WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	float year,days,ans;
	
	printf("Enter number of year : ");
	scanf("%f",&year);
	
	
	ans=year*365;
	
	printf("days : %f",ans);
	
	printf("\nEnter number of days : ");
	scanf("%f",&days);
	
    ans=days/365;
    
    printf("year : %f",ans);
   
}

