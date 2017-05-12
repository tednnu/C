#include <stdio.h>
#define g 3.785

int main()
{
  const float y = 1.609;
  float l,q;
  printf("Your distance:\n");
  scanf("%f",&l);
  printf("Your qiyoulaing:\n");
  scanf("%f",&q);
  printf("%.1f\n",(q*g)/(l*y));
} 
