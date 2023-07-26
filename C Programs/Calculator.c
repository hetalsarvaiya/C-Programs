
    // Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
    
#include<stdio.h>
main()

{
	int a,b;
	float ans;
	
	printf("Enter Value of A : ");
	scanf("%d",&a);
	
	printf("Enter value of B : ");
	scanf("%d",&b);
	
	ans=a+b;
	printf("SUM : %f",ans);
	
	ans=a-b;
	printf("\nSUB : %f",ans);
	
	ans=a*b;
	printf("\nMUL : %f",ans);
	
	ans=a/b;
	printf("\nDIV : %f",ans);
	
	ans=a%b;
	printf("\nMOD : %f",ans);
	
	
}
