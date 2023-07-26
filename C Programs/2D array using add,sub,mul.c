
//  WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
void main()
{
	int a[2][2],b[2][2];
	int c[2][2],i,j;
	
	printf("enter the 1st matrix :\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Add of two matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j]=a[i][j]-b[i][j];
		}
	}
	
	printf("Sub of two matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j]=a[i][j]*b[i][j];
		}
	}
	
	printf("Mul of two matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}
