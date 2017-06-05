#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *arga [])
{
	unsigned long count = 0;
	char ch;
	FILE *fp;
	
	printf("%s %s\n", arga[0], arga[1]);
	
	if (argc != 2)
	{
		printf("Usage: %s filename\n", arga[0]);
		exit(EXIT_FAILURE);
	}
	if((fp = fopen(arga[1], "r")) == NULL)
	{
		printf("Can't open %s\n", arga[1]);
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("\nFile %s has %lu characters.\n", arga[1], count);
	
	return 0;
}