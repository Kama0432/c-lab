#include<stdio.h>
main()
{
   char str[50],v[]="aeiouAEIOU";
   int i,count=0,j;
  puts("input string:");
  gets(str);
  
  for(i=0;str[i];i++)
    {
      for(j=0;v[j];j++)
          { 
             if(str[i]==v[j])
               {
                 count++;
                 break;
               } 
          } 
    }
  
    printf("\n number of vovel is=%d",count);

 return 0;
}