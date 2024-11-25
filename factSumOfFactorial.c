#include<stdio.h>

int main()
{

    int n, sum=0, f=1, i;
   printf("Enter a number");
   scanf("%d",&n);
    for(i=1; i<=n; i++)
   {
       f=f*i;
      sum=sum+f;
   }
       printf("factorial is =%d",f);
       printf("\n33 sum of factorial is=%d",sum);
            
 return 0;

}



