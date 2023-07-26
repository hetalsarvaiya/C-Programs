#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char a[10];
	
	printf("enter name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("lower Case : %s",a);
}

