#include<stdio.h>
main()
{
	int i,n,lastdigit,firstdigit;
	
	printf("enter the no : ");
	scanf("%d",&n);
	
	firstdigit=n;
	
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
		
	}
	lastdigit=n;
	
	lastdigit=lastdigit%10;
	printf("first digit is : %d\n",firstdigit);
	printf("last digit is : %d\n",lastdigit);
	printf("first digit is : %d",firstdigit+lastdigit);
}
