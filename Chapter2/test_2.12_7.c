#include <stdio.h>

void one_three(void);
void two(void);

int main()
{
   printf("starting now:\n");
   one_three();
   printf("done!\n");
}

void one_three(void)
{
   printf("one\n");
   two();
   printf("three\n");
}

void two()
{
   printf("two\n");
}
