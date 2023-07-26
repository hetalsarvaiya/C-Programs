
#include<stdio.h>
int mini(int num1,int num2);
int max(int num1,int num2);
int max(int num1,int num2)
{
	return(num1>num2)?num1:num2;
}
int mini(int num1,int num2)
{
	return(num1>num2)?num2:num1;
}
int main()
{
	int num1,num2,minimum,maximum;
	printf("enter your first num: ");
	scanf("%d",&num1);
	printf("enter your second num: ");
	scanf("%d",&num2);
	minimum=mini(num1,num2);
	maximum=max(num1,num2);
	printf("manimum=%d",minimum);
	printf("maximum=%d",maximum);
	return 0;
}

