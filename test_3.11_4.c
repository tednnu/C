#include <stdio.h>

int main()
{
   float y,s;
   s = 3.156e7;
   printf("How old are you?\n");
   scanf("%f", &y);
   printf("So you are %f seconds old!\n", y*s);
}
