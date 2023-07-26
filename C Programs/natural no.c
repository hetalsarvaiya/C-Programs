#include <stdio.h>
main()
{
   int i,n,sum=0;
   printf("enter Value : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     printf("%d\n",i);
     sum+=i;
   }
   printf("\nThe Sum of natural numbers are: %d \n",sum);
}


