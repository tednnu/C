#include <stdio.h>

int main()
{
   char n[40];
   float c;
   printf("Please give your name:\n");
   scanf("%s", n);
   printf("Please give your aptitude in cm:\n");
   scanf("%f", &c);
   printf("%s, you are %.3f meters tall.\n",n,c/100);
}
