#include <stdio.h>

int main(void)
{
   float y,d;
   printf("How old are you?\n");
   scanf("%f",&y);
   d = 365 * y;
   printf("So you are %f days old!\n",d);
   return 0;
}
