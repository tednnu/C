#include <stdio.h>

int mul(int);
int twi(int);

int main()
{
   int toes = 10;
   int a, b;
   a = twi(toes);
   b = mul(toes);
   printf("%d\n", toes);
   printf("%d\n", a);
   printf("%d\n", b);
   return 0;
}

int mul(int m)
{
   m = m * m;
   return m;
}

int twi(int n)
{
   n = n * 2;
   return n;
}
