#include<stdio.h>
main()
{
   int n,k,rev,arm=0;

  printf("Enter number:");
  scanf("%d",&n);
  k=n;
  while(n>0)
  {
    rev=n%10;
    arm=(rev*rev*rev)+arm;
    n=n/10;
  }
    if(k==arm)
    printf("number is armstrong");
    else
    printf("number is not armstrong");
    return 0;

}