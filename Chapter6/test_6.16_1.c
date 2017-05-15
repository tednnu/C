#include <stdio.h>

int main()
{
	char zimu[26];
	int i;
	
	for (i=0;i<26;i++)
	{
		zimu[i] = 'a' + i;
	}
	
	for (i=0;i<26;i++)
		printf("%c ",zimu[i]);
	printf("\n");
	
	return 0;
}
