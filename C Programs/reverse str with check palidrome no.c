
// 	WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
main()
{
	char name[10],h,c;
	
	int i,L=0;
	
	printf("Enter the name : ");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		L=L+1;
		h=name[i];
	}
	printf("Length of string : %d",i);
	
	printf("\nreverse string : ");
	
	for(i=i-1;i>=0;i--)
	{
		printf("%c",name[i]);
		c=name[i];
	}
	if(h==c)
	{
		printf("\nWord is Palidrome : ");
	}
	else
	{
		printf("\nWord is not palidrome : ");
	}
	
}
