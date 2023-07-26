#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	int vowels=0,constant=0,i,space=0,h;
	
	printf("enter the string : ");
	gets(a);
	
	h=strlen(a);
	
	printf("length is : %d\n",h);

	for(i=1;i<=h;i++)
	{
		if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='e'||
		a[i]=='A'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='E')
		{
			vowels++;
		}
		else if(a[i]==' ')
		{
			space++;
		}
		else
		{
			constant++;
		}
	}
	printf("count is vowels : %d",vowels);
	printf("\ncount is constant : %d",constant);
	printf("\ncount is space : %d",space);
}
