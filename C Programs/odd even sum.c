#include<stdio.h>
int main()
{
	int i,n,even_sum=0,odd_sum=0,even,odd;
	printf("enter numbers : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("odd : %d\n",i);
			odd++;
			odd_sum+=i;
		}
		else
		{
			printf("even : %d\n",i);
			even++;
			even_sum+=i;
		}
	}
	printf("total even is : %d\n",even);
	printf("total odd  is : %d\n",odd);
	printf("odd sum is : %d\n",odd_sum);
	printf("even sum is : %d\n",even_sum);
	return 0;
}
