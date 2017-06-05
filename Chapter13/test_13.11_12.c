#include<stdio.h>
#include<stdlib.h>

void tn(void);
int main()
{
	int i;
	for(i=0;i<20;i++)
		tn();
	return 0;
}

void tn(void)
{
	int i;
	int word[30];
	for(i=0;i<30;i++)
		word[i]=rand()%10+33;
	for(i=0;i<30;i++)
	{
		printf("%c", (char)word[i]);
		if((i+1)%30==0)
			printf("\n");
		else
			printf(" ");
	}
	return 0;
}