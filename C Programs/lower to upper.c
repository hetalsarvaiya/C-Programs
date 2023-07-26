#include<stdio.h>
#include<string.h>
main()
{
	int i,sum=0;
	char a[10];
	
	printf("enter name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
			sum+=a[i];
		}
	}
	printf("upper Case : %s",a);
	printf("\nsum is : %d",sum);
}
