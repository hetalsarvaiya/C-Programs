#include<stdio.h>
main()
{
	char a[50];
	int i=0;
	
	printf("enter name : ");
	scanf("%s",&a);
	
	while(a[i]!='\0')
	i++;
	{
		printf("length is : %d ",i);
	}
}
