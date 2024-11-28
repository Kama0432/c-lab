#include<stdio.h>
main()
{
  int i,n;
  float sum=0,t,j;
  printf("Enter number of term:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
   printf("1/%d + ",i);
  
  }
  for(j=1;j<=n;j++)
  {
    t=1/j;
    sum=sum+t;

  }
     printf("\nsum of series is %f",sum);
  return 0;

}