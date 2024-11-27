#include<stdio.h>
main()
{
   int rem, rev, k, n,s=0;
    printf("enter number:");
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
      rem=n%10;
      s=rem+(s*10);
      n=n/10;
    } 
    if(k==s)
    printf("number is palindrome");
    else
    printf("number is not palindrome");

      return 0;
}