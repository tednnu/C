#include <stdio.h>

void mul(void);

int main()
{
   int l,a,b;
   printf("How many levels of smile do you want?\n");
   scanf("%d", &l);
   for (a = 0;a < l;a++)
   {
       for (b = 0;b < (l-a);b++)
          smi();
       printf("\n");
   }
}

void smi(void)
{
   printf("Smile!");
}
