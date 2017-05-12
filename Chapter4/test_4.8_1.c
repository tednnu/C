#include <stdio.h>

int main()
{
   char f[40],l[40];
   printf("Please give your first name:\n");
   scanf("%s", f);
   printf("Please give your last name:\n");
   scanf("%s", l);
   printf("\"%s,%s\"\n",f,l);
   printf("\"%17s,%s\"\n",f,l);
   printf("\"%s,%-16s\"\n",f,l);
}
