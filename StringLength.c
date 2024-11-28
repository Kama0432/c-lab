#include<stdio.h>
main()
{
  char str[50],i;

 printf("enter element in string\n");
 gets(str);

  for(i=0;str[i]!='\0';i++);
    
        printf("length of string is %d",i);
    
  return 0;
}