#include <stdio.h>

void tri(double i);

int main()
{
   double d;
   printf("Give a number:\n");
   scanf("%lf",&d);
   tri(d);
   return 0;
}

void tri(double i)
{
   printf("%.2lf\n",i*i*i);
}
