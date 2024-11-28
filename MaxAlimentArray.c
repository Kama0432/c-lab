#include<stdio.h>
main()
{
   int a[50],i,max,size,min;

  printf("Enter elements in array:");
  scanf("%d",&size);
  
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(i=0;i<size;i++)
  { 
    if(a[i]>max)
    {
       max=a[i];
    }
    
  }

  for(i=0;i<size;i++)
  {
    if(a[i]<min)
    {
        min=a[i]; 
    }
  }
  printf("maximum value is %d\n",max);
  printf("minimum value is %d",min);

return 0;
}