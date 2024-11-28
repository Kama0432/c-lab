#include<stdio.h>
main()
{
  char str1[50],str2[50];
  puts("enter string...");
  gets(str1);
  strcpy(str2,str1);
  strrev(str2);
  puts(str1);
  puts(str2);

  if(strcmp(str1,str2)==0)
  {
    printf("string is palidrome");
  }
  else
  {
    printf("string is not palidrome");
  }

return 0;

}