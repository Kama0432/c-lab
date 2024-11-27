#include<stdio.h>
main()
{
  int n,sum=0,i;
  printf("Enter a number");
  scanf("%d",&n);

  for(i=1;i<n;i++)
  {
     if(n%i==0)
     {
        sum=sum+i;
     }
  }
   if(sum==n)
   printf("number is perfect number");
   else
   printf("number is not perfect number");

 return 0;
}