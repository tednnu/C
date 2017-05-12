#include <stdio.h>

int main()
{
   char f[40],l[40];
   int a,b;
   printf("Please give your first name:\n");
   scanf("%s", f);
   printf("Please give your first name:\n");
   scanf("%s", l);
   printf("%s %s\n",f,l);
   printf("%3d %2d\n",strlen(f),strlen(l));
   printf("%-3d %-2d\n");
}
