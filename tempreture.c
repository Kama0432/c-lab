#include<stdio.h>
main()
{
  float c,f;
  printf("Enter tempreture in centigrade:");
  scanf("%f",&c);

  f= (c*9/5)+32;
  printf("%f centigrade = %f fahrenheat",c,f);
   return 0;
}