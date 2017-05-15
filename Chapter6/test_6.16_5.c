#include <stdio.h>

int main()
{
	char letter;
	int i,j,k,l;
	
	printf("Plaese input a letter:\n");
	scanf("%c",&letter);
	for (i=0;i<letter-'A'+1;i++)
	{
		for (j=0;j<letter-'A'-i;j++)
			printf(" ");
		for (k=0;k<i+1;k++)
			printf("%c",'A'+k);
		for (l=0;l<i;l++)
			printf("%c",'A'+i-l-1);
		printf("\n");
	}
	
	return 0;
}
