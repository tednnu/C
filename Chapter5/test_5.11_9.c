#include <stdio.h>

void Temperatures(double i);

int main()
{
   double h;
   printf("Tell me the temperature:\n");
   while(scanf("%lf",&h)==1)
   {
     Temperatures(h);
     printf("Tell me the temperature:\n");
     continue;
   }
   return 0;
}

void Temperatures(double i)
{
   double s = 5.0/9.0*(i-32.0);
   double k = s + 273.16;
   printf("%.2lf\n",i);
   printf("%.2lf\n",s);
   printf("%.2lf\n",k);
}
