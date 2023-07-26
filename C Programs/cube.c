#include <stdio.h>
int main()
 {
    int i,n,cube;
    printf("Input number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    	cube=i*i*i;
	 printf("Number is : %d and cube of the  %d is:%d \n",i,i, cube);     
    }
    return 0;
 }