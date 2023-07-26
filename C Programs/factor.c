#include<stdio.h>
int main()
{
	int num,count;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("factors of %d are: \n",num);
	for(count=1;count<=num;count++)
	{
		if(num%count==0)
		printf("%d\n",count);
	}
	return 0;
}

