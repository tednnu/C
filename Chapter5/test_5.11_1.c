#include <stdio.h>
#define w 7

int main()
{
   int d;
   printf("How many days?\n");
   scanf("%d",&d);
   while(d > 0)
   {
      printf("%d days are %d weeks, %d days\n",d,d/w,d%w);
      printf("How many days?\n");
      scanf("%d",&d);
      continue;
   }
}
