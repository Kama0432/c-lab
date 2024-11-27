

                                          /* generate pattern
                                              *
                                              **
                                              ***
                                              ***
                                              *****/
#include<stdio.h>

main()
{
    
 int i,j,k;
 printf("eneter the value of lines:");
 scanf("%d",&k);
 for(i=1;i<=k;i++)
    {  for(j=1;j<=i;j++)
       {
         printf("* ");
        }
        printf("\n");
    }
  return 0;
}