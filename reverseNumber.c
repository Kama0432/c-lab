#include<stdio.h>
main()
{
   int rem, rev, k, n;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
      rem=n%10;
      printf("%d",rem);
      n=n/10;
      
    } 

      return 0;
}