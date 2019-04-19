#include <stdio.h>

int div(int first, int second)
{
   if(second==0)
   {
      printf("Divide by zero error\n");
   }
   else
   {
      printf("Division is %f\n",((float)first/second));
   }
   return (4);
}
