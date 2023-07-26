
#include<stdio.h>
main()
{
	int r;
	float area;
	

	printf("Enter value of R : ");
	scanf("%d",&r);
	
	area=3.14*r*r;
	printf("Area of Circle : %f",area);
	
	int l,w,c;
	
	printf("\n");
	
	printf("\nEnter value of L : ");
	scanf("%d",&l);
	
	printf("Enter value of W : ");
	scanf("%d",&w);
	
	c=l*w;
	printf("Area of Rectangle : %d",c);
	
	int b,h;
	
	printf("\n");
	
	printf("\nEnter value of B : ");
	scanf("%d",&b);
	
	printf("Enter value of H : ");
	scanf("%d",&h);
	
	area=b*h/2;
	printf("Area of Triangle : %f",area);
	
}
