#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	unsigned long count = 0;
	char ch;
	FILE *fp;
	char words[41],wordy[20];
	
	printf("Please input the name of file:");
	scanf("%s", &wordy);
	
	if((fp = fopen(wordy, "r")) == NULL)
	{
		fprintf(stdout, "Can't open file.\n");
		exit(EXIT_FAILURE);
	}
		
	puts("File contents:");
	fscanf(fp, "%s", words);
	while(words[i] != '\0')
	{
		printf("%c", words[i]);
		count++;
		i++;
	}
	printf("\n");
	printf("Done!\n");
	
	fclose(fp);
	printf("File has %lu characters.\n", count);
	
	return 0;
}