#include<stdio.h>
main()
{
char name[30];
int i,digit=0,space=0,capital=0,small=0;

printf("enter the name : ");
gets(name);

for(i=1;name[i]!='\0';i++)
{

if(name[i]==32)
{
space++;
}
else if(name[i]>=48 && name[i]<=57)
{
digit++;
}
else if(name[i]>=65 && name[i]<=90)
{
capital++;
}
else if(name[i]>=97 && name[i]<=122)
{
small++;
}
else
{
	printf("other");
}
}
printf("\nspace is %d",space);
printf("\ndigit is %d",digit);
printf("\ncapital character is %d",capital);
printf("\nsmall character is %d",small);

}
