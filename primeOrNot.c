#include<stdio.h>
int main()
    {
        int n, f=0, i;
        printf("Enter a possitive number:");
        scanf("%d",&n);
        for(i=2;i<n;i++)
        {
          if(n%i==0)
          {
            f=1;
            break;
          }
        }
        if (f==0)
        {
            printf("Number is prime");
        }
        else
          printf("Number is not prime");
          
     return 0;
    }