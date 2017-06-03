#include <stdio.h>

int j=0;
int critic(void);

int main()
{
	int i = 0;
	
	for(i = 0; i < 10; i++)
		critic();
	printf("%d times.\n",j);
	
	return 0;
}

int critic(void)
{
	printf("No luck, my friend. Try again.\n");
	j++;
	
	return j;
}